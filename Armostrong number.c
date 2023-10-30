#include<stdio.h>
int main()
{
int r,j=0,n,number,k,digit=0,l,i;
scanf("%d", &number);
k=number;
l=number;
while(number>0)
{
digit=digit+1;
number=number/10;
}
n=1;
while( l>0 )
{
r=l%10;
for(i=1;i<=digit;i++)
{
n= n*r;
}
j=j+n;
n=1;
l=l/10;
}
if(j == k)
{
printf(" %d is armstrong number",k);
}
else
{
printf(" %d is not armstrong number",k);
}
return 0;
}
