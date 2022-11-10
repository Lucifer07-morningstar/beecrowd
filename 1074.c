#include<stdio.h>

int main()
{
    int i,j,k;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        scanf("%d",&k);
        if(k==0)
        {
            printf("NULL\n");
        }
        else if(k<=0 && k%2==0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if(k<=0 && k%2==-1)
        {
            printf("ODD NEGATIVE\n");
        }
        else if(k>=0 && k%2==0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if(k>=0 && k%2!=0)
        {
            printf("ODD POSITIVE\n");
        }
    }

    return 0;
}
