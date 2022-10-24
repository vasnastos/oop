// Γράψτε ένα πρόγραμμα που να ορίζει μια κλάση Α με ένα ακέραιο ιδιωτικό μέλος δεδομένων x και ένα ακέραιο δημόσιο μέλος δεδομένων y.
// Συμπληρώστε τον απαιτούμενο κώδικα έτσι ώστε για ένα αντικείμενο που δημιουργείται στη main να εμφανίζεται τόσο η τιμή του x όσο και η τιμή του y.

#include <iostream>

using namespace std;

class A
{
private:
    int x;

public:
    int y;
    A(int x, int y) : x(x), y(y) {}
    int getx() {return this->x;}
    void display()
    {
        cout<<"x:"<<this->x<<"\ty:"<<this->y<<endl;
    }
};

int main()
{
    A obj(1, 2);
    cout<<"x:"<<obj.getx()<<"\ty:"<<obj.y<<endl;
    // obj.display() // Εναλλακτικός τρόπος
}