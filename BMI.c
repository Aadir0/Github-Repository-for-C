#include <stdio.h>
#include <stdlib.h>

int BMI(float weight, float height)
{
    if (height <= 0)
    {
        printf("Error: Height must be greater than zero.\n");
        return -1; // Indicate error
    }

    // Calculate BMI using the formula: BMI = (weight in kg) / (height in m)^2

    float bmi = weight / (height * height);

    // Determine BMI category
    if (bmi < 18.5)
    {
        printf("BMI = %.2f\n", bmi);
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf("BMI = %.2f\n", bmi);
        printf("Normal weight\n");
    }
    else if (bmi >= 25.0 && bmi < 29.9)
    {
        printf("BMI = %.2f\n", bmi);
        printf("Overweight\n");
    }
    else
    {
        printf("BMI = %.2f\n", bmi);
        printf("Obesity\n");
    }

    return 0; // Indicate success
}

int main()
{
    float weight, height;

    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    BMI(weight, height);

    return 0;
}