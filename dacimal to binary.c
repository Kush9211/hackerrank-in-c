#include <stdio.h>
int main()
{
    int n,i,k;
    printf("enter the  nunber");
    scanf("%d",&n);
    for(i=32;i>=0;i--)
    {
        k=n>>i;
        if(k&1)
        {
            printf("1");
        }
        else
            printf("0");
    }

}
