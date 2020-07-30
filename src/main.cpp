#include "stdio.h"
#include "SortingAlgorithm.h"
int main()
{
    int i, j;
    double p[14]={
        173.590,
        222.714,
        274.585,
        165.189,
        174.457,
        202.048,
        246.252,
        198.526,
        216.144,
        185.483,
        12.3,
        15.7,
        125.3,
        341.3
    };
    // Rbub(p,10);
    // for(int i = 0; i<=9;i++)
    // {
    //     printf("%7.3f \n",p[i]);
    
    // }
    RQuick(p,14);
    for(int i = 0; i<=13;i++)
    {
        printf("%7.3f \n",p[i]);
    
    }


    return 0;
}