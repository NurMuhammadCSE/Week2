#include<stdio.h>

int main()
{

    for(int I = 1; I<= 5; I++) {
        // printf("%d Hello World \n", I);
    }


    int x = 22;
    for(int I = 7; I <= x; I++) {
        // printf("%d Hello World \n", I);
    }

    // for(int I = 1; I != 10; I+=2) {
    // printf("%d Hello World \n", I);
    // }

    for(int I = 1, j = 9; I <= j; I++, j--) {
        // printf("%d %d \n", I, j);
    }

    int I = 1, j = 9;
    for(; I<= 5; I++) {
        printf("%d %d \n", I, j);
    }

    printf("At end %d %d \n", I, j);

    /* for(; ;){
        printf("Hello\n");
    }*/

    int n;
    scanf("%d", &n);

    int sum = 0;
    for(int I = 1; I <= n; I++) {
        sum += I;
        // printf("I = %d, Sum = %d\n", I, sum);
    }

    printf("Final Sum = %d\n", sum);


    int product = 1;
    for(int I = 1; I <= n; I++) {
        product *= I;
        // printf("I = %d, Sum = %d\n", I, product);
    }

    printf("Final Sum = %d\n", product);
    
    
    int sum2 = 0;
    printf("i\t\tsum \n");
    for(int I = 1; I <= n; I+=2) {
        sum2 += I; // sum2 += 2 * I;
        // printf("I = %d,\t\t Sum = %d\n", I, sum2);
    }

    printf("Final Sum = %d\n", sum2);
    printf("**************\n");
    for(int I = 1; I <= n-2; I++) {
        printf("*            *\n");
    }

    printf("**************\n");
    
    for(int I = n; I >= 0; I--) {
        printf("%d Hello World \n", I);
    }
    
    for (int i=10; i>0; i--) {
        printf("%d\n", i);
    }

    for (int i=1, j=1; i+j<=10; i++, j++) {
        printf("%d %d\n", i, j);
    }

    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i=1; i<=n; i++) {
                sum += i;
    }
    printf("%d", sum);

    for (int i=0; i<3; i++) {
                for (int j=0; j<5; j++) {
                        printf("*");
               
        }
    }
    return 0;
}
