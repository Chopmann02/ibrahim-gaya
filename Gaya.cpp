#include <iostream>
using namespace std;
#include <string>

class Employee {
    protected:
        string Name;
        string EmployeeId;

    public: Employee (string name, string employeeId) : Name(name), EmployeeId(employeeId) {
        }
    virtual void getInfo(){
        cout <<"Name: " << Name <<'\n'<< "Employee ID: " << EmployeeId << endl << '\n';

    }
};

class FullTimeEmployee : Employee {
    private: double Salary;

    public: FullTimeEmployee (string name, string employeeId, double salary) : Employee(name, employeeId) , Salary(salary) {
    }

    void getInfo() override {
        cout << "Name: " << Name << '\n' << "Employee ID: " << EmployeeId << '\n' << "Salary: " << Salary << endl << '\n';
    }
};

class PartTimeEmployee : Employee {
    private:
        int HoursWorked;
        double HourlyPay;

    public: PartTimeEmployee (string name, string employeeId, int hoursWorked, int hourlyPay) :
        Employee(name, employeeId) , HourlyPay(hourlyPay), HoursWorked(hoursWorked) {
        }

    void getInfo() override {
        double Salary = HourlyPay * HoursWorked;
        cout << "Name: " << Name << '\n' << "Employee ID: " << EmployeeId << '\n' << "Hours Worked: " << HoursWorked << '\n' 
        << "Hourly Pay: " << HourlyPay << '\n' << "Salary: " << Salary << endl << '\n';
    }
};

int main () {
    Employee Gaya("Ibrahim Gaya Abdulkadir", "NUN-211203015");
    Gaya.getInfo();
    FullTimeEmployee Samuel("Samuel Rotimi", "NUN-0850304303", 100000.00);
    Samuel.getInfo();
    PartTimeEmployee Musa("Musa Ahmed", "NUN-0987564354", 8 , 2000.00);
    Musa.getInfo();
}














