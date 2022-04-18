#include<stdio.h>

int main()
{
    int n = 10;

    for(int row = 1; row <= n; row++) {
        for(int column = 1; column <= n; column++) {
            printf("%d\t", row*column);
        }
        printf("\n");
    }

    int n2;
    scanf("%d", &n2);

    int count = 0;
    for(int i = 1; i<=n2; i++) {
        if(n%i==0) {
            printf("%d ",i);
            count++;
        }
    }
    printf("Number of divisors = %d\n", count);

    int height, width;
    scanf("%d %d", &height, &width);

    for(int i = 0; i < width; i++) {
        printf("*");
    }
    printf("\n");

    for(int i = 0; i < height-2; i++) {
        printf("*");
        for(int j = 0; j < width-2; j++) {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    for(int i = 0; i < width; i++) {
        printf("*");
    }

    return 0;
}
