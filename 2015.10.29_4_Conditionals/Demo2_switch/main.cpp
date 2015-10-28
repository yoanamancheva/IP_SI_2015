#include <iostream>

using namespace std;

int main()
{
    int i;
    cin>>i;
    char ii;
    cin>>ii;
    int a,b;
    cin>>a>>b;

    switch (i){
        case 0 : cout << "zero \n"; break;
        case 1 : cout << "one \n"; break;
        case 2 : cout << "two \n"; break;
        case 3 : cout << "three \n"; break;
        case 4 : cout << "four \n"; break;
        case 5 : cout << "five \n"; break;
        case 6 : cout << "six \n"; break;
        case 7 : cout << "seven \n"; break;
        case 8 : cout << "eight \n"; break;
        case 9 : cout << "nine \n"; break;
    }

    switch (ii){
        case '+' : cout << a+b; break;
        case '-' : cout << a-b; break;
        case '*' : cout << a*b; break;

    }
    return 0;
}
