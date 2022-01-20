#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s1;  // default empty string // direct initialization

    string s2 = s1;  // s2 is copy of s1
    string s3 = "Riya"; // s3 is copy of string literal  // Null not included //copy initialize
    string s4(10,'c'); // ccccccccc
    string s5 =  string(10,'c'); // ccccccccc
    string s6("Riya");
    string s7 = string("Riya");

  //  cin>>s1>>s2;
  //  cout<<s1<<s2;
 /* while(cin>>s1)
    cout<<s1<<endl;
    getline(cin,s1);
    cout<<s1;
    while(getline(cin,s1))
        if(!s1.empty()){
        cout<<s1<<endl;}

    while(getline(cin,s1))
        if(!s1.size()>2){
        cout<<s1<<endl;}

    cout<<s5.size();
    auto c = s5.size();
    decltype( s5.size()) d = s5.size();
    cout<<c<<endl<<d;*/
  //  string s11 = "hello"s + " , " + s3; // one of the operator must be string
  //  string s12 =  s3 + " , " +"hello" ;
     string str("my name is nikhil");
    // for(auto c : str)
    //    cout<<c<<endl;
    for(auto &c : str)
        c = toupper(c);
    cout<<str;
    return 0;
}
