#include <iostream>
#include <string>

using namespace std;

struct Account {
	int account = 0;
	string name;
	double bank = 0;
};

void accountUpdate(Account& ac) {
	
	int bank = 0;
	cout << "Введите новый баланс: ";
	cin >> bank;
	
	ac.bank = bank;
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	int numAc = 0;
	string name;
	double bank = 0;

	cout << "Введите номер счета: ";
	cin >> numAc;
	while (numAc < 0) {
		cout << "Номер счета отрицательное, измените свой счет: ";
		cin >> numAc;
	}
	cout << "Введите имя владельца: ";
	cin >> name;
	cout << "Введите баланс: ";
	cin >> bank;
	
	Account p;
	p.account = numAc;
	p.name = name;
	p.bank = bank;

	accountUpdate(p);

	cout << "Ваш счет: " << p.name << ", " << p.account << ", " << p.bank;
}
