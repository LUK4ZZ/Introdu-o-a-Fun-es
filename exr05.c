#include <stdio.h>
#define PI 3.1414592

double calcularVolumeEsfera(double raio) {
    return (4.0 / 3.0) * PI * raio * raio * raio;
}

int main() {
    double raio;

    // Solicitar entrada do usuário
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    // Chamar a função para calcular o volume e imprimir o resultado
    double volume = calcularVolumeEsfera(raio);
    printf("O volume da esfera é: %.2lf\n", volume);

    return 0;
}
