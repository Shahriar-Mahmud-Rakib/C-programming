#include<stdio.h>
int main()
{
int i,n,j,c=0;
scanf("%d", &n);
if(n==1 || n==2){
printf("The number is prime");
}
else{for(i=2;i<n;i++)
{
j=n%i;
if(j == 0)
{
c++;
}
}
if(c==0)
{
printf("The number is prime");
}
else {
printf("the number is not prime");
}
}
return 0;
}
