#include<iostream>
#include<string>

using namespace std;

class employee
{
public:
	   string emN;
	   unsigned int sNum;
	   float s;

public:
	//static int numberOfEmployees;
	void details(string n, unsigned int num)
	{
		  emN = n;
		  sNum = num;
		//numberOfEmployees = num;
	}//Details

	string name()
	{
		return emN;
	}//ReturnName

	unsigned int staffNumber()
	{
		return sNum;
	}//ReturnStaffNumber

	float salary()
	{
		return s;
	}//Return Salary

	
};

class SalaryEmployee: public employee{
public: 
	void setSalary(float salary)
	{
		s = salary;
	}

};

class HourlyEmployee : public employee{
private: float r;
		 int w;
public: 
	void setHourlyRate(float val)
	{
		  r = val;
	}//SetHourlyRate

	void setHoursWorked(int worked)
	{
		w = worked;
	}//SetHoursWorked

	void setSalary()
	{
		s = r*w;
	}//SetSalary
};

class CommissionEmployee : public employee
{
private:
	float b;
	float r;
	float rev;

public:
	void setBaseSalary(float bS)
	{
		b = bS;
	}//SetBS

	void setRate(float rate)
	{
		r = rate;
	}//SetRate

	void setRevenue(float r)
	{
		rev = r;
	}//SetRevenue

	void setSalary()
	{
		s = b + r*rev;
	}//SetSalary
};

void main()
{
	SalaryEmployee obj1;
	HourlyEmployee obj2;
	CommissionEmployee obj3;

	employee *p1 = &obj1;
	employee *p2 = &obj2;
	employee *p3 = &obj3;

	p1->details("Raaghav", 01);
	p2->details("Jessy", 15);
	p3->details("HeisenBerg", 13);

	obj1.setSalary(170.50);
	obj2.setHourlyRate(9);
	obj2.setHoursWorked(12);
	obj2.setSalary();
	obj3.setBaseSalary(80.00);
	obj3.setRate(17.50);
	obj3.setRevenue(850);
	obj3.setSalary();

	cout <<"Salary from SalaryEmployee:" <<  obj1.salary() << endl;
	cout << "Salary from HourlyEmployee:" << obj2.salary() << endl;
	cout << "Salary from CommissionEmployee:" << obj3.salary() << endl;
	
}//Main