//to getting a employee information and display it//
#include<iostream.h>
#include<conio.h>
class Employe
{
	private:
	int id;
	char name[50];
	float salary;
	public:
	void setEmploye()
	{
		cout<<"\nGetting Employe Information :";
		cout<<"\nEnter the Id :  ";
		cin>>id;
		cout<<"\nEnter the Salary :  ";
		cin>>salary;
		cout<<"\nEnter the Name : ";
		cin>>name;
	}
	void getEmploye()
	{
		cout<<"\nEmployee Information is :-";
		cout<<"\nId : "<<id;
		cout<<"\nName : "<<name;
		cout<<"\nSalary : "<<salary;
	}
};
void main()
{
	Employe E;
	clrscr();
	E.setEmploye();
	E.getEmploye();
	getch();

}






