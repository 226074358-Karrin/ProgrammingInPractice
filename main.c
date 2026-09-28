#include <stdio.h>

int main()
{
    // Variables to store the captured information
    char municipality[50];
    char mayor[50];
    int population;

    // 1. Display the system title
    printf("========================================\n");
    printf("   Municipal Financial Management System\n");
    printf("========================================\n\n");

    // 2. Display the welcome message
    printf("Welcome to Windhoek Municipality\n\n");

    // 3. Prompt the user to enter the required information
    printf("Enter Municipality Name: ");
    scanf("%49s", municipality);

    printf("Enter Mayor's Name: ");
    scanf("%49s", mayor);

    printf("Enter Population: ");
    scanf("%d", &population);

    // 4. Display the captured information in a neatly formatted report
    printf("\n========================================\n");
    printf("           MUNICIPALITY REPORT\n");
    printf("========================================\n");
    printf("Municipality : %s\n", municipality);
    printf("Mayor        : %s\n", mayor);
    printf("Population   : %d\n", population);
    printf("========================================\n");

    return 0;
}