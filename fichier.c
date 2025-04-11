#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compte_ligne(FILE *f){
    int res; 
    char c;
    while((c=fgetc(f))!=EOF){
        if(c =='\n'){
            res++;
        }
    }
    return res;
}

// int main (){
//     FILE *f= fopen("ville.txt", "r");
//     printf("%d\n", compte_ligne(f));
//     return 0;
// }

