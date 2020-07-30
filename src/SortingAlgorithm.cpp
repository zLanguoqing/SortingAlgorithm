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

static void Rsplit(double p[],int n,int *m)
{
    int i,j,k,l;
    double t;
    i =0;j = n-1;
    k = (i+j)/2;
    if((p[i] >= p[j])&&(p[j]>=p[k])) l =j;
    else
    {
        if((p[i]>=p[k])&&(p[k]>=p[j])) l=k;
        else
        {
            l=i;
        }
        
    }
    t = p[l];
    p[l]=p[i];
    while (i !=j)
    {
        while ((i <j) && (p[j] >=t))
        {
            j = j-1;
        }
        if(i <j)
        {
            p[i] = p[j];
            i = i+1;
            while ((i <j) && (p[i]<=t))
            {
                i +=1;
            }
            if(i < j)
            {
                p[j] = p[i];
                j -=1;
            }
            
        }
        
    }
    p[i] = t;
    *m =i;
    return;
    
}

/*
快速排序法
p 待排序的起始位置
n 待排序的长度
*/
void RQuick(double p[],int n)
{
    int m, i0,*i;
    double *s;
    i = &i0;
    if(n >10)
    {
        Rsplit(p,n,i);
        m = i0;
        RQuick(p,m);
        s = p+(i0+1);
        m = n-(i0+1);
        RQuick(s,m);
    }
    else
    {
        Rbub(p,n);
    }
    return;
}