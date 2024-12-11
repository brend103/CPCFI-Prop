#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int entrada;
    string bien = "YES";
    string mal = "NO";
    cin >> entrada;

    if(entrada % 2 == 0 && entrada != 2 ){
        cout << bien;
    } else {
        cout << mal;
    }

    return 0;
}
