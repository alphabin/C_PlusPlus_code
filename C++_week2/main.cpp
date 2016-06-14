/*
 * Main.cpp
 *
 *  Created on: Jun 8, 2016
 *      Author: Chatura ahangama
 *      Assignment 3
 */


#include "Employee.h"
#include "Programmer.h"
#include "SoftArchitect.h"
#include <string>
#include <iostream>



using namespace std;

void dataTest(Employee &,Programmer &,SoftArchitect&);

int main()
{

  //Populating the data for the Employees
  Employee Jimmy;  //Employee with the deafult constructor
  Jimmy.print();   //Printing the results of 'normal' deafult constructor

  //Populating the data for the Programmers
  Programmer Sam; // Programmer default construct
  Sam.print(); // Print Programmer default construct

  //False Case Check
  checkNum(Jimmy,Sam); //Calling the member function to check
  if (Jimmy == Sam) //Check by overloading
	  cout<<endl<<"True by Overload Checking";
  else
	  cout<<endl<<"False by Overloading";

  //True Case
  Jimmy.addPhone(18188181111); //Assign the same number
  Jimmy.print();
  Sam.addPhone(18188181111);  //Assign the same number
  Sam.print();


  //True Case Check
  checkNum(Jimmy,Sam); //Calling the member function to check
   if (Jimmy == Sam) //Check by overloading
 	  cout<<endl<<"True by Overload Checking";
   else
 	  cout<<endl<<"False by Overload Checking";



  Jimmy.addIntAge(3); //Add 3 to Jimmys Age
  Jimmy.print();


  Jimmy=Jimmy+15; //Add 15 to Jimmys Age
  Jimmy.print();



  cout<<Jimmy;

  Employee tests;
  cin>>tests;
  tests.print();

};


//Test function that modifies the input of each class type, the order is important
void dataTest(Employee & eVar,Programmer & pVar ,SoftArchitect & sVar){


	cout<<"\n\n\t\t|Test Mode Enabled|"<<endl;
	cout<<"\nChanging the Default Constructor For Employee"<<endl ;

	eVar.addName("Sali Patty");
	eVar.addId(10001);
	eVar.addPhone(8111112127);
	eVar.addAge(23);
	eVar.addGender("F");
	eVar.addTitle("Hacked");
	eVar.addSalary(1111000);
	eVar.addDate(1,1,2001);

	cout<<"Changing the Default Constructor For Programmer"<<endl ;

	pVar.addName("Mani Patty");
	pVar.addId(20002);
	pVar.addPhone(1111112121);
	pVar.addAge(24);
	pVar.addGender("M");
	pVar.addTitle("Hacked");
	pVar.addSalary(1221000);
	pVar.addDate(1,1,2001);
	pVar.addDept(5231122);
	pVar.addSupervisor("Goe Boss");
	pVar.addPercent(100);
	pVar.cProgram("YES");
	pVar.jProgram("YES");

	cout<<"Changing the Default Constructor for Architect"<<endl ;

	sVar.addName("Cheesy Patty");
	sVar.addId(82312);
	sVar.addPhone(1291234444);
	sVar.addAge(12);
	sVar.addGender("M");
	sVar.addTitle("Hack-tect");
	sVar.addSalary(323120);
	sVar.addDate(12,24,3009);
	sVar.addDept(5434122);
	sVar.addSupervisor("Big Soss");
	sVar.addPercent(10);
	sVar.addyears(3);


}
