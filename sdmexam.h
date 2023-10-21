#include <iostream>
using namespace std;
class Student{
	int stuid;
	string name;
	double marks1,marks2,marks3;
	double total;
	double percentage;
	
	
	public: Student(){
		stuid = 1001;
		name = "Raj";
		marks1 = 90;
		marks2 = 90;
		marks3 = 90;
	}
	
	public: Student(int stuid,string name,double marks1,double marks2,double marks3){
		this->stuid = stuid;
		this->name = name;
		this->marks1 = marks1;
		this->marks2 = marks2;
		this->marks3 = marks3;
	}
	
	public: int getStudid(){
		return stuid;
	}
	public: void setStudid(int studid){
		this->stuid = stuid;
	}
	public: string getName(){
		return name;
	}
	public: void setName(string name){
		this->name = name;
	}
	public: void calMarks(double marks1, double marks2,double marks3) {
		total = marks1+marks2+marks3;
		percentage = total/3;
		cout<<"total marks are: " <<" "<<total <<" percentage are :"<<" "<<percentage;
	}
	
	
};
