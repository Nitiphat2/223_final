#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j,k;
    while(n%10 != m)
    {
        if(n%10 != m)
        {
            n=n+1;
        }
    }
    printf("%d",n);
}
