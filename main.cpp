#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	string salsaTypes[5] = { "mild", "medium", "sweet", "hot", "zesty" };
	int salsaSales[5];
	int totalSales;
	int highestSales;
	int lowestSales;
	int highestRef;
	int lowestRef;

	for (int i = 0; i < 5; i++) {
		int numberSold = -1;
		while (numberSold < 0) {
			cout << "Jars sold last month of " << left << setw(6) << salsaTypes[i] << ": ";
			cin >> numberSold;
			if (numberSold < 0) {
				cout << "\ninvalid amount entered. try again";
				continue;
			}
			else {
				salsaSales[i] = numberSold;
				if (i == 0) {
					totalSales = numberSold;
					highestSales = numberSold;
					highestRef = i;
					lowestSales = numberSold;
					lowestRef = 1;
				}
				else {
					totalSales += numberSold;
					if (numberSold > highestSales) {
						highestSales = numberSold;
						highestRef = i;
					}
					if (numberSold < lowestSales) {
						lowestSales = numberSold;
						lowestRef = i;
					}
				}

			}
		}
	}

	cout << "\n\n     Salsa Sales Report\n\n";
	cout << "Name              Jars Sold\n";
	cout << "____________________________";
	cout << left << setw(21) << "\nmild" << right << setw(7) << salsaSales[0];
	cout << left << setw(21) << "\nmedium" << right << setw(7) << salsaSales[1];
	cout << left << setw(21) << "\nsweet" << right << setw(7) << salsaSales[2];
	cout << left << setw(21) << "\nhot" << right << setw(7) << salsaSales[3];
	cout << left << setw(21) << "\nzesty" << right << setw(7) << salsaSales[4];
	cout << left << setw(22) << "\n\nTotal Sales:" << right << setw(7) << totalSales;
	cout << left << "\nHigh Seller: " << salsaTypes[highestRef];
	cout << left << "\nLow Seller : " << salsaTypes[lowestRef];

	return 0;
}