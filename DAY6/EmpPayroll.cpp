#include<iostream>
using namespace std;
class Employee{
    private:
        string name;
        int id;
        float baseSalary;
    protected:
        float bonus;

    public:
        Employee(string name, int id, float baseSalary){
            this->name = name;
            this->id = id;
            this->baseSalary = baseSalary;
            bonus = 0;
        }
        virtual void calculateBonus(){
            bonus = 0;
        }
        virtual void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Base Salary: "<<baseSalary<<endl;
        }
        float getBaseSalary(){
            return baseSalary;
        }
        virtual ~Employee(){
            cout<<"\nDestroy Employees"<<endl;
        } 
};

class Manager : public Employee{
    public:
        Manager(string name, int id, float baseSalary) : Employee(name, id, baseSalary){
            
        }
    void calculateBonus() override {
        bonus = 0.4 * getBaseSalary();
    }
    void display() override {
        cout<<"---- Manager Details ----"<<endl;
        Employee::display();
        cout<<"Bonus: "<<bonus<<endl;
        cout<<"Total Salary: "<<getBaseSalary()+bonus<<endl;
        cout<<"---------------------------------------";
    }
};
   
class Developer : public Employee{
    public:
        Developer(string name, int id, float baseSalary) : Employee(name, id, baseSalary){

        }
        void calculateBonus() override {
            bonus = 0.25 * getBaseSalary();
    }
    void display() override {
        cout<<"\n---- Developer Details ----"<<endl;
        Employee::display();
        cout<<"Bonus: "<<bonus<<endl;
        cout<<"Total Salary: "<<getBaseSalary()+bonus<<endl;
        cout<<"---------------------------------------";
    }
};

int main(){
    int n;
    cout<<"Enter number of Employees: ";
    cin>>n;

    Employee** emp = new Employee*[n];

    for(int i=0; i<n; i++){
        string name;
        int id;
        float salary;
        int choice;

        cout<<"Enter Details for employee "<<i+1<<endl;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter Base Salary: ";
        cin>>salary;

        cout<<"\nChoose choice: \n1. Manager \n2. Developer \nEnter choice: ";
        cin>>choice;

        if(choice == 1){
            emp[i] = new Manager(name, id, salary);
        }
        else if(choice == 2){
            emp[i] = new Developer(name, id, salary);
        }else{
            cout<<"Invalid choice Default base employee"<<endl;
            emp[i] = new Employee(name, id, salary);
        }
        emp[i]->calculateBonus();
    }
    cout<<"---- Employee Details ----"<<endl;
    for(int i=0; i<n; i++){
        emp[i]->display();
    }

    for(int i=0; i<n; i++){
        delete emp[i];
    }
    delete[] emp;
    return 0;
}