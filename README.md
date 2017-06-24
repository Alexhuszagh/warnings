warnings
========

Warnings is a header-only, cross-compiler warning suppression library. Warnings is derived from Ruslan Baratov's excellent [leathers](https://github.com/ruslo/leathers) library, forked to remove the heavy Boost dependency.

[![Build Status](https://travis-ci.org/Alexhuszagh/warnings.svg?branch=master)](https://trAlexhuszagh/csv_parseravis-ci.org/Alexhuszagh/warnings)
[![Build Status](https://tea-ci.org/api/badges/Alexhuszagh/warnings/status.svg)](https://tea-ci.org/Alexhuszagh/warnings)
[![Build status](https://ci.appveyor.com/api/projects/status/jx4mmgo25myx9u9i?svg=true)](https://ci.appveyor.com/project/Alexhuszagh/warnings)
[![GitHub license](https://img.shields.io/badge/License-BSD%202--Clause-orange.svg)](https://opensource.org/licenses/BSD-2-Clause)

**Table of Contents**

- [Usage](#usage)
- [Installation](#installation)
- [Testing](#testing)
- [Platforms](#platforms)
- [Contributors](#contributors)
- [License](#license)

## Usage

```cpp
// push warning suppression
#include <leathers/push>

// include suppressed warnings
#include <leathers/all>                     // suppress all warnings
#include <leathers/exit-time-destructors>   // suppress exit-time-destructors

// insert your code here

// pop all warning suppression
#include <leathers/pop>
```

## Installation

Simply add the `src` directory to the compiler include directory path with `-I/path/to/src`.

## Testing

Simply clone, configure with CMake, and build to run the unittest suite.

```bash
git clone https://github.com/Alexhuszagh/warnings.git
git submodule update --init --recursive
cmake .
make -j 5                       # "msbuild warnings.sln" for MSVC
```

## Platforms

Warnings is continually built with the following compiler and compiler versions:

- MinGW 5.3.0 (MXE, MinGW, and MSYS2) 
- Visual Studio 14 2015
- Visual Studio 15 2017

## Contributors

- Alex Huszagh

Warnings is forked from leathers, written by Ruslan Baratov, who has no affiliation with this project.

## License

BSD 2-Clause, see [license](LICENSE.md).
