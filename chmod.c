#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc , char* argv[]){
    int fd;
    
    int ret = chmod("exercise.c",0644);
    
    fd = open("exercise.c", O_RDWR,0777);
    
    if(fd == -1){
        printf("can't open the file");
        exit(1);
    }
    
     ret = fchmod(fd,0644);
    
    if(ret == -1){
        printf("can't change the permission");
        exit(1);
    }
    
    close(fd);
    
    return 0;
}