#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char * argv[]){
    int fd;
    char buf[32];
    
    fd = open("myfile.txt",O_CREAT | O_WRONLY, 0600);
    
    if(fd == -1){
        printf("cant open or create the file");
        exit(1);
    }
    
    write(fd,"be a man you always want it to\n",31);  
    
    close(fd);
    
    /* read */
    
    fd = open("myfile.txt",O_RDONLY);
    
    if(fd == -1){
        printf("can't read the file");
        exit(1);
    }
    
    read(fd,buf,31);
    buf[31] = '\0';
    printf("%s",buf);
    
    close(fd);
    
}