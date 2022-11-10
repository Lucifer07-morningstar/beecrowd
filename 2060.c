#include<stdio.h>

int main()
{
    int n,i,j,k,a=0,b=0,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);

        if(j%2==0)
        {
            a++;
        }
        if(j%3==0)
        {
            b++;
        }
        if(j%4==0)
        {
            c++;
        }
        if(j%5==0)
        {
            d++;
        }


    }
    printf("%d Multiplo(s) de 2\n",a);
    printf("%d Multiplo(s) de 3\n",b);
    printf("%d Multiplo(s) de 4\n",c);
    printf("%d Multiplo(s) de 5\n",d);
}
