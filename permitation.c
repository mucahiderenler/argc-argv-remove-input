#include <stdio.h>
#include <string.h>

char newstring [];

char * swtch(char word [],int x,int y){
 
    for(int i = 0;i<strlen(word);i++){
        newstring[i] = word[i];    
    }
    newstring[x] = newstring[y];
    newstring[y] = word[x];
    return newstring;   
}

void permute(char word [], int place){
    if(place == strlen(word)-1){
        printf("%s\n",word);
    }
    for(int nextchar = place; nextchar<strlen(word);nextchar++){
        permute(swtch(word,place,nextchar),place+1);
    }
}

int main(int argc,char* argv[]){    

   if(!(argc!=2)){
      permute(argv[1],0);       
   }
}