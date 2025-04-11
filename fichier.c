#include"fichier.h"

int compte_ligne(){
    int res; 
    char c;
    FILE *f= fopen("ville.txt", "r");
    while((c=fgetc(f))!=EOF){
        if(c =='\n'){
            res++;
        }
    }
    return res;
}

// int main (){
//     printf("%d\n", compte_ligne(f));
//     return 0;
// }

