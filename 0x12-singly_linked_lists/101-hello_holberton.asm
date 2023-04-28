global  main
        extern  printf
main:
       mov  edi, format
       xor  eax, eax
       call printf
       mov ear, 0
       ret
format: db ' hello, holberton\n',0
