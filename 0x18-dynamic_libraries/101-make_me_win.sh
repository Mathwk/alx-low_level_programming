#!/bin/bash
wget -O /tmp/lotto.so /tmp https://github.com/Mathwk/alx-low_level_programming/blob/master/0x18-dynamic_libraries/lotto.so
export LD_PRELOAD=/tmp/lotto.so
