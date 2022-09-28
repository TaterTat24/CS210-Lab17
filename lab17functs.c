/** lab17functs.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/
#include <stdio.h>

int loadVals(int array[]){
    int i = 0;
    int value;
    
    printf("Enter a value (negative value to end): ");
    scanf("%d", &value);
    
    while (value >= 0) {
        array[i] = value;
        i = i + 1;
        printf("Enter a value (negative value to end): ");
        scanf("%d", &value);
    }
    return i;
}

void reversePrint(int array[], int arrayLength) {
    int i;
    for (i = arrayLength-1; i > -1; i = i - 2) {
        printf("%d\n", array[i]);
    }
}