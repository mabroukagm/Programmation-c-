#include <iostream>

using namespace std;

int main()
{
double a(0), b(0) ;// D�claration des variables
cout <<"Bienvenue au programme somme de a et b! "<< endl;
cout <<"Donner une variable a :" ; // Demander la premi�re variable
cin >> a ;
cout <<"Donner une variable b :" ; // Demander la deuxi�me variable
cin >> b ;
double const somme(a+b); // Faire la somme
cout<<a << "+ " <<b << " = "<< somme << endl; // afficher le r�sultat
return(0) ;
}
