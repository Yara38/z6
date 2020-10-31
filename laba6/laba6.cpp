
#include <iostream>
using namespace std;


int main()
{
    setlocale(0, "");
    cout << "Введите элементы массива: " << endl;
    int arr[10];//ввод массива из 10 чисел
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
