#include <stdio.h>
int main()
{
    int denominator,flag,i,n;
    double item,sum;
    printf("Enter n:");
    scanf("%d",&n);
    flag = 1;
    denominator = 1;
    item = 1;
    sum = 0;
    for( i = 1; i <= n; i++) {
        sum = sum + item;
        flag = -flag;
        denominator += 2;
        item = flag*1.0/denominator;
    }
    printf("sum=%f\n", sum);
    return 0;

}