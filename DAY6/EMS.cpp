#include <iostream>
#include <vector>
using namespace std;

class Employee {
private:
    string name;
    int empId;

protected:
    float salary;

public:
    virtual void calculateSalary() = 0;
    virtual void displayDetails() = 0;

    Employee(string name, int empId) {
        this->name = name;
        this->empId = empId;
        salary = 0.0;
    }

    void displayBasic() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empId << endl;
    }

    float getSalary() const {
        return salary;
    }

    int getId() const {
        return empId;
    }

    virtual ~Employee() {
        cout << "Destroying Employee (Base)\n";
    }
};

class FullTimeEmployee : public Employee {
private:
    float basicPay;
    float bonus;

public:
    FullTimeEmployee(string name, int empId, float basicPay, float bonus)
        : Employee(name, empId) {
        this->basicPay = basicPay;
        this->bonus = bonus;
    }

    void calculateSalary() override {
        salary = basicPay + bonus;
    }

    void displayDetails() override {
        cout << "\n---- Full-Time Employee ----" << endl;
        displayBasic();
        cout << "Basic Pay: " << basicPay << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << salary << endl;
    }

    ~FullTimeEmployee() {
        cout << "Destroying Full-Time Employee\n";
    }
};

class PartTimeEmployee : public Employee {
private:
    int hoursWorked;
    float hourlyRate;

public:
    PartTimeEmployee(string name, int empId, int hoursWorked, float hourlyRate)
        : Employee(name, empId) {
        this->hoursWorked = hoursWorked;
        this->hourlyRate = hourlyRate;
    }

    void calculateSalary() override {
        salary = hoursWorked * hourlyRate;
    }

    void displayDetails() override {
        cout << "\n---- Part-Time Employee ----" << endl;
        displayBasic();
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Hourly Rate: " << hourlyRate << endl;
        cout << "Total Salary: " << salary << endl;
    }

    ~PartTimeEmployee() {
        cout << "Destroying Part-Time Employee\n";
    }
};

int main() {
    vector<Employee*> employees;
    int choice;

    do {
        cout << "\n----- Employee Management System -----" << endl;
        cout << "1. Add Full-Time Employee" << endl;
        cout << "2. Add Part-Time Employee" << endl;
        cout << "3. Display All Employees" << endl;
        cout << "4. Search Employee by ID" << endl;
        cout << "5. Delete Employee by ID" << endl;
        cout << "6. Exit Program" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string name;
            int empId;
            float basicPay, bonus;

            cout << "\nEnter Name: ";
            cin >> name;
            cout << "Enter Employee ID: ";
            cin >> empId;
            cout << "Enter Basic Pay: ";
            cin >> basicPay;
            cout << "Enter Bonus: ";
            cin >> bonus;

            Employee* emp = new FullTimeEmployee(name, empId, basicPay, bonus);
            emp->calculateSalary();
            employees.push_back(emp);

            cout << "Full-Time Employee Added Successfully!\n";
            break;
        }

        case 2: {
            string name;
            int empId, hoursWorked;
            float hourlyRate;

            cout << "\nEnter Name: ";
            cin >> name;
            cout << "Enter Employee ID: ";
            cin >> empId;
            cout << "Enter Hours Worked: ";
            cin >> hoursWorked;
            cout << "Enter Hourly Rate: ";
            cin >> hourlyRate;

            Employee* emp = new PartTimeEmployee(name, empId, hoursWorked, hourlyRate);
            emp->calculateSalary();
            employees.push_back(emp);

            cout << "Part-Time Employee Added Successfully!\n";
            break;
        }

        case 3: {
            cout << "\n----- Employee Details -----\n";
            if (employees.empty()) {
                cout << "No Employees Available!\n";
            } else {
                for (auto emp : employees) {
                    emp->displayDetails();
                    cout << "------------------------------\n";
                }
            }
            break;
        }

        case 4: {
            int id;
            cout << "\nEnter Employee ID to Search: ";
            cin >> id;
            bool found = false;
            for (auto emp : employees) {
                if (emp->getId() == id) {
                    emp->displayDetails();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Employee Not Found!\n";
            break;
        }

        case 5: {
            int id;
            cout << "\nEnter Employee ID to Delete: ";
            cin >> id;
            bool deleted = false;
            for (auto it = employees.begin(); it != employees.end(); ++it) {
                if ((*it)->getId() == id) {
                    delete *it;
                    employees.erase(it);
                    deleted = true;
                    cout << "Employee Deleted Successfully!\n";
                    break;
                }
            }
            if (!deleted)
                cout << "Employee Not Found for Deletion!\n";
            break;
        }

        case 6:
            cout << "\nExiting Program.\n";
            break;

        default:
            cout << "Invalid Choice! Please Try Again.\n";
            break;
        }
    } while (choice != 6);

    for (auto emp : employees) {
        delete emp;
    }
    employees.clear();

    cout << "\nProgram Ended Successfully.\n";
    return 0;
}
