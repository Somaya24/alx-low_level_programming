#!/bin/bash
wget -P /tmp https://github.com/Somaya24/alx-low_level_programming/raw/master/0x18-Dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
