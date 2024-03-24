
#include <iostream>
#include <string>
using namespace std;
class Book_library {
private:
    string ISBN,title,author;
public:
    Book_library(string ISBN, string title, string author): ISBN(ISBN), title(title), author(author) {
    }
    string getISBN(){
        return ISBN;
    }
    string getTitle(){
        return title;
    }
    string getAuthor(){
        return author;
    }
};
int main() {
    bool found = false;
    string ISBN;
    Book_library l1[10] = {
        Book_library("2001","The Fault in Our Stars:)", "John Green"),
        Book_library("2002","The Fault in Our Stars:)"," by John Green "),
        Book_library("2003","It Ends with Us:)","coolen hoover" ),
        Book_library("2004","The Sisterhood of the Traveling Pants:)","Ann Brashares"),
        Book_library("2005","The Baby-Sitters Club:)" ,"Ann M. Martin"),
        Book_library("2006","The Princess Bride:)","William Goldman" ),
        Book_library("2007","The Selection:)","Kiera Cass"),
        Book_library("2008","The Sisterhood of the Traveling Pants:)","Ann Brashares"),
        Book_library("2009","Little Women:)","Louisa May Alcott"),
        Book_library("2010","A Wrinkle in Time:)","Madeleine L'Engle"),
    };
    cout << "Enter the ISBN:) of the Book library:)))";
    cin >> ISBN;
    for (int i = 0; i < 10; ++i) {
        if (l1[i].getISBN() == ISBN) {
            cout << "Details of Book library are:))"<<endl;
            cout << "Title:))"<< l1[i].getTitle()<<endl;
            cout << "Author:))"<< l1[i].getAuthor()<<endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Your book with ISBN "<< ISBN<<" is not available in the library:(((" << endl;
    }
    return 0;
}