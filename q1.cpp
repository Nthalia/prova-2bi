#include <stdio.h>

int operador;
int x, y;
int resultado;

int main() {
    printf("Calculadora Switch Case\n");
    
    printf("Digite um número: ");
    scanf("%d", &x); 
    
    printf("\nDigite outro número: ");
    scanf("%d", &y);
    
    printf("\nEscolha o operador:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");    
    printf("3 - Multiplicação\n");    
    printf("4 - Divisão\n");
    scanf("%d", &operador); 
    
    switch (operador) { 
        case 1:
            resultado = x + y; 
            printf("A soma dos números é: %d\n", resultado);
            break;
        case 2:
            resultado = x - y; 
            printf("A subtração dos números é: %d\n", resultado);
            break;
        case 3:
            resultado = x * y; 
            printf("A multiplicação dos números é: %d\n", resultado);
            break;
        case 4:
            if (y != 0) {
                resultado = x / y; 
                printf("A divisão dos números é: %d\n", resultado);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default: 
            printf("Operador inválido!\n");
            break;
    }
    
    return 0;
}

