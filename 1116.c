#include <stdio.h>
int main()
{
    int i, n;
    float X, Y;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%f %f", &X, &Y);

        if (X == 0 && Y == 0) printf("0.0\n");

        else if (Y == 0) printf("divisao impossivel\n");

        else if (X == 0) printf("0.0\n");

        else printf("%.1f\n", X / Y);
    }

    return 0;
}
