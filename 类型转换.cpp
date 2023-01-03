#include <stdio.h>
int main()
{
    int i;
    int j = 0;//计数器
    // int x;//一天的苹果数
    double aver;//平均每天的花费
    double sum = 0;//总费用
    for (i = 2; i <= 100; i *= 2)
    {
        sum = sum + i * 0.8;
        j++;
    }
    aver = sum / j;
    printf("%.2lf", aver);
    return 0;

}
