#include<iostream>
using namespace std;
int main()
{
    cout << "\t\t\t#>---------<MENU>---------<#" << endl;
    cout << "\t\t\t|    1 - Task_1            |" << endl;
    cout << "\t\t\t|    2 - Task_2            |" << endl;
    cout << "\t\t\t|    3 - Task_3            |" << endl;
    cout << "\t\t\t|    4 - Task_4            |" << endl;
    cout << "\t\t\t|    5 - Task_5            |" << endl;
    cout << "\t\t\t|    6 - Task_6            |" << endl;
    cout << "\t\t\t|    7 - Task_7            |" << endl;
    cout << "\t\t\t|    8 - Task_8            |" << endl;
    cout << "\t\t\t|    9 - Task_9            |" << endl;
    cout << "\t\t\t#>------------------------<#" << endl;
    cout << "\t\t\t|    Exit - 0              |" << endl;
    cout << "\t\t\t#>------------------------<#" << endl;
    cout << "\t\t\tEnter task =>";
    int number;
    cin >> number;
    system("cls");
    switch (number)
    {
    case 1:
    {

        system("color 0A");
        srand(time(0));
        const uint32_t size = 6;
        long long arr[size];

        for (int i = 0; i < size; i++)
        {
            cout << " Mounts " << i + 1 << "=> ";
            cin >> arr[i];
        }
        long long sum = 0;
        for (size_t i = 0; i < size; i++)
        {
            sum += arr[i];
        }cout << "  Sum = " << sum << endl;
    }break;
    case 2:
    {
        system("color 0A");
        srand(time(0));
        const uint32_t size = 5;
        long long arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
        {

            cout << arr[i] << "  ";
        }
        cout << endl;
        for (size_t i = size - 1; i != -1; i--)
        {
            cout << arr[i] << "  ";
        }cout << endl;
    }break;

    }return 0;
}