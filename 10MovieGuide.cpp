#include <iostream>

using namespace std;

int main() {
	int age;
    bool withParent;
    double money;
    
    cout << "Enter your age: ";
    cin >> age;
    cout << "Are you with a parent? (1 for yes, 0 for no): ";
    cin >> withParent;
    cout << "Enter the amount of money you have: ";
    cin >> money;

    // Movie rating based on age and parent presence
    if (age < 13) {
        cout << (withParent ? "You can watch G, PG movies.\n" : "You can watch G movies.\n");
    }
	else if (age >= 13 && age < 16) {
        cout << (withParent ? "You can watch G, PG, R movies.\n" : "You can watch G, PG movies.\n");
    } else {
        cout << "You can watch G, PG, R movies.\n";
	}
    // Movie price based on available money
    if (money >= 10.50){
        cout << "You can afford an Evening movie.\n";
    }
	else if (money >= 7.50) {
        cout << "You can afford a Matinee movie.\n";
    } else {
        cout << "Insufficient Balance.\n";
	}
    return 0;
}
