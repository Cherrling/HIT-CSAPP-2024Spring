#include <stdio.h>

int sum(int a[], unsigned len){

    int i,sum=0;
    for(i=0;i<=len-1;i++){
        sum+=a[i];

    }
    return sum;
}


int main()
{
    // printf("Hello 2022112266-魏圣卓\n");

    int a[]={1,2,1,2,1,2,1,2,1,1,2,1};
    sum(a,0);
    return 0;
}