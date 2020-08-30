#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int num,fact=0,i;
scanf("%d",&num);
for(i = 1;i <= num-1; i++)
    {
    if(num % i == 0)
    fact=fact+i;
    }
    if(num==fact){
    printf("perfect");
    }
    else{
    printf("not perfect");
    }
}
