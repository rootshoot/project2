#include<iostream>
using namespace std;

class Employee
{
	protected:
		int  empno;
		char name[30];
		char desgination[40];
	public:
		void emp_info()
		{
			cout<<"Enter Employee id ";
			cin>>empno;
			cout<<"Enter Employee name ";
			cin>>name;
			cout<<"Enter Employee desgination ";
			cin>>desgination;
			cout<<"\n";
		}
};


class Qualification : public Employee
{
protected:
	char UG[50];
	char PG[50];
	int exp;
public:
	void emp_data()
	{
		cout<<"Enter UG of employee ";
		cin>>UG;
		cout<<"Enter PG of employee ";
		cin>>PG;
		cout<<"Enter experience of employee ";
		cin>>exp;
		cout<<"\n";
	}
};



class Salary : public Qualification
{
	public:
		void emp_salary()
		{
		
		cout<<"Employee Details";	
		cout<<"Employee id is :- "<<empno<<"\n";
		cout<<"Employee name is:- "<<name<<"\n";
		cout<<"Employee desgination is:- "<<desgination<<"\n";		
		cout<<"Employee UG is:- "<<UG<<"\n";
		cout<<"Employee PG is:- "<<PG<<"\n";
		cout<<"Employee experience is:- "<<exp<<"\n";			
		}
};


int main()
{

	Salary s;
	s.emp_info();
	s.emp_data();
	s.emp_salary();

cout<<"Hello World";
cout<<"Hello Moto";
cout<<"hey its csk";
cout<<"Hello world2";
cout<<"Hello Aditya";

int a = 10;
cout<<"A equals "<<a;

}
