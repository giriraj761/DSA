#include<iostream>
using namespace std;

bool annagram_Check(string str1,int inf,int inl,string str2){

   int count[256];
   for(int i=0;i<256;i++)
   {
     count[i]=0;   
   }

   for (int i =inf; i < inl; i++)//  index first ....to.....index last
   {
       count[str1[i]]++;
   }

   for (int i = 0; i < str2.length(); i++)
   {
       count[str2[i]]--;
   }

   for(int i=0;i<256;i++)
   {
     if(count[i]!=0){
         return false;
     }
   }

   return true;
   

}

int main(){
 
    string str1="geeksofgeeks",str2="eksgee";
    if((str1+str1).find(str2)!=string::npos)
        cout<<"yes";
    else
        cout<<"no";
    //  bool returned=false;

    // for(int i=0;  i<str1.length()-str2.length();  i++)
    // {
    //        returned=annagram_Check(str1 , i , i+str2.length() , str2);  

    //        if(returned==true){
    //            cout<<"yes";
    //            break;
    //            } 
    // }
    // if(returned==false){
    //            cout<<"NO";
    // }
    
}