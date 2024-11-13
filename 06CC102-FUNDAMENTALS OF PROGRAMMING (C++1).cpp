#include <iostream>

using namespace std;

int main()
{
	double sugarPriceUSD, coffeePriceUSD;
	double ricePricePound, sardinesPricePound, milkPriceUSD;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	cout << "Current conversion rate ($ to PHP)\t:\t 57.52\n";
	cout << "Current conversion rate (Pound to PHP)\t:\t 74.93\n";
	cout << endl;
	cout << "Enter the price of sugar ($)\t\t:\t ";
	cin >> sugarPriceUSD;
	cout << "Enter the quantity of sugar\t\t:\t ";
	cin >> sugarQty;
	cout << "-------------------------------------------------------\n";
	cout << "Enter the price of rice (pound)\t\t:\t ";
	cin >> ricePricePound;
	cout << "Enter the quantity of rice\t\t:\t ";
	cin >> riceQty;
	cout << "-------------------------------------------------------\n";
	cout << "Enter the price of sardines (pound)2\t:\t ";
	cin >> sardinesPricePound;
	cout << "Enter the quantity of sardines\t\t:\t ";
	cin >> sardinesQty;
	cout << "-------------------------------------------------------\n";
	cout << "Enter the price of coffee ($)\t\t:\t ";
	cin >> coffeePriceUSD;
	cout << "Enter the quantity of coffee\t\t:\t ";
	cin >> coffeeQty;
	cout << "-------------------------------------------------------\n";
	cout << "Enter the price of milk ($)\t\t:\t ";
	cin >> milkPriceUSD;
	cout << "Enter the quantity of milk\t\t:\t ";
	cin >> milkQty;
	cout << "-------------------------------------------------------\n";
	
	double exchangeRateUSD = 57.52, exchangeRatePound = 74.93;
	double totalPound, totalPoundtoPhp;
	double total, totalRice, totalSardines, totalCoffee, totalMilk;
	double totalPhp, totalPhpSugar, totalPhpRice, totalPhpSardines, totalPhpCoffee, totalPhpMilk;
	
	total = sugarPriceUSD * sugarQty;
	totalPhpSugar = total * exchangeRateUSD;
	cout << "The sugar you bought is " << sugarPriceUSD << "$ per ounce. You bought " << sugarQty << " sugar, your total is " << totalPhpSugar << endl;
	//cout << "-------------------------------------------------------\n";
	totalRice = ricePricePound * riceQty;
	totalPhpRice = totalRice * exchangeRatePound;
	cout << "The rice you bought is " << ricePricePound << " pound per ounce. You bought " << riceQty << " rice, your total is " << totalPhpRice << endl;
	//cout << "-------------------------------------------------------\n";
	totalSardines = sardinesPricePound * sardinesQty;
	totalPhpSardines = totalSardines * exchangeRatePound;
	cout << "The sardines you bought is " << sardinesPricePound << " pound per piece. You bought " << sardinesQty << " sardines, your total is " << totalPhpSardines << endl;
	//cout << "-------------------------------------------------------\n";
	totalCoffee = coffeePriceUSD * coffeeQty;
	totalPhpCoffee = totalCoffee * exchangeRateUSD;
	cout << "The coffee you bought is " << coffeePriceUSD << "$ per piece. You bought " << sardinesQty << " sardines, your total is " << totalPhpCoffee << endl;
	//cout << "-------------------------------------------------------\n";
	totalMilk = milkPriceUSD * milkQty;
	totalPhpMilk = totalMilk * exchangeRateUSD;
	cout << "The milk you bought is " << sugarPriceUSD << "$ per piece. You bought " << milkQty << " milk, your total is " << totalPhpMilk << endl;
	cout << "-------------------------------------------------------\n";
	totalPhp = totalPhpSugar + totalPhpRice + totalPhpSardines + totalPhpCoffee + totalPhpMilk;
	cout << "The total cost in PHP is\t\t:\t " << totalPhp << endl;
	cout << "-------------------------------------------------------\n";
	return 0;
}
