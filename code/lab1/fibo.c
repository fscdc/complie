#include<stdio.h>

#define HAHA 1//宏定义

int main()
{
    if(1==0) printf("this is a dead code");//这是一个死代码
    int a, b, i, t, n;
    a = 0;
    b = HAHA;
    i = 1;
    
    scanf("%d", &n);
    printf("%d\n", a);
    printf("%d\n", b);

    while(i<n)
    {
        t = b;
        b = a+b;
        printf("%d\n", b);//输出数值
        a = t;
        i = i+1;
    }
    
    return 0;
}
