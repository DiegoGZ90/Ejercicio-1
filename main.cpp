/*#include <iostream>
using namespace std;

int main() {

    int n,i;
    long double factorial; // se declara long double para poder representar números grandes
    cout << "Introduce un numero: ";
    cin >> n;
    factorial=1;
    for(i=1;i<=n;i++)
        factorial = factorial * i;
    cout << endl << "Factorial de " << n << " -> " << factorial << endl;
    return
}*/
/*#include <iostream>
using namespace std;
const string INFO = "Este programa imprime fibonacci \
1 hasta N, \nsiendo este ultimo un numero ingresado por el usuario\n";
int main() {
    unsigned long long aux = 1, fib = 0, lim, init;
    cout << INFO << endl;
    cout << "Ingrese un numero para la sucesion de fibonacci: ";
    cin >> lim;
    if(lim > 0) {
        for(init = 1; init <= lim; init++) {
            cout << "[" << fib << "] ";
            aux += fib;
            fib = aux - fib;
        }
    } else {
        cout << "El numero debe ser mayor a cero!!" << endl;
    }
    cout << "\n";
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{

    int n, i;

    cout << "\nIntroduce un numero: ";
    cin >> n;

    if(n==1)
    {
        cout << "\nNo es primo" << endl;
    }
    else
    {
        i=2;
        while(n%i!=0)
        {
            i++;
        }

        if(i==n)
            cout << "\nPrimo" << endl;
        else
            cout << "\nNo es primo" << endl;
    }
    system("pause");
}*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    //declarar la variable
    int numero;
    system("cls");

    cout << "Introduce numero: ";
    cin >> numero;

    if(numero % 2 == 0)
       cout << endl << numero <<" es par\n";
    else
       cout << endl << numero <<" es impar\n";

    system("pause");
}/*

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    for(int tabla =1; tabla <= 10; tabla++){
        cout<<"TABLA DEL  "<< tabla <<endl;
        for(int i=1; i<=10; i++){
            cout<< tabla <<" * "<< i <<" = "<< tabla * i <<endl;
        }
    }
    return 0;
}