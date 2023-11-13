#include<stdio.h>
int main()
{
    int i,j,x1_size,x2_size,y_size,term,sum;
    printf("outer circle sample number:\n");
    scanf("%d",&x1_size);
    printf("inner circle sample number:\n");
    scanf("%d",&x2_size);
    if(x1_size>x2_size)
    {
        y_size=x1_size;
    }
    else
    {
        y_size=x2_size;
    }
    int x1[y_size],x2[y_size],y[y_size];
    for(i=0;i<y_size;i++)
    {
        x1[i]=0;
        x2[i]=0;
        y[i]=0;
    }
    printf("enter outer circle sample:\n");
    for(i=0;i<x1_size;i++)
    {
        scanf("%d",&x1[i]);
    }
    printf("enter inner circle sample:\n");
    for(i=0;i<x2_size;i++)
    {
        scanf("%d",&x2[i]);
    }
    for(i=0;i<y_size;i++)
    {
        term=i;
        sum=0;
        for(j=0;j<y_size;j++)
        {
            sum=sum+x1[j]*x2[term];
            term--;
            if(term<0)
            {
                term=y_size-1;
            }
        }
        y[i]=sum;
    }
    printf("result samples :\n");
    for(i=0;i<y_size;i++)
    {
        printf("%d ",y[i]);
    }


return 0;
}
