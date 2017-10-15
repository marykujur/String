#include<iostream>
#include<string>
using namespace std;

int main()
{ 
  int arr[256]={0};
  
  string s;
  cin>>s;

  for(int i=0;i<s.size()/2;i++)
      {
          if( s[i] != s[s.size()-i-1] )
             {
                cout<<"not palindrome";
                return 0; 
             }
        }
        cout<<"palindrome";
      
  
}
