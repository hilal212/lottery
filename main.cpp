#include <iostream>

#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;


int main()
{

  int winning_digit[5];
    int player_digit[5];

    srand((unsigned int) time(0));

    cout << "Enter five numbers: " << endl;
    int num;
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        if (num < 0 || num > 9)
        {
            cout << "Number must be greater than 0 and less than 9" << endl;
            cout << "Please re-enter number: " << endl;
            cin >> num;
        }
    }
    cout << "The five winning numbers are: " << endl;
        for(int i = 0; i < 5; i++)
        {
            winning_digit[i] = 1 + rand()% 9;
            cout << winning_digit[i] << " ";
        }
    cout << endl;

    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (winning_digit[i] == player_digit[i])
        {
            count = count + 1;
        }
        
    }
    cout << "There are " << count << " matches." << endl;
    return 0;
}