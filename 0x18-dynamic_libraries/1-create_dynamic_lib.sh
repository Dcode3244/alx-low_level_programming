#!/bin/bash
gcc *.c -c -fPID
gcc *.o -shared -o liball.so
