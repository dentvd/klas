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
      int i, sum = 0;
      cout << "number=>";
      cin >> i;
      while (i != 500 + 1)
      {

          sum += i;

          i++;

      }cout << "sum  "<<sum;

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