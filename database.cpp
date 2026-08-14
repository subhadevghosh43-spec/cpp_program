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
               int A=0;
             
              do
              {
        
           int no,Count;
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
              
             
             cout<<"Press 1 to access more informations or press any other no to exit "<<endl;
             cin>>A;
            } while(A == 1);
       
      }
     };



    
     
    int main()
    {    
       int n,i;
          cout<<"Enter the Total No of Students: "<<endl;
          cin>>n;
            Student_Data Data[n];
       int phone_no,age,roll,clas;
       string name;
       char gender;
    cin.ignore();
       for(i=0;i<n;i++)
       {
            cout<<"For the Student with Serial No. "<<i+1<<endl;

               cout<<"Enter The Name :"<<endl;
               getline(cin,name);
               cout<<"Enter The Roll :"<<endl;
               cin>>roll; 
               cout<<"Enter The Class :"<<endl;
               cin>>clas;
               cout<<"Enter The Gender :"<<endl;
               cin>>gender;
               cout<<"Enter The Phone No :"<<endl;
               cin>>phone_no; 
               cout<<"Enter The Age :"<<endl;
               cin>>age;
                 cin.ignore(); 

                    Data[i].name=name;
                    Data[i].Roll_no=roll;
                    Data[i].Class=clas;
                    Data[i].Gender=gender;
                    Data[i].Phone_no=phone_no;
                    Data[i].Age=age;
       }
         int A;
         do{
            int ser; 
              cout<<"Enter the serial No of the Student you want to find the Details about"<<endl;
              cin>>ser;

  
               Data[ser-1].database();
                 
                cout<<"Enter 1 to continue or enter any other no to exit "<<endl;
                cin>>A;

              } while(A=1);
      return 0;

    }