#include <stdio.h>
#include <math.h>

int main() {
    int n, divisor = 2, achou = 0;
    printf("Digite um n�mero para saber se � primo (*N= n�o �, *S= � primo): ");
    scanf("%i", &n);
    if (n <= 1) {
        achou = 1;
    }
    else {
        while (divisor <= sqrt(n) && !achou) {
            if (n % divisor == 0) {
                achou = 1;
            }
            else {
                divisor++;
            }
        }
    }
    if (achou) {
        printf("N\n");
    }
    else {
        printf("S\n");
    }
    return 0;
}
