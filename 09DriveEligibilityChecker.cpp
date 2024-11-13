#include <iostream>

using namespace std;

int main() {
	//ask for the age of the user
	int age;
	cout << "What is your age?: ";
	cin >> age;
	//ternary instead of if-statement
	cout << (age < 16 ? "Too young to drive\n" : age == 16 ? "Better clear the road\n" : "You are getting pretty old\n");
	return 0;
}
	