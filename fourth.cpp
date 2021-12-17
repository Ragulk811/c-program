#include <iostream>
using namespace std;

int main()
{
     int n, nu, d, r = 0;

     cout << "Enter a positive number: ";
     cin >> nu;

     n = nu;

     do
     {
         d = nu % 10;
         r = (r * 10) + d;
         nu = nu / 10;
     } while (nu != 0);

     cout << " The reverse of the number is: " << r << endl;

     if (n == r)
         cout << " is palindrome.";
     else
         cout << "is not a palindrome.";

    return 0;
}