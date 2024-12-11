#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//Busca la cantidad de bactenias minimas para criar n bacterias si las bacterias se multiplican x2
int main()
{
    int numeroB;
    cin >> numeroB;
    int i=0;
    int result;
    bool numnulo=false;
    if (numeroB<=0){
        numnulo=true;
    }
    while(numeroB >= pow (2,i)){
        i++;
    }
   int potencia = pow (2,i-1);
     if (numnulo){
         result=0;
     }else{
             result = (numeroB-potencia)+1;

     }
cout << result << endl;
    return 0;
}
