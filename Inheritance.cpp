// this program demonstrates inheritance between three classes within the same source file.

#include <iostream>
#include <string>
using namespace std;

class Book
{
   private:
   string title;
   string author;
   int publicationYear;
   
   public:
   //prompts for the book title, author, and publication year
   void promptBookInfo()
   {
      cout << "Title: ";
      getline(cin, title);
      cout << "Author: ";
      getline(cin, author);
      cout << "Publication Year: ";
      cin >> publicationYear;
      cin.ignore(1); //this will allow getline to be called again
   }
   
   //display the book information
   void displayBookInfo() const
   {
      cout << title << " (" << publicationYear << ") by " << author << endl;
   }
};

class TextBook : public Book
{
   private:
   string subject;
   
   public:
   //prompt for the text book subject
   void promptSubject()
   {
      cout << "Subject: ";
      getline(cin, subject);
   }
   
   //display the text book subject
   void displaySubject() const
   {
      cout << "Subject: " << subject << endl;
   }
};

class PictureBook : public Book
{
   private:
   string illustrator;
   
   public:
   //prompt for the picture book illustrator
   void promptIllustrator()
   {
      cout << "Illustrator: ";
      getline(cin, illustrator);
   }
   
   //display the picture book illustrator
   void displayIllustrator() const
   {
      cout << "Illustrated by " << illustrator << endl;
   }
};

int main()
{
   // Declare a Book object here and call its methods
   Book book;

   book.promptBookInfo();
   cout << endl;
   book.displayBookInfo();
   cout << endl;

   // Declare a TextBook object here and call its methods
   TextBook textBook;
   
   textBook.promptBookInfo();
   textBook.promptSubject();
   cout << endl;
   textBook.displayBookInfo();
   textBook.displaySubject();
   cout << endl;

   // Declare a PictureBook object here and call its methods
   PictureBook pictureBook;

   pictureBook.promptBookInfo();
   pictureBook.promptIllustrator();
   cout << endl;
   pictureBook.displayBookInfo();
   pictureBook.displayIllustrator();

   return 0;
}
