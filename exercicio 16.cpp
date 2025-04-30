#include <stdio.h>

void imprimir_impares(int n) {
    if (n < 1)
        return;
    
    if (n >= 3)
        imprimir_impares(n - 2);
    
    if (n % 2 == 1)
        printf("%d ", n);
}

int main() {
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Por favor, digite um numero positivo.\n");
        return 1;
    }
    
    if (n % 2 == 0)
        n--;
    
    printf("Numeros impares de 1 ate %d: ", n);
    imprimir_impares(n);
    printf("\n");
    
    return 0;
}
