#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d%d", &x,&y);
    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    if (x!= 0)
    {
        if(x%y==0)
        {
            printf("%d / %d = %d\n", x, y, x / y);
        }
        else
        {
            printf("%d chia %d duoc %d du %d\n", x, y,(x -(x%y))/y, x % y);
        }
    }
    else
    {
        printf("Khong hop le");
    }
    return 0;
}
