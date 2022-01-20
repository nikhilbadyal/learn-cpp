#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;

int i=0;
class Item{

public:
    void set_count() {count =0;}
    void showData();
    void getData();
  //  void updateData();
    void removeData();
    void displayValue();
private:
    int itemCode[10];
    float price[10];
    int count;
};
void Item::getData()
{
    cout<<"Enter Code of item - ";
    cin>>itemCode[count];
    cout<<"Enter price of item - ";
    cin>>price[count];
    count++;
}
void Item::showData()
{
    cout<<"\nItem code\tItem Price\n";
    for(int i=0;i<count;i++)
    {
        cout<<itemCode[i]<<"\t\t";
        cout<<price[i]<<endl;
    }
}
void Item::removeData()
{
    int code,flag=1;
   cout<<"Enter item code - ";
   cin>>code;
   for(int i=0;i<count;i++)
   {
       if(itemCode[i] == code)
       {
           price[i] = 0;
           flag =0;
         //  exit(0);
       }
   }
   if(flag) cout<<"Item not found.\n";
}
void Item::displayValue()
{
   int sum=0;
    for(i=0;i<count;i++)
    {
        sum += price[i];
    }
    cout<<"Total value is - "<<sum<<endl;
}
int main()
{
   int choice;
   Item i;
   i.set_count();

   do{
     cout<<"\nYou can perform one of the action here.\nChoose accordingly.\n";
     cout<<"Add an item\n";
     cout<<"Display total Value.\n";
     cout<<"Delete an item.\n";
     cout<<"Display all items.\n";
     cout<<"Exit.\n";
     cout<<"Whats your option.\n";
     cin>>choice;

     switch(choice)
     {
         case 1: i.getData(); break;
         case 2: i.displayValue(); break;
         case 3 : i.removeData(); break;
         case 4 : i.showData(); break;
         case 5 : break;
         default : cout<<"Invalid entry entered.\n";
     }
   } while(choice!=5);
    return 0;
}
