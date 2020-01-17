#include <iostream>
#include "CourseTexts.h"
/*
 new UDT 4:
 */


CourseTexts::CourseTexts()
{
    std::cout << "Textbooks for the term: " << this->textBook1.title << ", " << this->textBook2.title << ", " << this->textBook3.title << std::endl;    
}

CourseTexts::~CourseTexts()
{
    std::cout << "Course Library Emptied, closing. (CourseTexts Dtor)\n";
}

struct CourseTextsWrapper
{
    CourseTextsWrapper(CourseTexts* ptr) : courseTextsPtr( ptr ) { }
    ~CourseTextsWrapper() 
    { 
        delete courseTextsPtr;    
    }
    
    CourseTexts* courseTextsPtr = nullptr;  
};
