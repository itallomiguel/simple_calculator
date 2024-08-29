#include<iostream>

using namespace std;

int num1, num2, operation;

    int main(){
        cout << "Calculator" <<endl;
        cin >> num1;
        cin >> num2;    
        cout << "Select operation" << endl;
        cout << "1. Adição" << endl;
        cout << "2. Subtration" << endl;
        cout << "3. Divisão" << endl;
        cout << "4. Multiplication" << endl;
        cin >> operation;

        switch (operation)
        {
        case 1:
            cout << (num1 + num2) << endl;
            break;

        case 2:
            cout << (num1 - num2) << endl;
            break;

        case 3:
            cout << (num1 / num2) << endl;
            break;

        case 4:
            cout << (num1 * num2) << endl;
            break;

        default:
            cout << "Bruh" << endl;
            break;
        }
        
    return 0;

    }