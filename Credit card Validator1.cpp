
//Prakash Singh Credit card validator Project
//Using Luhn algorithm
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

bool isNumberString(const string& s) {
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] < '0' || s[i] > '9')
            return false;
    }
    return true;
}

int main() {
    string creditcardNumber;
    
    cout << "This program uses the Luhn Algorigthm to validate a Creditcard number." << endl;
    cout << "You can enter 'exit' anytime to quit." << endl;
    
    while (true) {
        
        cout << "Please enter a CC number to validate: ";
        cin >> creditcardNumber;
        
        if (creditcardNumber == "exit")
            break;
        
        else if (!isNumberString(creditcardNumber)) {
            cout << "Bad input! ";
            continue;
        }
            
        int len = creditcardNumber.length();
        int doubleEvenSum = 0;
         
        for (int i = len - 2; i >= 0; i = i - 2) {
            int dl = ((creditcardNumber[i] - 48) * 2);
            if (dl > 9) {
                dl = (dl / 10) + (dl % 10);
            }
            doubleEvenSum += dl;
        }
       
                for (int i = len - 1; i >= 0; i = i - 2) {
            doubleEvenSum += (creditcardNumber[i] - 48);
        }
        
      
        cout << (doubleEvenSum % 10 == 0 ? "Valid!" : "Invalid!") << endl;
        
        continue;        
    }

    return 0;
}
