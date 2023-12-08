#include <stdio.h>
#define PI 3.141592

double calcularVolumeCilindro(double altura, double raio) {
    return PI * raio * raio * altura;
}

int main() {
    double altura, raio;

    // Solicitar entrada do usuário
    printf("Digite a altura do cilindro: ");
    scanf("%lf", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%lf", &raio);

    // Chamar a função para calcular o volume e imprimir o resultado
    double volume = calcularVolumeCilindro(altura, raio);
    printf("O volume do cilindro é: %.2lf\n", volume);

    return 0;
}
