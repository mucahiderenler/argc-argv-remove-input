#include <stdio.h>
#include <unistd.h>

int main(int argc , char * argv[]){
    int childpid;
    int count1 = 0 , count2 = 0;
    
    childpid = fork();
    
    if(childpid == 0){
        printf("this is child process\n");
        while(count1<10){
            printf("child process : %d\n",count1);
            sleep(1);
            count1++;
        }
    }
    else{
        printf("This is the parent process\n");
        while(count2<21){
            printf("parent process : %d\n",count2);
            sleep(1);
            count2++;
        }
    }
    
    return 0 ;
}