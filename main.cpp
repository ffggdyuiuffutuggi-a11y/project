#include <iostream>
#include <ctime>
using namespace std;



int main()
{
    bool flag = true;
    
    while(flag == true)
    {
        int num_attempt;
        
        while(true)
        {
            cout << "Enter the numbers of attempts: ";
            cin >> num_attempt;
            if ((num_attempt > 30) || (num_attempt <= 0))
            {
                cout << "Choose a number of attempts between 0 and 30!\n";
            }
            
            else
            {
                break;
            }
        }
        
        
        cout << "The numbers will be from 1 to 100.\nStart!\n";
        srand(time(NULL));
        const int comp_num = rand() % 100 + 1;
        int user_num;
        while(true)
        {
            cout << "Enter: ";
            cin >> user_num;
            if(user_num == comp_num)
            {
                cout << "YOU WIN!";
                break;
            }
            else
            {
                cout << "This is not a hidden number!\n";
                num_attempt--;
                if(num_attempt==0)
                {
                    char answer;
                    cout << "There are no more attempts!\nDo you want to play again? (Y / N)\n";
                    cin >> answer;
                    if (answer == 'N')
                    {
                        flag = false;
                    }

                    break;
                }
                else
                {
                cout << "Number of attempts: " << num_attempt  << endl; 
                }
            }
        }
    }
    return 0;
}