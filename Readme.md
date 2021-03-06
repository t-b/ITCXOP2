# ITC XOP2

## Overview

This Igor Pro extension ("XOP") is a complete rewrite of the original ITC XOP
from [HEKA](http://heka.com/downloads/downloads_main.html#down_xops).

Compared to the original ITC XOP it has the following enhancements:

  - Available for 32bit and 64bit
  - Uses a coherent interface with Operation Handler and
    ParseOperationTemplate
  - Threadsafe operations
  - Allow free waves where sensible
  - All output waves can be overwritten
  - Standardize 2D wave formats so that all waves have one column
    per channel
  - Updated and enhanced documentation
  - Test suite using the [Igor Unit Testing Framework](http://www.igorexchange.com/project/unitTesting)

## Installation

- Quit Igor Pro
- Install the vcredist packages in "vcredist"
- Create the following shortcuts in "$HOME\\Documents\\WaveMetrics\\Igor Pro 7 User Files"

  - In "Igor Extensions" a shortcut pointing to "XOP\itcXOP2.xop"
  - In "Igor Extensions (64-bit)" a shortcut pointing to "XOP\itcXOP2-64.xop"

- Start Igor Pro

## Running requirements
Minimum Igor Pro versions are 6.3 for 32bit and 7.0 for 64bit.

## Compilation instructions

Required additional software:

- Visual Studio 2015
- [XOPSupport Toolkit 7](https://www.wavemetrics.com/products/xoptoolkit/xoptoolkit.htm)
- [Igor Unit Testing Framework](http://www.igorexchange.com/project/unitTesting)

Steps to compile:

- Extract the XOPSupport Toolkit into the folder `src/XOPSupport`
- Open VC2015/itcXOP2.sln and compile

Steps to execute the test suite:

- Connect a ITC18USB to the host computer
- Open Testing/QuickTest.pxp and execute `run()`
