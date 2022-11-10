#include<stdio.h>

int main()
{
    int x,y,s=0,temp;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    for(int i=x;i<=y;i++)
    {
        if(i%13!=0)
        {
            s+=i;
        }
    }
    printf("%d\n",s);
}
