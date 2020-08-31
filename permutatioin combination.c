#include<stdio.h>
long factorial(int);
long permutation(int,int);
long combination(int,int);
int main()
{
    int n, r;
   long ncr, npr;
printf("entr the value of n and r");
scanf("%d%d",&n,&r);
ncr=combination(n,r);
npr=permutation(n,r);
printf("%dC%d = %ld\n", n, r, ncr);
printf("%dP%d = %ld\n", n, r, npr);
return 0;
}
long permutation(int n,int r)
{
long result;
result=factorial(n)/(factorial(r)*factorial(n-r));
return result;
}

long combination(int n,int r)
{
long result;
result=factorial(n)/factorial(n-r);
return result;
}
long factorial(int n)
{
int i;
long result=1;
for(i=1;i<=n;i++)
result=result*i;
return result;
}

