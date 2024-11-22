#include <iostream>

using namespace std;

int main() {
    int age;
    double money;
    bool parent;
    cout << "Enter age: ";
    cin >> age;
    string ratings = "G, PG";  
    if (age >= 16) ratings += ", R";  
    if (age < 16) {
        cout << "With parent? ";
        cin >> parent;
        if (!parent) ratings = "G";  
    }
    cout << ratings << endl;
    cout << "Enter money: ";
    cin >> money;
    cout << (money < 7.5 ? "Not enough money." : (money < 10.5 ? "Matinee" : "Matinee & Evening"));
    return 0;
}
