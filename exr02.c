#include <stdio.h>

void imprimirMesEQuantidadeDias(int numeroMes) {
    char* nomeMes;
    int quantidadeDias;

    switch (numeroMes) {
        case 1:
            nomeMes = "janeiro";
            quantidadeDias = 31;
            break;
        case 2:
            nomeMes = "fevereiro";
            quantidadeDias = 28; // Assumindo não bissexto para simplificar
            break;
        case 3:
            nomeMes = "março";
            quantidadeDias = 31;
            break;
        case 4:
            nomeMes = "abril";
            quantidadeDias = 30;
            break;
        case 5:
            nomeMes = "maio";
            quantidadeDias = 31;
            break;
        case 6:
            nomeMes = "junho";
            quantidadeDias = 30;
            break;
        case 7:
            nomeMes = "julho";
            quantidadeDias = 31;
            break;
        case 8:
            nomeMes = "agosto";
            quantidadeDias = 31;
            break;
        case 9:
            nomeMes = "setembro";
            quantidadeDias = 30;
            break;
        case 10:
            nomeMes = "outubro";
            quantidadeDias = 31;
            break;
        case 11:
            nomeMes = "novembro";
            quantidadeDias = 30;
            break;
        case 12:
            nomeMes = "dezembro";
            quantidadeDias = 31;
            break;
        default:
            printf("Número de mês inválido.\n");
            return;
    }

    printf("Mês: %s\nQuantidade de dias: %d\n", nomeMes, quantidadeDias);
}

int main() {
    int numeroMes;

    // Solicitar entrada do usuário
    printf("Digite um número de 1 a 12 para representar um mês: ");
    scanf("%d", &numeroMes);

    // Chamar a função para imprimir o mês e a quantidade de dias
    imprimirMesEQuantidadeDias(numeroMes);

    return 0;
}
