#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <vector>


// a simple representation of a student.
class Student
{
public:
    Student();
    Student(const std::string& firstName, const std::string& lastName, const std::string& emailID);

    std::string firstName() const;
    std::string lastName() const;
    std::string emailID() const;
    std::string degreeProgram() const;

    /**
     * @brief gpa calculate the average of all marks.
     * @return
     */
    double gpa() const;

    void setDegreeProgram(const std::string& degreeProgram);
    void addGrade(int grade);

private:
    std::string _firstName;
    std::string _lastName;
    std::string _emailID;
    std::string _degreeProgram;

    std::vector<int> _grades;

    // write the Student to a file or ostream.
    friend std::ostream& operator<<(std::ostream& os, const Student& student);

    // parse the file format into a Student object
    friend std::istream& operator>>(std::istream& is, Student& student);
};

#endif
