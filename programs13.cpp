#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main()
{
    clrscr();
    int choice = 0, a, b, c, n1, n2, f1, f2, s, r, year, num, number;
    float PI = 3.14, p, r, t;
    char ch;
    cout << "1. Hello world" << endl;
    cout << "2. Addition" << endl;
    cout << "3. Subtraction" << endl;
    cout << "4. Multiplication" << endl;
    cout << "5. Division" << endl;
    cout << "6. Division" << endl;
    cout << "7. Swap Two Variable " << endl;
    cout << "8. Swap Two Variable without using third" << endl;
    cout << "9. Swap Three Variable" << endl;
    cout << "10. Fibonacci Series" << endl;
    cout << "11. Square of a Number" << endl;
    cout << "12. Area of a Triangle" << endl;
    cout << "13. Area of a Circle" << endl;
    cout << "14. Simple Interest" << endl;
    cout << "15. Year is Leap or Not" << endl;
    cout << "16. Vowel or Not" << endl;
    cout << "17. Print Table" << endl;
    cout << "18. Print Prime Number" << endl;
    cout << "Enter Choice: ";
    cin >> choice;
    if (choice)
    {
        switch (choice)
        {
        case 1:
            cout << "Hello, World!" << endl;
            break;

        case 2:
            int num1, num2, sum;
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            sum = num1 + num2;
            cout << "Sum: " << sum << endl;
            break;

        case 3:
            int num3, num4, diff;
            cout << "Enter two numbers: ";
            cin >> num3 >> num4;
            diff = num3 - num4;
            cout << "Difference: " << diff << endl;
            break;

        case 4:
            int num5, num6, product;
            cout << "Enter two numbers: ";
            cin >> num5 >> num6;
            product = num5 * num6;
            cout << "Product: " << product << endl;
            break;

        case 5:
            float num7, num8, division;
            cout << "Enter two numbers: ";
            cin >> num7 >> num8;
            division = num7 / num8;
            cout << "Division: " << division << endl;
            break;

        case 6:
            int a, b, c;
            cout << "Enter two numbers to swap: ";
            cin >> a >> b;
            c = a;
            a = b;
            b = c;
            cout << "Before Swap: a = " << a << ", b = " << b << endl;
            cout << "After Swap: a = " << a << ", b = " << b << endl;
            break;

        case 7:
            int a, b;
            cout << "Enter two numbers to swap wihtout using third variable : ";
            cin >> a >> b;
            cout << "Before Swap: a = " << a << ", b = " << b << endl;
            a = a + b;
            b = a - b;
            a = a - b;
            cout << "After Swap: a = " << a << ", b = " << b << endl;
            break;

        case 8:
            int p, q, r;
            cout << "Enter three numbers to swap: ";
            cin >> p >> q >> r;
            cout << "Before Swap: p = " << p << ", q = " << q << ", r = " << r << endl;
            p = p + q + r;
            q = p - (q + r);
            r = p - (q + r);
            p = p - (q + r);
            cout << "After Swap: p = " << p << ", q = " << q << ", r = " << r << endl;
            break;

        case 9:
            int n, t1 = 0, t2 = 1, nextTerm;
            cout << "Enter the number of terms: ";
            cin >> n;
            cout << "Fibonacci Series: ";
            for (int i = 1; i <= n; ++i)
            {
                if (i == 1)
                {
                    cout << t1 << " ";
                    continue;
                }
                if (i == 2)
                {
                    cout << t2 << " ";
                    continue;
                }
                nextTerm = t1 + t2;
                t1 = t2;
                t2 = nextTerm;
                cout << nextTerm << " ";
            }
            cout << endl;
            break;

        case 10:
            int num9, square;
            cout << "Enter a number to find Square: ";
            cin >> num9;
            square = num9 * num9;
            cout << "Square of " << num9 << " is " << square << endl;
            break;

        case 11:
            float base, height, area;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of the triangle: " << area << endl;
            break;

        case 12:
            float radius, circleArea;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            circleArea = 3.14 * radius * radius;
            cout << "Area of the circle: " << circleArea << endl;
            break;

        case 13:
            float principal, rate, time, si;
            cout << "Enter principal amount: ";
            cin >> principal;
            cout << "Enter the rate of interest (in percentage): ";
            cin >> rate;
            cout << "Enter time (in years): ";
            cin >> time;
            si = (principal * rate * time) / 100;
            cout << "Simple Interest: " << si << endl;
            break;

        case 14:
            int year;
            cout << "Enter a year: ";
            cin >> year;
            if (year % 4 == 0)
            {
                cout << year << " is a leap year." << endl;
            }
            else
            {
                cout << year << " is not a leap year." << endl;
            }
            break;

        case 15:
            char ch;
            cout << "Enter a character: ";
            cin >> ch;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                cout << ch << " is a vowel." << endl;
            }
            else
            {
                cout << ch << " is not a vowel." << endl;
            }
            break;

        case 16:
            int num10;
            cout << "Enter a number to print its table: ";
            cin >> num10;
            cout << "Multiplication Table of " << num10 << ":" << endl;
            for (int i = 1; i <= 10; ++i)
            {
                cout << num10 << " x " << i << " = " << num10 * i << endl;
            }
            break;

        case 17:
            int n2;
            bool isPrime;
            cout << "Enter the range to print prime numbers: ";
            cin >> n2;
            cout << "Prime numbers in range 1 to " << n2 << ": ";
            for (int i = 2; i <= n2; ++i)
            {
                isPrime = true;
                for (int j = 2; j <= sqrt(i); ++j)
                {
                    if (i % j == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime)
                {
                    cout << i << " ";
                }
            }
            cout << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
        }
    }
    else
    {
        cout << "No Options Selected" << endl;
    }
    getch();
}