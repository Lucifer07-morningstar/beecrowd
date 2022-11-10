#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int k,i;
        scanf("%d",&k);
        while(k--)
        {
            scanf("%d",&i);
            if(i==1)
            {
                printf("Rolien\n");
            }
            else if(i==2)
            {
                printf("Naej\n");
            }
            else if(i==3)
            {
                printf("Elehcim\n");
            }
            else if(i==4)
            {
                printf("Odranoel\n");
            }
        }
    }
}
