
#include <iostream>
#include <ctime>;
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Массив:" << endl;
    int arr[20];//массив
    for (int a = 0; a < 20; a++) 
    {
        int b = 1 + rand() % 2;
        if (b == 1)
        {
            arr[a] = 1 + rand() % 20;
        }
        else
        {
            arr[a] = -20 + rand() % 20;
        }
        cout << arr[a] << endl;
    }
    cout << "Измененный массив = " << endl;
    for (int a = 0; a < 20; a++)
    {
        int b = 1 + rand() % 2;
        if (arr[a] < 0)
        {
            arr[a] = 0;
        }
        cout << arr[a] << endl;
    }
}
