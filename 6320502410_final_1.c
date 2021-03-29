#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int i=0,j,k,v;
    n++;
    while(i!=1)
    {
        j=n;
        v=0;
        while(j>=1)
        {
            k=j%10;
            if(k == m)
            {
                i=1;
                break;
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
