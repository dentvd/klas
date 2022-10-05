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
        int i = 0;
        int a;
        cout << "\tEnter number=>";
        cin >> a;
        while (i <= a)
        {
            cout << "  " << i;
            i++;
        }


    }break;
    case 2:
    {
        cout << "\t\t\t#>---------<Task 2 >------<#" << endl;
        cout << "\t\t\t|    1 - Period numbers    |" << endl;
        cout << "\t\t\t|    2 - Paired numbers    |" << endl;
        cout << "\t\t\t|    3 - Unpaired numbers  |" << endl;
        cout << "\t\t\t|    4 - Multiples of 7    |" << endl;
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
            int start, end, temp;

            cout << "\tEnter start range=>";
            cin >> start;
            cout << "\tEnter finish range=>";
            cin >> end;
            if (start > end)
            {
                temp = start;
                start = end;
                end = temp;
            }
            cout << "\tPeriod numbers:" << endl;
            while (start != end + 1)
            {

                cout << start << "  " << endl;
                start++;

            }

        }break;
        case 2:
        {
            int start, end, temp;
            cout << "\tEnter start range=>";
            cin >> start;
            cout << "\tEnter finish range=>";
            cin >> end;
            cout << "\tPaired numbers:" << endl;
            if (start > end)
            {
                temp = start;
                start = end;
                end = temp;
            }

            while (start != end + 1)
            {


                if (start % 2 == 0)
                {

                    cout << "\t" << start << endl;
                }




                start++;






            }
        }break;
        case 3:
        {
            int start, end, temp;
            cout << "\tEnter start range=>";
            cin >> start;
            cout << "\tEnter finish range=>";
            cin >> end;

            cout << "\tUnpaired numbers:" << endl;
            if (start > end)
            {
                temp = start;
                start = end;
                end = temp;
            }

            while (start != end + 1)
            {


                if (start % 2 != 0)
                {

                    cout << "\t" << start << endl;
                }




                start++;






            }
        }break;
        case 4:
        {
            int start, end, temp;
            cout << "\tEnter start range=>";
            cin >> start;
            cout << "\tEnter finish range=>";
            cin >> end;

            cout << "\tMultiples of 7:" << endl;
            if (start > end)
            {
                temp = start;
                start = end;
                end = temp;
            }

            while (start != end + 1)
            {


                if (start % 7 == 0)
                {

                    cout << "\t" << start << endl;
                }




                start++;






            }
        }break;
        }return 0;

        }





        return 0;
    }
    }