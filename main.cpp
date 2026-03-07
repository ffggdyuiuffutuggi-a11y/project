#include <iostream>
#include <ctime>
using namespace std;

enum Progress
    {
        WIN,
    };

int Check()
{
    Progress iswin;
    iswin = Progress::WIN;
    if(iswin == 0)
    {
        cout << "You win!";
    }
    return iswin;
}

int main()
{
    int n, p;
    next:
    cout << "Enter the numbers of attempts: ";
    cin >> n;
    if(n>=30)
    {
        cout << "Choose a number of attempts less than 30!\n";
        goto next;
    }
    p = n;
    cout << "The numbers will be from 1 to 100.\nStart!\n";
    srand(time(NULL));
    const int NUM = rand() % 100 + 1;
    cout << "Num =" << NUM;
    int b;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter: ";
        cin >> b;
        if(b == NUM)
        {
            Check();
            break;
        }
        else
        {
            cout << "This is not a hidden number!\n";
            p--;
            if(p==0)
            {
                cout << "There are no more attempts!";
                break;
            }
            else
            {
               cout << "Number of attempts: " << p  << endl; 
            }
        }
    }
    return 0;
}