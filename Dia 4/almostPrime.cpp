#include <iostream>
#include <cmath>
#include <vector>
 // Este problema busca que dado un numero cuantos de los numeros interiores son unicamente divisibles entre dos primos
 // por ejemplo el numero 10 tiene dos numeros dibisibles entre dos primos que serian el 6 y el 10
using namespace std;
bool esPrimo(int n) {  //La funcion verifica si los numeros son rpimos o no
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{

    int testC;
    cin >> testC;
    vector <int> vecP; //Vector para guardar numeros primos
    vector <int> vecnP; //vector para guardar numeros no primos
    do{
        if(esPrimo(testC)){  // llama a la funcion y dependiendo el resultado lo agrega a uno u otro vectos
            vecP.push_back(testC);
        } else {
            if(testC !=0){
                vecnP.push_back(testC);
            }
        }
     }while (testC--);  //en cada iteracion le resta 1 para verificar todos los numeros del 10 al 1
    int numerosDivi = 0;
    for (int i=0; i < vecnP.size(); i++){
        int nDivisible = 0;
        for (int j=0; j < vecP.size(); j++){
            if(vecnP[i]%vecP[j] == 0 ){      //primero compara la posicion i con todos los de la j y los va contando
             nDivisible ++;
            }
        }
        if(nDivisible == 2){
          numerosDivi++;
        }
    }


    cout << numerosDivi;

    return 0;
}
