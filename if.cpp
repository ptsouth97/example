#include <iostream>

using namespace std;

int main()
{
    int myNumber;
    cout<<"Enter a number"<<endl;
    cin>>myNumber;
    if(myNumber>10)
        cout<<myNumber<<" is greater than 10";
    else
        cout<<myNumber<<" is less than 10";
        
    return 0;
}