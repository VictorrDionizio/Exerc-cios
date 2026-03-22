#include <stdio.h>
int main() {
    int horas, minutos;
    int totalMin, extra, falta;
    printf("Digite as horas trabalhadas: ");
    scanf("%d", &horas);
    printf("Digite os minutos trabalhados: ");
    scanf("%d", &minutos);
    totalMin = horas * 60 + minutos;
    if (totalMin > 480) {
        extra = totalMin - 480;
        printf("Horas adicionadas ao banco: %d horas e %d minutos\n", extra / 60, extra % 60);
    } else {
        if (totalMin < 480) {
            falta = 480 - totalMin;
            printf("Horas retiradas do banco: %d horas e %d minutos\n", falta / 60, falta % 60);
        } else {
            printf("Nenhuma alteracao no banco de horas.\n");
        }
    }
}
