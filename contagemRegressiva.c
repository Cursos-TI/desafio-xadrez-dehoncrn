#include <stdio.h>
 
int main() {
    int segundos;
   
    for (segundos = 10; segundos >= 0; segundos--) {
        printf("%d\n", segundos);
       
        // Loop aninhado para simular um atraso
        for (int i = 0; i < 100000000; i++) {
            // Apenas para simular um atraso
        }
    }
 
    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("Fogos de artifício!\n");
    }

    printf("\n");
    
    for (int j = 1; j <=10; j++)
    {
        printf("Feliz Ano Novo!\n");
    }

    return 0;
}