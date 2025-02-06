using namespace std;

// creation de la classe;
class Rationnelle
{
    private:
        int numerateur ;
        int denominateur ;
    public:
        Rationnelle(); // Constructeur par défaut 
        ~Rationnelle(); // Destructeur
    
    // Accesseurs (getteurs)
        int getNumerateur();
        int getDenominateur();
    
    // Modificateurs (setteurs)
        void setNumerateur(int objet);
        void setDenominateur(int objet);

    //Méthodes 
        Rationnelle multiplication(Rationnelle nb);
        Rationnelle addition(Rationnelle nb);
        Rationnelle soustraction(Rationnelle nb);
        Rationnelle division(Rationnelle nb);
        void aficher();
};

