#include <stdio.h>

int main ()
{
    float a, b, c, y;
    printf("\nDigite os valores de a,b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    while (a>y){
        if (b>c)
            y=(a+b*c);
        else
            y=(a+c*b);
        printf("o valor do Y e: %f", y);
    }

    while(y<b){
        if (a>c)
            y=(a+b*b);
        else
            y=(b+c*a);
    }
    printf("o valor do Y e: %f", y);
    scanf("",&a);
    return 0; // return EXIT_SUCCESS;
}
