
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Введите элементы массива: " << endl;
    int arr[10];
    int k = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i != 0)
        {
            cin >> arr[i];
            if (arr[i] == arr[i - 1])
            {
                k++;
            }
        }
    }
    cout << "Колличество пар с одинаковыми элементами = " << k << endl;
}

