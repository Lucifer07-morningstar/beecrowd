#include<stdio.h>
int main()
{
    int x,i,j;
    double n,s,c,avg;
    s=c=0;
    while(1)
    {
        for(;;)
        {
            scanf("%lf",&n);
            if(n>=0 && n <=10)
            {
                s+=n;
                c++;
            }
            else
            {
                printf("nota invalida\n");
            }
            if(c==2)
            {
                s/=2;
                printf("media=%.2lf\n",s);
                break;
            }
        }
        c=0;
        s=0;
            for(;;)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d",&x);
                if(x==1 || x==2)
                    break;
            }
            if(x==1)
                continue;
            else if(x==2)
                break;
        }


}



