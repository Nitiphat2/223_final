#include<stdio.h>
int main()
{
    int n[3],check[3]={0,0,0};
    int i,j,k,l,m;
    for(i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        int g[n[i]][n[i]];
        for(j=0;j<n[i];j++)
        {
            for(k=0;k<n[i];k++)
            {
                scanf("%d",&g[j][k]);
            }
        }
        l=n[i]+n[i]+2;
        int a[l];
        for(j=0;j<l;j++)
        {
            a[j]=0;
            if(j<n[i])
            {
                for(k=0; k<n[i]; k++)
                {
                    a[j] = a[j] + g[j][k];
                }
            }
            else if(j<n[i]+n[i]&&j>=n[i])
            {
                for(k=0; k<n[i]; k++)
                {
                    a[j] = a[j] + g[k][j-n[i]];
                }
            }
            else if(j<n[i]+n[i]+1&&j>=n[i]+n[i])
            {
                for(k=0; k<n[i]; k++)
                {
                    a[j] = a[j] + g[k][k];
                }
            }
            else
            {
                m=n[i]-1;
                for(k=n[i]-1; k>=0; k--)
                {
                    a[j] = a[j] + g[m-k][k];
                }
            }
        }
        for(j=0;j<l;j++)
        {
            if(a[j]!=a[0])
            {
                check[i] = 1;
                break;
            }
        }
        printf("\n");
    }
}
