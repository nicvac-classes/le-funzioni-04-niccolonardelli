#include <iostream>
using namespace std;
int elevamento(float a, float b)
{
  float potenza;
  int i;
  int t;
  i=1;
  if (b=1)
  {

  }
  else
  {
    t = a;
    while (i<b)
    {
        a=a*t;
        i=i+1;
    }
  }
  return a;

}
int addizione(float a, float b)
{
    float somma;
    somma = a+b;
    return somma;
}
int sottrazione(float a, float b)
{
    float differenza;
    differenza = a-b;
    return differenza;
}
int moltiplicazione(float a, float b)
{
    float prodotto;
    prodotto=a*b;
    return prodotto;
}
int divisione(float a, float b)
{
    float quoziente;
    quoziente = a/b;
    return quoziente;
}
int input(float a)
{
    while (a<=0)
    {
        cout << "inserisci un valore POSITIVO" << endl;
        cin>>a;
    }
    return a;
}
void main() 
{
    float a, b, somma, potenza, differenza, prodotto, quoziente;
    cout << "inserisci il primo numero" << endl;
    cin>>a;
    a = input(a);
    cout << "inserisci il secondo numero" << endl;
    cin >> b;
    b= input(b);
    somma = addizione(a,b);
    differenza= sottrazione(a,b);
    prodotto = moltiplicazione(a,b);
    quoziente = divisione(a,b);
    potenza = elevamento(a,b);
    cout << a << " + " << b << " = " << somma << endl;
    cout << a << " - " << b << " = " << differenza << endl;
    cout << a << " * " << b << " = " << prodotto << endl;
    cout << a << " : " << b << " = " << quoziente << endl;
    cout << a << "^(" << b << ") = " << potenza << endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
