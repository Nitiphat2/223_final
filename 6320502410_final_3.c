#include<stdio.h>
int main()
{
    int n[3];
    int i,j,k,l,m;
    for(i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
        int g[n[i]][n[i]];
        for(j=0;j<n[i];j++)
        {
            for(k=0;k<n[i];k++)
            {
                scanf("%d",&g[i][k]);
            }
        }
        int a[n[i]],b[n[i]],c[2];
        for(j=0;j<n[i];j++)
        {
            for(k=0;k<n[i];k++)
            {
               a[j] = a[j] + g[i][k];
               b[j] = b[j] + g[k][i];
            }
            printf("%d %d",a[j],b[j]);
        }
    }
}
