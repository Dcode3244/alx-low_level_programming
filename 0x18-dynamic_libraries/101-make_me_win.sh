#!/bin/bash
wget -q -O $HOME/101-injection.so https://github.com/Dcode3244/alx-low_level_programming/raw/main/0x18-dynamic_libraries/101-injection.so
export LD_PRELOAD=$HOME/101-injection.so
