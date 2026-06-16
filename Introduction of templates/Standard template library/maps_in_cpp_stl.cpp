#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
    map<string , int> marksMap;
    marksMap["hisham"] = 98 ;
    marksMap["aadil"] = 97 ;
    marksMap["Ammar"] = 100 ;

    map<string , int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" :"<<(*iter).second<<endl;
    }
      return 0;
}