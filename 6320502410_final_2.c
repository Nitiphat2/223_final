#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k[n],max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
        if(k[i]>max)
        {
            max = k[i];
        }
    }
    int g[max];
    for(i=0;i<max;i++)
    {
        g[i]=0;
    }
    for(i=0;i<n;i++)
    {
        g[k[i]-1]=g[k[i]-1]+1;
    }
    max = 0;
    for(i=0;i<max;i++)
    {
        if(g[i]>max)
        {
            max = k[i];
        }
    }
    for(i=0;i<max;i++)
    {
        if(g[i] == max)
        {
            printf("%d",i+1);
        }
    }
}
