#!/bin/bash
#gcc -Wall -Wextra -ggdb smallsh.c ultils.c -o smallsh
gcc -Wall -Wextra -Wpedantic -Werror -ggdb smallsh.c -o smallsh
./smallsh