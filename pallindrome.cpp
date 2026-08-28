#include<iostream>
using namespace std;

 int main()
 {
   int num,check,sec=0;
   cout<<"Enter the number You want to check :";
   cin>>num;
    int rem,temp;   

    for(int temp=num;temp>0;temp=temp/10)
      {
         rem=temp%10;
         sec=sec*10+rem;
      }
   if(sec==num)
   {
     cout<<num<<" is a pallindrome";
   }
   else
   {
    cout<<num<<" is not a pallindrome";
   }
 return 0;
 }

 