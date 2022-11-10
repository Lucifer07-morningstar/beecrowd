#include<stdio.h>

int main()
{
    int t;
    double a[5]={1.50,2.50,3.50,4.50,5.50};
    double c;
    scanf("%d",&t);
    while(t--)
    {
        int p,q;
        scanf("%d %d",&p,&q);
        p = p%1000;
        c += a[p-1]*q;
    }
    printf("%.2lf\n",c);
}
