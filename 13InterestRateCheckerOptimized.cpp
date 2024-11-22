#include <iostream>
#include <string>

using namespace std;

int main() {
    string accountType, accountLevel;
    double balance, interestRate = 0.0;
    cout << "Enter account type (Personal or Business): ";
    cin >> accountType;
    cout << "Enter account level (Standard, Gold, or Platinum): ";
    cin >> accountLevel;
    cout << "Enter account balance: ";
    cin >> balance;
    interestRate = (accountType == "Personal" && accountLevel == "Standard" && balance >= 0) ? 1.2 :
                   (accountType == "Personal" && accountLevel == "Gold" && balance >= 5000) ? 2.3 :
                   (accountType == "Personal" && accountLevel == "Gold" && balance >= 1000) ? 1.9 :
                   (accountType == "Business" && accountLevel == "Standard" && balance >= 1500) ? 1.7 :
                   (accountType == "Business" && accountLevel == "Platinum" && balance >= 10000) ? 2.5 : 0.0;

    cout << (interestRate > 0 ? "The interest rate for this account is: " + to_string(interestRate) + "%" 
                              : "No applicable interest rate for the given account details.") 
         << endl;
    return 0;
}
