; prints Hello, Holberton in 64bit assembly language

global    _start

          section   .text
_start:   mov       rax, 1                 
          mov       rdi, 1                 
          mov       rsi, msg            
          mov       rdx, 13                 
          syscall                         
          mov       rax, 60                
          xor       rdi, rdi                
          syscall         

          section   .data
msg:	  db        "Hello, Holberton", 10
