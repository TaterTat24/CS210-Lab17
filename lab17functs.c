/** lab17functs.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

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

int countVowels(char array[]) {
    int i;
    int arrayLength;
    int numberVowels;

    arrayLength = strlen(array);
    numberVowels = 0;

    for (i = 0; i < arrayLength; i++) {
        switch (array[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
                numberVowels = numberVowels + 1;
                break;
            default:
                break;
            }
        }
    
    return numberVowels;
}

int analyzeValues(double array[], int arraySize) {
    int i;
    double average = 0;
    double standardDeviation = 0;
    double sum = 0;
    double sumOfSquares = 0;
    int numberValues = 0;
    
    for (i = 0; i < arraySize; i++) {
        sum = sum + array[i];
    }
    
    average = sum / arraySize;
    printf("The average for this array is: %lf\n", average);
    
    for (int i = 0; i < arraySize; i++) {
        sumOfSquares += pow(array[i] - average, 2);
    }

    standardDeviation = sqrt(sumOfSquares / arraySize);
    printf("The standard deviation for this array is: %f\n", standardDeviation);
    for (int i = 0; i < arraySize; i++) {
        if (array[i] >= (average - standardDeviation) && array[i] <= (average + standardDeviation)) {
            numberValues = numberValues + 1;
        }
    }
    return numberValues;
}

int performOperation (char operation, int integer1, int integer2) {
    switch (operation) {
        case '+':
            return integer1 + integer2;
            break;
        case '-':
            return integer1 - integer2;
            break;
        case '*':
            return integer1 * integer2;
            break;
        case '/':
            return integer1 / integer2;
            break;
        default:
            return 0;
            break;
    }
}

void getMinMax(int integerArray[], int arraySize, int* intPointerMin, int* intPointerMax) {
    int i;
    *intPointerMin = integerArray[0];
    *intPointerMax = integerArray[0];

    for (i = 0; i < arraySize; i++) {
        if (*intPointerMin > integerArray[i]) {
            *intPointerMin = integerArray[i];
        }
        if (*intPointerMax < integerArray[i]) {
            *intPointerMax = integerArray[i];
        }   
    }
}