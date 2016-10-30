#include <stdio.h>

int result = 1;

int faktoriyel(int size){
    if(size <1){
        return result;
    }
    else{
        result = result*size;
        size = size -1;
        return  faktoriyel(size);
    }
}

int main(){
    char word [4];
    
    printf("Write any word: ");
    scanf("%s",word);
    printf("%d",faktoriyel(sizeof(word)));    
    for(int i = 0;i<sizeof(word);i++){        
    }
}