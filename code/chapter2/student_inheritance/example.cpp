//Inheritance Person - Student example
class Person { // Person (base class)
private:
		string name; // name
		string idNum; // university ID number
public:
		void print(); // print information
		string getName(); // retrieve name
};


//Inheritance
class Student : public Person { // Student (derived from Person)
private:
		string major; // major subject
		int gradYear; // graduation year
public:
		void print(); // print information
		void changeMajor(const string& newMajor); // change major
};


//executing commands::
Person person("Mary", "12-345"); // declare a Person
Student student("Bob", "98-764", "Math", 2012); // declare a Student
cout << student.getName() << endl; // invokes Person::getName()
person.print(); // invokes Person::print()
student.print(); // invokes Student::print()
person.changeMajor("Physics"); // ERROR!
student.changeMajor("English"); // okay


//Important:: member functions of Studet do not have access to private members of Person. Example::

void Student::printName() {
	   	cout << name << ’\n’; // ERROR! name is private to Person
}


