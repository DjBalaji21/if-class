#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a two-digil number";
    cin>> number;
    if(number < 10 >99){
        cout << "Please enter the valid two-digil number" << endl;
        return 0;
    }
    int tens = number/10;
    int ones = number%10;
    int sum = tens + ones;
    cout<<"The path home is:"<< sum << endl;
    return 0;
}
