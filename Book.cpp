#include "Book.h"
#include <iostream>
#include <cstdlib>

Book::~Book()
{
    std::cout << "Removing " << this->title << " from available titles. (Book Dtor)" << std::endl;    
}

void Book::readBook(int startPage)
{
    currentPage = startPage;
}

void Book::readChapter(int startPage, int endPage)
{
    currentPage = startPage;
    std::cout << "Starting " << this->title << " on page " << this->currentPage << std::endl;
    while (currentPage <= endPage)
    {
        std::cout<< "Reading page: " << this->currentPage << std::endl;
        currentPage++;
    }
    std::cout << "Finished page: " << endPage << ", chapter complete!" << std::endl;
}

void Book::setBookMark()
{
    bookMark = currentPage;    
    std::cout << "Set bookmark at page " << this->currentPage << ", see you again soon!" << std::endl; 
}
