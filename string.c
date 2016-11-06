#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc , char * argv[]){
    char * str;
    int i ;
    
    i = (int)calloc
    str = (char *) malloc(1);
    
    if(str == NULL){
        printf("Failed to get or allocate memory\n");
    }
    
    strcpy(str,"Am i improving?");
    
    printf("str : %s\n",str);
    
    str =  realloc(str,0);
    
    printf("str: %s\n",str);
    
    free(str);
        
    return 0 ;
}