#include <iostream>
using namespace std;

class Book
{
    private:
        string title;
        string author;
        double price;
    
    public:
        // Constructors
        Book():title("No title"),author("No author"),price(-1.0) {}
        Book(string title,string author,double price):title(title),author(author),price(price) {}

        // Destructor
        ~Book() {}

        // setters
        void set_title(string new_book_title) {this->title=new_book_title;}
        void set_author(string new_book_author) {this->author=new_book_author;}
        void set_price(double new_book_price) {this->price=new_book_price;}

        // getters
        string get_author()const {return this->author;}
        string get_title()const {return this->title;}
        double get_price()const {return this->price;}

        // Display method
        void display()
        {
            cout<<"Title:"<<this->title<<"\tAuthor:"<<this->author<<"\tPrice:"<<this->price<<endl;
        }
};


// 48 Laws of Power - Robert Greene 
// Be Here Now - Ram Dass
// Extreme Ownership - Jocko Willink and Leif Babin
// How to Eat - Thich Nhat Hanh
// How to Win Friends & Influence People - Dale Carnegie
// Radical Focus - Christina Wodtke
// ReWork - Jason Fried & David Hansson
// Sapiens - Yuval Noah Harari
// Shantaram - Gregory David Roberts
// Soft Skills - John Sonmez
// Tao of Wu - RZA
// The Alchemist - Paulo Coelho
// The Art of War - Sun Tzu
// The Book of Mistakes - Skip Prichard
// The Culture Code - Daniel Coyle
// The Four Agreements - Don Miguel Ruiz

int main()
{
    Book books[]{
        Book("48 Laws of Power","Robert Greene",45),
        Book("Be Here Now","Ram Dass",32),
        Book("Extreme Ownership","Jocko Willink and Leif Babin",56),
        Book("How to Eat","Thich Nhat Hanh",89.34),
        Book("Radical Focus","Christina Wodtke",56.78),
        Book("ReWork","Jason Fried & David Hansson",12.456),
        Book("Sapiens","Yuval Noah Harari",123.45),
        Book("Shantaram","Gregory David Roberts",23.89),
        Book("Soft Skills","John Sonmez",10.98),
        Book("Tao of Wu","RZA",67.89),
        Book("The Alchemist","Paulo Coelho",78.32),
        Book("The Art of War","Sun Tzu",234.56),
        Book("The Book of Mistakes","Skip Prichard",43.67),
        Book("The Culture Code","Daniel Coyle",55.77),
        Book("The Four Agreements","Daniel Coyle",77.985),
        Book("Death on the Nile","Agatha Christie",21.4598)
    };

    for(auto &book:books)
    {
        book.display();
    }
    return 0;
}