#include<iostream>
using namespace std;

int main()
{
    int password;

    cout<<"Enter the password : "<<endl;
    cin>>password;

    if(password<999999)
    {
        cout<<"The password does not meet the required condition, please enter the password again";
        cin>>password;
    }

    cout<<"The user has now entered correct password"<<endl;

    return 0;
}