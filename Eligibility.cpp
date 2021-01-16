#include<iostream>
using namespace std;


int main()
{
    int age;

    cout << "Enter the age of the candidate :";
    cin >> age;

    if (age < 18)
    {
        cout << "Sorry, You are not eligible to caste your vote." <<endl;
        cout << "You would be able to caste your vote after " << 18-age << " years" <<endl;
    }
    else
    {
         cout << "Congratulation! You are eligible for casting your vote." << endl ;
    }
    return 0;

}
