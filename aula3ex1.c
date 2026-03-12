#include <stdio.h>
int main() {
    int x, y;
    printf("Digite X: ");
    scanf("%f", &x);
    printf("Digite Y: ");
    scanf("%f", &y);
    
if( x == y ) {
    printf("x igual a y");
}
if( x != y ) {
    printf("x diferente de y");
}
return 0;
}
