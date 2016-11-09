#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/mount.h>
#include <sys/param.h>


int main(int argc , char * argv[]){
    DIR* dir;
    struct dirent* sd;
    int ret = 0; 
    dir = opendir(".");
    
    if(dir == NULL){
        printf("can't open the dir");
        exit(1);
    }
    
    while((sd = readdir(dir)) != NULL){
        printf("%s\n",sd->d_name);
    }
    rewinddir(dir);
    while((sd = readdir(dir)) != NULL){
        printf("%s\n",sd->d_name);
    }
     
        
    closedir(dir);
    
    return 0;
}