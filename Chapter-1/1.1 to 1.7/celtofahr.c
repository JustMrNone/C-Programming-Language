//cel = (5.0 / 9.0) * (fahr - 32.0);

#include <stdio.h>

int main()
{
    float cel, fahr;
    int choice;
    printf("cel to fahr or fahr to cel: \n");

    while(scanf("%d", &choice) != 1)
    {
        printf("please enter a valid choice");
        while ((choice = getchar()) != '\n' && choice != EOF); // Flush the input buffer
    }

    if (choice == 1)
    {
        printf("enter cel: \n");  

        while(scanf("%d", &cel) != 1)
        {
            printf("please enter digit\n");
            while((cel = getchar()) != '\n' && cel != EOF);
        }

        fahr = (9.0 / 5.0) * cel + 32.0;
        printf("temperature in fahr %6.2f\n", fahr);

    }
    else if (choice == 2)
    {
        printf("enter fahr: \n");

        while(scanf("%d", &fahr))
        {
            printf("please enter a digit\n");
            while((fahr = getchar()) != '\n' && fahr != EOF);
        }

        cel = (5.0 / 9.0) * (fahr - 32.0);
        printf("temperature in celcius %6.2f\n", cel);
    }
    else
    {
        printf("Invalid input. Please enter 1 for cel to fahr or 2 for fahr\n");
    }
    return 0;
}