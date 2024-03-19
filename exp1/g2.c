#include <stdio.h>

long long fibonacci(long long n) {
    long long a = 0, b = 1;


    if (n <= 0) return 0;
    if (n == 1) return 1;

    for (long long i = 2; i <= n; i++) {

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
    for (int i=1; i<n+1; i++) {
        float float_g = (float)fibonacci(i) /  fibonacci(i + 1);
        printf("float   g at n= %d:  %.8f\n",i, float_g);
        double double_g = (double)fibonacci(i) / fibonacci(i + 1);
        printf("double  g at n= %d:  %.8f\n",i, double_g);
    
    }
    return 0;
}
