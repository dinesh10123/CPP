#include<iostream>
using namespace std;
class Items{
    private:
        string name;
        int id;
        float price;
    protected:
        int quantity;

    public:
        Items(string n, int i, float p, int q){
            name = n;
            id = i;
            price = p;
            quantity = q;
        }
    
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<"quantity: "<<quantity<<endl;
        }
    public:
        float getTotalValue(){
            return price * quantity;
        }
        
       virtual ~Items() { 
       cout << "\nDestroy Base class\n";
   }
};

class Electronics : public Items{
    private:
        int warrantyYears;
        float powerUsage;
    
    public: 
        Electronics(int w, float pw,string n, int i, float p, int q) : Items(n, i , p , q){
            warrantyYears = w;
            powerUsage = pw;
        }

        void displayDetails(){
            cout<<"----- Electronics Items -----"<<endl;
            display();
            cout<<"warranty Years: "<<warrantyYears<<endl;
            cout<<"powerUsage: "<<powerUsage<<endl;
        }

        ~Electronics(){
            cout<<"Destroy Electronics Items";
        }
};

class Grocery : public Items{
    private: 
        string expiryDate;
        float weight;

    public:    
        Grocery(string ex, float wg, string n, int i, float p, int q) : Items(n, i, p, q){
        expiryDate = ex;
        weight = wg;
        }

        void displayDetails(){
            cout<<"------Grocery Items -------"<<endl;
            display();
            cout<<"Expery Date: "<<expiryDate<<endl;
            cout<<"Weight: "<<weight<<endl;
        }

        ~Grocery(){
            cout<<"Destructor Grocery Items";
        }

};

int main(){
    int totaIitem;
    cout<<"How many items are in inventory : ";
    cin>>totaIitem;

    //Dynamically create an array of pointers to Electronics and Grocery objects.
    Items** inventory = new Items*[totaIitem];

    float totalValue = 0;

    for(int i=0; i<totaIitem; i++){
        cout<<"Enter type (1 : Electronics, 2 : Grocery)"; 
        int type;
        cin>>type;

        if(type == 1){
            string name;
            int id, quantity, warrantyYears;
            float price, powerUsage;

            cout<<"Item Name: ";
            cin>>name;
            cout<<"Item ID: ";
            cin>>id;
            cout<<"Price: ";
            cin>>price;
            cout<<"quantity: ";
            cin>>quantity;
            cout<<"Warrenty Year: ";
            cin>>warrantyYears;
            cout<<"Power Usage: ";
            cin>>powerUsage;

            inventory[i] = new Electronics(warrantyYears, powerUsage, name, id, price, quantity);
        }
        else if(type == 2){
            string name, expiryDate;
            int id, quantity;
            float price, weight;

            cout<<"Item Name: ";
            cin>>name;
            cout<<"Item ID: ";
            cin>>id;
            cout<<"Price: ";
            cin>>price;
            cout<<"quantity: ";
            cin>>quantity;
            cout<<"Expery Date: ";
            cin>>expiryDate;
            cout<<"Weight: ";
            cin>>weight;

            inventory[i] = new Grocery(expiryDate, weight, name, id, price, quantity );
        }
    }

    cout<<"----- Inventory Items -----"<<endl;

     for (int i=0; i<totaIitem; i++) {
        if (inventory[i] != nullptr) {
            if (Electronics* e = dynamic_cast<Electronics*>(inventory[i])) {
                e->displayDetails();
            }
            else if (Grocery* g = dynamic_cast<Grocery*>(inventory[i])) {
                g->displayDetails();
            }

            totalValue += inventory[i]->getTotalValue();
        }
    }

    cout << "\nTotal Inventory Value = " << totalValue << endl;
    for (int i=0; i<totaIitem; i++) {
        delete inventory[i];
        }
        delete[] inventory;

    cout << "\nAll memory released successfully.\n";
        //return 0;
}
