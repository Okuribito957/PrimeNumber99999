#include <stdio.h>

int main() {
    int i,j,sign;
    int a = 88974;
    int flag;
    for (i = 2; i <= 12000; i++){
        sign = 0;
        for (j = 2; j < i; j++) {
            if (i % j == 0){
                sign = 1;
                break;
            }
        }
        if (sign == 0){
            //printf("%d",i);
            flag = 1;
        } else{
            flag = 0;
        }

        //第一行
        printf("if (n == %d){",a++);
        printf("\n");
        //第二行
        printf("\t");
        printf("printf(");
        printf("\"");
        printf("%%%");
        printf("d");
        printf("%%%");
        printf("s");
        printf("\"\,%d",a-1);
        printf("\,");
        printf("\"");
        if (flag == 1){
            printf("is a prime\"");
        } else{
            printf("is not a prime\"");
        }
        printf(")");
        printf("\;");
        //第三行
        printf("\n");
        printf("\t");
        printf("return ");
        if(flag == 1){
            printf("1");
        } else{
            printf("0");
        }
        printf("\;");
        //第四行
        printf("\n");
        printf("\}");


        printf("\n");

    }
    return 0;
}
