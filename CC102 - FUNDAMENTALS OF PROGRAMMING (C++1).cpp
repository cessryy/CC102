#include <iostream>

using namespace std;

int main()
{
	double sugarPriceUSD, coffeePriceUSD, milkPriceUSD; 
	double ricePricePound, sardinesPricePound;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	
	cout << "Enter  the price of Sugar: ";
	cin >> sugarPriceUSD;
	cout << "Enter quantity of sugar: ";
	cin >> sugarQty;
	cout << endl;
	cout << "Enter the price of rice: ";
	cin >> ricePricePound;
	cout << "Enter the quantity of rice: ";
	cin >> riceQty;
	cout << endl;
	cout << "Enter the price of sardines: ";
	cin >> sardinesPricePound;
	cout << "Enter the quantity of sardines: ";
	cin >> sardinesQty;
	cout << endl;
	cout << "Enter the price  of coffe: ";
	cin >> coffeePriceUSD;
	cout << "Enter the quantity of coffeeQty: ";
	cin >> coffeeQty;
	cout << endl;
	cout << "Enter the price of milk: ";
	cin >> milkPriceUSD;
	cout << "Enter the quantity of milkQty: ";
	cin >> milkQty;
	cout << endl;
	double usdToPhp, poundToPhp;
	cout << "Enter the coversion rate (USD TO PHP): ";
	cin >> usdToPhp;
	cout << "Enter the conversion rate (POUND TO PHP): ";
	cin >>  poundToPhp;
	
	double SugarCostPhp	= sugarQty * sugarPriceUSD * usdToPhp;
	double RiceCostPhp =  riceQty * ricePricePound * poundToPhp;
	double SardinesCostPhp = sardinesQty * sardinesPricePound *  poundToPhp;
	double CoffeeCostPhp = coffeeQty * coffeePriceUSD * usdToPhp;
	double MilkCostPhp = milkQty * milkPriceUSD * usdToPhp;
	
	double TotalCost = SugarCostPhp + RiceCostPhp + SardinesCostPhp +  CoffeeCostPhp + MilkCostPhp;
	
	return 0;
}
	