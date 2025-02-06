#include "rationnelle.h"
#include <iostream>

using namespace rap;
using namespace std;

int main()
{
    int num;
    int den;

    Rationnelle nb1 = Rationnelle();
    Rationnelle nb2 = Rationnelle();

    

    cout << "Entrez le numerateur==> ";
    cin >> num;
    nb1.setNumerateur(num);
    cout << "Entrez le denominateur==> ";
    cin >> den;
    nb1.setDenominateur(den);

    cout << "--------------------" << endl;

    cout << "Entrez le numerateur==> ";
    cin >> num;
    nb2.setNumerateur(num);
    cout << "Entrez le denominateur==> ";
    cin >> den;
    nb2.setDenominateur(den);


    nb1.multiplication(nb2);
    cout << "-------------------------" << endl;
    nb1.addition(nb2);
    cout << "-------------------------" << endl;
    nb1.soustraction(nb2);
    cout << "-------------------------" << endl;
    nb1.division(nb2);

    return 0;
}