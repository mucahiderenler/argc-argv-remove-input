#include <stdio.h>

char * swtch(char word [],int x,int y){
    char * newstring = word;
    newstring[x] = newstring[y];
    newstring[y] = word[x];
    return newstring;   
}

void permute(char word [], int place){
    if(place == sizeof(*word)-1){
        printf("%s",word);
    }
    for(int nextchar = place; nextchar<sizeof(*word);nextchar++){
        permute(swtch(word,place,nextchar),place+1);
    }
}

int main(int argc,char* argv[]){    

   if(!(argc!=2)){
      permute(argv[1],0);       
   }
}