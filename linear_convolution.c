#include<stdio.h>
int main()
{
    int i,j,x_size,h_size,y_size,x_o,h_o,y_o;
    printf("number of input samples: \n");
    scanf("%d",&x_size);
    printf("number of impulse samples: \n");
    scanf("%d",&h_size);
    y_size=x_size+h_size-1;
    int x[y_size],h[y_size],y[y_size];
    for(i=0;i<y_size;i++)
    {
        x[i]=0;
        h[i]=0;
        y[i]=0;
    }
    printf("enter input samples: \n\n");
    for(i=0;i<x_size;i++)
        scanf("%d",&x[i]);
    printf("\n\n enter the impulse samples: \n");
    for(i=0;i<h_size;i++)
        scanf("%d",&h[i]);
    printf("enter the origin of x(n): \n\n");
    scanf("%d",&x_o);
    printf("\n\n enter the origin of impulse: \n");
    scanf("%d",&h_o);
    y_o=x_o+h_o;

    /*convolution_operation_start_below*/
    for(i=0;i<y_size;i++)
    {
        y[i]=0;
        for(j=0;j<=i;j++)
        {
            y[i]=y[i]+(x[j]*h[i-j]);
        }
    }
    //display_output
    printf("\n sample value of output:");
    for(i=0;i<y_size;i++)
    {
        printf("%d ",y[i]);
    }
printf("the origin point of output:%d\n",y_o);

    return 0;
}
