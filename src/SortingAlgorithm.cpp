#include "SortingAlgorithm.h"
/*
冒泡排序法
p 待排序序列的起始位置
n 待排序长度
*/
void Rbub(double p[], int n)
{
    int m, k, j, i;
    double d;
    k = 0;
    m = n - 1;
    while (k < m)
    {
        j = m-1;
        m =0;
        for (i = k; i <= j; i++)
        {
            if (p[i] > p[i + 1])
            {
                d = p[i];
                p[i] = p[i + 1];
                p[i + 1] = d;
                m = i;
            }
        }
        j = k + 1;
        k = 0;
        for (i = m; i >= j; i--)
        {
            if (p[i - 1] > p[i])
            {
                d = p[i];
                p[i] = p[i - 1];
                p[i - 1] = d;
                k = i;
            }
        }
    }
    return;
}