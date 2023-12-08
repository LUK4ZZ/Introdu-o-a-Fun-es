#include <stdio.h>

double calcularIMC(double peso, double altura) {
    // Calcular IMC usando a fórmula: IMC = peso / (altura * altura)
    return peso / (altura * altura);
}

int main() {
    double peso, altura;

    // Solicitar entrada do usuário
    printf("Digite o peso (em quilos): ");
    scanf("%lf", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%lf", &altura);

    // Chamar a função para calcular o IMC e imprimir o resultado
    double imc = calcularIMC(peso, altura);
    printf("O IMC dessa pessoa é: %.2lf\n", imc);

    return 0;
}
