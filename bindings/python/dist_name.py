import sys, sysconfig, tomllib

with open("pyproject.toml", "rb") as fp:
    project = tomllib.load(fp)["project"]

def name():
    return project["name"].replace('-', '_')

def version():
    return project["version"]

def python_tag():
    # See https://packaging.python.org/en/latest/specifications/platform-compatibility-tags/
    if sys.implementation.name.startswith('cp'):
        return "cp38"
    else:
        return sys.implementation.name

def abi_tag():
    return "abi3"

def wheel_file_name():
    platform_tag = sysconfig.get_platform().replace('-', '_').replace('.', '_')
    parts = (name(), version(), python_tag(), abi_tag(), platform_tag)
    return "-".join(parts) + ".whl"

def bdist_file_name():
    parts = (name(), version(), sysconfig.get_platform())
    return "-".join(parts) + ".tar.gz"

def sdist_file_name():
    parts = (name(), version())
    return "-".join(parts) + ".tar.gz"

def usage():
    print("Usage python3 dist_name.py (source | binary | wheel) [dist-dir]")

if len(sys.argv) > 2:
    dist_dir = sys.argv[2]
    if not dist_dir.endswith("/"):
        dist_dir += "/"
else:
    dist_dir = "./dist/"

if len(sys.argv) == 1:
    usage()
elif sys.argv[1] == "source":
    print(dist_dir + sdist_file_name())
elif sys.argv[1] == "binary":
    print(dist_dir + bdist_file_name())
elif sys.argv[1] == "wheel":
    print(dist_dir + wheel_file_name())
else:
    print("Unknown distribution type: " + sys.argv[1])
    usage()

