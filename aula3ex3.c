#include <stdio.h>
int main() {
    float nota;
    printf("Digite a Nota do Aluno: ");
    scanf("%f", &nota);
    
    if( nota >= 9.0) {
    printf("A");
    return 0;
}
    if( nota >= 8.0) {
    printf("B");
    return 0;
}
    if( nota >= 7.0) {
    printf("C");
    return 0;
}
    if( nota >= 6.0) {
    printf("D");
    return 0;
}
    if( nota < 6.0) {
    printf("E");
    return 0;
}
}