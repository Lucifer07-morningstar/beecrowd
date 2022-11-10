#include <stdio.h>
int main() {
    int c=0,i=10;
    char s[31];
    while(i--)
    {
        c++;
        scanf("%s",s);
        if(c==3 || c==7 || c==9)
        {
            printf("%s\n",s);
        }
    }
    return 0;
}
