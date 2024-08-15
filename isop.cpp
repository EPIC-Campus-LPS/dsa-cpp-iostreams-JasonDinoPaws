#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


// gets the string input
string GetString()
{
    string x;
    std::cin >> x;
    return x;
}

// gets the number input
int GetNumber()
{
    int x;
    cin >> x;

    if (cin.fail())
    {
        return -1;
    }
    return x;
}

// gets the factorial of given number
int factor(int num)
{
    int fin = 1;
    for (int i = 1; i <= num; i++)
    {
        fin *= i;
    }
    return fin;
}

// Checks if any given string is a palindrome
bool ispal(string text)
{
    int len = text.length()-1;

    for (int i = len; i > -1; i--)
    {
        if (text[i] != text[len-i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    // Gets user input
    cout << "What is your name: ";
    string name = GetString();
    cout << "Type a number: ";
    int num1 = GetNumber();
    cout << "Type another number: ";
    int num2 = GetNumber();
    cout << "Type a Celsius Temp: ";
    int temp = GetNumber();

    // prints out the input 
    cout << "\n\nHello " << name << "!\n";
    if (ispal(name))
    {
        cout << "Your name is a Palindrome";
    }
    else
    {
        cout << "Your name isn't a Palindrome";
    }

    cout << "\n\n The Sum of " << num1 << " + " << num2 << " is " << (num1+num2);
    cout << "\n" << num1 << ":";
        cout << "\n\tFactorial: " << factor(num1);
        cout << "\n\tIs even: " << (num1%2 == 0);
    
    cout << "\n" << num2 << ":";
        cout << "\n\tFactorial: " << factor(num2);
        cout << "\n\tIs even: " << (num2%2 == 0);

    cout << "\n\nTempature:\n\tCelius: " << temp << "\n\tFahrenheit: " << (temp *9/5)+32;
}