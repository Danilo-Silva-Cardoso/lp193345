#include <stdio.h>
 
int main() {
    int a, b, soma = 0;
    int inicio, fim, i;
    scanf("%d %d", &a, &b);
    
    if(a < b){
            inicio = a;
            fim = b;
    }   else {
        fim = a;
        inicio = b;
    }
    
    for(i = inicio + 1; i < fim; i++) {
        if(i % 2 != 0) {
            soma = soma + i;
        }
    }
    
    printf("%d\n", soma);
    
    return 0;
}
