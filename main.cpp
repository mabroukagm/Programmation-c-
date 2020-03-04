#include <iostream>

using namespace std;

int main()
{
double a(0), b(0) ;// Déclaration des variables
cout <<"Bienvenue au programme somme de a et b! "<< endl;
cout <<"Donner une variable a :" ; // Demander la premiére variable
cin >> a ;
cout <<"Donner une variable b :" ; // Demander la deuxiéme variable
cin >> b ;
double const somme(a+b); // Faire la somme
cout<<a << "+ " <<b << " = "<< somme << endl; // afficher le résultat
return(0) ;
}
