#include <iostream>
#include <cmath>//biblio pour le calcul math�matique

using namespace std;

int main()
{
  double a(0), b(0),c(0) ;// D�claration des variables
cout <<"Bienvenue au programme a ^ b! "<< endl;
cout <<"Donner une variable a :" ; // Demander la premi�re variable
cin >> a ;
cout <<"Donner une variable b :" ; // Demander la deuxi�me variable
cin >> b ;
cout <<"Donner une variable c :" ; // Demander la troisi�me variable
cin >> c ;
double const resultat1 = pow(a,b); // Faire le calcul
double const resultat2 (pow(b,c)); // Faire le calcul
cout<<a << " ^ " << b << " = "<< resultat1 << endl; // afficher le r�sultat
cout<<b << " ^ " << c << " = "<< resultat2 << endl; // afficher le r�sultat
return(0) ;
}
