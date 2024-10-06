# Spherical_Conformal_Mapping

## Overview

This project implements the **Spherical Conformal Parameterization** method on a brain cortical surface model.

## Results
I have taken the threshold as 1e-4. due to convergence issues.
I have also taken the step length as 1e-2 for better convergence.

Results - 
    Harmonic Energy converges to around 25.3438

The result of the conformal mapping is stored in `Brain_Conformal.obj`.

## Source Code

The source code files for the project are:
- `fastConformalMethod/fastConformalMapping.cpp`
- `ConformalMapping/ConformalMapping.cpp`

## Execution Instructions

To run the program, use the following commands:

For the fast conformal mapping method:
```bash
./fast ../Data/brain.obj ../Data/fast_conformal_brain.obj
```
OR
```bash
./Conformal ../Data/brain.obj ../Data/conformal_brain.obj
```


This package includes the prototype code for implementing spherical harmonic maps.

Harmonic maps between genus-0 surfaces are conformal. Thus, this code can be used for computing conformal maps from any genus-0 surface to a unit sphere.

![alt text](data/brain.jpg?raw=true "Spherical harmonic map")

## Build

[![Build status](https://ci.appveyor.com/api/projects/status/6nyv0sobm4k0ey2j?svg=true)](https://ci.appveyor.com/project/icemiliang/spherical-harmonic)

In the root directory, run:
```
$ rm -r build
$ mkdir build
$ cd build
$ cmake ..
$ make
```

The program has been tested on Ubuntu 16.04 with g++ 5.4.0.

## Usage
```
./main ../data/brain.obj output
```

The output is three files: star.obj tuette.obj and harmonic.obj. star is the initial map that projects all vertices onto the unit sphere. Tuette map is an intermidiate step. Harmonic map is the final result.

## Reference
Gu, Xianfeng David. Computational conformal geometry. Edited by Shing-Tung Yau. Somerville, Mass, USA: International Press, 2008.
