import re, sys, sysconfig

__string_assign=re.compile(r"""^(\w+)\s*=\s*"([^"]*)"$""")
__in_project=False
__project_name=""
__project_version=""

with open("pyproject.toml", "rt") as fp:
    for line in fp:
        if (not __in_project) and line.strip() == "[project]":
            __in_project=1
        elif __in_project:
            __match = __string_assign.match(line.strip())
            if not __match is None:
                if __match.group(1) == "name":
                    __project_name = __match.group(2)
                elif __match.group(1) == "version":
                    __project_version = __match.group(2)
        elif __in_project and line.lstrip().starts_with("["):
            break

def name():
    return __project_name.replace('-', '_')

def version():
    return __project_version

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

