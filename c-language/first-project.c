#include <stdio.h>
#include <math.h>
#include <unistd.h>

int rectangle_area()
{
    float width;
    float length;
    printf("Width: ");
    scanf("%f", &width);
    printf("Length: ");
    scanf("%f", &length);
    float area = width * length;
    printf("Result: %f\n", area);
    return 0;
}

int circle_area()
{
    float radius;
    printf("Radius: ");
    scanf("%f", &radius);
    float area = 3.14 * radius * radius;
    printf("Result: %f\n", area);
    return 0;
}

int cylinder_volume()
{
    float radius;
    printf("Radius: ");
    scanf("%f", &radius);
    float height;
    printf("Height: ");
    scanf("%f", &height);
    float volume = 3.14 * radius * radius * height;
    printf("Result: %f\n", volume);
    return 0;
}

int celsius_converter()
{
    float celsius;
    printf("Celsius degrees: ");
    scanf("%f", &celsius);
    float fahrenheit = celsius * 9 / 5 + 32;
    printf("Fahrenheit degrees: %f\n", fahrenheit);
    return 0;
}

int interest_calculator()
{
    char input;
    printf("Is it simple interest rate(s) or compound interest rate(c)?\n");
    scanf(" %c", &input);
    float principal, rate, time;

    switch (input)
    {

    case 's':
    {
        printf("Simple interest rate chosen.\n");
        printf("How much money was borrowed: ");
        scanf("%f", &principal);
        printf("Percentage of the rate: ");
        scanf("%f", &rate);
        printf("How many years: ");
        scanf("%f", &time);
        float simple_interest = (principal * rate * time) / 100;
        printf("This is the interest you would have to pay: %f\n", simple_interest);
        break;
    }
    case 'c':
    {
        printf("Compound interest rate chosen.\n");
        printf("How much money was borrowed: ");
        scanf("%f", &principal);
        printf("Percentage of the rate (%5 should be written 0.05): ");
        scanf("%f", &rate);
        printf("How many years: ");
        scanf("%f", &time);
        float compound_interest = principal * pow((1 + rate), time) - principal;
        printf("This is the interest you would have to pay: %f\n", compound_interest);
        break;
    }
    default:
    {
        while (getchar() != '\n')
            ;
        printf("Input not recognised. ");
        return interest_calculator();
    }
    }
    return 0;
}

int welcome()
{
    printf("This is a few calculators made as tests for what I have written. Do your best to create behaviour I wasn't... 'expecting', and tell me about it.\n");
    printf("The first calculator is for the area of a rectangle. The second for the area of a circle.\nThe third for the volume of a cylinder. The fourth for interests. \nThe fifth and last one is a converter from Celsius to Fahrenheit.\n\n");
    return 0;
}

int loops;
int main()
{
    int choice;
    if (loops < 1)
    {
        loops++;
        welcome();
    }
    printf("\n\nChoose a calculator: \n1.Area of rectangle. \n2.Area of a circle. \n3.Volume of a cylinder. \n4.Interest calculator. \n5.Celsius converter. \n0.Exit \nYour pick is: ");
    scanf(" %d", &choice);

    switch (choice)
    {
    case 1:
    {
        loops++;
        rectangle_area();
        sleep(1);
        return main();
    }
    case 2:
    {
        loops++;
        circle_area();
        sleep(1);
        return main();
    }
    case 3:
    {
        loops++;
        cylinder_volume();
        sleep(1);
        return main();
    }
    case 4:
    {
        loops++;
        interest_calculator();
        sleep(1);
        return main();
    }
    case 5:
    {
        loops++;
        celsius_converter();
        sleep(1);
        return main();
    }
    case 0:
    {
        return 0;
    }
    default:
    {
        loops++;
        return main();
    }
    }
}
