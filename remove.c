#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int m_option = 0;
int M_option = 0;
int d_option = 0;

void file_remove(FILE *fp){
    int c;
        while((c = fgetc(fp)) != EOF){
             if(!(m_option || d_option)){
                if(!(islower(c) || isdigit(c)))
                    putchar(c);
            }
             if(!(M_option || d_option)){
                if(!(isdigit(c) || isupper(c)))
                    putchar(c);
            }
             if (!(M_option || m_option)){
                if(!(islower(c) || isupper(c)))
                    putchar(c);
            } 
        }   
    fclose(fp);
}

int main(int argc, char* argv[]){
    FILE *ilp;
   
    if(argc>1){
    if(argv[1][0] == '-'){
            if(argv[1][1] == 'm')
                m_option = 1;
            else if (argv[1][1] == 'M')
                M_option = 1;
            else if(argv[1][1] == 'd')
                d_option = 1;
            }
    else{
        printf("use '-' for command\n");
        return EXIT_FAILURE;
    }

    for(int i =2 ; i<argc; i++){
         if((ilp = fopen(argv[i],"r")) != NULL)
             file_remove(ilp);
         else{
             printf("\ni could not read this file %s\n",argv[i]);
         }       
        }
        
    } else
        printf("You didn't give any commands.\n");    
}