2 ways to use this multiple sources:
1-gcc -c main.c
  gcc -c addnumbers.c
  gcc -o program main.o addnumbers.o
  ./program

2- gcc -o program main.c addnumbers.c	//not usefull for the big projects
   ./program                