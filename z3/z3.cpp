
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Введите элементы массива: " << endl;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int summa = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
        summa += arr[i];
    }
    cout << "" << endl;
    cout << "Сумма чисел массива =  " << summa << endl;
}
