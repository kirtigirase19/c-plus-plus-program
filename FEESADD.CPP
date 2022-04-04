//program for to display Student Information and additoin of fees by using scope resolution opretator //
#include<iostream.h>
#include<conio.h>
class Student
{
	private:
	int rollno ;
	char name[50] ;
	float fees;
	static float total;
	public:
	void setStudent()
	{
		cout<<"\nGetting Student Information :";
		cout<<"\nEnter the Roll No : ";
		cin>>rollno;
		cout<<"\nEnter the Fees : ";
		cin>>fees;
		cout<<"\nEnter the Name : ";
		cin>>name;
		total=total+fees;
	}
	void getStudent()
	{
		cout<<"\nStudent Information is :-";
		cout<<"\nRoll no : "<<rollno;
		cout<<"\nName : "<<name;
		cout<<"\nFees : "<<fees;
	}
	static void getTotal()
	{
		cout<<"\nTotal= "<<total;
	}
	float student::total=0;
};
void main()
{
	Student S1,S2,S3;
	clrscr();
	S1.setStudent();
	S2.setStudent();
	S3.setStudent();
	S1.getStudent();
	S2.getStudent();
	S3.getStudent();
	student::getTotal();
	getch();

}


