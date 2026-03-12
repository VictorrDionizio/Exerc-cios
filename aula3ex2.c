#include <stdio.h>
int main() {
    float nota;
    printf("Digite a Nota do Aluno: ");
    scanf("%f", &nota);
    
if( nota >= 6) {
    printf("aprovado");
}
if( nota < 6 ) {
    printf("reprovado");
}
return 0;
}
