#include <iostream>
#include <string>
using namespace std;

// class Teacher {
// private:
//     double salary; 

// public:  
//     //non-parameterized constructor
//     Teacher() {
//         dept = "CSE";
//     }

//     //parameterized constructor
//     Teacher(string name, string dept, string subject, double salary) {
//         this->name = name;       |   
//         this->dept = dept;       |    //left side -> Object attribute
//         this->subject = subject; |   //right side -> Constructor parameter
//         this->salary = salary;   |
//     }

//     //copy constructor
//     Teacher(Teacher &t) {
//         this->name = t.name;
//         this->dept = t.dept;
//         this->subject = t.subject;
//         this->salary = t.salary;
//     }

//     //properties/ attributes
//     string name;
//     string dept;
//     string subject;

//     //methods/ member functions
//     void changeDept(string newDept) {
//         dept = newDept;
//     }

//     //setter
//     void setSalary(double s) {
//         salary = s;
//     }

//     //getter
//     double getSalary() {
//         return salary;
//     }

//     void getInfo(){
//         cout << "Name: " << name << endl;
//         cout << "Department: " << dept << endl;
//     }
// };

// int main() {
//     Teacher t1("Rahul", "CSE", "DSA", 10000); //constructor called
//     t1.getInfo();

//     Teacher t2(t1); //default copy constructor called
//     t2.getInfo();
//     return 0;
// }


// //Inheritance
// class Person {
// public:
//     string name;
//     int age;
//     // Person(string name, int age){
//     //     this->name = name;
//     //     this->age = age;
//     // }
//     Person(){
//         cout << "Person Constructor" << endl;
//     }
// };
// class Student : public Person {    //inheritance
// public:
//     int rollNo; 
//     void getInfo(){
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Roll No: " << rollNo << endl;
//     }
// };
// int main(){
//     Student s1;
//     s1.name = "Rahul";
//     s1.age = 20;
//     s1.rollNo = 101;

//     s1.getInfo();

//     return 0;
// }

// //Multiple Inheritance
// class Student {
// public:
//     string name;
//     int rollno;    
// };

// class Teacher {
//     public:
//     string subject;
//     double salary;
// };

// class TA : public Student, public Teacher {

// };

// int main() {
//     TA t1;
//     t1.name = "Rahul";
//     t1.subject = "DSA";

//     cout << "Name: " << t1.name << endl;
//     cout << "Subject: " << t1.subject << endl;

//     return 0;
// }

// // Polymorphism

// class Student {
// public:
//     string name;

//     Student(){
//         cout << "Non-parameterized constructor" << endl;
//     }

//     Student(string name){
//         this->name = name;
//         cout << "Parameterized constructor" << endl;
//     }
// };

// int main() {
//     Student s1;
//     Student s2("Rahul");

//     return 0;
// }


// // Function Overloading

// class Print {
// public:
//     void print(int a) {
//         cout << "Integer: " << a << endl;
//     }

//     void print(char ch) {
//         cout << "Character: " << ch << endl;
//     }
// };

// int main() {
//     Print p;
//     p.print(5);
//     p.print('A');

//     return 0;
// }

// // Function Overriding

// class Parent {
// public:
//     void getinfo() {
//         cout << "Parent Class" << endl;
//     }
// };

// class Child : public Parent {
// public:
//     void getinfo() {
//         cout << "Child Class" << endl;
//     }// Overriding the function
// };

// int main() {
//     Child c1;
//     c1.getinfo();

//     return 0;
// } 

// // Abstract Class

// class Shape { //Abstract Class
// public:
//     virtual void getArea() = 0; //pure virtual function
// };

// class Circle : public Shape {
// public:
//     void draw() {
//         cout << "Drawing Circle" << endl;
//     }// Non-Pure Virtual Function
// };

// int main() {
//     Circle c1;
//     c1.draw();

//     return 0;
// }


// Static Keyword

void fun() {
    static int x = 0;
    cout << "X : " << x << endl;
    x++;
};

int main() {
    fun();
    fun();
    fun();
    fun();
    return 0;
}