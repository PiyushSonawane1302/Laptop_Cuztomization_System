// Assignment 2 PPL

/* Here we have created the class named features which has Features
 of the laptop like Os,Ram ,Processor and that have the options for
 user to select his/her specification  */

/*#include<iostream>
#include<stdio.h>
using namespace std;

class Features  //class
{
    int os;
    int processor;
    int ram;

public:

    void select_os();
    void select_processor();
    void select_ram();
    void display_features();

};

void Features::select_os() // member function
{
    cout<<"\n ** Please Select The Operating system you want in your Laptop : \n"<<endl;
    cout<<"\n 1.Windows "<<endl;
    cout<<"\n 2.MAC Os "<<endl;
    cout<<"\n 3.Exit"<<endl;
    cout<<"\n Enter Your Choice : ";
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
    cout<<"\n Enter Your Choice : ";
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
    cout<<"\n Enter Your Choice : ";
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
        exit(0);
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
    cout<<"\n Enter Your Choice : ";
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
    cout<<"\n Enter Your Choice : ";
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


void Features::display_features()
{
    cout<<"\n\n";
    cout<<"\n * Your Selected Specifications are ==> \n"<<endl;

 //OS
    if(os==1){
        cout<<"\n Operating System ==> Windows Os"<<endl;


    //Processor
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
        cout<<"\n RAM ==> 4 GB"<<endl;
    else if(ram==2)
        cout<<"\n RAM ==> 8 GB"<<endl;
    else if(ram==3)
        cout<<"\n RAM ==> 16 GB"<<endl;
    else if(ram==4)
        cout<<"\n RAM ==> 32 GB"<<endl;
}
    //for mac
    else if(os==2){
        cout<<"\n Operating System ==> MAC Os "<<endl;
    if(processor==1)
        cout<<"\n Processor ==> Intel i3"<<endl;
     else if(processor==2)
        cout<<"\n Processor ==> Intel i5"<<endl;
     else if(processor==3)
        cout<<"\n Processor ==> Intel i7"<<endl;
     else if(processor==4)
        cout<<"\n Processor ==> Intel i9"<<endl;

     //ram mac
    if(ram==1)
       cout<<"\n RAM ==> 8 GB"<<endl;
    else if(ram==2)
       cout<<"\n RAM ==> 16 GB"<<endl;
    }

}
int main()
{
    cout<<"\t\t***********************************"<<endl;
    cout<<"\t\t*   Laptop Customization System   *"<<endl;
    cout<<"\t\t***********************************"<<endl;
    Features f; //object created
    f.select_os();
    f.select_processor();
    f.select_ram();
    system("cls");
    f.display_features();
    cout<<"\n\n * Thank you Visit Again :) !!!! "<<endl;
}
*/

// Assignment 2 PPL

/* Here we have created the class named features which has Features
 of the laptop like Os,Ram ,Processor and that have the options for
 user to select his/her specification  */

#include<iostream>
#include<stdio.h>
using namespace std;

class Features  //class
{
    int os;
    int processor;
    int ram;

public:

    void select_os();
    void select_processor();
    void select_ram();
    void display_features();

};

void Features::select_os() // member function
{
    cout<<"\n ** Please Select The Operating system you want in your Laptop : \n"<<endl;
    cout<<"\n 1.Windows "<<endl;
    cout<<"\n 2.MAC Os "<<endl;
    cout<<"\n 3.Exit"<<endl;
    cout<<"\n Enter Your Choice : ";
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
    cout<<"\n Enter Your Choice : ";
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
    cout<<"\n Enter Your Choice : ";
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
        exit(0);
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
    cout<<"\n Enter Your Choice : ";
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
    cout<<"\n Enter Your Choice : ";
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


void Features::display_features()
{
    cout<<"\n\n";
    cout<<"\n * Your Selected Specifications are ==> \n"<<endl;

 //OS
    if(os==1){
        cout<<"\n Operating System ==> Windows Os"<<endl;


    //Processor
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
        cout<<"\n RAM ==> 4 GB"<<endl;
    else if(ram==2)
        cout<<"\n RAM ==> 8 GB"<<endl;
    else if(ram==3)
        cout<<"\n RAM ==> 16 GB"<<endl;
    else if(ram==4)
        cout<<"\n RAM ==> 32 GB"<<endl;
}
    //for mac
    else if(os==2){
        cout<<"\n Operating System ==> MAC Os "<<endl;
    if(processor==1)
        cout<<"\n Processor ==> Intel i3"<<endl;
     else if(processor==2)
        cout<<"\n Processor ==> Intel i5"<<endl;
     else if(processor==3)
        cout<<"\n Processor ==> Intel i7"<<endl;
     else if(processor==4)
        cout<<"\n Processor ==> Intel i9"<<endl;

     //ram mac
    if(ram==1)
       cout<<"\n RAM ==> 8 GB"<<endl;
    else if(ram==2)
       cout<<"\n RAM ==> 16 GB"<<endl;
    }

}
int main()
{
    cout<<"\t\t***********************************"<<endl;
    cout<<"\t\t*   Laptop Customization System   *"<<endl;
    cout<<"\t\t***********************************"<<endl;
    Features f; //object created
    f.select_os();
    f.select_processor();
    f.select_ram();
    system("cls");
    f.display_features();
    cout<<"\n\n * Thank you Visit Again :) !!!! "<<endl;
}
