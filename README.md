#include<iostream>
#include<string>
using namespace std;
//#define N0_OF_CHARS 256

int main()
{
  string s;
  cin>>s;

  int arr[256]={0};

  for(int i=0;i < s.size();i++)
      arr[(int)s[i]]++;

   int max=0;
   char max_char;

   for(int i=0;i < s.size();i++)
      {
         if(arr[(int)s[i]] > max)
             {  
                  max=arr[(int)s[i]];
                  max_char=s[i];
             }
      }

if(max>1)
{
  cout<<max<<endl<<max_char<<endl;
}
else
cout<<"no character is repeated";
   return 0;

}
