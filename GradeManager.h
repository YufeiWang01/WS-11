#ifndef GRADEMANAGER_H
#define GRADEMANAGER_H
#include <vector>

class GradeManager{
    
private:
    std::vector<int> grades;

public:
    GradeManager();
    void addGrade(int grade);
    void removeAt(int index);
    void updateGrade(int index, int newGrade);
    int countOccurrences(int grade) const;
    std::vector<int> findAllIndices(int grade) const;
    int countBelow(int threshold) const;
    int getSize() const;
    double getAverage() const;
    void clearGrades();
};

#endif