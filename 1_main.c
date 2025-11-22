//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    // 定义指针指向变量a
    int *p = &a;
    
    // 通过指针修改a的值（加10）
    *p += 10;
    
    // 打印结果
    printf("%d,%d\n", a, *p);
    
    return 0;
}
