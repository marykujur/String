#include<iostream>
#include<string>
using namespace std;
int main()
{
  int arr[256]={0};
  
  string s;
  getline(cin,s);
  
  for(int i=0;i<s.size();i++)
     arr[(int)s[i]]++;

  for(int i=0;i<s.size();i++)
    {
       if(arr[(int)s[i]] > 0)
           {
              cout<<s[i];
              arr[(int)s[i]]=0;
           }
            
    }
return 0;
}
