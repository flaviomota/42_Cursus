#!/bin/bash

gcc -Wall -Werror -Wextra srcs/gnl_tester_devrandom.c ../get_next_line.c ../get_next_line_utils.c -I ../ -D BUFFER_SIZE=42 && ./a.out