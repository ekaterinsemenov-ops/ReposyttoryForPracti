#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout << "=== Задание 1: цикл для отладки ===" << endl;

    for (int i = 1; i <= 10; ++i)
    {
        cout << "i = " << i << endl;
    }

    cout << "Нажмите Enter для выхода..." << endl;
    cin.get();

    return 0;
}
