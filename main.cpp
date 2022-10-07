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
        case 2:
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

        case 3:
        {int i,sum=0;
       
        for (i = 1; i <= 1000; i++)
        {
            sum += i;
            
           }
        cout << "\t" << sum / 1000 << " <= arithmetic mean from 1 to 1000" << endl;;
            
            
             
        }break;
        case 4:
        {
            uint64_t a, mul = 1;
           
            cout << "Enter first number=> ";
            cin >> a; 

            for (uint64_t i = a; i <= 20; i++)
            {
                mul *= i;
            }
            cout << "Mul = " << mul << endl;



             
        }break;

        case 5:
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
        case 6:
        {
            int n1 = 0, n2 = 0, n3 = 0;

            int count = 0;
            for (int i = 100; i <= 999; i++)
            {
                n1 = i / 100;
                n2 = (i / 10) % 10;
                n3 = i % 10;

                if (n1 != n2 && n2 != n3 && n1 != n3)
                {
                    count++;
                }
            }
            cout << count << endl;
        }break;

        case 7:
        {
            int n1 = 0, n2 = 0, n3 = 0;

            int count = 0;
            for (int i = 100; i <= 999; i++)
            {
                n1 = i / 100;
                n2 = (i / 10) % 10;
                n3 = i % 10;

                if (n1 == n2 || n2 == n3 || n1 == n3)
                {
                    count++;
                }
            }
            cout << count << endl;
        }break;




        return 0;
    }
    }