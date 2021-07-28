#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

string tocar(int);
int isPrime(int, int);
int primeGenerator(int);
int sumOfPrimes(int, int);

int fastExponent(int base, int exponent, int accumulator)
{
    if(exponent == 0)
        return accumulator;
    else if(exponent % 2 == 0)
        return fastExponent(base * base, exponent/2, accumulator);

    return fastExponent(base, exponent-1, base * accumulator);
}

int main()
{
    int num;

    cout << "Enter num: "; cin >> num;
    cout << isPrime(num,2) << endl;

    cout << "Enter x: "; int x; cin >> x;
    cout << "Enter y: "; int y; cin >> y;

    cout << "Sum of primes within this range: ";
    int sum = sumOfPrimes(x,y);
    cout << " = " << sum << endl;
/*
    int counter = 1;
    for(int prime = primeGenerator(x); prime <= y; prime = primeGenerator(prime+1))
        cout << "Prime#" << counter++ << ": " << prime << endl;

    cout << "PrimeCount(" << x << "," << y << "): " << counter << endl;
*/
    return 0;
}

/*
int sumOfPrimes(int x, int y)
{
    if(x==y)
        return isPrime(x, 2);

    return isPrime(x, 2) + sumOfPrimes(x+1, y);
}
*/

int sumOfPrimes(int x, int y)
{
    if(x==y)
    {
        cout << (isPrime(x,2) == 0 ? "": tocar(isPrime(x,2)) );
        return isPrime(x,2);
    }
    cout << (isPrime(x,2) == 0 ? "": (tocar(isPrime(x,2))+"+") );

    return isPrime(x, 2) + sumOfPrimes(x+1, y);
}

bool IsHypotenuse(int n)
{
    int count, counter; bool found = false;
    for(count = 3; count < n; count++)
    {
        for(counter = count+1; counter < n; counter++)
        {
            if(fastExponent(count, 2, 1) + fastExponent(counter, 2, 1))
            {
                found = true;
                break;
            }
        }
        if(found)
            break;
    }
    cout << ( (count > counter) ? "Long": "Short") << " leg: " << count << endl;
    cout << ( (count < counter) ? "Long": "Short") << " leg: " << counter << endl;

    cout << "Hypotenuse: " << n << endl;
}
