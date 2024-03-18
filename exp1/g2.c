#include <stdio.h>

long long fibonacci(int n) {
    int a = 0, b = 1;


    if (n <= 0) return 0;
    if (n == 1) return 1;

    for (int i = 2; i <= n; i++) {

        long long next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n = 0;
    printf("input n:");
    scanf("%d",&n);
    float float_g = (float)fibonacci(n) /  fibonacci(n + 1);
    printf("float g:%.8f\n", float_g);
    double double_g = (double)fibonacci(n) / fibonacci(n + 1);
    printf("double g:%.8f\n", double_g);
    return 0;
}
