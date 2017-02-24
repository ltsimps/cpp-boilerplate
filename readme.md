# C++ Boilerplate
[![Build Status](https://travis-ci.org/dpiet/cpp-boilerplate.svg?branch=master)](https://travis-ci.org/dpiet/cpp-boilerplate)
[![Coverage Status](https://coveralls.io/repos/github/dpiet/cpp-boilerplate/badge.svg?branch=master)](https://coveralls.io/github/dpiet/cpp-boilerplate?branch=master)
---

## Overview

Simple starter C++ project with:

- cmake
- googletest

## Installation

- Checkout the repo (and submodules)
```
$ git clone --recursive https://github.com/dpiet/cpp-boilerplate.git
```

#Test I would add.
- Based on class design I would add ranges or desired velocity and actual velocity first making sure actual velocity is less than desired
- With random inputs I would also test for correct values relying on an epsilon value to signal if the correct input was returned.

#Class Design changes
- I would change the class design because I feel like some values aren't needed.
- I would change the constructor because intialization list make be too cubersome. I tried to write a try and catch block, but it wouldn't pass the test if it was negative.
