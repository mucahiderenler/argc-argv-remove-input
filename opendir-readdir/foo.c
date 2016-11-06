#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    
    DIR *dir;
    struct dirent *sd;
    
    dir = opendir("../../argc-argv-remove-input/");
    
    if(dir == NULL){
        printf("couldn't open the directory\n");
        exit(1);
    }
    
    while((sd = readdir(dir)) != NULL){
        printf(">> %llu",sd->d_ino);
    }
    
    return 0 ;
    
}