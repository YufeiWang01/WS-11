#include "GradeManager.h"


GradeManager::GradeManager() : grades(){

}

void GradeManager::addGrade(int grade){
    grades.push_back(grade);
}

void GradeManager::removeAt(int index) {
    if (index >= 0 && static_cast<std::size_t>(index) < grades.size()){
        grades.erase(grades.begin() + index);
    }
}

void GradeManager::updateGrade(int index, int newGrade){
    if (index >= 0 && static_cast<std::size_t>(index) < grades.size()){
        grades[static_cast<std::size_t>(index)] = newGrade;
    }
}

int GradeManager::countOccurrences(int grade) const{
    int cnt = 0;
    for (int g : grades) if (g == grade) ++cnt;
    return cnt;
}

std::vector<int> GradeManager::findAllIndices(int grade) const{
    std::vector<int> idx;
    for (std::size_t i = 0; i < grades.size(); ++i){
        if (grades[i] == grade) idx.push_back(static_cast<int>(i));
    }
    return idx;
}

int GradeManager::countBelow(int threshold) const {
    int cnt = 0;
    for (int g : grades) if (g < threshold) ++cnt;
    return cnt;
}

int GradeManager::getSize() const {
    return static_cast<int>(grades.size());
}

double GradeManager::getAverage() const {
    if (grades.empty()) return 0.0;
    long long sum = 0;
    for (int g : grades) sum += g;
    return static_cast<double>(sum) / static_cast<double>(grades.size());
}

void GradeManager::clearGrades(){
    grades.clear();
}