#include <stdio.h>
//#include <stdlib.h>

//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//int main()
//{
//    double d= 1E10;
//    printf("%lf\n",d);
//    return 0;
//}
void erjinzhi(int n)//打印n的二进制序列
{
    if(n==0||n==1)
        printf("%d",n);
    else
    {
        q(n>>1);
        printf("%d",n&1);
    }
}
int main()
{
    int n=9;
    float *pFloat=(float*)&n;
    printf("n=%d\n",n);//00000000000000000000000000001001
    printf("*pfloat=%f\n",*pFloat);//0 00000000 00000000000000000001001;
    erjinzhi(n);
    printf("\n");
    *pFloat=9.0;//0 10000010 00100000000000000000000
    printf("num=%d\n",n);//0 10000010 00100000000000000000000
    printf("*Pfloat=%f\n",*pFloat);//0 10000010 00100000000000000000000
    erjinzhi(n);
}
