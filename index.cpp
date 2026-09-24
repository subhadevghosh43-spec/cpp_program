#include<iostream>
using namespace std;

  int main()
  {
     int num[4]={12,10,20,30};
     int temp,sum[4]={0,0,0,0,},rem,count=0;

      for(int i=0;i<4;i++)
       {

            for(int temp=num[i];temp>0;temp=temp/10)
              {
               
               rem=temp%10;
               sum[i]=sum[i]+rem;
                 
              }
           
           if(sum[i]==i)
           {

              cout<<"\n Smallest Index whose Sum of the digit is the Index No is "<<i<<endl;
              break;
           }   
           else
           {
            count=count+1;
            continue;
           }

       }
        if(count==4)
        {

           cout<<" \nThere is no Index whose sum of the digit is equal to it's Index No "<<endl;

        }


    return 0;
  }

