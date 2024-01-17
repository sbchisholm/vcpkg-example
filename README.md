# vcpkg-example
Working example of using vcpkg and cmake with compatibility with clangd based
on https://learn.microsoft.com/en-us/vcpkg/consume/manifest-mode?tabs=cmake%2Cbuild-cmake.

## Setup

1. Initialize submodules to clone vcpkg

```
git submodule update --init --recursive
```

2. Run the vcpkg boostrap script

```
vcpkg/bootstrap-vcpkg.sh
```

3. Install dependencies

```
vcpkg/vcpkg install
```

4. Configure the cmake project

```
cmake -B build -S .
```

5. Build the target (fibo)

```
cmake --build build
```

6. Run fibo

```
build/fibo --help
```
