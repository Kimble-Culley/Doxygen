/**
 * @file Officer.h
 * @author Kimble Culley
 * @date 2024-04-19
 * @brief The office.h file
 * 
 * holds the class for the officer object
 */


/**
 * Conatins the officer object that inherits the infomration from when they were an employee and add evilness
 *
 * @class OFFICER_H Officer.h "Doxygen/Officer.h"
 * @brief object officer information
 *
 */
#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness;
 public:
  void print();
  double calculatePay();
  Officer();
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
