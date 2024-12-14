#include <iostream>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main()
{

    vector <int> arreglo ;
    int a;
    cin >> a ;
    int contador = 0 ;
    while(a--){
        int b;
        cin >> b;

        arreglo.push_back(b);


    }
    for(size_t i = 0; i < arreglo.size(); i++) {
        if (arreglo[i] == arreglo[i+1]) {
        }else {
            contador++;
        }

    }
 //   for (int x : arreglo) {
   //     cout << x << " ";
  //  }
    cout << endl;
    cout << contador;

    return 0;
}
