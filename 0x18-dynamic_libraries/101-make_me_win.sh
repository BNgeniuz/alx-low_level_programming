#!/bin/bash
wget -P .. https://raw.githubusercontent.com/BNgeniuz/alx-low_level_programming/master/0x18-dynamic_libraries/libshark.so
export LD_PRELOAD="$PWD/../libshark.so"
