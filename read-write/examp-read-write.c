#include <stdio.h>
#include <unistd.h>

int main(int argc,char* argv[]){
    char buf[10];
    
    int ret = read(0,buf,10);
    
    if(ret <10){
        buf[ret] = '\0';
    }
      
    printf("%s\n",buf);
    
    return 0 ;
}