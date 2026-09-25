#include<iostream>
#include<string>
using namespace std;

int main()
{
  int sum=0,size;
  string word;
  cout<<"\nEnter The Roman Number :";
  getline(cin,word);

  size=word.length();

   for(int i=0;i<size;i++)
    {

        if(i+1 < size)
           {
             string sec= word.substr(i,2);
              
               
                  
                if(sec=="IV")
                {
                   sum=sum+4;
                   i++;
                   continue;

                }

                else if(sec=="IX")
                {
                   sum=sum+9;
                    i++;
                   continue;

                }
                
               else if(sec=="XL")
                {
                   sum=sum+40;
                     i++;
                   continue;

                }
                
               else if(sec=="XC")
                {
                   sum=sum+90;
                     i++;
                   continue;

                }
                 
               else if(sec=="CD")
                {
                   sum=sum+400;
                     i++;
                   continue;

                }
                
               else if(sec=="CM")
                {
                   sum=sum+900;
                     i++;
                   continue;

                }

               

           }
         

           switch (word[i])
           {
                 
             case 'I':
             sum=sum+1;
             break;

             case 'V':
             sum=sum+5;
             break;
             
             case 'X':
             sum=sum+10;
             break;

             case 'L':
             sum=sum+50;
             break;

             case 'C':
             sum=sum+100;
             break;
            
             case 'D':
             sum=sum+500;
             break;

             case 'M':
             sum= sum+1000;
             break;

             default :

             cout<<"Invalid Character has been Entered";
             return 0;

            }

    }

    cout<<"\n The Coversion of the Roman number "<<word<<" is "<<sum<<endl;
    
    return 0;


}