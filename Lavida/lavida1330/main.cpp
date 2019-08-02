#include <cstdio>
#include <cstring>

#define	GAL_TO_LITERS	(3.7854)
#define	LITERS_TO_GAL	(0.2642)
#define	LB_TO_KG		(0.4536)
#define	KG_TO_LB		(2.2046)

double switchUnit(double value, char unit[])
{
    if(!strcmp(unit, "g"))
    {
        value *= GAL_TO_LITERS;
        strcpy(unit, "l");
    }
    else if(!strcmp(unit, "l"))
    {
        value *= LITERS_TO_GAL;
        strcpy(unit, "g");
    }
    else if(!strcmp(unit, "lb"))
    {
        value *= LB_TO_KG;
        strcpy(unit, "kg");
    }
    else if(!strcmp(unit, "kg"))
    {
        value *= KG_TO_LB;
        strcpy(unit, "lb");
    }

    return value;
}

int main()
{
    int testCase, temp;
    scanf("%d", &testCase);
    temp = testCase;

    while(testCase--)
    {
        double value = 0;
        char unit[5] = {0};

        scanf("%lf %s", &value, unit);
        
        value = switchUnit(value, unit);

        printf("%d %.4lf %s\n", temp-testCase, value, unit);
    }
}