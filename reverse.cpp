#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{ 
 string s;
 getline(cin,s);
 
  reverse(s.begin(),s.end());
   cout<<s<<endl;

  for(int i=0;i<s.size()/2;i++)
       swap(s[i],s[s.size()-i-1]);

  cout<<s;

  sort(s.begin(),s.end());
  cout<<s;
 return 0;
}
