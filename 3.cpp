#include <iostream>
#include <string>

using namespace std;

int main()
{
    //1
    int num, sum = 0;
    cout << "Enter number: ";
    cin >> num;
    for (int i = num; i <= 500; ++i) 
    {
        sum += i;
    }
    cout << sum << endl;

    //2
    int num1, num2, sum1 = 1;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    for (int i = 0; i < num2; ++i) 
    {
        sum1 *= num1;
    }
    cout << sum1 << endl;

    //3
    int sum2 = 02;
    int count = 1000;

    for (int i = 1; i <= count; ++i)
    {
        sum2 += i;
    }
    double average = sum2 / double(count);
    cout << average << endl;

    //4
    int num3, sum3 = 1;
    cout << "Enter number from 1 to 20: ";
    cin >> num3;

    if (num3 <= 1 && num3 >= 20)
        cout << "Please, enter number from 1 to 20";

    for (int i = num3; i <= 20; ++i)
    {
        sum3 *= i;
    }
    cout << sum3 << endl;

    //5
    int num4, sum4 = 0;
    cout << "Enter number: ";
    cin >> num4;

    for (int i = 1; i <= 10; ++i) 
    {
        cout << num4 << " * " << i << " = " << num4 * i << endl;
    }

    //6
    int num5 = 0;

    for (int i = 100; i <= 999; ++i) 
    {
        int digit1 = i / 100;
        int digit2 = (i / 10) % 10;
        int digit3 = i % 10;

        if (digit1 == digit2 || digit1 == digit3 || digit2 == digit3) 
            ++num5;
    }
    cout << num5 << endl;

    //7
    int num6 = 0;

    for (int i = 100; i <= 999; ++i) 
    {
        int digit4 = i / 100;
        int digit5 = (i / 10) % 10;
        int digit6 = i % 10;

        if (digit4 != digit5 && digit4 != digit6 && digit5 != digit6)
            ++num6;
    }

    cout << num6 << endl;

    //8
    int num7;
    cout << "Enter number: ";
    cin >> num7;

    string resultStr;

    for (char digit : to_string(num7)) 
    {
        if (digit != '3' && digit != '6') 
            resultStr += digit;
    }

    cout << resultStr << endl;

    //9
    int numA;
    cout << "Enter number: ";
    cin >> numA;

    for (int numB = 1; numB <= numA; ++numB) 
    {
        if (numA % (numB * numB) == 0 && numA % (numB * numB * numB) != 0) 
            cout << numB << endl;
    }

    //10
    int number;
    cout << "Enter number: ";
    cin >> number;

    int sum10 = 0;
    int tempNumber = number;

    while (tempNumber != 0)    
    {
        sum += tempNumber % 10;
        tempNumber /= 10;
    }

    int result = sum10 * sum10 * sum10;

    cout << "The cube of the sum of the digits of a number " << number << " equal " << result << endl;

}





