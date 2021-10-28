#include <iostream>
using namespace std;
class stud{
	private: int marks;
	public: static int count;
	public: stud(){
		count=1;
	}
	public: void initialize(int a){
		marks=a;
	}
	void display(){
		cout<<"Enter marks"<<marks<<endl;
	}
};
int stud::count=0;
int main(){
	int choice;
	for(;;){
		cout<<"Enter 1 to create instance of student class and Enter 2 to delete instance of the student class"<<endl;
		cin>>choice;
		switch(choice){
			case 1: if(stud::count==0)
				{
					stud q1;
					cout<<"Created 1 instances of class student"<<endl;
				}
				else
				{
					cout<<"An instance of class student already exists"<<endl;
				}
				break;
			case 2: if(stud::count==1)
					stud::count--;
				else
					cout<<"No instance of class created yet";
					break;	
			default: cout<<"Enter correct choice"<<endl;
		}
	}
}
