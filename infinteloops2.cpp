#include<iostream>
using namespace std;

int main()
{
    int password;
    int count=0;

    while(1)  //the condition in the loop , until it is true , the loo will run
    {
        cout<<"choclates ";
        count++;
        if(count>10000) 
        break;
    }
 
    

    // cout<<"Enter the password : "<<endl;
    // cin>>password;

    // if(password<999999)
    // {
    //     cout<<"The password does not meet the required condition, please enter the password again";
    //     cin>>password;
    // }

    // cout<<"The user has now entered correct password"<<endl;

    // return 0;
    int i;
    for(i=0;  ;i++)
    {
        cout<<i<<" ";
        if(i>100) break;   //This statement gets executed i is 101

    }

    return 0;

}