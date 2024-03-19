#include <stdio.h>

double fibonacci_ratio(int n) {
    double a = 0, b = 1; 
    for (int i = 0; i < n; i++) {
        double temp = b;
        b = a + b; 
        a = temp;
    }
    return a / b ; 
}

int main() {
    int n;
    printf("input n: ");
    scanf("%d", &n);
    for (int i=1; i<n+1; i++) {

        double g = fibonacci_ratio(i);
        printf("当n=%d时，黄金分割数 g 的值为 %.8lf\n", i, g);
    }


    return 0;
}
