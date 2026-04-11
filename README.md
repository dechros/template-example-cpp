# template-example-cpp

Minimal example showing a non-template class with a template member function and a template class with a non-template member function, driven from `main.cpp`.

## Layout

```
include/    normalClass.h, templateClass.h
source/     main.cpp, normalClass.cpp, templateClass.cpp
output/     build output
```

## Build

The VS Code task uses TDM-GCC g++:

```bash
g++ -g source/*.cpp -Iinclude -o output/main
```

Run `./output/main` (or `output\main.exe` on Windows).
