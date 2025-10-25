//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>
 int main() {
     int a, b;
     char op;
     scanf("%d %d %c", &a, &b, &op);
     switch (op) {
         case '+':
             printf("%d\n", a + b);
             break;
         case '-':
             printf("%d\n", a - b);
             break;
         case '*':
             printf("%d\n", a * b);
             break;
         case '/':
             if (b != 0) {
                 printf("%d\n", a / b);
             }
             break;
         default:
             break;
     }
     return 0;
 }
