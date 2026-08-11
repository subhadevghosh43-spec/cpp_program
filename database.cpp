#include<iostream>
#include<string>
using namespace std;


     class Student_Data
     {
       public:
              string name;
              int Phone_no,Roll_no,Age,Class;
              char Gender;

       void database()
       {
         int no;
           cout<<"Which Data do you want to retrieve about the student: "<<endl;
           cout<<"Enter \n 1. For Complete Data about the student \n 2. For Name of the student \n 3. For Roll NO of the student \n 4. For Age of the student \n 5.For Phone No of the Student \n 6. For Gender of the student"<<endl;
           cin>>no;
            
           switch (no)
           {
              case 1:
                     cout<<"The Name of the Student is "<<name<<endl;
                     cout<<"The Class of the Student is "<<Class<<endl;
                     cout<<"The Roll NO of the student is "<<Roll_no<<endl;
                     cout<<"The PhoneNo of the Student is "<<Phone_no<<endl;
                     cout<<"The Gender of the Student is "<<Gender<<endl;
                     cout<<"The Age of the Student is "<<Age<<endl;
                     break;
              case 2:
                     cout<<"The Name of the Student is "<<name<<endl;
                     break;
              case 3:         
                     cout<<"The Roll NO of the student is "<<Roll_no<<endl;
                     break;
              case 4:
                     cout<<"The Age of the Student is "<<Age<<endl;
                     break;
              case 5:
                     cout<<"The PhoneNo of the Student is "<<Phone_no<<endl;
                     break;
              case 6:
                     cout<<"The Gender of the Student is "<<Gender<<endl;       
                     break;
              default:
                      cout<<"You have entered an unlisted number or character, Please Try Again"<<endl;
                   

           }
           
       
      }
     };



    
     
    int main()
    {
         int a,b,c;
         



    }