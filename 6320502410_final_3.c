#include<stdio.h>
int main()
{
    int n[3];
    int i,j,k,l,m;
    for(i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("\n\n");
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
        int a[n[i]],b[n[i]],c[2];
        for(j=0;j<n[i];j++)
        {
            a[j]=0;
            b[j]=0;
            for(k=0;k<n[i];k++)
            {
               a[j] = a[j] + g[j][k];
               b[j] = b[j] + g[k][j];
            }
        }
        c[0]=0;
        c[1]=0;
        l=n[i]-1;
        for(k=0;k<n[i];k++)
        {
            c[0] = c[0] + g[0+k][k];
            c[1] = c[1] + g[l-k][k];
        }
        printf("%d",c[1]);
    }
}
