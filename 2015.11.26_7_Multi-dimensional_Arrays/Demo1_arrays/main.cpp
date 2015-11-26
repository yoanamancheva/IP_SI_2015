#include <iostream>

using namespace std;

int main()
{
    int sizee = 5;
    int matrix[sizee][sizee];
    for(int i=0; i<sizee; i++) {
        for(int j=0;j<sizee;j++) {
            cin>>matrix[i][j];
        }
    }

    for(int i=0; i<sizee; i++) {
        for(int j=0;j<sizee;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
