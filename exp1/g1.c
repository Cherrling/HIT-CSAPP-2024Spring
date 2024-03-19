#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 0;
    printf("input n:");
    scanf("%d",&n);
    for (int i=1; i<n+1; i++) {
        float float_g = (float)fibonacci(i) /  fibonacci(i + 1);
        printf("float   g at n= %d:  %.8f\n",i, float_g);
        double double_g = (double)fibonacci(i) / fibonacci(i + 1);
        printf("double  g at n= %d:  %.8f\n",i, double_g);
    
    }
    return 0;
}