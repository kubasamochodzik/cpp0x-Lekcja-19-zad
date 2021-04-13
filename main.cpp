#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void losujliczby( int tablica[], int ile, int a, int b )
{
    srand( time( NULL ) );
    int licznik = 0;
    b = b - 5;
    do
    {
        tablica[ licznik ] =( rand() % b ) + a;
        licznik++;
    } while( ile > licznik );
   
}

void wypiszliczby( int tablica[], int ile )
{
    int licznik = 0;
    do
    {
        cout << tablica[ licznik ] << ", ";
        licznik++;
    } while( ile > licznik );
   
}

int obliczsume( int tablica[], int ile )
{
    int licznik = 0;
    int suma = 0;
    do
    {
        suma += tablica[ licznik ];
        licznik++;
    } while( ile > licznik );
   
    return suma;
   
}

int main()
{
    int tablica[ 999 ];
    losujliczby( tablica, 999, 4, 10 );
    wypiszliczby( tablica, 999 );
    int iSuma = obliczsume( tablica, 999 );
    cout << endl << "Suma liczb: " << iSuma << endl;
    getchar();
    return 0;
}
