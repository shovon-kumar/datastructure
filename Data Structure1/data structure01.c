#include <stdio.h>

int main()
{
    int i,x,y,z,maximum,minimum,length=10,f=0,posstion;

    int a[100] = {5,10,15,20,25,30,35,40,45,50};
    int b[100];


    for(i=0; i<length; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    a[10] = 100;
    length++;
    for(i=0; i<length; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    a[5] = 50;
    for(i=0; i<length; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");


    scanf("%d",&x);
    for(i=0; i<length; i++)
    {
        if(a[i]==x)
        {
            f=1;
            posstion = i;
        }
    }

    if(f==1)
        printf("%d",posstion);
    else
        printf("Not Found");

    printf("\n");

    scanf("%d",&y);
    for(i=length-1; i>=3; i--)
    {
        a[i+1] = a[i];
    }

    a[3] = y;
    length++;
    for(i=0; i<length; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    scanf("%d",&z);
    for(i=z; i<length; i++)
    {
        a[i] = a[i+1];
    }
    length--;
    for(i=0; i<length; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    for(i=0; i<length; i++)
    {
        b[i] = a[i];
    }

    maximum = a[0];
    for(i=1; i<length; i++)
    {
        if(a[i]>maximum)
        {
            maximum = a[i];
        }
    }

    printf("%d \n",maximum);

    minimum = a[0];
    for(i=1; i<length; i++)
    {
        if(a[i]<minimum)
        {
            minimum= a[i];
        }
    }

    printf("%d \n",minimum);

    return 0;
}
