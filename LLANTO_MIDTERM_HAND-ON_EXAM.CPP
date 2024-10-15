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
	float totalCostPhp, sugarCostPhp, ricePricePhp, sardinesPricePhp, coffeePricePhp, milkPricePhp;
	sugarCostPhp = (sugarPriceUSD * usdToPhp * sugarQty);
	ricePricePhp = ( ricePricePound * poundToPhp * riceQty);
	sardinesPricePhp = (sardinesPricePound * poundToPhp * sardinesQty);
	coffeePricePhp = (coffeePriceUSD * usdToPhp * coffeeQty);
	milkPricePhp = (milkPriceUSD * usdToPhp * milkQty);
	totalCostPhp = sugarCostPhp + ricePricePound + sardinesPricePound + coffeePriceUSD + milkPriceUSD;
	cout << "**************************************************\n";
	cout <<  "Customer, you need to pay: " << totalCostPhp << endl;
	cout << "**************************************************\n";
	return 0;
}
	
	
