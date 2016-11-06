#include <stdio.h>
#include <stdlib.h>

int myfunc (const void *a ,const void *b);

int main(int argc, char * argv[]){
    int hello[] = {'c','k','l','a','m','q','d','w','l','i'};
    
    printf("Before qsort \n");
    
    for(int i = 0; i<10;i++)
        printf("%c ",hello[i]);
    
    printf("\n\n");
        
    qsort(hello,10,sizeof(int),myfunc);
    
    printf("after qsort \n");
    
    for(int i = 0; i<10;i++)
        printf("%c ",hello[i]);
        
    return 0;
}

int myfunc(const void *a ,const void *b){
    char aa = *(char *) a;
    char bb = *(char *) b;
    
    return bb-aa;
}