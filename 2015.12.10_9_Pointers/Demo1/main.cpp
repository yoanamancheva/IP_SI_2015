#include <iostream>

using namespace std;

int* returnPointer(int m) {
	return &m;
}

int main()
{
    int a = 10;
    int* b = &a;
    int c = *b;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    *b = 20;
    cout<<a<<endl;
    cout<<c<<endl;


    cout<<"---------"<<endl;

    int p = 14;
    int *q = &p;
    cout<<q<<endl;
    cout<<q+1<<endl;
    cout<<q+2<<'\n';

    cout<<"---------"<<endl;


    int* r = returnPointer(3);
	// returnPointerBad(5);
	cout << *r << endl;
	cout << r << endl;
    cout << "Hello world!" << endl;
    return 0;
}
