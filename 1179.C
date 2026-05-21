#include <stdio.h>
 
int main() {
    
    int valores[15];
    int impar[5];
    int par[5];
    int qtdepar = 0;
    int qtdeimpar = 0;
    
    for(int i = 0 ; i < 15 ; i++){
        scanf("%d", &valores[i]);

        if(valores[i] % 2 == 0) {
            par[qtdepar] = valores[i];
            qtdepar++;
            
        } else {
            impar[qtdeimpar] = valores[i];
            qtdeimpar++;
          }

        if(qtdepar == 5) {
            for(int j=0; j<5;j++){
                printf("par[%d] = %d\n", j, par[j]);
            }
            qtdepar = 0;
        }
        
        if(qtdeimpar == 5){
            for(int j=0; j < 5 ; j++){
                printf("impar[%d] = %d\n", j ,impar[j]);
            }
            qtdeimpar = 0;
        } 
    }

    if(qtdeimpar > 0) {
        for(int j = 0 ; j < qtdeimpar ; j++){
            printf("impar[%d] = %d\n", j, impar[j]);
        }
    }

    if(qtdepar > 0) {
        for(int j = 0 ; j < qtdepar; j++) {
            printf("par[%d] = %d\n", j ,par[j]);
        }
    }

    return 0;
}
