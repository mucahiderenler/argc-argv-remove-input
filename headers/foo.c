#include <stdio.h>
#include "myheader.h"

int main(int argc,char *argv[]){
    int sum = addnumbers(3,5);
    int mult = multiply(4,6);
    
    printf("sum =  %d\n",sum);
    printf("multp = %d\n",mult);
}