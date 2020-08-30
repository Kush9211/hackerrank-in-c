#include <stdio.h>
#include <string.h>
int main()
{
char lin[200];
int v,c,s,d,i;
v=c=s=d=0;
printf("enter the string   :  ");
fgets(lin, sizeof(lin), stdin);

for(i=0;lin[i]!='\0';i++)
{
if(lin[i]=='a'|| lin[i]=='e' || lin[i]=='i' || lin[i]=='o' || lin[i]=='u')
    {
        lin[i]=lin[i]-32;
        v++;
    }

else if(lin[i]=='A' || lin[i]=='E' || lin[i]=='I' || lin[i]=='O' || lin[i]=='U')
    {
         lin[i]=lin[i]+32;
        v++;

    }
else if(lin[i]>='a' && lin[i]<='z')
    {
        c++;
        lin[i]=lin[i]-32;
    }

else if (lin[i]>='A' && lin[i]<='Z')
    {
        c++;
        lin[i]=lin[i]+32;
    }



else if(lin[i]>='0' && lin[i]<='9')
{
++d;

}

else if (lin[i]==' '){
++s;
}

}
printf("\nno of vouels:\t %d \nno of consonats: \t%d \nno of digits: \t%d \nno of spacs: \t%d \nManipulated sring:\t%s",v,c,d,s,lin);
}
