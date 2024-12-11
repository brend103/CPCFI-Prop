#include <iostream>
#include <cmath>
#include <string>
// Este codigo identifica patrones de "AB" y "BA" las cuales no deben de estar superpuestas
using namespace std;

int main()
{

    string testC;

    getline(cin, testC);
    string bien="YES";
    string mal="NO";
    bool prAB = false;
    bool prBA = false;
    bool succes= false;
    size_t posicionAB = testC.find("AB",0);
    size_t posicionBA = testC.find("BA",0);

    for (size_t i = 0; i < testC.length() -1; i++){
        if(testC.substr(i,2) =="AB" && !prAB){
            prAB= true;
            i++;
        }else if(testC.substr(i,2) =="BA" && prAB){
                //cout << bien << endl;
                succes = true;
        }
    }

     for (size_t i = 0; i < testC.length() -1; i++){
        if(testC.substr(i,2)=="BA" && !prBA){
            prBA= true;
            i++;
        }else if(testC.substr(i,2) =="AB" && prBA){
                //cout << bien << endl;
                succes = true;
        }


    }
    if(succes){
        cout << bien << endl;
    }else if(!succes){
        cout << mal << endl;
    }

    return 0;
}
