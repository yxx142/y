//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>
 int main() {
     int a, b;
     char op;
     // 提示输入格式
     printf("请输入两个整数和运算符（格式：a b 运算符）：");
     // 读取输入的两个整数和运算符
     scanf("%d %d %c", &a, &b, &op);
     
     // 根据运算符计算并输出结果
     switch(op) {
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
             // 判断除数是否为0
             if (b != 0) {
                 printf("%d\n", a / b);
             } else {
                 printf("除数不能为0\n");
             }
             break;
         default:
             printf("运算符无效\n");
     }
     
     return 0;
 }
