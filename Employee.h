/**
 * @file Employee.h
 * @author Kimble Culley
 * @date 2024-04-19
 * @brief The Employee.h file
 * 
 * Stores the information for each employee with id, hourly rate, hours worked,
 * and can calculate pay and anniversary date.
 */


/**
 * Store the information for each employee
 *
 * @class EMPLOYEE_H Employee.h "Doxygen/Employee.h"
 * @brief The class for Employee
 *
 */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:
  virtual void print();
  virtual double calculatePay();
  void anniversary();
  Employee();
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
