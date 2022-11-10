#include<stdio.h>

int main()
{
    int i,x,a[100];
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<100;i++)
    {
        if(a[i]>a[0])
        {
            a[0]=a[i];
            x=i+1;
        }
    }
    printf("%d\n%d\n",a[0],x);

    return 0;
}
