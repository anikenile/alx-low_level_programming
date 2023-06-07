	global    main
	extern	  puts

          section   .text
main:
          mov       rdi, resMsg            
          call	    puts
	  ret

          section   .data
resMsg:	  db        "Hello, Holberton", 0
