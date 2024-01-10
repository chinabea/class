#include <iostream>		
//preprocessor output manipulation function							
#include <iomanip> 
using namespace std;
//Base Class
class Person {
	//access modifier
	private:
		//one private attribute
		string conNumber;
	//access modifier
	public:
		//two public attribute 
		string name;
		string address;
	//Person constructor 
	Person(string nName, string cConNumber, string aAddress){
		//initalization of variables
		name = nName; 
		conNumber = cConNumber;
		address = aAddress;
		
	}	
	//accessor function
	string getNumber(){
		return conNumber;
	}
};
//Derived Class
//class Teacher will inherit the public members of Person
class Teacher : virtual public Person{
	public:
	//inheritance of teacher to the Person contructor 								
	Teacher(string nName, string aAddress, string cConNumber) : Person(nName, aAddress, cConNumber){
	}	
		//function definition for calculating midterm grade
		void grade(double quiz, double exercises, double project, double exam){ 
			double midtermGrade;
			//calculating grades......
			double aquiz = quiz*0.1; 
			double aexercises = exercises*0.25;
			double aproject = project*0.35;
			double aexam = exam*0.3; 
			midtermGrade = aquiz+aexercises+aproject+aexam;
			//output manipulation into two decimal places only
			cout << "Midterm Grade: " << fixed << setprecision(2) << midtermGrade;
		}
		//Abstraction Function
		void speak(){
			//printing on the screen......
			cout << "Teacher: " << endl;
		}
}; 
//Derived Class
//multiple inheritance of Student, Teacher, and Person
class Student : public Teacher, virtual public Person{
	public:
	//multiple inheritance of constructor Student, Teacher, and Person
	Student(string nName, string cConNumber, string aAddress) : Teacher(nName, cConNumber, aAddress), Person(nName, cConNumber, aAddress){
	}
	//Abstraction Function
	void speak(){
		//printing on the screen......
		cout << endl << "Student: "<< endl;
	}
	
};
int main(){	
	//initialization of Teacher's name, contact number and address
	Teacher Programming2("Mr. Mark Joseph", "09123456789", "Naga City");
	//calling the speak function......
	Programming2.speak();
	//getting access and printing on the screen ......
	cout << "Name: " << Programming2.name << endl;
	cout << "Contact: " << Programming2.getNumber()  << endl;
	cout << "Address: " << Programming2.address << endl;
	
	//initialization of Student's name, contact number and address
	Student student8("China T. Bea", "0924256435367", "Iriga City");
	//getting access and printing on the screen ......
	student8.speak();
	cout << "Name: " << student8.name << endl;
	cout << "Contact: " << student8.getNumber()  << endl;
	cout << "Address: " << student8.address << endl;
	
	//initialization of grades...
	student8.grade(91.30, 90.50, 96.90, 98.50);
	
	return 0;
}


/*

Abstraction - hiding complex details behind simple procedures
Encapsulation - giving access or interaction of private variables to the user using a public accessor(setter/getter)
Polymorphism - using the same function inside the classes
Inheritance - allows to inherit features of base class by derived classes

*Using the Same Function/Method.....*
Virtual Function - which of function/method has the most derived function will be implemented
		- so that compiler don't mess up from which function/method has the original storage
				
THANK YOU 

*/    