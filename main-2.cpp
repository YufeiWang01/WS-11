#include <iostream>
#include "GradeManager.h"

int main() {
    
    GradeManager gm;

    gm.addGrade(80);
    gm.addGrade(90);
    gm.addGrade(75);

    std::cout << gm.getSize() << "\n";   
    std::cout << gm.getAverage() << "\n"; 
    std::cout << gm.countBelow(80) << "\n"; 
    gm.updateGrade(1, 95);   
    gm.removeAt(2);        
    std::cout << gm.getSize() << "\n";  
    std::cout << gm.countOccurrences(95) << "\n"; 


    return 0;
}