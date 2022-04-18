#include<stdio.h>
#include<stdbool.h>

int main()
{
    int value = 33;
    if (value) {
                    printf("True");
    }
    else {
                    printf("False");
    }

    /* int value = -23;
    if (value > 0) {
                printf("A ");
                if (value % 5 == 0) {
                        printf("B ");
               
        }         else {
                        printf("C ");
               
        }
    }
    else {
                printf("D ");
                if (value % 5 == 0) {
                        printf("E ");
               
        }         else {
                        printf("F ");
               
        }
    }*/
    int marks = 75;
    if (marks >= 80) {
                printf("good marks ");
    }
    if (marks >= 60) {
                printf("okay marks ");
    }
    if (marks >= 40) {
                printf("Pass Marks ");
    }

    int x;
    scanf("%d", &x);

    if (x%2 != 0) {
        printf("even %d",x);
    } else {
        printf("blah");
    }

    if(x >= 40) {
        printf("Congratulations!!!\n");
        printf("You Selected\n");
    } else {
        printf("Please Try Again\n");
    }

    if(x % 2 == 0) {
        printf("%d is Even\n", x);
    } else {
        printf("%d is Odd\n", x);
    }

    int num = -10;
    if(num < 0) {
        num = -num;
        printf("%d\n",num);
    }
    printf("%d\n",num);

    // Relational Operator
    int a = 5, b = 5, c = 10;
    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    int comp1 = a < b;
    printf("Compare = %d\n", comp1);

    int comp = 1; // 0 or 1
    if(comp) {
        printf("True");
    } else {
        printf("False");
    }

    bool condition = true;
    printf("%d\n", condition);

    if(condition) {
        printf("True");
    } else {
        printf("Flase");
    }


    
    return 0;
}
