#include <stdio.h>

int addnumbers(int a , int b); /* we don't need to declare this in here because it's already declared on addnumbers.c but some compilers may throw an error */

int main(int argc,char*argv[]){
   int total =  addnumbers(3,5);
   
   printf("%d\n",total);
   
   return 0;
}