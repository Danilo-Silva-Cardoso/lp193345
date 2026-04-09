#include <stdio.h>
 
int main() {
    int a , b , c;
    
     scanf("%d", &a);
     if(-10000 >= a >= 10000){
         return 1;
     }
     
     scanf("%d", &b);
    if(0 >= b >= 99){
         return 1;
     }
     
     scanf("%d", &c);
    if(0 >= c >= 999){
         return 1;
     }

    printf("A = %d, B = %d, C = %d\n", a, b, c);
    printf("A = %10d, B = %10d, C = %10d\n", a, b, c);
    printf("A = %010d, B = %010d, C = %010d\n", a, b, c);
    printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);

    return 0;
}
