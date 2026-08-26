#include<iostream>
using namespace std;

int main()
{
  int ar[2][2][2]={
                   {
                    {2,3},{3,2}
                   },
                   {
                    {3,2},{2,3}
                   }                
                };
  int dr[2][2][2]={
                   {
                    {5,2},{2,5}
                   },
                   {
                    {2,5},{5,2}
                   }
                  };
  int sr[2][2][2];   


   int i,j,k;

       for(int i=0;i<2;i++)
        {
          for(int j=0;j<2;j++)
          {
            for(int k=0;k<2;k++)
            {
                 sr[i][j][k]=ar[i][j][k]+dr[i][j][k];              
            }
          }
        }

        int a,b,c;

        for(int a=0;a<2;a++)
         {
           for(int b=0;b<2;b++)
            {
              for(int c=0;c<2;c++)
              {
                cout<<sr[a][b][c]<<" ";
               }
                cout<<" ";
            }
                cout<<"\n";
         }

return 0;


}