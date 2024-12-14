int main()
{
    int decremento=0;
    int doble=0;

    int a, b;
    cin >> a >> b;
    while(a!=b){

        if(a > b){
            a--;
            decremento ++;

        }
        if (b>a && (a-1)*2==b){
            a--;
            decremento++;
        }

        if ((b>a)&&((b - a) % 2 == 0 || a * 2 == b)) {
            a = a* 2; // Multiplicación natural por 2
            doble++;
            //cout << doble<< endl;


        } else if(b>a && (b - a)% 2 != 0 ){
            decremento++;
            a--;
           // cout << decremento << endl;

        }
        if (a==b){
            break;
        }


    }

    int nBoton = decremento + doble;
    cout << nBoton;
    return 0;
}
