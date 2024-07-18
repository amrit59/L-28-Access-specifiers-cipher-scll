#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int attendence;
    float total_marks;

    void calculate_percentage(){
        cout<<total_marks<<"%";
    }

};
int main(){
    Student a,b;
    a.name="Amrit";
    a.attendence=90;
    a.total_marks=69;
    a.calculate_percentage();
    return 0;
}
