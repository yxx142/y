//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>
 int main() {
     int a, b, c;
     scanf("%d %d %d", &a, &b, &c);
     if (a + b > c && a + c > b && b + c > a) {
         printf("可以组成三角形\n");
     } else {
         printf("不能组成三角形\n");
     }
     return 0;
 }
