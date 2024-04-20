/**
 * @file Supervisor.h
 * @author Kimble Culley
 * @date 2024-04-19
 * @brief The class for supervisor
 * 
 * Holds the methods without implementation for supervisor.cpp, and keeps the number supervised. 
 */


/**
 * The class for supervisor, 
 *
 * @class SUPERVISOR_H Supervisor.h "Doxygen/Supervisor.h"
 * @brief represents a supervisor who oversees employees.
 *
 */
#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

class Supervisor : public Employee {
 private:
  int numSupervised;
 public:
  void print();
  double calculatePay();
  Supervisor();
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
