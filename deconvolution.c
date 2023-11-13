#include<stdio.h>
int main()
{
    int i,j,x_size,y_size,h_size,x_o,y_o,h_o,sum=0,temp;
    printf("enter the number of samples output y(n):\n");
    scanf("%d",&y_size);
    printf("enter the number of impulse sample h(n):\n");
    scanf("%d",&h_size);

    x_size=y_size-h_size+1;

    int x[x_size],y[x_size],h[x_size];
    for(i=0;i<x_size;i++)
    {
        x[i]=0;
        y[i]=0;
        h[i]=0;
    }

    printf("enter the samples of y(n):\n");
    for(i=0;i<y_size;i++)
        scanf("%d",&y[i]);
    printf("enter the samples of h(n):\n");
    for(i=0;i<h_size;i++)
        scanf("%d",&h[i]);

    printf("enter origin of y(n):\n");
    scanf("%d",&y_o);
    printf("enter origin of h(n):\n");
    scanf("%d",&h_o);
    x_o=y_o-h_o;

    for(i=0;i<y_size;i++)
     {

        temp=i;
        sum=0;
        for(j=0;j<i;j++){

            sum=sum+(x[j]*h[temp]);
            temp--;
        }

        x[i]=(int)((y[i]-sum)/h[0]);

     }

    printf("samples values of input:");
    for(i=0;i<x_size;i++)
    {

        printf("%d ",x[i]);
    }

    printf("\norigin of the input:%d",x_o);





    return 0;
}
