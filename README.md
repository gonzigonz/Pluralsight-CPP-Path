# Pluralsight-CPP-Path

This repository contains code samples from the courses of the [Pluralsight C++ leaning Path](https://www.pluralsight.com/paths/c-plus-plus).

The recommended way to interact with this repository is using [Code Spaces](https://github.com/codespaces). All the examples and instructions in README files were tested using code spaces. 

Samples from the following courses are included:
1. [Learn to Program with C++ 17](https://www.pluralsight.com/courses/learn-program-cplusplus)

## Linting
Use `clang-tidy` for static analysis and `clang-format` to format the source files.
```
sudo apt update
sudo apt install clang-tidy clang-format
clang-tidy ./**/*.cpp
clang-format --style=Microsoft ./**/*.cpp ./**/*.h -i
```
