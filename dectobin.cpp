//convert decimal to binary
//then count consecutive 1s

#include<iostream>
#include<conio.h>
int main()
{
   using namespace std;
   int num;
   int arr[10]={0};
   int bin_number=0;
   cout<<"Please input decimal no"<<endl;
   cin>>num;
   int i=0;
   while (num)
   {      
      if (num%2==0)
      {
      arr[i++]=0;
      }
      else
      {
      arr[i++]=1;
      }
      num/=2;
   }
   i--;

   int arr2[10]={0};
   int a=0;
   for (int x=i;x>=0;x--)
   {
      arr2[a++]=arr[x];
      //cout<<arr2[a];
   }
   //printf("%d",i); 
   int count=1;  
   for (int y=1;y<=i+1;y++)  //100111001111
   {
      cout<<arr2[y-1]<<" ";
      if ((arr2[y-1]==1) && (arr2[y]==1))
      count++;
      if ((arr2[y-1]==0) && (arr2[y]==0))
      count=0;
      
   }
   cout<<"the count is "<<count<<endl;
   
   
   
   getch();
   return 0;
}


