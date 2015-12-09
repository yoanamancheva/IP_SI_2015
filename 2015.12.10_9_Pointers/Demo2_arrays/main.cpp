#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,2,3,4};
    for(int i=0; i<4; i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n===========\n";
    cout<<*a<<'\n';
    for(int i=0; i<4; i++) {
        cout<<*(a+i)<<" ";
    }
    cout<<"\n===========\n";
    cout << "Hello world!" << endl;
    return 0;
}
