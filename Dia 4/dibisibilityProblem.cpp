#include <iostream>
#include <cmath>
#include <vector>
//La primera entrada es la cantidad de test que hara
// el programa busca cuantos numeros se le tienen que agregar a "a" para que sea dibisible entre "b"
// la segunda entrada del problema son a y b

using namespace std;
int division (int a, int b){
    int multiplicador = 0;
    int incremento =0;
    if (a%b == 0){ //si el residuo es 0 entonces el numero es divisible y retorna cero
        return incremento;
    }else{                 //si el residuo no es cero
            multiplicador = a/b+1; //se divide a entre b y se le suma 1 al resultado
    incremento= multiplicador*b-a;  //se multiblica por b y despues se resta a para obtener el numero de incrementos en a
    return incremento;
    }

}
int main()
{

    int testC;
    cin >> testC;
    while (testC--){
    int x, y;
    cin >> x >> y;

    cout << division(x,y) << endl;


    }
    return 0;
}
