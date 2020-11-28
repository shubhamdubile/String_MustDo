#include <iostream>
#include <string>
using namespace std;

int main()
{   
   string str1="ABACD",str2="CDABAS";
   string temp=str1+str2;
   
   if(str1.length() != str2.length()){
       cout<<"Not Rotation";
   }
   else{
       
       if(temp.find(str2) != string::npos){
       cout<<"Yes it is Rotation";
       
   }
   }
   
    return 0;
}
