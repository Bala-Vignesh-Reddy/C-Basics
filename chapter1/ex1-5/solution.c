#include <stdio.h>

float fah_to_cel(float fah); // fahrenheit to celsius function
float cel_to_fah(float cel); // celsius to fahrenheit function

int main(){
    int choice;
    printf("Enter your choice: (1-2)\n 1. Fahrenheit to Celsius\n 2. Celsius to Fahrenheit\n");
    scanf("%d", &choice);

    if (choice == 1){
        float fah, cel;
        printf("Enter the temperature in Fahrenheit:");
        scanf("%f", &fah);
        cel = fah_to_cel(fah);
        printf("%.1f Fahrenheit to %.1f Celsius.\n", fah, cel);
    }
    else if (choice == 2){
        float fah, cel;
        printf("Enter the temperature in Celsius:");
        scanf("%f", &cel);
        fah = cel_to_fah(cel);
        printf("%.1f Celsius to %.1f Fahrenheit.\n", cel, fah);
    }
    else {
        printf("Invalid choice\n");
    }
}

float fah_to_cel(float fah){
    float cel;
    cel = (fah - 32) * 5.0/9.0; 
    return cel;
}

float cel_to_fah(float cel){
    float fah;
    fah = (cel * 9.0/5.0) + 32;
    return fah;
}
