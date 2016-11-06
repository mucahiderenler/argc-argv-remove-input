#include <stdio.h>

int main(int argc, char* argv[]){
    int dizi [10] = {5,8,11,3,22,5,12,14,7,4};
    int n ;
    
    for(int i = 9; i>0;i--){
    
        for(int j = 0; j<i;j++){
            if(dizi[j] > dizi[j+1]){
                n = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = n;   
            }
        }    
    }
    
    for(int i = 0;i<10;i++){
        printf("a[%d] = %d\n",i,dizi[i]);
    }
}