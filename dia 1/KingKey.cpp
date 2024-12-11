#include <iostream>
#include <cmath>
//Este programa busca un numero el cual dividido entre dos numeros dados por el usuario
// den el mismo residuo y sea por lo menos mayor o igual a uno o ambos problemas
using namespace std;

int maiin()
{

    int testC;
    cout << "Introduce el numero de problemas que vas a buscar solucion" << endl;
    cin >> testC;
    while (testC--){
        int a;
        int b;
        cout << "Introduce dos numeros separados por espacio" << endl;
        cin >> a >> b;
        if(a<=b){
            int index = a;
            while(index%a != index%b){
            ++index;

            }

            cout << index;
        } else {
            int index = b;
            while(index%a != index%b){
            ++index;

            }

            cout << index << endl;
        }

    }
    cout <<"Hello world" ;

    return 0;
}
