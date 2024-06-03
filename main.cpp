/*Subprogramul schimb are trei parametri:
• n şi x, prin care primeşte câte un număr natural (n∈[0,108], x∈[1,9]);
• p, prin care primește un număr natural reprezentând poziția unei cifre a numărului n (0≤p). Pozițiile
cifrelor sunt numerotate de la dreapta la stânga, astfel: cifra unităților este pe poziția 0, cifra zecilor
este pe poziția 1 ș.a.m.d.
Subprogramul transformă numărul n, înlocuind cifra de pe poziția p cu cifra x, și furnizează numărul
obținut tot prin parametrul n. Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=12587, x=6 și p=3, după apel, n=16587. */
#include <iostream>
using namespace std;
int n,x,p;
int schimb(int n,int x,int p)
{
    int rest;
    int z;
    z=1;
    while(p>0)
    {
        z=z*10;
        p--;
    }
    rest = n%z;
    n =((n/(z*10)*10)+x)*z+rest;
    return n;
}
int main()
{
    cout<<"la numarul ";
    cin>>n;
    cout<<"schimb cu cifra ";
    cin>>x;
    cout<<"cifra de pe pozitia ";
    cin>>p;
    cout<<"si obtin "<<schimb(n,x,p);
    return 0;
}
