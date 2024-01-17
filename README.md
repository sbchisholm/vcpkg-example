# vcpkg-example
Working example of using vcpkg and cmake with compatibility with clangd based
on https://learn.microsoft.com/en-us/vcpkg/consume/manifest-mode?tabs=cmake%2Cbuild-cmake.

## Setup

Initialize submodules to clone vcpkg

```
git submodule update --init --recursive
```

Run the vcpkg boostrap script

```
vcpkg/bootstrap-vcpkg.sh
```

Install dependencies

```
vcpkg/vcpkg install
```

Configure the cmake project

```
cmake -B build -S .
```

Build the target (fibo)

```
cmake --build build
```

Run fibo

```
build/fibo --help
```
