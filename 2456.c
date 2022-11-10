#include<stdio.h>

int main()
{
    int i,n[5],j=0,k=0;

    for(i=0; i < 5;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=1;i<=5;i++)
    {
        if(n[i] > n[i-1])
        {
            j+=1;
        }
        if(n[i] < n[i-1])
        {
            k+=1;
        }

    }
    if(j==4)
        printf("C");
    else if(k==4)
        printf("D");
    else
        printf("N");
}
