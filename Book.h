#pragma once

#include <cstdlib>
#include "LeakedObjectDetector.h"

struct Book
{
    std::string title = ""; 
    int pages;
    int currentPage;
    int bookMark;
    
    Book(): title("TempTitle"), pages(0), currentPage(0), bookMark (0) {}
    Book(std::string newTitle, int numPages) : title(newTitle), pages (numPages), currentPage(0), bookMark (0) {}
    ~Book();
     
    void readBook(int startPage);
    void readChapter(int startPage, int endPage);
    void setBookMark();
    
    JUCE_LEAK_DETECTOR(Book)
};