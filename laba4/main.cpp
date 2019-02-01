#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int i, result = 0,masssize;
    vector <int> numbers;
    vector <char> symbols;
    cin>>masssize;
    for (i =masssize ; i > 0 ; i--){
        numbers.push_back(i);}

    symbols.push_back('+');
    result = numbers[i];

    for (i = 1 ; i < masssize - 2 ; i++)
    {
        if (abs(result + numbers[i]) > 2)
        {
            symbols.push_back('-');
            result -= numbers[i];
        }
        else
        {
            symbols.push_back('+');
            result += numbers[i];
        }
    }
    symbols.push_back('+');
    if (result > 0)
    {
        symbols.push_back('-');
        result -= 2;
    }
    else
    {
        symbols.push_back('+');
        result  += 2;
    }

    if (result )
        cout <<"0";
    else
            cout << "impossible";
    return 0;
}
