#include <iostream>
#include <string>
using namespace std;

class student {
protected:
    string name;
    int age;
    static int studentCount;
    

public:
    friend void getClassStudent();

    student(){
        name = "unknown";
        age = 0;
    }  

    void setStudentName(string studentName){
        name = studentName;
    }
    string getStudentName(){
        return name;
    }

    void setStudentAge(int studentAge){
        age = studentAge;
    }

    int getStudentAge(){
        return age;
    }

    void studentBanner(){
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }

};

class math {
public:
    static int squared (int x){
        return (x*x);
    }
};

void getClassStudent(student e){
    cout << "Name: " << e.getStudentName() << "\n";
    cout << "Age: " << e.getStudentAge() << "\n";
}

class teacher : student {
public:
    

};

int main(){
    student student1;

    student1.setStudentName("Malvin");
    student1.setStudentAge(19);
    student1.studentBanner();

    teacher teacher1;

   getClassStudent(student1);

    cout << math::squared(5);

}