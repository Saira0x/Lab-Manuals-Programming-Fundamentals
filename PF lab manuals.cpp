#include <iostream>
#include <cstdlib> 
using namespace std;

void lab1_program1();
void lab1_program2();
void lab1_program3();
void lab1_program4();
void lab1_program5();
void lab1_program6();
void lab2_program1();
void lab2_program2();
void lab2_program3();
void lab2_program4();
void lab2_program5();
void lab2_program6();

void displayTitlePage()
{
    cout << "===============================================\n";
    cout << "                 Title Page                    \n";
    cout << "===============================================\n";
    cout << "Name:    ***Huzaifah kashif && Saira bibi***\n";
    cout << "Section: ***C***\n";
    cout << "Program: ***Artificial Intelligence***\n";
    cout << "===============================================\n";
    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get(); 
}

void displayLab1Menu()
{
    cout << "\nLab Manual 1 Programs:\n";
    cout << "1. lab1_program1\n";
    cout << "2. lab1_program2\n";
    cout << "3. lab1_program3\n";
    cout << "4. lab1_program4\n";
    cout << "5. lab1_program5\n";
    cout << "6. lab1_program6\n";
    cout << "0. Return to Main Menu\n";
}

void displayLab2Menu()
{
    cout << "\nLab Manual 2 Programs:\n";
    cout << "1. lab2_program1\n";
    cout << "2. lab2_program2\n";
    cout << "3. lab2_program3\n";
    cout << "4. lab2_program4\n";
    cout << "5. lab2_program5\n";
    cout << "6. lab2_program6\n";
    cout << "0. Return to Main Menu\n";
}

int main()
{
    displayTitlePage();
    system("cls"); 

    int choice;

    do
    {
        cout << "===============================================\n";
        cout << "                Main Menu                      \n";
        cout << "===============================================\n";
        cout << "1. Execute Lab Manual 1 Programs\n";
        cout << "2. Execute Lab Manual 2 Programs\n";
        cout << "0. Exit\n";
        cout << "===============================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int lab1Choice;
            do
            {
                displayLab1Menu();
                cout << "Enter the program number you want to execute: ";
                cin >> lab1Choice;
                switch (lab1Choice)
                {
                case 1:
                    lab1_program1();
                    break;
                case 2:
                    lab1_program2();
                    break;
                case 3:
                    lab1_program3();
                    break;
                case 4:
                    lab1_program4();
                    break;
                case 5:
                    lab1_program5();
                    break;
                case 6:
                    lab1_program6();
                    break;
                case 0:
                    cout << "Returning to Main Menu...\n";
                    break;
                default:
                    cout << "Invalid choice! Please select a valid program number.\n";
                }
            } while (lab1Choice != 0);
            break;
        }
        case 2:
        {
            int lab2Choice;
            do
            {
                displayLab2Menu();
                cout << "Enter the program number you want to execute: ";
                cin >> lab2Choice;
                switch (lab2Choice)
                {
                case 1:
                    lab2_program1();
                    break;
                case 2:
                    lab2_program2();
                    break;
                case 3:
                    lab2_program3();
                    break;
                case 4:
                    lab2_program4();
                    break;
                case 5:
                    lab2_program5();
                    break;
                case 6:
                    lab2_program6();
                    break;
                case 0:
                    cout << "Returning to Main Menu...\n";
                    break;
                default:
                    cout << "Invalid choice! Please select a valid program number.\n";
                }
            } while (lab2Choice != 0);
            break;
        }
        case 0:
            cout << "Exiting the program. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice! Please enter (1, 2, or 0).\n";
        }

        if (choice != 0)
        {
            cout << "\nPress Enter to return to the main menu...";
            cin.ignore();
            cin.get();
            system("cls"); 
        }

    } while (choice != 0);

    return 0;
}

void lab1_program1()
{
    cout << "\nlab1_program1: Welcome to UOH\n";
    cout << "-Welcome to UOH-\n";
}

void lab1_program2()
{
    cout << "\nlab1_program2: Assignment operator\n";
    int x, y;
    x = 10;
    y = 4;
    x = y;
    y = 7;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

void lab1_program3()
{
    cout << "\nlab1_program3: Display output\n";
    cout << "******\t\t******\n******\t\t******\n******\t\t******\n******\t\t******\n******\t\t******\n******\t\t******\n******\t\t******\n#####################\n#####################\n#####################\n";
}

void lab1_program4()
{
    cout << "\nlab1_program4: Display output\n";
    cout << "$**********************\n*$\n$**********************\n*$\n$*Welcome to\t*$\n$*\tSchool of Engineering\t*$\n$*\tIslamabad.\t*$\n$***************\n*$\n$***************\n*$\n";
}

void lab1_program5()
{
    cout << "\nlab1_program5: Area of sphere\n";
    float area, r, pi = 3.1416;
    cout << "Enter radius: ";
    cin >> r;
    area = 4 * pi * r * r;
    cout << "Area of sphere is: " << area << endl;
}

void lab1_program6()
{
    cout << "\nlab1_program6: Using sizeof operators\n";
    int x;
    float f;
    char c;
    bool b;
    long int l;
    unsigned int u;
    unsigned long s;
    cout << "int in bytes: " << sizeof(x) << endl;
    cout << "float in bytes: " << sizeof(f) << endl;
    cout << "char in bytes: " << sizeof(c) << endl;
    cout << "bool in bytes: " << sizeof(b) << endl;
    cout << "long int in bytes: " << sizeof(l) << endl;
    cout << "unsigned int in bytes: " << sizeof(u) << endl;
    cout << "unsigned long in bytes: " << sizeof(s) << endl;
}

void lab2_program1()
{
    cout << "\nlab2_program1: Largest Value\n";
    int a, b, c;
    cout << "Enter value of first integer: ";
    cin >> a;
    cout << "Enter value of second integer: ";
    cin >> b;
    cout << "Enter value of third integer: ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "a is largest\n";
    }
    else if (b > a && b > c)
    {
        cout << "b is largest\n";
    }
    else
    {
        cout << "c is largest\n";
    }
}

void lab2_program2()
{
    cout << "\nlab2_program2: Grades using nested if-else\n";
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 80)
        cout << "Your grade is A\n";
    else if (marks >= 70)
        cout << "Your grade is B\n";
    else if (marks >= 60)
        cout << "Your grade is C\n";
    else if (marks >= 50)
        cout << "Your grade is D\n";
    else
        cout << "Your grade is F\n";
}

void lab2_program3()
{
    cout << "\nlab2_program3: Vowel/Consonant\n";
    char ch;
    cout << "Enter any character: ";
    cin >> ch;

    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
        cout << "It is a vowel: " << ch << endl;
    else
        cout << "It is a consonant: " << ch << endl;
}

void lab2_program4()
{
    cout << "\nlab2_program4: Even/Odd\n";
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << n << " is even\n";
    else
        cout << n << " is odd\n";
}

void lab2_program5()
{
    cout << "\nlab2_program5: Capital/Small Letter\n";
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if (ch >= 'A' && ch <= 'Z')
            cout << "The character is a capital letter: " << ch << endl;
        else
            cout << "The character is a small letter: " << ch << endl;
    }
    else
    {
        cout << "The character is not an alphabet character: " << ch << endl;
    }
}

void lab2_program6()
{
    cout << "\nlab2_program6: Check Temperature\n";
    float temp;
    cout << "Enter the temperature: ";
    cin >> temp;

    if (temp < 0)
        cout << "The state of water is ice\n";
    else if (temp >= 0 && temp <= 100)
        cout << "The state of water is water\n";
    else
        cout << "The state of water is steam\n";
}


