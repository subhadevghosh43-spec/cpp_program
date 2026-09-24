#include<iostream>
#include<string>
using namespace std;

 int main()
 {
    string word,secWord;
    int siz;

    cout<<"Enter The word you want to check : ";
    getline(cin,word);

    siz=word.length();
    secWord.resize(siz);

   for(int i=siz;i>0;i--)
    {
      secWord[siz-i]=word[i-1];
    }
   cout<<"\nThe rev form of "<< word<<" is "<<secWord<<endl; 

        if(word==secWord)
         {
           cout<<"\nThe Word is a Pallindrome"<<endl;
         }
        else  
         {
           cout<<"It is not a pallindrome"<<endl;
         }


       return 0;
 }