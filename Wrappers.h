/*
#include "Book.h"
#include "CourseTexts.h"
*/
struct BookWrapper
{
    BookWrapper(Book* ptr);
    ~BookWrapper();
    
    Book* bookPtr = nullptr;
};

struct CourseTextsWrapper
{
    CourseTextsWrapper(CourseTexts* ptr);
    ~CourseTextsWrapper();
    
    CourseTexts* courseTextsPtr = nullptr;  
};