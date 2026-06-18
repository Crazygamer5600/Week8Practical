#include "Student.h"

#include "student.h"
#include <fstream>
#include <sstream>

Student::Student()
{
}

Student::Student(const std::string& firstName, const std::string& lastName,
    const std::string& emailID)
    : _firstName{ firstName }, _lastName{ lastName }, _emailID{ emailID }
{
}

std::string Student::firstName() const
{
    return _firstName;
}

std::string Student::lastName() const
{
    return _lastName;
}

std::string Student::emailID() const
{
    return _emailID;
}

std::string Student::degreeProgram() const
{
    return _degreeProgram;
}

double Student::gpa() const
{
    double gpa = 0;
    int count = 0;
    for (int grade : _grades) {
        gpa += grade;
        count++;
    }
    if (count > 0) {
        return gpa / count;
    }
    return 0;
}

void Student::setDegreeProgram(const std::string& degreeProgram)
{
    _degreeProgram = degreeProgram;
}

void Student::addGrade(int grade)
{
    _grades.push_back(grade);
}

std::ostream& operator<<(std::ostream& os, const Student& student)
{

    // TODO: write the student to the output stream in the following format:
    // emailID|firstName|lastName|degreeProgram|grade0,grade1,grade2,...,graden
    // hint: you will need a for loop
    
    return os;
}

std::istream& operator>>(std::istream& is, Student& student)
{
    std::string line;
    getline(is, line); // read a whole line in from the stream

    std::stringstream ss(line); // convert the string to a string stream so that we can tokenize it
    getline(ss, student._emailID, '|'); // example of reading in one token (emailID).
    // TODO: read in firstName, lastName, degreeProgram

    // TODO: Read all grades.
    // hints: 
    //  - to read the grades, you will want to loop until the stringstream reaches the _end of file_
    //  - getline will only read strings but the grades are integers. Investigate the function std::stoi.

    return is;
}
