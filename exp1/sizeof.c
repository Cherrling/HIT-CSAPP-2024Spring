#include <stdio.h>

int main() {
    printf("%-12s %zu\n", "int:", sizeof(int));
    printf("%-12s %zu\n", "float:", sizeof(float));
    printf("%-12s %zu\n", "double:", sizeof(double));
    printf("%-12s %zu\n", "short:", sizeof(short));
    printf("%-12s %zu\n", "char:", sizeof(char));
    printf("%-12s %zu\n", "long:", sizeof(long));
    printf("%-12s %zu\n", "long long:", sizeof(long long));
    printf("%-12s %zu\n", "long double:", sizeof(long double));
    printf("%-12s %zu\n", "int*:", sizeof(int*));
}
