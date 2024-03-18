#include <stdio.h>

int main()
{
    float f;
    for(;;){
        printf("input:");
        scanf("%f",&f);
        printf("value:%f\n",f);
        if(f==0){
            break;
        }
    
    
    }
    return 0;
}