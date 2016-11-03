#include <stdio.h>

int add_numbers(int a ,int b){
    return a+b;
}

int main(){
    int (*pointer_f) (int,int);
    
    pointer_f = &add_numbers;
    
    printf("%d",pointer_f(3,5)); 

}