#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "rus");
    int i = 0;
    while (i < 9)
    {
        cout << "Hello" << endl;
        i++;
    }
    cout << endl;
    i = 0;
    while (i < 15)
    {
        if(i % 2 == 1)
        cout << i << endl;
        i++;
    }
    cout << endl;
    i = 5;
    int sum = 0;
    while (i <= 15)
    {
        sum += i;
        cout << sum << endl;
        i++;
    }
}