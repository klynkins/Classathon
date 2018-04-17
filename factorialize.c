#include <cs50.h>
#include <stdio.h>

long long factorialize (int);

int main(void)
{
        int n = get_int("Number: ");
        long long int result = factorialize(n);
        printf("%lld", result);
}

long long factorialize(int f)
{
    int fact = 1;

    for(int i = 1; i <= f; i++)
    {
        fact = i * factorialize(f - 1);
    }
    return fact;
}