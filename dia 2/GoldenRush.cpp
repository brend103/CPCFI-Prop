int main()
{

    int testC;
    string bien = "YES";
    string mal = "NO";
    cin >> testC;
    while (testC--){
        int num;
        int resul;
        bool encontrado = false;
        cin >> num >> resul;
        vector <int> vec;
        while (num == 1 or num % 3 == 0 && num > 0) {
            int dobvalor;
            int valor = 1;
            int newValor;
            if(num%3 ==0){
            valor = num/3;
            }
            newValor = valor;
            dobvalor = valor*2;

         // Agregar el elemento al vector
        vec.push_back(valor);
        vec.push_back(dobvalor);
         while (newValor%3==0 && newValor > 0){
                int nValor;
                nValor = newValor/3;
                int newDob = nValor*2;
                vec.push_back(newValor);
                vec.push_back(newDob);
                newValor = nValor;

            }
            num = dobvalor;
                    //for (int i = 0; i < vec.size(); i++) { //imprime el vector
                      //  cout << vec[i] << ", ";
                    //}
        }
         for (int i = 0; i < vec.size(); i++) {
            if (vec[i] == resul) {

                cout << bien << endl;
                break; // Salir del bucle si se encuentra una coincidencia
            }

         }
          if(!encontrado){
            cout << mal << endl;
        }

    /*
        for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
            }
    /***
     for(num){
        int numNew = 2(num/3);
        if (numNew == resul){
            cout << bien;
        }

     }
    }  **/


    }
    return 0;
}