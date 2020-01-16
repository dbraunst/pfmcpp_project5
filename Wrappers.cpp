#include "Wrappers.h"
#include "Book.h"
#include "CourseTexts.h"

BookWrapper::BookWrapper(Book* ptr) : bookPtr( ptr ) { }

BookWrapper::~BookWrapper()
{
    delete bookPtr;   
}

CourseTextsWrapper::CourseTextsWrapper(CourseTexts* ptr) : courseTextsPtr( ptr ) { }

CourseTextsWrapper::~CourseTextsWrapper() 
{ 
    delete courseTextsPtr;    
}
