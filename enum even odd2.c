#include<stdio.h>
  enum boolean{ true,false
  };
  enum boolean iseven(int x){
      return x%2==0 ? true: false;
  }

  void main(){

  	int n;
  	printf("enter a number");
  	scanf("%d",&n);
  	int result=iseven(n);
  	(result==0)? printf("even"):printf("odd");
  }
