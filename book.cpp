#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
#include <vector>
#include "author.cpp"
#include "article.cpp"
#include "chapter.cpp"

using namespace std;

class Book{
private:
    string title;
    Author author;
    int publicationYear;
    vector <Chapter> chapters;
public:
    Book()
    : title(""), author(""), publicationYear(0), chapters() {};
    Book(string bookTitle, Author bookAuthor, int year, vector<Chapter> &bookChapters)
    : title(bookTitle), author(bookAuthor), publicationYear(year),  chapters(bookChapters) {};
    void addChapter(Chapter &chapter){
        chapters.push_back(chapter);
    };
    void displayInfo(){
        cout << "skibidi mostek gyaaat";
    };
    string getTitle(){
        return title;
    };
    Author getAuthor(){
        return author;
    };
    int getPublicationYear(){
        return publicationYear;
    };
    vector<Chapter> &getChapters(){
        return chapters;
    };
}
#endif