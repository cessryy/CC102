#include <iostream>

using namespace std;

int main() {
    int age;
    double money;
    bool parent;
    cout << "Enter age: ";
    cin >> age;
    if (age < 13) {
        cout << "With parent? ";
        cin >> parent;
        cout << (parent ? "G, PG" : "G") << endl;
    } else if (age < 16) {
        cout << "With parent? ";
        cin >> parent;
        cout << (parent ? "G, PG, R" : "G, PG") << endl;
    } else {
		cout << "G, PG, R" << endl;
	}
    cout << "Enter money: ";
    cin >> money;
    cout << (money < 7.5 ? "Not enough money." : (money < 10.5 ? "Matinee"  : "Matinee & Evening"));
    return 0;
}
