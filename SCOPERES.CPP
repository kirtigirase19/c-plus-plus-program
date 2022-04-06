//Program for to collecting a Student and Teacher information by using class and scope resolution oprator//
#include<iostream.h>
#include<conio.h>
int i;
class Student
{
	private:
		int id;
		char name[20];
	public:


		void getInfo();
		void showInfo();
};
void Student::getInfo()
{
	cout<<"\nTo Getting a Student Information :";
	for(i=0;i<=3;i++)
	{
		cout<<"\nEnter the Id : ";
		cin>>id;
		cout<<"\nEnter the Name : ";
		cin>>name;
	}
}
void Student::showInfo()
{
	cout<<"\nStudent Information is :";
	for(i=0;i<=3;i++)
	{
		cout<<"\nId="<<id;
		cout<<"\nName ="<<name;
	}
}
class Teacher
{
	private:
		int id;
		char name[20];
	public:
		void getInfo();
		void showInfo();
};
void Teacher::getInfo()
{
	cout<<"\nTo Getting a Teacher Information :";
	for(i=0;i<=3;i++)
	{
		cout<<"\nEnter the Id : ";
		cin>>id;
		cout<<"\nEnter the Name : ";
		cin>>name;
	}

}
void Teacher::showInfo()
{
	cout<<"\nTeacher Information is :" ;
	for(i=0;i<=3;i++)
	{

		cout<<"\nId="<<id;
		cout<<"\nName ="<<name;


	}

}
void main()
{
	clrscr();
	Student S;
	Teacher T;
	S.getInfo();
	T.getInfo();
	S.showInfo();
	T.showInfo();
	getch();
}