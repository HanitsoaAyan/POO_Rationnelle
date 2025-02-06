#include "rationnelle.h"
#include <iostream>

using namespace rap;
using namespace std;

Rationnelle::Rationnelle()
{
    numerateur = 0;
    denominateur = 1;
}
Rationnelle::~Rationnelle()
{
    
}
int Rationnelle::getNumerateur()
{
    return numerateur;
}
int Rationnelle::getDenominateur()
{
    return denominateur;
}
void Rationnelle::setNumerateur(int objet)
{
    numerateur = objet;
}
void Rationnelle::setDenominateur(int objet)
{
    if (objet != 0)
    {
        denominateur = objet;
    }
    else 
    {

    }
}
Rationnelle  Rationnelle::multiplication(Rationnelle nb)
{
    int num;
    int den;
    cout << "Multiplication " << endl;
    num = numerateur * nb.getNumerateur();
    den = denominateur * nb.getDenominateur();
    cout << num << "/" << den << endl;
    return *this;
}
Rationnelle  Rationnelle::addition(Rationnelle nb)
{
    int num1 ;
    int num2;
    int den;
    int num;
    cout << "Addition" << endl;
    if(nb.getDenominateur() != nb.getDenominateur())
    {
        num1 = numerateur * nb.getDenominateur();
        num2 =  denominateur * nb.getNumerateur();
        den = denominateur * nb.getDenominateur();
        num = num1 + num2;

        nb.setNumerateur(num);
        nb.setDenominateur(den);
        cout << num << "/" << den ;
        
        cout << endl;
    }
    else if(nb.getDenominateur() == nb.getDenominateur())
    {
        num1 = numerateur;
        num2 = nb.getNumerateur();
        num = num1 + num2 ;
        den = denominateur* nb.getDenominateur();

        nb.setNumerateur(num);
        nb.setDenominateur(den);
        cout << num << "/" << den ;
        
        cout << endl;
    }
    else
    {

    }
    return *this ;
}
Rationnelle  Rationnelle::soustraction(Rationnelle nb)
{
    int num1 ;
    int num2;
    int den;
    int num;
    cout << "Soustraction" << endl;
    if(nb.getDenominateur() != nb.getDenominateur())
    {
        num1 = numerateur * nb.getDenominateur();
        num2 = nb.getNumerateur() * denominateur;
        den = denominateur * nb.getDenominateur();
        num = num1 - num2;

        nb.setNumerateur(num);
        nb.setDenominateur(den);
        cout << num << "/" << den ;
        
        cout << endl;
    }
    else if(nb.getDenominateur() == nb.getDenominateur())
    {
        num1 = numerateur;
        num2 = nb.getNumerateur();
        num = num1 - num2 ;
        den = denominateur* nb.getDenominateur();

        nb.setNumerateur(num);
        nb.setDenominateur(den);
        cout << num << "/" << den ;
        
        cout << endl;
    }
    else
    {

    }
    return *this;
}
Rationnelle  Rationnelle::division(Rationnelle nb)
{
    int num;
    int den;

    cout << "Division " << endl;
    num = nb.getNumerateur() * denominateur ;
    den = numerateur * nb.getDenominateur();

    nb.setNumerateur(num);
    nb.setDenominateur(den);
    cout << num << "/" << den ;
        
    cout << endl;
    return *this;
}
