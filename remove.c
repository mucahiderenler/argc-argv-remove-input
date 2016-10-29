#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int m_option = 0; //lower char
int M_option = 0; //upper char
int d_option = 0; //digits

void file_remove(FILE *fp){
    int c;
        while((c = fgetc(fp)) != EOF){
             if(!(m_option || d_option)){
                if(!(islower(c) || isdigit(c)))
                    putchar(c);
            }                                         // choosing the character and remove.
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
   
    if(argc>1){				//check if any command given
        if(argv[1][0] == '-'){
            if(argv[1][1] == 'm')
                m_option = 1;
            else if (argv[1][1] == 'M')  // chech which command given
                M_option = 1;
            else if(argv[1][1] == 'd')
                d_option = 1;
            }
    else{
        printf("use '-' for command\n");
        return EXIT_FAILURE;
    }
    for(int i =2 ; i<argc; i++){                    
         if((ilp = fopen(argv[i],"r")) != NULL)    // open all the files that given
             file_remove(ilp);                     // remove the chosen one
         else
             printf("\ni could not read this file %s\n",argv[i]);                
      }
         
   } else
        printf("You didn't give any commands.\n");   
 }