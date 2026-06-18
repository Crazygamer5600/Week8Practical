// Week8Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iostream>
#include <algorithm>

#include "Student.h"


int main()
{
    Student student{ };

    // Read from file.
    std::ifstream inFile{ "studentfile" };

    if (inFile.is_open()) {
        inFile >> student;
        std::cout << student;
    }

    // Block 2
    // New Student
    //Student st2{ "Davy", "Jones", "jondj007" };
    //st2.setDegreeProgram("LMCL");
    //st2.addGrade(6);
    //st2.addGrade(5);
    //st2.addGrade(3);
    //std::cout << st2 << std::endl;

    //{
    //	std::ofstream outFile{ "students" };
    //	if (outFile.is_open()) {
    //		outFile << student;
    //		outFile << st2;
    //	}
    //}

    // Block 3
    //std::ifstream inFile2("students");
    //std::vector<Student*> students;
    //if (inFile2.is_open()) {
    //	while (inFile2.peek() != -1) {
    //		// TODO: 1) instantiate a new Student in dynamic memory, 2) load the student from the stream, 3) add the student to the vector
    //	}
    //	// print out the loaded students
    //	for (auto s : students) {
    //		std::cout << *s;
    //	}
    //	// clean up the memory
    //	std::for_each(students.begin(), students.end(), [](auto ptr) { delete ptr; });
    //}
}
