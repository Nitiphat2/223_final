#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int i=0,j,k;
    n++;
    while(i!=1)
    {
        j=n;
        while(j>1)
        {
            k=j%10;
            if(k == m)
            {
                i=1;
            }
            j=j/10;
        }
        if(i==0)
        {
            n++;
        }
    }
    printf("%d",n);
    return 0;
}
