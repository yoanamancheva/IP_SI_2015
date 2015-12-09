#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int& b = a;
    cout<<"a "<<a<<'\n';
    cout<<"b "<<b<<'\n';
    b++;
    cout<<"a "<<a<<'\n';
    cout<<"b "<<b<<'\n';
    cout << "Hello world!" << endl;
    return 0;
}
