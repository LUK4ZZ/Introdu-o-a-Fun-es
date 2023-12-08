#include <stdio.h>

int encontrarMaior(int numero1, int numero2) {
    if (numero1 > numero2) {
        return numero1;
    } else {
        return numero2;
    }
}

int main() {
    int num1, num2;

    // Solicitar entrada do usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Chamar a função e exibir o resultado
    int resultado = encontrarMaior(num1, num2);
    printf("O maior número é: %d\n", resultado);

    return 0;
}
