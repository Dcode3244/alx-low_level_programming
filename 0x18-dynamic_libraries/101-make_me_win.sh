#!/bin/bash
wget -q -O $HOME/libinjection.so https://github.com/Dcode3244/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libinjection.so
export LD_PRELOAD=$HOME/libinjection.so
