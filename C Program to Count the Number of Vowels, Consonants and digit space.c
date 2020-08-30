#include <stdio.h>
int main()
{
char lin[200],ch;
int v,c,d,s,i;
v=c=d=s=0;
printf("enter line");
fgets(lin, sizeof(lin), stdin);
for(i=0;lin[i]!='\0';i++)
{
if(lin[i]=='a'|| lin[i]=='e' || lin[i]=='i' || lin[i]=='o' || lin[i]=='u' || lin[i]=='A' || lin[i]=='E' || lin[i]=='I' || lin[i]=='O' || lin[i]=='O')
{
++v;
}
else if((lin[i]>='a')&&(lin[i]<='z')||(lin[i]>='A')&&(lin[i]<='Z'))
{
++c;
}
else if(lin[i]>='0' && lin[i]<='9')
{
++d;

}

else if (lin[i]==' '){
++s;
}

}
printf("\n%d\n%d\n%d\n%d\n%s",v,c,d,s,lin);
}
