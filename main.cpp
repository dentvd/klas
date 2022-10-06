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

        }break;
        case 3:
        {
            int start, end, temp, sum = 0, a;
            cout << "\tEnter start range=>";
            cin >> start;
            cout << "\tEnter finish range=>";
            cin >> end;

            cout << "\tSum:" << endl;
            if (start > end)
            {
                temp = start;
                start = end;
                end = temp;
            }

            while (start != end + 1)
            {

                sum += start;

                start++;

            }
            cout << "\t" << sum;
        }break;
        case 4:
        {
            int i, n, sum = 0;

            do {
                cin >> i;
                sum += i;
            } while (i != 0);
            {

                cout << "Sum" << sum;
            }




        }break;
        case 6:
        {
            int i, n, a, b;
            cout << "\tEnter number=> ";
            cin >> a;
            cout << "\tEnter degree=>";
            cin >> b;
            n = a;
            for (i = 1; i < b; i++)
                n = n * a;
            cout <<"\t"<<a << "  to degree  " << b << "=> " << n;
        }break;
        case 7:
        {int start = 1, end, sum=0;
        end = 500;
            while (start != end + 1)
            {

                sum += start;

                start++;

            }
            cout << "\t" << sum/1000<<" <= arithmetic mean from 1 to 1000";
            
             
        }break;
        case 8:
        {int a, i, s;
            s = 1; 
            cout << "Enter first number=> ";
            cin >> a; 

            for (i = a; i <= 20; i++) 

            {



                s = s * i; 

            }



            cout << " Product of numbers => " << s; 
        }break;

        case 9:
        {
            int num;
            cout << "Enter number: ";
            cin >> num;

            if (num > 0 && num < 11)
            {
                for (int i = 0; i < 11; i++)
                cout << num << " x " << i << " = "<< num * i << std::endl;
            }
            else
                cout << "Wrong input";
        }break;




        return 0;
    }
    }