#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int tot;
    cout<<" \nEnter the Total No of index you want :";
    cin>>tot;
  
     vector<int> num(tot);
      
      for(int a=0;a<tot;a++)
       {

         cout<<"Enter The digit for Index No "<<a<<" :";
         cin>>num[a];
         
       }

    bool found=false;


    for(int i = 0; i < tot; i++)
    {
        int sum = 0;

        for(int temp = num[i]; temp > 0; temp = temp / 10)
        {
            int rem = temp % 10;
            sum = sum + rem;
        }

        if(sum == i)
        {
            cout << "\nSmallest Index whose Sum of the digit is the Index No is " << i << endl;
            found=true;
            break;
        }
       
    }

    if(!found)
    {
        cout << "\nThere is no Index whose sum of the digit is equal to its Index No"<< endl;
    }

    return 0;
}