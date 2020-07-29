#include "stdio.h"
#include "SortingAlgorithm.h"
int main()
{
    int i, j;
    double p[10]={
        173.590,
        222.714,
        274.585,
        165.189,
        174.457,
        202.048,
        246.252,
        198.526,
        216.144,
        185.483
    };
    Rbub(p,10);
    for(int i = 0; i<=9;i++)
    {
        printf("%7.3f \n",p[i]);
    
    }

    return 0;
}