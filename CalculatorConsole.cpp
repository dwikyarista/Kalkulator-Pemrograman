#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <iostream>
using namespace std;
int main()
{
char operation;
double first_number;
double second_number;
double solution = 0;

cout << "This is a basic calculator program, enter the first number.\n";
cout << "First number:";
cin >> first_number;

cout << "Enter second number:";
cin >> second_number;

cout << "\nEnter an operation to perform, choose one from this list: +,-,/,*\n";
cout << "Enter your operation:";
cin >> operation;
cin.ignore();

if (operation != '+' && operation != '-'&& operation != '/'&& operation != '*')
    {
        cout << "\nInvalid operation! Aborting!";
        cout << "\nPress Enter to exit.";
        cin.get();
        return 1;
    }//end if

if (operation == '+')
    {
        solution = first_number + second_number;
        cout << "\nYour answer is: " << solution << "\nPress Enter to exit.\n";
        cin.get();
        return 0;
    }//end if

if (operation == '-')
    {
        solution = first_number - second_number;
        cout << "\nYour answer is: " << solution << "\nPress Enter to exit.\n";
        cin.get();
        return 0;
    }//end if

if (operation == '*')
    {
        solution = first_number * second_number;
        cout << "\nYour answer is: " << solution << "\nPress Enter to exit.\n";
        cin.get();
        return 0;
    }//end if

if (operation == '/')
    {
        if ( second_number == 0 )
        {
            cout << "\nYou can't divide by zero! Aborting!";
            cout << "\nPress Enter to exit.";
            cin.get();
            return 2;
        }//end if
        solution = first_number / second_number;
        cout << "\nYour answer is: " << solution << "\nPress Enter to exit.\n";
        cin.get();
        return 0;
    }//end if


return 0;
}//end main
