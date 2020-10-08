#include<stdio.h>
  enum boolean{ true,false
  };
  enum boolean iseven(int x){
  	if(x%2==0)
  	{
  	return (true);
  	}
  	else
  	return (false);
  }

  void main(){

  	int n;
  	printf("enter a number");
  	scanf("%d",&n);
  	int result=iseven(n);
  	if (result==0)
  	printf("number is even");
  	else
  	printf("number is odd");
  }
