
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int arr[10];
    int n = 999999;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (arr[i] < n)
        {
            n = arr[i];
        }
    }
    cout << "Наименьший элемент массива: " << n << endl;
}

