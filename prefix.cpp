#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
  vector<string> word={"Floppy","Flower","Flown"};

  int count[3];
  int size=word.size();
  int smallest=0;

  for(int i=1;i<size;i++)
   {
      int siz_int=word[i].length();
      int siz_smallest=word[smallest].length();
       if(siz_int<siz_smallest)
       {
        smallest=i;
       }
   }
  for(int a=0;a<size;a++)
   [
      for(int b=0;b<smallest;b++)
       {
         word[a][b];
          
       }
   ]

}