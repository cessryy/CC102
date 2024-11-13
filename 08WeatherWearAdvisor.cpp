#include <iostream>

using namespace std;

int main() {
	int temperature;
	//ask user for temperature
	cout << "Enter the temperature in degrees: ";
	cin >> temperature;
	
	//Determine which jacket to use
	if (temperature < 32) {
		cout << "It's cold. You should bring an umbrella.";
	} else if (temperature >=32 && temperature <=50) {
		cout << "It's a bit chilly. You should bring a light jacket.";
	} else {
		cout << "No need to bring any jacket.";
	}
	return 0;
}
	