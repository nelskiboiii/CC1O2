#include <iostream>
using namespace std;

int main () {
	
	float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float usdToPhp = 57.43, poundToPhp = 75.03;
	
	cout << "**************************************************\n";
	cout << "***SEVENPM Sari-Sari Store Point of Sale System***\n"; 
	cout << "**************************************************\n"; 
	cout << "Price of Sugar: ";
	cin >> sugarPriceUSD;
	cout << "Price of Rice: ";
	cin >> ricePricePound;
	cout << "Price of Sardines: ";
	cin >> sardinesPricePound;
	cout << "Price of coffee: ";
	cin >> coffeePriceUSD;
	cout << "Price of Milk: ";
	cin >> milkPriceUSD;
	cout << "**************************************************\n";
	cout << "Quantity of Sugar: ";
	cin >> sugarQty;
	cout << "Quantity of Rice: ";
	cin >> riceQty;
	cout << "Quantity of Sardines: ";
	cin >> sardinesQty;
	cout << "Quantiy of coffee: ";
	cin >> coffeeQty;
	cout << "Quantity of Milk: ";
	cin >> milkQty;
	cout << "**************************************************\n";
	cout << "Enter usd to php: ";
	cin >> usdToPhp;
	cout << "Enter pound to php: "; 
	cin >> poundToPhp;
	cout << "**************************************************\n";
	float totalCostPhp, sugarCostPhp, RiceCostPhp, SardinesCostPhp, CoffeeCostPhp, MilkCostPhp;
	sugarCostPhp = (sugarPriceUSD * sugarQty);
	RiceCostPhp = ( ricePricePound * riceQty);
	SardinesCostPhp = (sardinesPricePound * sardinesQty);
	CoffeeCostPhp = (coffeePriceUSD * coffeeQty);
	MilkCostPhp = (milkPriceUSD * milkQty);
	totalCostPhp = sugarCostPhp + RiceCostPhp + SardinesCostPhp + CoffeeCostPhp + MilkCostPhp;
	cout <<  "Customer, you need to pay: " << totalCostPhp << endl;
	return 0;
}
	
	

