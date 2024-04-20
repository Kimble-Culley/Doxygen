/**
 * @file Officer.cpp
 * @author Kimble Culley
 * @date 2024-04-19
 * @brief The Officer.cpp
 * 
 * get the infomration for Officers including their id, years word, hourly rate, and hourse worked, and a new evil variable. Along with printing out the information associated with the officer and the pay they get
 */

#include "Officer.h"
#include <iostream>

using namespace std;
//Constructor which set the offices evilness to a base of 500
Officer::Officer() {
  evilness = 500;
}


/**
 * Constructs the officers datbase entry and add the evilness to it
 *
 * @param int ID the id of the office
 * @param int years the years the officer has worked
 * @param double hourlyRate The hourly rate of the officer
 * @param float hoursWorked The hours the officer worked
 * @param double evilness The amount of evil the officer is
 * @pre That the Officer constructor is called
 * @post The variables are updated to the new officer
 * 
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}


/**
 * prints the infomration of the officer, including the evilness
 *
 * @pre That an officer is intialized
 * @return void 
 * @post Prints out the information
 * 
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}


/**
 * calculates the pay need based on evilness, hoursworked, and hourly rate.
 *
 * @pre that an officer is intialized and the calculate pay fucntion is called
 * @return double return the amount of pay needed
 * @post the amount of pay is calculated
 * 
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
