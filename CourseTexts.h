#pragma once

#include "Book.h"
#include "LeakedObjectDetector.h"
//#include "JUCE_LEAK_DETECTOR"

struct CourseTexts
{
    
    //It really bothers me that all three of these made up titles have the exact same character count but it's too cool to change
    
    Book textBook1 {"Digital Signal Processing", 850 };
    Book textBook2 {"Programming for Musicians", 423 };
    Book textBook3 {"Pocket Guide to Arranging", 178 };
    
    
    CourseTexts();
    ~CourseTexts();
    
    JUCE_LEAK_DETECTOR(CourseTexts)
};
