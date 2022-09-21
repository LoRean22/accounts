#include <iostream>

using namespace std;

int account;
string name;
double balance;
double newBalance;

struct Accounts
{
    int m_account;
    string m_name;
    double m_balance;
};

double editBalance ()
{
    cout << "Введите номер счета: ";
    cin >> account;
    cout << "Введите имя владельца: ";
    cin >> name;
    cout << "Введите баланс: ";
    cin >> balance;
    cout << "Введите новый баланс: ";
    cin >> newBalance;
    return balance = newBalance;
    //cout << "Ваш счет: " << name << " " << account << " " << newBalance;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    editBalance();

    Accounts tes{account, name, balance};

    cout << "Ваш счет: " << tes.m_name << ", " << tes.m_account << ", " << tes.m_balance;
}
