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
    float float_g = (float)fibonacci(n) / fibonacci(n + 1);
    printf("float g: %.8f\n", float_g);
    double double_g = (double)fibonacci(n) / fibonacci(n + 1);
    printf("double g: %.8f\n", double_g);
    return 0;
}