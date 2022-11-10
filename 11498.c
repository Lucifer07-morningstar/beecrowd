#include<stdio.h>

int main()
{
    int k;
    while(scanf("%d",&k))
    {
        if(k==0)
            break;
        int n,m;
        scanf("%d %d",&n,&m);
        while(k--)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            if(x==n || y==m)
            {
                printf("divisa\n");
            }
            else if(x<n && y>m)
            {
                printf("NO\n");
            }
            else if(x>n && y >m)
            {
                printf("NE\n");
            }
            else if(x<n && y<m)
            {
                printf("SO\n");
            }
            else if(x>n && y<m)
            {
                printf("SE\n");
            }
        }
    }
}
