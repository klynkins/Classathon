#include <cs50.h>
#include <math.h>
#include <stdio.h>

int sumPrimes(int num);
int isPrime(int num);

int main()
{
    int num = get_int("Find sum of all prime between 1 to : ");
    sumPrimes(num);
    isPrime(num);
}

int isPrime(int num) {
  for(int n = 2; n < num; n++) {
    if(num % n == 0) {
      return false;
    }
  }
  return true;
}

int sumPrimes(num){
  int total = 2;
  for(int n = 3; n <= num; n++) {
    if(isPrime(n)) {
      total += n;
    }
  }
  printf("%i\n", total);
  return 0;
}
