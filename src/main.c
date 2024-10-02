#include <stdio.h>
#include <stdlib.h>

int main() {
    int Age, Amount;
    
    printf("Enter age: ");
    scanf("%d", &Age);
    
    if (Age >= 21) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
        return 0; // Exit early if the age condition is not met
    }

    printf("Enter amount: ");
    scanf("%d", &Amount);
    
    if (Amount >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }
    
    return 0;
}