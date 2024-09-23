#include <stdio.h>
#include <math.h>

#define ABSOLUTE_ZERO_F -459.67
#define ABSOLUTE_ZERO_C -273.15


float convert(int choice, float value);

int main()
{
    int choice;
    printf("choose 1 to f to c and 2 to c to f: ");
    if(scanf("%d", &choice) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        return 1; 
    }
    
    float thevalue;
    printf("enter a value: ");
    if(scanf("%f", &thevalue) != 1)
    {
        printf("Invalid input. Please enter a valid temperature value.\n");
        return 1; // Exit with error
    }
        
    float ans = convert(choice, thevalue);
    if(!isnan(ans))
    {
    if (choice == 1)
    {
        printf("%.2f °F is %f °C\n", thevalue, ans);
    }
    else if (choice == 2)
    {
        printf("%.2f °C is %f °F\n", thevalue, ans);
    }
    }
    return 0;
}

float convert(int choice, float value)
{
    if(choice == 1)
    {   
        if(value < ABSOLUTE_ZERO_F)
        {
            printf("You Can Not Go Bellow Absolute Zero!");
            return NAN;
        }
        float cel = (5.0 / 9.0) * (value - 32.0);
        return cel;

    }
    else if(choice == 2)
    {
        if(value < ABSOLUTE_ZERO_C)
        {
            printf("You Can Not Go Bellow Absolute Zero!");
            return NAN;
        }
        float fahr = (value * 9.0 / 5.0) + 32;
        return fahr;
        
    }
    else
    {
        printf("Invalid choice");
        return NAN;
    }
}