#include<iostream>
#include<map>
#include<stdint.h>
#include<string.h>
int main()
{
   using namespace std;
   int n;
   string name;
   uint64_t phoneno;
   map<string,uint64_t>mymap;
   //cout<<"Please input no of entries";
   cin>>n;
   for (int i=1;i<=n;i++)
   {
   //cout<<"Give name entry and phone number"<<endl;
   cin>>name>>phoneno;
   mymap.insert(pair<string,uint64_t>(name,phoneno));
   }
   cin.ignore(32767,'\n');
   string queryname;
   map<string,uint64_t>::const_iterator it;
   //cout<<"Enter queries"<<endl;
   while(getline(cin,queryname))
   {
      bool found =false;
      for (auto it=mymap.begin();it!=mymap.end();it++)
      {
         if((it->first)==queryname)
         {
            cout<<it->first<<"="<<it->second<<endl;
             found =true;
             break;              
         }          
      }
      if (found ==false)
      cout<<"Not found"<<endl;
   }
  
   /*
   map<string,uint64_t>::const_iterator it;
   for (auto it=mymap.begin();it!=mymap.end();it++)
   {
   cout<<it->first<<"="<<it->second<<endl;
   }
   */

   
   return 0;
}