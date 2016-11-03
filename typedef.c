#include <stdio.h>

typedef struct mysturct_t {
    int number;
    
}hey;

int main(int argc,char *argv[]){
    hey newstudent;
    
    newstudent.number = 1234;
    
    printf("number: %d\n",newstudent.number);
}