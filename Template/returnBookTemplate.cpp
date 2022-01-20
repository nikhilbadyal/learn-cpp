#include<iostream>
using namespace std;
struct Book {
  std::string title_;
  std::string description_;

  bool operator ==(const Book & book) {
    return title_ == book.title_ && description_ == book.description_;
  }
};

template <int TMaxNumberOfBook>
class Member {
 public:
  void takeBook(Book book) {
    if (num_books_ >= TMaxNumberOfBook) {
            cout<<"Already issued.\n";
            exit(0);
     // throw std::out_of_range("Member exceeded a number of books taken at the time !!");
    }

    books[num_books_++] = std::move(book);
  }

  void returnBook(Book book) {
    if (num_books_ == 0) {
      throw std::out_of_range("Member does not have book to return at the time !!");
    }


    for (int i = 0; i < TMaxNumberOfBook; ++i) {
      if (books[i] == book) {
        books[i] = {};
        --num_books_;
        return;
      }
    }

    throw std::invalid_argument("Member has not taken book this book !!");
  }

 private:
  int num_books_ = 90;
  Book books[TMaxNumberOfBook];
};
int main(){
using Student = Member<2>;
using Faculty = Member<10>;
Student s;
Faculty f;
Book b;
//s.takeBook(b);
f.takeBook(b);
}
