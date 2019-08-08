#include<stdio.h>
int main()
{
int a,diff,d=0;
float b;
scanf("%d%f",&a,&b);
b=b/100;
while(1)
{
d=d+a;
diff=a*b;
if(diff==0)
break;
a=a-diff;
}
printf("%d",d);
return(0);
}
