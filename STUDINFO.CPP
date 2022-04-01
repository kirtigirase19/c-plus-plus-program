//program for to display Student Information //
#include<iostream.h>
#include<conio.h>
class Student
{
	private:
	int rollno ;
	char name[50] ;
	float fees;
	public:
	void setStudent()
	{
		cout<<"\nGetting Student Information :";
		cout<<"\nEnter the Roll No :";
		cin>>rollno;
		cout<<"\nEnter the Fees :";
		cin>>fees;
		cout<<"\nEnter the Name :";
		cin>>name;
	}
	void getStudent()
	{
		cout<<"\nStudent Information is :-";
		cout<<"\nRoll no : "<<rollno;
		cout<<"\nName : "<<name;
		cout<<"\nFees : "<<fees;
	}
};
void main()
{
	Student S;
	clrscr();
	S.setStudent();
	S.getStudent();
	getch();

}


