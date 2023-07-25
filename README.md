# C++20 Modules with MSVC and Clang, Using CMake

This repository provides a guide on how to use C++20 modules with both the
MSVC and Clang compilers in CMake projects. C++20 modules with CMake is an experimental feature that allows for improved code organization, faster
builds, and better encapsulation compared to traditional header files and
preprocessor-based inclusion.

Above all, modularisation is a modern feature in many newer programming
languages. This git repo wil help you practice using this new C++ feature.

## Prerequisites


Before proceeding, ensure that the following tools and versions are
installed on your system:

 - CMake (version 3.25 or later)
 - A recent version of MSVC
 - Clang compiler (16 or above)


## Building with MSVC Compiler

TODO : See what flags are needed for CMake, as well as extra compiler
flags - Create the right preset

## Building with Clang Compiler

TODO : Create the right preset and add it to here


## Notes

C++20 modules are still an experimental feature in both MSVC and Clang
compilers. In addition, it is also an experimental feature in CMake.

Therefore, some features may not be fully supported or might behave
differently compared to traditional header files. Always check the
compiler documentation and release notes for updates on the status and
stability of C++20 modules. For your convenience, the list in the
folllowing section provides useful resources regarding the support
of modules in CMake and the main compilers.

- [CMake's modules support article](https://www.kitware.com/import-cmake-c20-modules/) (a must read)
- [Compiler feature support](https://en.cppreference.com/w/cpp/compiler_support)
for checking which compiler versions support modules. As a quick check,
look out for "Standard Library Modules", as when this is supported by
your compiler, modules will probably be somewhat stable in that version.


## REMOVE-ME: Notes for the video

### General comment

Important GUID selection for the right CMake: https://github.com/Kitware/CMake/blob/v3.26.0-rc2/Help/dev/experimental.rst

### GCC Modules
Really hard to get a version that supports the features needed for
modules. There seems to be a patched version, which is now quite out
of date compared to the current trunk.

You will get the "unsupported flag...." pointing to the dependency
scanning files if yout GCC version does not support modules.

CMake hacks required seem to be a lot more cumbersome compared to
the Clang & MSVC versions.

### Clang Modules

The earliest version supporting modules fully seems to be 16. Need
to go through hoops if you want to install in Ubuntu 18/22

Integration seems pretty good, however no standard library import
modules, so you still need the include.

No hard CMake hacks are needed for module support with Clang, apart
from setting the experimental features and the correct GUID thing.

### MSVC

TODO


## Contributing
If you would like to contribute to this repository, please follow the
standard GitHub fork and pull request workflow.

## License
This project is licensed under the MIT License.