#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j=1,k=m;
    n++;
    while(n%10 != m)
    {
        n++;
    }
    printf("%d",n);
    return 0;
}
