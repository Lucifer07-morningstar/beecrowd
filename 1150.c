#include<stdio.h>

int main()
{
    int x,z,i,s=0,c=1;
    scanf("%d %d",&x,&z);

    while(z>x)
    {
        scanf("%d",&z);
    }
    for(i=x;i<=z;i++)
    {
        s+=i;
        if(s>z)
            break;
        c++;
    }
    printf("%d\n",c);

    return 0;
}
