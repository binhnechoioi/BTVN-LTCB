#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nam = 2014;
    int rate;
    scanf("%d", &rate);
    int gdp2014 = 125;
    int gdp = gdp2014;
    printf("          Nam            GDP\n");
    while(gdp < gdp2014*2)
    {
        printf("%14d%14d\n", nam,gdp);
        gdp += gdp*(rate/100.0);
        nam++;
    }
    return 0;
}
