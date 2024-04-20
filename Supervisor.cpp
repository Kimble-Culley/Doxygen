/**
 * @file Supervisor.cpp
 * @author Kimble Culley
 * @date 2024-04-19
 * @brief The implementation of supervisor class.
 * 
 * Has funcitonality to caculate the pay of the supervisor, print the number supervised, and store the id of the supervisor
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;


/**
 * The default constructor for the supervisor class.  
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}


/**
 * A constructor that takes many parameters to initialize the employee calss and intialize the numSupervised.
 *
 * @param int ID The id of the supervisor
 * @param int years years worked
 * @param double hourlyRate the amount they make per hour
 * @param float hoursWorked the amount of hours worked
 * @param int numSupervised the number of employees the supervisor supervises
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}


/**
 * This function prints the information of the supervisor and the number of supervised employees 
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}


/**
 * This function claculates the pay for the supervisor.
 *
 * @pre That the Supervisor is intilized. 
 * @return double The total pay for the supervisor.
 * @post The total pay is calculated.
 * 
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
