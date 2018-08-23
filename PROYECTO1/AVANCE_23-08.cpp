#include <iostream>

using namespace std;

int main()
{
    short int a=32766;
    short int b=a+1;

    cout<<b<<endl;
    b= b+ 1;
    cout << b << endl;
    return 0;
}
