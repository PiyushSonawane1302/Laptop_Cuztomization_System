/* Project Topic : Laptop Customization System
 Concepts Used in Program : 1.Class,Object
                            2.Constructor
                            3.Single Inheritance
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Laptop_configuration_System
{
private:
   string name;
   string lastname;
   string fn;


 public:
     Laptop_configuration_System()//constructor used
     {
         cout<<"\n * Enter the First name : ";
         cin>>name;
         cout<<"\n * Enter the lastname : ";
         cin>>lastname;
     }
     string fullname()
     {
        fn=name+" "+lastname;
        return fn;
     }
     void display()
    {
        cout<<"\n\n **Hello "<<fn<<" Welcome to our Program !!!!"<<endl;
    }

};



class Features:public Laptop_configuration_System //Single Inheritance Class Feature Derived From Class User
{
    int os;
    int processor;
    int ram;
    int graphics_card;
    int memory;
    int ssd;
    int hdd;
    int both;//both is used for SSD and HDD
    int laptop_price;
    int laptop_brand;
public:
    void select_os();
    void select_ram();
    void select_processor();
    void select_graphics_card();
    void select_memory();
    void display_features();
    void laptop_suggestions();
    void select_laptop_price();
    void select_laptop_brand();

};



void Features::select_os()
{
    cout<<"\n ** Please Select The Operating system you want in your Laptop : \n"<<endl;
    cout<<"\n 1.Windows "<<endl;
    cout<<"\n 2.MAC Os "<<endl;
    cout<<"\n 3.Exit"<<endl;
    cout<<"Enter Your Choice : ";
    cin>>os;
    switch(os)
    {
    case 1:
        cout<<"\n * You have Selected Your Os ==> windows Os"<<endl;
        break;

    case 2:
        cout<<"\n * You have Selected Your Os ==> MAC Os"<<endl;
        break;

    case 3:
        cout<<"\n Terminated Successfully !!"<<endl;
        cout<<"\n Thank You Visit Again !!!!\n"<<endl;
        exit(0);
        break;

    default :
        cout<<"\n Enter valid choice ";
        exit(0);
    }
}



void Features::select_processor()
{
    if(os==1){
    cout<<"\n\n **Select the Processor : \n"<<endl;
    cout<<"1. Intel i3"<<endl;
    cout<<"2. Intel i5"<<endl;
    cout<<"3. Intel i7"<<endl;
    cout<<"4. Intel i9"<<endl;
    cout<<"5. AMD Ryzen 5"<<endl;
    cout<<"6. AMD Ryzen 7"<<endl;
    cout<<"7. Exit"<<endl;
    cout<<"Enter Your Choice : ";
    cin>>processor;
    switch(processor)
    {
    case 1:

        cout<<"\n * You have Selected Your Processor ==> Intel i3 "<<endl;
        break;
    case 2:

        cout<<"\n * You have Selected Your Processor ==> Intel i5 "<<endl;
        break;
    case 3:

        cout<<"\n * You have Selected Your Processor ==> Intel i7 "<<endl;
        break;
    case 4:

        cout<<"\n * You have Selected Your Processor ==> Intel i9 "<<endl;
        break;
    case 5:

        cout<<"\n * You have Selected Your Processor ==> AMD Ryzen 5 "<<endl;
        break;
    case 6:

        cout<<"\n * You have Selected Your Processor ==> AMD Ryzen 7 "<<endl;
        break;
    case 7:
        cout<<"\n Terminated Successfully !!"<<endl;
        cout<<"\n Thank You Visit Again !!!!\n"<<endl;
        exit(0);
        break;

    default :
        cout<<"\n Enter valid choice ";
        exit(0);
    }
    }

    else if(os==2)
    {
    cout<<"\n\n **Select the Processor : \n"<<endl;
    cout<<"1. Intel i3"<<endl;
    cout<<"2. Intel i5"<<endl;
    cout<<"3. Intel i7"<<endl;
    cout<<"4. Intel i9"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter Your Choice : ";
    cin>>processor;
    switch(processor)
    {
    case 1:
        cout<<"\n * You have Selected Your Processor ==> Intel i3 "<<endl;
        break;

    case 2:
        cout<<"\n * You have Selected Your Processor ==> Intel i5 "<<endl;
        break;

    case 3:
        cout<<"\n * You have Selected Your Processor ==> Intel i7 "<<endl;
        break;

    case 4:
        cout<<"\n * You have Selected Your Processor ==> Intel i9 "<<endl;
        break;

    case 5:
        cout<<"\n Terminated Successfully !!"<<endl;
        cout<<"\n Thank You Visit Again !!!!\n"<<endl;
        exit(1);
        break;

    default :
        cout<<"\n Enter valid choice ";
        exit(0);
    }
    }
}




void Features::select_ram()
{

if(os==1){
    cout<<"\n\n **Select the RAM : \n"<<endl;
    cout<<"1. 4 GB"<<endl;
    cout<<"2. 8 GB"<<endl;
    cout<<"3. 16 GB"<<endl;
    cout<<"4. 32 GB"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter Your Choice : ";
    cin>>ram;
    switch(ram)
    {
    case 1:

        cout<<"\n * You have Selected Your RAM ==> 4 GB "<<endl;
        break;
    case 2:

       cout<<"\n * You have Selected Your RAM ==> 8 GB "<<endl;
        break;
    case 3:

        cout<<"\n * You have Selected Your RAM ==> 16 GB "<<endl;
        break;
    case 4:

        cout<<"\n * You have Selected Your RAM ==> 32 GB "<<endl;
        break;
    case 5:
        cout<<"\n Terminated Successfully !!"<<endl;
        cout<<"\n Thank You Visit Again !!!!\n"<<endl;
        exit(0);
        break;
    default :
        cout<<"\n Enter valid choice ";
         exit(0);
    }
}

if(os==2)
{
    cout<<"\n\n **Select the RAM : "<<endl;
    cout<<"1. 8 GB"<<endl;
    cout<<"2. 16 GB"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"Enter Your Choice : ";
    cin>>ram;
    switch(ram)
    {
    case 1:

       cout<<"\n * You have Selected Your RAM ==> 8 GB "<<endl;
        break;
    case 2:

        cout<<"\n * You have Selected Your RAM ==> 16 GB "<<endl;
        break;

    case 3:
        cout<<"\n Terminated Successfully !!"<<endl;
        cout<<"\n Thank You Visit Again !!!!\n"<<endl;
        exit(0);
        break;
    default :
        cout<<"\n Enter valid choice ";
         exit(0);
    }

}
}



void Features::select_graphics_card()
{
    if(os==1){
    cout<<"\n\n **Select the Graphics card  : \n"<<endl;
    cout<<"1. 2 GB"<<endl;
    cout<<"2. 4 GB"<<endl;
    cout<<"3. 6 GB"<<endl;
    cout<<"4. 8 GB"<<endl;
    cout<<"5. Integrated Graphics Card"<<endl;
    cout<<"6. Don't Want graphics Card "<<endl;
    cout<<"7. Exit"<<endl;
    cout<<"Enter Your Choice : ";
    cin>>graphics_card;
    switch(graphics_card)
    {
    case 1:
        cout<<"\n * You have Selected Your Graphics card ==> 2 GB "<<endl;
        break;

    case 2:
        cout<<"\n * You have Selected Your Graphics card ==> 4 GB "<<endl;
        break;

    case 3:
       cout<<"\n * You have Selected Your Graphics card ==> 6 GB "<<endl;
        break;

    case 4:
        cout<<"\n * You have Selected Your Graphics card ==> 8 GB "<<endl;
        break;

    case 5:
        cout<<"\n * You have Selected Your Graphics card ==> Integrated Graphics Card "<<endl;
        break;

    case 6:
        cout<<"\n No Graphics card Selected."<<endl;
        break;

    case 7:
        cout<<"\n Terminated Successfully !!"<<endl;
        cout<<"\n Thank You Visit Again !!!!\n"<<endl;
        exit(0);
        break;

    default :
        cout<<"\n Enter valid choice ";
         exit(0);
    }
    }
    else if(os==2)
    {
        cout<<"\n\n **Select the Graphics card  : \n"<<endl;
        cout<<"1. 4 GB"<<endl;
        cout<<"2. Don't Want graphics Card "<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter Your Choice : ";
        cin>>graphics_card;
    switch(graphics_card)
    {
    case 1:
        cout<<"\n * You have Selected Your Graphics card ==> 4 GB "<<endl;
        break;

    case 2:
        cout<<"\n No Graphics card Selected."<<endl;
        break;

    case 3:
        cout<<"\n Terminated Successfully !!"<<endl;
        cout<<"\n Thank You Visit Again !!!!\n"<<endl;
        exit(0);
        break;

    default :
        cout<<"\n Enter valid choice ";
         exit(0);
    }
    }
}



void Features::select_memory()
{
    if(os==1){
    //for selection of the memory type
    cout<<" What do you Want in Your Memory ? \n"<<endl;
    cout<<"\n 1.SSD"<<endl;
    cout<<"\n 2.HDD"<<endl;
    cout<<"\n 3.Both SSD & HDD"<<endl;
    cout<<"\n 4.Exit"<<endl;
    cout<<"\n Enter your Choice : ";
    cin>>memory;
    if(memory==1){
        cout<<"1.128 GB"<<endl;
        cout<<"2.256 GB"<<endl;
        cout<<"3.512 GB"<<endl;
        cout<<"4.1 TB"<<endl;
        cout<<"5.Exit "<<endl;
        cout<<"\n Enter your Choice : ";
        cin>>ssd;
        if(ssd==1)
            cout<<" You have selected 128 GB SSD "<<endl;
        else if(ssd==2)
            cout<<"\n * You have selected 256 GB SSD "<<endl;
        else if(ssd==3)
            cout<<"\n * You have selected 512 GB SSD "<<endl;
        else if(ssd==4)
            cout<<"\n * You have selected 1 TB SSD "<<endl;
        else if(ssd==5){
            cout<<"\n Terminated Successfully !!"<<endl;
            cout<<"\n Thank You Visit Again !!!!\n"<<endl;
            exit(0);
        }

    }
    else if(memory==2){
        cout<<"1.128 GB"<<endl;
        cout<<"2.256 GB"<<endl;
        cout<<"3.512 GB"<<endl;
        cout<<"4. 1 TB"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"\n Enter your Choice : ";
        cin>>hdd;
        if(hdd==1)
            cout<<"\n *You have selected 128 GB HDD "<<endl;
        else if(hdd==2)
            cout<<"\n * You have selected 256 GB HDD "<<endl;
        else if(hdd==3)
            cout<<"\n * You have selected 512 GB HDD "<<endl;
        else if(hdd==4)
            cout<<"\n * You have selected 1 TB HDD "<<endl;
        else{
            cout<<"\n Terminated Successfully !!"<<endl;
            cout<<"\n Thank You Visit Again !!!!\n"<<endl;
            exit(0);
        }


    }
   else if(memory==3)
   {
        cout<<"1.128 GB SSD,1 TB"<<endl;
        cout<<"2.256 GB SSD,1 TB"<<endl;
        cout<<"3.512 GB SSD,1 TB"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"\n Enter your Choice : ";
        cin>>both;
        if(both==1)
            cout<<"\n * You have selected 512 GB SSD and 1 TB HDD "<<endl;
        else if(both==2)
            cout<<"\n * You have selected 256 GB SSD and 1 TB HDD "<<endl;
        else if(both==3)
            cout<<"\n * You have selected 512 GB SSD and 1 TB HDD "<<endl;
        else{
            cout<<"\n Terminated Successfully !!"<<endl;
            cout<<"\n Thank You Visit Again !!!!\n"<<endl;
            exit(0);
        }

   }
   else
    exit(0);
    }




    else if(os==2)
    {
    cout<<" What do you Want in Your Memory ? \n"<<endl;
    cout<<"\n 1.SSD"<<endl;
    cout<<"\n 2.Exit"<<endl;
    cout<<"\n Enter your Choice : ";
    cin>>memory;
    if(memory==1){
        cout<<"1.256 GB"<<endl;
        cout<<"2.512 GB"<<endl;
        cout<<"3.1 TB"<<endl;
        cout<<"4.Exit "<<endl;
        cout<<"\n Enter your Choice : ";
        cin>>ssd;
        if(ssd==1)
            cout<<"\n * You have selected 256 GB SSD "<<endl;
        else if(ssd==2)
            cout<<"\n * You have selected 512 GB SSD "<<endl;
        else if(ssd==3)
            cout<<"\n * You have selected 1 TB SSD "<<endl;
        else if(ssd==4){
            cout<<"\n Terminated Successfully !!"<<endl;
            cout<<"\n Thank You Visit Again !!!!\n"<<endl;
            exit(0);
        }

        else
      exit(0);
    }

}

}

void Features::select_laptop_price()
{
    if(os==1){
    //select price of laptops
    cout<<"\n\n **Select the Price Range : \n"<<endl;
    cout<<"1. Rs. 20,000 and Below"<<endl;
    cout<<"2. Rs. 20,000 - Rs.30,000"<<endl;
    cout<<"3. Rs. 30,000 - Rs.40,000"<<endl;
    cout<<"4. Rs. 40,000 - Rs.50,000"<<endl;
    cout<<"5. Rs. 50,000 - Rs.60,000"<<endl;
    cout<<"6. Rs. 60,000 - Rs.70,000"<<endl;
    cout<<"7. Rs. 70,000 and Above"<<endl;
    cout<<"8. Exit"<<endl;
    cout<<"Enter Your Choice : ";
    cin>>laptop_price;

    if(laptop_price==1)
        cout<<"\n Price Range selected Between : Rs. 20,000 and Below "<<endl;
    else if(laptop_price==2)
        cout<<"\n Price Range selected Between : Rs. 20,000 - 30,000 "<<endl;
    else if(laptop_price==3)
        cout<<"\n Price Range selected Between : Rs. 30,000 - 40,000 "<<endl;
    else if(laptop_price==4)
        cout<<"\n Price Range selected Between : Rs. 40,000 - 50,000 "<<endl;
    else if(laptop_price==5)
        cout<<"\n Price Range selected Between : Rs. 50,000 - 60,000 "<<endl;
    else if(laptop_price==6)
        cout<<"\n Price Range selected Between : Rs. 60,000 - 70,000 "<<endl;
    else if(laptop_price==7)
        cout<<"\n Price Range selected Between : Rs. 70,000 and above "<<endl;
    else{
        cout<<"\n Terminated Successfully !!"<<endl;
        cout<<"\n Thank You Visit Again !!!!\n"<<endl;
        exit(0);
      }
    }
    else if(os==2)
    {
    cout<<"\n\n **Select the Price Range : \n "<<endl;
    cout<<"1. Rs. 90,000 - 1,00,000"<<endl;
    cout<<"2. Exit"<<endl;
    cout<<"Enter Your Choice : ";
    cin>>laptop_price;

    if(laptop_price==1)
        cout<<"\n Price Range selected Between : Rs. 90,000 and Above "<<endl;
    else if(laptop_price==2){
        cout<<"\n Terminated Successfully !!"<<endl;
        cout<<"\n Thank You Visit Again !!!!\n"<<endl;
        exit(0);
      }

    }
}

void Features::select_laptop_brand()
{
    if(os==1){
    cout<<"\n\n **Select the Brand  : \n"<<endl;
    cout<<"1. HP "<<endl;
    cout<<"2. Dell"<<endl;
    cout<<"3. Lenovo"<<endl;
    cout<<"4. ASUS"<<endl;
    cout<<"5. Acer"<<endl;
    cout<<"6. Honor"<<endl;
    cout<<"7. Alienware"<<endl;
    cout<<"8. Exit"<<endl;
    cout<<"Enter Your Choice : ";
    cin>>laptop_brand;
    if(laptop_brand==1)
        cout<<"\n Brand Selected ==> HP "<<endl;
    else if(laptop_brand==2)
        cout<<"\n Brand Selected ==> Dell "<<endl;
    else if(laptop_brand==3)
        cout<<"\n Brand Selected ==> Lenovo "<<endl;
    else if(laptop_brand==4)
        cout<<"\n Brand Selected ==> ASUS "<<endl;
    else if(laptop_brand==5)
        cout<<"\n Brand Selected ==> Acer "<<endl;
    else if(laptop_brand==6)
        cout<<"\n Brand Selected ==> Honor "<<endl;
    else if(laptop_brand==7)
        cout<<"\n Brand Selected ==> Alienware "<<endl;
    else{
        cout<<"\n Terminated Successfully !!"<<endl;
        cout<<"\n Thank You Visit Again !!!!\n"<<endl;
        exit(0);
    }
    }
    else if(os==2)
    {
        cout<<"\n Brand Selected ==> Apple "<<endl;
    }
}


void Features::display_features()
{
    cout<<"\n\n";
    cout<<"\n * Your Selected Specifications are ==> \n"<<endl;

    //OS
    if(os==1){
        cout<<"\n Operating System ==> Windows "<<endl;

    //Prccessor
    if(processor==1)
        cout<<"\n Processor ==> Intel i3"<<endl;
    else if(processor==2)
        cout<<"\n Processor ==> Intel i5"<<endl;
    else if(processor==3)
        cout<<"\n Processor ==> Intel i7"<<endl;
    else if(processor==4)
        cout<<"\n Processor ==> Intel i9"<<endl;
    else if(processor==5)
        cout<<"\n Processor ==> Ryzen 5"<<endl;
    else if(processor==6)
        cout<<"\n Processor ==> Ryzen 7"<<endl;

    //RAM
    if(ram==1)
        cout<<"\n RAM ==> 2 GB"<<endl;
    else if(ram==2)
        cout<<"\n RAM ==> 4 GB"<<endl;
    else if(ram==3)
        cout<<"\n RAM ==> 8 GB"<<endl;
    else if(ram==4)
        cout<<"\n RAM ==> 16 GB"<<endl;
    else if(ram==5)
        cout<<"\n RAM ==> 32 GB"<<endl;

    //graphics card
    if(graphics_card==1)
        cout<<"\n Graphics Card ==> 2 GB"<<endl;
    else if(graphics_card==2)
        cout<<"\n Graphics Card ==> 4 GB"<<endl;
    else if(graphics_card==3)
        cout<<"\n Graphics Card ==> 6 GB"<<endl;
    else if(graphics_card==4)
        cout<<"\n Graphics Card ==> 8 GB"<<endl;
    else if(graphics_card==5)
        cout<<"\n Integrated Graphics Card"<<endl;
    else if(graphics_card==6)
        cout<<"\n No Graphics card Selected."<<endl;

    //Memory
    if(memory==1)
        cout<<"\n Memory Type ==> SSD"<<endl;
    else if(memory==2)
        cout<<"\n Memory Type ==> HDD"<<endl;
    else if(memory==3)
        cout<<"\n Memory Type ==> Both SSD & HDD"<<endl;

    //SSD
    if(ssd==1)
        cout<<"\n SSD Capacity ==> 128 GB"<<endl;
    else if(ssd==2)
        cout<<"\n SSD Capacity ==> 256 GB"<<endl;
    else if(ssd==3)
        cout<<"\n SSD Capacity ==> 512 GB"<<endl;
    else if(ssd==4)
         cout<<"\n SSD Capacity ==> 1 TB"<<endl;

    //HDD
    if(hdd==1)
        cout<<"\n HDD capacity ==> 128 GB"<<endl;
    else if(hdd==2)
        cout<<"\n HDD capacity ==> 256 GB"<<endl;
    else if(hdd==3)
        cout<<"\n HDD capacity ==> 512 GB"<<endl;
    else if(hdd==4)
        cout<<"\n HDD capacity ==> 1 TB"<<endl;

    //BOTH
    if(both==1)
        cout<<"\n Memory ==> 128 GB SSD , 1 TB HDD"<<endl;
    else if(both==2)
        cout<<"\n Memory ==> 256 GB SSD , 1 TB HDD"<<endl;
    else if(both==3)
        cout<<"\n Memory ==> 512 GB SSD , 1 TB HDD"<<endl;

   //price range
    if(laptop_price==1)
       cout<<"\n Price Range : 20,000 and Below"<<endl;
    else if(laptop_price==2)
       cout<<"\n Price Range : 20,000 - 30,000"<<endl;
    else if(laptop_price==3)
       cout<<"\n Price Range : 30,000 - 40,000"<<endl;
    else if(laptop_price==4)
       cout<<"\n Price Range : 40,000 - 50,000"<<endl;
    else if(laptop_price==5)
       cout<<"\n Price Range : 50,000 - 60,000"<<endl;
    else if(laptop_price==6)
       cout<<"\n Price Range : 60,000 - 70,000"<<endl;
    else if(laptop_price==7)
       cout<<"\n Price Range : 70,000 and Above\n\n"<<endl;
}

// mac Os operating System
    else if(os==2){
        cout<<"\n Operating System ==> MAC OS"<<endl;

    //processor mac
    if(processor==1)
        cout<<"\n Processor ==> Intel i3"<<endl;
     if(processor==2)
        cout<<"\n Processor ==> Intel i5"<<endl;
     else if(processor==3)
        cout<<"\n Processor ==> Intel i7"<<endl;
     else if(processor==4)
        cout<<"\n Processor ==> Intel i9"<<endl;
   //ram mac
    if(ram==1)
       cout<<"\n RAM ==> 8 GB"<<endl;
    else if(ram==3)
       cout<<"\n RAM ==> 16 GB"<<endl;
   // graphics card
    if(graphics_card==1)
        cout<<"\n Graphics Card ==> 4 GB"<<endl;

    //memory
    if(memory==1)
        cout<<"\n Memory Type ==> SSD"<<endl;

    //SSD
    if(ssd==1)
        cout<<"\n SSD Capacity ==> 256 GB"<<endl;
    else if(ssd==2)
        cout<<"\n SSD Capacity ==> 512 GB"<<endl;
    else if(ssd==3)
         cout<<"\n SSD Capacity ==> 1 TB"<<endl;

    //price
    if(laptop_price==1)
        cout<<"\n Price Range : Rs. 90,000 and above "<<endl;
    }
}


void Features::laptop_suggestions()
{
   //Suggested Laptops MAc Os and Windows
   cout<<"\n * Suggestions Related to your Specifications ==> "<<endl;

   if(os==2 && processor==1 && ram==1 && ssd==1 && graphics_card==2 &&laptop_price==1 )
   {
       cout<<"\n\n  *Apple MacBook Pro Core i5 8th Gen (8 GB/256 GB SSD)  "<<endl;
       cout<<"\n     (13.3 inch, Space Grey, 1.37 kg) "<<endl;
       cout<<"\n      Ratings - 4.6/5.0"<<endl;
       cout<<"\n      Rs. 1,54,990"<<endl;
   }
   else if(os==2 && processor==1 && ram==1 && ssd==1 && graphics_card==2 && laptop_price==1){

       cout<<"\n\n  *Apple MacBook Pro Core i3 10th Gen (8 GB/256 GB SSD)  "<<endl;
       cout<<"\n     (13.3 inch, Space Grey, 1.29 kg) "<<endl;
       cout<<"\n      Ratings - 4.7/5.0"<<endl;
       cout<<"\n      Rs. 92,990"<<endl;
   }

   else if(os==2 && processor==3 &&ram==2&& ssd==2 && graphics_card==2 &&laptop_price==1){

       cout<<"\n\n  *Apple MacBook Pro Core i7 9th Gen (16 GB/512 GB SSD)  "<<endl;
       cout<<"\n     (16 inch, Space Grey, 2 kg) "<<endl;
       cout<<"\n      Ratings - 4.7/5.0"<<endl;
       cout<<"\n      Rs. 1,99,900"<<endl;
   }

   else if(os==2 && processor==2 &&ram==2 && ssd==2 && graphics_card==2 &&laptop_price==1)
   {
       cout<<"\n\n  *Apple MacBook Pro Core i5 10th Gen (16 GB/512 GB SSD)  "<<endl;
       cout<<"\n     (13 inch, Space Grey, 1.4 kg) "<<endl;
       cout<<"\n      Ratings - 4.9/5.0"<<endl;
       cout<<"\n      Rs. 1,74,900"<<endl;
   }

   else if(os==2 && processor==2 &&ram==1 && ssd==2 && graphics_card==2 &&laptop_price==1)
   {
       cout<<"\n\n  *Apple MacBook Pro Core i5 8th Gen (8 GB/512 GB SSD)  "<<endl;
       cout<<"\n     (13.3 inch, Space Grey, 1.4 kg) "<<endl;
       cout<<"\n      Ratings - 4.7/5.0"<<endl;
       cout<<"\n      Rs. 1,69,900"<<endl;
   }

   else if(os==2 && processor==4 &&ram==2 && ssd==3 &&laptop_price==1 && graphics_card==1)

   {
       cout<<"\n\n  *Apple MacBook Pro Core i9 9th Gen (16 GB/1 TB SSD/4 GB Graphics)  "<<endl;
       cout<<"\n     (16 inch, Space Grey, 2 kg) "<<endl;
       cout<<"\n      Ratings - 4.7/5.0"<<endl;
       cout<<"\n      Rs. 2,24,900"<<endl;
   }

   else if(os==2 && processor==3 && ram==2 && ssd==2 && graphics_card==1 && laptop_price==1){
      cout<<"\n\n  * Apple MacBook Pro Corei7 9th Gen (16 GB/512 GB SSD /4 GB Graphics)"<<endl;
       cout<<"\n      (16 inch, Space Grey, 2 kg)"<<endl;
       cout<<"\n       Rating 4.7/5.0"<<endl;
       cout<<"\n       Rs. 1,99,900"<<endl;
   }
   else if(os==2 && processor==4 && ram==2 && ssd==3 && graphics_card==1 && laptop_price==1){
       cout<<"\n    * Apple MacBook Pro Core i9 9th Gen (16 GB/1 TB SSD/4 GB Graphics)"<<endl;
       cout<<"\n      (16 inch, Silver, 2 kg)"<<endl;
       cout<<"\n      Ratings - 4.67/5.0"<<endl;
       cout<<"\n      Rs.2,24,900"<<endl;
   }
   else if(os==2 && processor==3 && ram==2 && ssd==2 && graphics_card==1 && laptop_price==1){
      cout<<"\n\n  * Apple MacBook Pro Corei7 8th Gen (16 GB/512 GB SSD /4 GB Graphics)"<<endl;
       cout<<"\n      (15.4 inch, Space Grey, 1.83 kg)"<<endl;
       cout<<"\n       Rating 4/5.0"<<endl;
       cout<<"\n       Rs. 2,39,900"<<endl;
   }

   else if(os==2 && processor==2 && ram==2 && ssd==3 && graphics_card==2&& laptop_price==1){
      cout<<"\n\n  * Apple MacBook Pro Corei5 10th Gen (16 GB/1 TB SSD )"<<endl;
       cout<<"\n      (13 inch, Space Grey, 1.4 kg)"<<endl;
       cout<<"\n       Rating 4.9/5.0"<<endl;
       cout<<"\n       Rs. 1,94,900"<<endl;
   }

   else if(os==2 && processor==4 && ram==2 && ssd==2 && graphics_card==1 && laptop_price==1){
      cout<<"\n\n  * Apple MacBook Pro Corei9 8th Gen (16 GB/512 GB SSD /4 GB Graphics)"<<endl;
       cout<<"\n      (15.4 inch, Space Grey, 1.83 kg)"<<endl;
       cout<<"\n       Rating 4.1/5.0"<<endl;
       cout<<"\n       Rs. 2,09,990"<<endl;

   }
}

// Main Function
int main()
{
    cout<<"\t\t***********************************"<<endl;
    cout<<"\t\t*   Laptop Customization System   *"<<endl;
    cout<<"\t\t***********************************"<<endl;
    Features f;
    f.fullname();
    f.display();
    f.select_os();
    f.select_ram();
    f.select_processor();
    f.select_graphics_card();
    f.select_memory();
    f.select_laptop_price();
    f.select_laptop_brand();
    system("cls");
    f.display_features();
    f.laptop_suggestions();


    cout<<"\n\n\n\n * Thank you Visit Again :) !!!! "<<endl;
    cout<<"\n * Developed By ==> "<<endl;
    cout<<"\n   S.Y Information Technology Department !!!!"<<endl;
    cout<<"\n   G.H.Raisoni College of Engineering and Management,Wagholi,Pune .";
    cout<<"\n\n";

}


