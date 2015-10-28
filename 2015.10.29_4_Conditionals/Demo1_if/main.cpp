#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 7;
    if(a == b)
        cout <<a<<endl;
    cout<<b<<endl;

    int x,y,z;
    cin>>x>>y>>z;

//    min
    int min = x;
    if(y<min) min = y;
    if(z<min) min = z;
    cout<<min<<" e min";

//if else construction
    if(x<0) {
        cout<<-x;
    } else {
        cout<<x;
    }

//if else nested
    if(x<0) {
        cout<<-x;
    } else if(x == 0) {
        cout<< "Number is 0";
    }
    else {
        cout<<x;
    }


    return 0;
}
