#include<stdio.h>

int main()
{
    int n,i,j,t,C=0,R=0,S=0;
    char c;
    double x,y,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         scanf("%d %c",&j,&c);
        if(c=='C')
        {
            C+=j;
        }
        else if(c=='R')
        {
            R+=j;
        }
        else
        {
            S+=j;
        }
    }
    t=C+R+S;
    x=(C*100.00)/t;
    y=(R*100.00)/t;
    z=(S*100.00)/t;
    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",C,R,S);
    printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",x,y,z);
    return 0;
}
