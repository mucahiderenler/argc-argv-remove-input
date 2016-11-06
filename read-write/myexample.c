#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc,char * argv[]){
    int fd;
    char buf [36];
    
    fd = open("newfile.txt", O_WRONLY | O_CREAT , 0600);
    
    if(fd == -1){
        printf("can' create the file");
        exit(1);
    }
    
    write(fd,"Be a man as you always want it to.\n",35);
    
    close(fd);
    
    fd = open("newfile.txt",O_RDONLY);
    
    read(fd,buf,35);
    buf[35] = '\0';
    printf("%s",buf);
    
    close(fd);
    
    return 0;
}