#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s1,s2,s3,s4;
  cin>>s1>>s2>>s3>>s4;

  string result= s1.append(s2);
  cout<<result<<endl;

  string m = s3 + s4;
  cout<<m;

  return 0;
}
