#!/bin/bash
wget -qO $HOME/libinjection.so https://github.com/Dcode3244/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libinjection.so
LD_PRELOAD=$HOME/libinjection.so ./gm 9 8 10 24 75 9
