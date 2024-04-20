/**
 * @file Employee.cpp
 * @author Kimble Culley
 * @date 2024-04-19
 * @brief The implementation of Employee.h
 * 
 * Constructs an employee object that stores the id, years worked, hourly rate, and hours worked.
 */

#include "Employee.h"
#include <iostream>

using namespace std;


/**
 * default constructor for Employee, initializes the variables ID, years, hoursWorked, hourlyRate, to -1 
 */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}

Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}


/**
 * Prints the information for an emplyee including ID, years employed, hourly rate, and hours worked
 *
 * @pre That Employee is intilized
 * @return void 
 * @post Prints the information for Employee
 * 
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}


/**
 * calculates when the employees work anniversary is.
 *
 * @pre That Employee is intilized
 * @return void 
 * @post printes out the ID and years worked at the company if its their anniversary
 * 
 */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}


/**
 * calculates the pay needed based on the hourly rate and hours worked
 *
 * @pre That Employee is intialized 
 * @return double The total pay of the employee 
 * @post The pay is calculated and returned
 * 
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

