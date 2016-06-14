/*
 * Employee.cpp
 *
 *  Created on: Jun 8, 2016
 *      Author: Chatura ahangama
 */

#include "Employee.h"
#include "Date.h"
#include "Programmer.h"
#include <iostream>
#include <iomanip>

using namespace std;

Employee::Employee() {
	// Creating the deafult constructor Values

	string nname="Jimmy Fallon";
	int nempID=12345;
	long int nphoneNum=9495551234;
	int nage=40;
	string ngender="M";
	string njTitle="Comedian";
	long int nsalary=100000;
	int a=8;
	int b=31;
	int c=2014;


	name=nname;
	empID=nempID;
	phoneNum=nphoneNum;
	age=nage;
	gender=ngender;
	jTitle=njTitle;
	salary=nsalary;
	hiredate=Date(a,b,c);

}

Employee::Employee(string nname,int nempID,long int nphoneNum,int nage,string ngender,string njTitle,long int nsalary,int a,int b,int c) {
	// Non Deafult constructor
	 name=nname;
	 empID=nempID;
	 phoneNum=nphoneNum;
	 age=nage;
	 gender=ngender;
	 jTitle=njTitle;
	 salary=nsalary;
	 hiredate=Date(a,b,c);

}

void Employee::addName(string nname){ /*Assingning to internal private variable*/
	  name=nname;

}

void Employee::getName() const{
	  cout<<left<<name;

}


void Employee::addId(int nempID){  /*Assingning to internal private variable*/
	empID=nempID;

}

void Employee::getId() const{
	cout<<left<<empID;

}

void Employee::addPhone(long int  nphoneNum){  /*Assingning to internal private variable*/
	 phoneNum=nphoneNum;



}

long int Employee::getPhone() const{
	 return phoneNum;

}
void Employee::addAge(int nage){  /*Assingning to internal private variable*/
	 age=nage;

}

int Employee::getAge() const{
	 return age;

}

void Employee::addGender(string ngender){  /*Assingning to internal private variable*/
	gender=ngender;
}

void Employee::getGender() const{
	cout<<left<<gender;

}

void Employee::addTitle(string njTitle){  /*Assingning to internal private variable*/
	 jTitle=njTitle;

	}

void Employee::getTitle() const{
	 cout<<left<<setw(10)<<jTitle;

	}

void Employee::addSalary(long int nsalary){  /*Assingning to internal private variable*/
	 salary=nsalary;
	}

void Employee::getSalary() const{
	 cout<<left<<salary;
	}


void Employee::addDate(int a,int b,int c){  /*Assingning to internal private variable*/
	Date temp(a,b,c);
	hiredate=temp;

	}

void Employee::getDate()const{

	hiredate.printDate();

	}



void Employee::print() const{

	cout<< endl<<"-------------------------------------------------------------------------------------------------------------------\t" <<endl;
	cout << "NAME\t\t"<<left<<"EmployeeID\t"<<left<<"Phone\t\t"<<left <<"Age\t"<<left<<"Gender\t"<<left<<"JobTitle\t"<<left<<"Salary\t "<<left<<"HireDate\t"<<endl;

    getName();
    cout<<"\t";
    getId();
    cout<<"\t\t";
    cout<<getPhone();
    cout<<"\t";
    cout<<getAge();
    cout<<"\t";
    getGender();
    cout<<"\t";
    getTitle();
    cout<<"\t";
    getSalary();
    cout<<"\t";
    getDate();

    cout<<endl;
}


void Employee::addIntAge(int b){ //add the b to the current age
     age=this->age+b;
     cout<<"\n Added "<<b<<" "<<endl;
}


bool Employee::operator==(Employee b){  //Internal overload function for the == sign
	 if (getPhone()==b.getPhone())  //Checks equality
		 return true;
	 else
		 return false;

}

Employee Employee::operator+(const int& b){   //Internal overload function for the + sign
	addIntAge(b);
	Employee mock;
	mock.name=this->name;
	mock.empID=this->empID;
	mock.phoneNum=this->phoneNum;
	mock.age=this->age;
	mock.gender=this->gender;
	mock.jTitle=this->jTitle;
	mock.salary=this->salary;
	mock.hiredate=this->hiredate;
	return mock;
}

Employee::~Employee() {

}


void checkNum(Employee left, Programmer right ){ /*Friend function laying outside*/

	   cout<<"\n ++++++ Phone ++++ ++++++ "<<endl;
	   if  (left.getPhone() == right.getPhone()){
		   cout<<endl;
		   cout <<"Equal Numbers"<<endl;
		   left.getName();
		   cout<<endl;
	   	   right.getName();
	   	   cout<<endl;
		   cout <<"Equal Numbers"<<endl;}
	   else
			cout<<"Not Equal"<<endl;

	   cout<<"\n ++++++ +++++ ++++ Number "<<endl;
}


ostream& operator<<(ostream& out, Employee temp){  //Overloaded operator fot the cout<<
	out<< endl<<"-------------------------------------------------------------------------------------------------------------------\t" <<endl;
		out << "NAME\t\t"<<left<<"EmployeeID\t"<<left<<"Phone\t\t"<<left <<"Age\t"<<left<<"Gender\t"<<left<<"JobTitle\t"<<left<<"Salary\t "<<left<<"HireDate\t"<<endl;

		temp.getName();
	    out<<"\t";
	    temp.getId();
	    out<<"\t\t";
	    out<<temp.getPhone();
	    out<<"\t";
	    out<<temp.getAge();
	    out<<"\t";
	    temp.getGender();
	    out<<"\t";
	    temp.getTitle();
	    out<<"\t";
	    temp.getSalary();
	    out<<"\t";
	    temp.getDate();

	    out<<endl;

	    return out;

}



istream& operator>>(istream& in, Employee& input){ //Overloaded operator for cin >>


	string nname;
	int nempID;
	long int nphoneNum;
	int nage;
	string njTitle;
	string ngender;
	long int nsalary;
	int nmonth;
	int nday;
	int nyear;

    cout<<"Enter name : ";
	getline(in,nname);
	cout<<"Enter ID : ";
	in>>nempID;
	cout<<"Enter Number : ";
	in>>nphoneNum;
	cout<<"Enter Age : ";
	in>>nage;
	cout<<"Enter Gender : ";
	in>>ngender;
	cout<<"Enter Title : ";
	in>>njTitle;
	cout<<"Enter Salary : ";
	in>>nsalary;
	cout<<"Enter Month : ";
	in>>nmonth;
	cout<<"Enter Day : ";
	in>>nday;
	cout<<"Enter Year : ";
	in>>nyear;

	input.addName(nname);
	input.addId(nempID);
	input.addPhone(nphoneNum);
	input.addAge(nage);
	input.addGender(ngender);
	input.addTitle(njTitle);
	input.addSalary(nsalary);
	input.addDate(nmonth,nday,nyear);


	return in;
};

