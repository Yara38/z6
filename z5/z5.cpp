
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Введите элементы массива: " << endl;
    int arr[10];
    int n = 999999;
    int nb = -999999;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (arr[i] < n)
        {
            n = arr[i];
        }
        if (arr[i] > nb)
        {
            nb = arr[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == n)
        {
            arr[i] = nb;
        }
        if (arr[i] == nb)
        {
            arr[i] = n;
        }
    }
    cout << "Изменнённый массив = " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}

