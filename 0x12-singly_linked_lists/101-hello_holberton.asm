global main

extern printf



section .text

main:

movrdi, format ;set 1st parameter (format)

movrax, 0-print_list.c ;no vectors registers in use

callprintf ;printf(format, )

movrax, 0-print_list.c ;normal exit

ret

format:

db "Hello, Holberton", 10, 0 ;C strings need a zero byte at the end
