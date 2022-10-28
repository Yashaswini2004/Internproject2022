#include<stdio.h>
int main()
{
    int n,i,multi=0;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        multi=(n*i);
        printf("%d\n",multi);

    }

    return 0;
}
