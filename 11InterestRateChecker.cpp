#include <iostream>
#include <string>

using namespace std;

int main() {
    string accountType, accountLevel;
    double balance;
    double interestRate = 0.0;

    // User inputs
    cout << "Enter account type (Personal or Business): ";
    cin >> accountType;
    cout << "Enter account level (Standard, Gold, or Platinum): ";
    cin >> accountLevel;
    cout << "Enter account balance: ";
    cin >> balance;

    // Determine the interest rate based on the account type, level, and balance
    if (accountType == "Personal") {
        if (accountLevel == "Standard") {
            if (balance >= 0) {
                interestRate = 1.2;
            }
        } else if (accountLevel == "Gold") {
            if (balance >= 5000) {
                interestRate = 2.3;
            } else if (balance >= 1000) {
                interestRate = 1.9;
            }
        }
    } else if (accountType == "Business") {
        if (accountLevel == "Standard") {
            if (balance >= 1500) {
                interestRate = 1.7;
            }
        } else if (accountLevel == "Platinum") {
            if (balance >= 10000) {
                interestRate = 2.5;
            }
        }
    }

    // Output the result
    if (interestRate > 0) {
        cout << "The interest rate for this account is: " << interestRate << "%" << endl;
    } else {
        cout << "No applicable interest rate for the given account details." << endl;
    }

    return 0;
}
