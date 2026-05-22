/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 22/05/2026
Objetivo    : Aparecer o número de leds necessários para fazer um certo número
Aprendizado : Aprendi a utilizar switch case e juntar com o while
-------------------------------------------------------------------------- */



#include <stdio.h>
 
int main() {
    
    int N;
    
    scanf("%d", &N);
    while(N--) {
            
        int quantled = 0;
            
        char numero[102];
            
        scanf("%s", numero);
            
        for(int i = 0 ; numero[i] != '\0'; i++) {
            switch (numero[i]){
                case '1' : quantled += 2 ;
                break;
                    
                case '2' : quantled += 5 ;
                break;
                    
                case '3' : quantled += 5 ;
                break;
                    
                case '4' : quantled += 4 ;
                break;
                    
                case '5' : quantled += 5 ;
                break;
                    
                case '6' : quantled += 6 ;
                break;
                    
                case '7' : quantled += 3 ;
                break;
                    
                case '8' : quantled += 7 ;
                break;
                    
                case '9' : quantled += 6 ;
                break;
                    
                case '0' : quantled += 6 ;
                break;
                
            }
            
        
        }
    printf("%d leds\n", quantled);    
        
    }
    
    return 0;
}
