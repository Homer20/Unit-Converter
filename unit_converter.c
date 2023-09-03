#include <stdio.h>

void temperatureConverter();
void currencyConverter();
void massConverter();

int main() {
    char category;
    printf("Here is a list of conversions to choose from: \n");
    printf("Temperature (T), Currency (C), Mass (M) \n");
    printf("Please enter the letter for your conversion: \n");
    scanf(" %c", &category);  // Added a space before %c to consume the newline character

    switch (category) {
        case 'T':
            temperatureConverter();
            break;

        case 'C':
            currencyConverter();
            break;

        case 'M':
            massConverter();
            break;

        default:
            printf("Please enter a valid category.\n");
    }

    return 0;
}

void temperatureConverter() {
    int tempChoice;
    printf("This is the temperature converter. \n");
    printf("Here is a list of conversions to choose from: \n");
    printf("Enter 1 for Fahrenheit to Celsius. \n");
    printf("Enter 2 for Celsius to Fahrenheit. \n");
    scanf("%d", &tempChoice);

    if (tempChoice == 1) {
        int userInputF;
        printf("Please enter the Fahrenheit degree: \n");
        scanf("%d", &userInputF);
        int fahrenheitToCelcius = ((userInputF - 32) * 5 / 9);
        printf("Celsius: %d\n", fahrenheitToCelcius);
    } else if (tempChoice == 2) {
        int userInputC;
        printf("Please enter the Celsius degree: \n");
        scanf("%d", &userInputC);
        int celciusToFahrenheit = (userInputC * 9 / 5) + 32;
        printf("Fahrenheit: %d\n", celciusToFahrenheit);
    } else {
        printf("Please enter a valid choice. \n");
    }
}

void currencyConverter() {
    int currencyChoice;
    printf("This is the currency converter. \n");
    printf("Here is a list of conversions to choose from: \n");
    printf("Enter 1 for CAD to INR. \n");
    printf("Enter 2 for CAD to USD. \n");
    printf("Enter 3 for CAD to GBP. \n");
    scanf("%d", &currencyChoice);

    if (currencyChoice == 1) {
        int userinputCADtoINR;
        printf("Enter the CAD amount: \n");
        scanf("%d", &userinputCADtoINR);
        float CADtoINR = userinputCADtoINR * 60.65;
        printf("INR: %.2f rupees\n", CADtoINR);
    } else if (currencyChoice == 2) {
        int userinputCADtoUSD;
        printf("Enter the CAD amount: \n");
        scanf("%d", &userinputCADtoUSD);
        float CADtoUSD = userinputCADtoUSD * 0.73;
        printf("USD: %.2f\n", CADtoUSD);
    } else if (currencyChoice == 3) {
        int userinputCADtoGBP;
        printf("Enter the CAD amount: \n");
        scanf("%d", &userinputCADtoGBP);
        float CADtoGBP = userinputCADtoGBP * 0.58;
        printf("GBP: %.2f\n", CADtoGBP);
    } else {
        printf("Please enter a valid choice. \n");
    }
}

void massConverter() {
    int massChoice;
    printf("This is the mass converter. \n");
    printf("Here is a list of conversions to choose from: \n");
    printf("Enter 1 for Kilogram to Pound. \n");
    printf("Enter 2 for Pound to Kilogram. \n");
    scanf("%d", &massChoice);

    if (massChoice == 1) {
        int userinputKilogram;
        printf("Please enter the Kilogram amount: \n");
        scanf("%d", &userinputKilogram);
        float kilogramToPound = userinputKilogram * 2.205;
        printf("Pounds: %.2f\n", kilogramToPound);
    } else if (massChoice == 2) {
        int userinputPound;
        printf("Please enter the Pounds amount: \n");
        scanf("%d", &userinputPound);
        float poundToKilogram = userinputPound / 2.205;
        printf("Kilograms: %.2f\n", poundToKilogram);
    } else {
        printf("Please enter a valid choice. \n");
    }
}
