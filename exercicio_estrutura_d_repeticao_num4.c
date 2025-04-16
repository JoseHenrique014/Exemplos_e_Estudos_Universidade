#include <stdio.h>

int main(){
    int controle = 1;
    int cont;
    int num;
    int menor;
    
    while(cont <= 20) {
        scanf("%d", &num);
        if(controle == 1){
            menor = num;
        }else if(num <= menor){
            menor = num;
            controle++;
        }
    }
}