#include<iostream>
#include<string.h>
using namespace std;

class student{
    public:
    string StdName;
    int Class;
    int Roll;
    string Sub1;
    string Sub2;
    string Sub3;
    string Sub4;
    string Sub5;
    string Sub6;
    string Sub7;
    int m1,m2,m3,m4,m5,m6,m7;
    int addedsubnum;
   
   
  void StudentDetails(){
      cout<<"Enter student name:\n";
      cin>>StdName;
      cout<<"Class:\n";
      cin>>Class;
      cout<<"Enter student roll no:\n";
      cin>>Roll;
    
  }
  void StudentMarkDetails(){
        cout<<"Name of subject 1:\n" ;
      cin>>Sub1;
      cout<<"Marks in "<<Sub1<<":"<<"\n";
      cin>>m1;
      cout<<"Name of subject 2:\n" ;
      cin>>Sub2;
       cout<<"Marks in "<<Sub2<<":"<<"\n";
        cin>>m2;
      cout<<"Name of subject 3:\n" ;
      cin>>Sub3;
       cout<<"Marks in "<<Sub3<<":"<<"\n";
        cin>>m3;
      cout<<"Name of subject 4:\n" ;
      cin>>Sub4;
       cout<<"Marks in "<<Sub4<<":"<<"\n";
      cin>>m4;
      cout<<"Name of subject 5:\n" ;
      cin>>Sub5;
       cout<<"Enter marks in "<<Sub5<<":"<<"\n";
        cin>>m5;
  }
  void DisplayStudentDetails(){
      cout<<"Student Name: "<<StdName<<"\n";
      cout<<"Class: "<<Class<<"\n";
      cout<<"Roll Number: "<<Roll<<"\n"; 
  }
  void DisplayMarkdetails(){
      cout<<"1."<<Sub1<<": "<<m1<<"\n";
      cout<<"2."<<Sub2<<": "<<m2<<"\n";
      cout<<"3."<<Sub3<<": "<<m3<<"\n";
      cout<<"4."<<Sub4<<": "<<m4<<"\n";
      cout<<"5."<<Sub5<<": "<<m5<<"\n";
      
  }
  
  void InsertNewMarks(){
      cout<<"Maximum 2 subjects marks can be added. \n";
      cout<<"How many subjects are to be added: ";
      cin>>addedsubnum;
      switch(addedsubnum){
          case 1:
          cout<<"6th subject name:\n";
          cin>>Sub6;
          cout<<"Marks of"<<Sub6<<":"<<"\n";
          cin>>m6;
          break;
          case 2:
           cout<<"6th subject name:\n";
          cin>>Sub6;
          cout<<"Marks of"<<Sub6<<":"<<"\n";
          cin>>m6;
           cout<<"7th subject name:\n";
          cin>>Sub7;
          cout<<"Marks of "<<Sub7<<":"<<"\n";
          cin>>m7;
          break;
          default:
          cout<<"Invalid choice!";
          break;
      }
     
  } 
  void DisplayNewMark(){
      cout<<"Progress card is updated!";
      DisplayStudentDetails();
      DisplayMarkdetails();
       cout<<Sub6<<": "<<m6<<"\n";
        cout<<Sub7<<": "<<m7<<"\n";
  }
  void DeleteMark(){
      int option;
   cout<<"Select which subject marks you have to delete:\n";
   DisplayMarkdetails();
   cout<<"\nSelect an option(1-5)";
   cin>>option;
   switch(option)
   {
       case 1:
       cout<<"1."<<Sub2<<":"<<m2<<"\n2."<<Sub3<<":"<<m3<<"\n3."<<Sub4<<":"<<m4<<"\n4."<<Sub5<<":"<<m5;
       break;

       case 2:
       cout<<"1."<<Sub1<<":"<<m1<<"\n2."<<Sub3<<":"<<m3<<"\n3."<<Sub4<<":"<<m4<<"\n4."<<Sub5<<":"<<m5;
       break;

       case 3:
       cout<<"1."<<Sub1<<":"<<m1<<"\n2."<<Sub2<<":"<<m2<<"\n3."<<Sub4<<":"<<m4<<"\n4."<<Sub5<<":"<<m5;
       break;

       case 4:
        cout<<"1."<<Sub1<<":"<<m1<<"\n2."<<Sub2<<":"<<m2<<"\n3."<<Sub3<<":"<<m3<<"\n4."<<Sub5<<":"<<m5;
       break;

       case 5:
         cout<<"1."<<Sub1<<":"<<m1<<"\n2."<<Sub2<<":"<<m2<<"\n3."<<Sub3<<":"<<m3<<"\n4."<<Sub4<<":"<<m4;
       break;
        
        default:
        cout<<"Invalid Option";
        break;
   }
   
  }
  void ModifyMark(){
      int op;
      cout<<"Select the subject to mofify marks: \n";
      DisplayMarkdetails();
      cout<<"\nChoose 1 option";
      cin>>op;
      switch(op){
          case 1:
          cout<<"New marks of "<<Sub1<<"\n";
          cin>>m1;
          cout<<"\n Marks have been updated for "<<Sub1<<"\n";
          DisplayMarkdetails();
          break;

        case 2:
          cout<<"New marks for "<<Sub2<<"\n";
          cin>>m2;
          cout<<"\n Marks have been updated for "<<Sub2<<"\n";
          DisplayMarkdetails();
          break;

        case 3:
          cout<<"New marks for "<<Sub3<<"\n";
          cin>>m3;
          cout<<"\n Marks have been updated for "<<Sub3<<"\n";
          DisplayMarkdetails();
          break;

        case 4:
          cout<<"New marks for "<<Sub4<<"\n";
          cin>>m4;
          cout<<"\n Marks have been updated for "<<Sub4<<"\n";
          DisplayMarkdetails();
          break;
 
        case 5:
          cout<<"New marks for "<<Sub5<<"\n";
          cin>>m5;
          cout<<"\n Marks have been updated for "<<Sub5<<"\n";
          DisplayMarkdetails();
          break;

        default:
          cout<<"Invalid option";
          break;

      }


  }
 
};
int main()
{ 
    int need;
    student a;
    a.StudentDetails();
    a.StudentMarkDetails();
      cout<<"Student Menu\n";
      cout<<"1-->Insert new marks\n2-->Delete existing mark\n3-->Modify existing marks\n4-->Display Student data\n\n Select your need:";
       cin>>need;
       cout<<"__________\n";
       switch(need){
           case 1:
           a.InsertNewMarks();
           a.DisplayNewMark();
           break;
           case 2:
          a.DeleteMark();
          break;
           case 3:
           a.ModifyMark();
           break;
           case 4:
          a.DisplayStudentDetails();
          a.DisplayMarkdetails();
           break;
           default :
           cout<<"Invalid Choice!!";
           break;
       }
       cout<<"\n_________";
    
   return 0;
}