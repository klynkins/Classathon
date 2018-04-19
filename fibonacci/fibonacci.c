#include <cs50.h>
#include <stdio.h>

int sumFibs(int num);

int main(void) {
    int num = get_int("Enter a number: ");
    printf("%i\n", sumFibs(num));
}

int sumFibs(int num) {
    int previousNumber = 0;
    int currentNumber = 1;
    int result = 0;

    while(currentNumber <= num) {
        if(currentNumber % 2 != 0) {
            result += currentNumber;
        }

        currentNumber += previousNumber;
        previousNumber = currentNumber - previousNumber;
    }
    return result;
}

