#include <iostream>
using namespace std;

int NOD(int a, int b)
{
    if (b == 0) return a;
    a > b ? NOD(b, a % b) : NOD(a, b % a);
}

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b;
    cout << "Введите 1 число: ";
    cin >> a;
    cout << "Введите 2 число: ";
    cin >> b;
    cout << "НОД: " << NOD(b, a % b) << endl;
    return 0;
}