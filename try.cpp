// #include <bits/stdc++.h>

// using namespace std;

// string timeConversion(string s)
// {
//     string ends = "", strt = "";
//     int n = s.length() - 1;
//     ends += s[n - 1];
//     ends += s[n];
//     strt += s[0];
//     strt += s[1];
//     if (ends.compare("PM") == 0)
//     {
//         if ((strt.compare("12"))==0)
//         {
//             strt = "12";
//         }
//         else
//         {
//             int time = stoi(strt);
//             time += 12;
//             strt = to_string(time);
//         }
//     }
//     else
//     {
//         if (strt.compare("12")==0)
//         {
//             strt = "00";
//         }
//     }
//     string ans = "";
//     ans += strt;
//     for (int i = 2; i < n - 1; i++)
//     {
//         ans += s[i];
//     }
//     return ans;
// }

// int main()
// {
//     string s;
//     cin >> s;

//     string result = timeConversion(s);

//     cout << result << "\n";
//     return 0;
// }

// Largest sum of upper-left quadrant of matrix that can be formed by reversing rows and columns

//  int n = matrix.size();
//     int ans =0;
//     for(int i=0;i<matrix.size()/2;i++)
//     {
//         for(int j=0;j<matrix[i].size()/2;j++)
//         {
//            ans += max(matrix[i][j],max(matrix[i][n-j-1],max(matrix[n-i-1][j],matrix[n-i-1][n-j-1])));

//         }
//     }
//     return ans;

// #include<bits/stdc++.h>
// using namespace std;
// void getResult(string str){

//     int count=0;
//     while(stoi(str)!=6174 && count<10 ){
//         count++;
//         string str1=str,str2=str;
//         sort(str1.begin(),str1.end(),greater<int>());
//         sort(str2.begin(),str2.end());
//         str=to_string(stoi(str1)-stoi(str2));
//         if(str.size()<4){
//             int i=4-str.size();
//             while(i>0){
//                 str="0"+str;
//                 i--;
//             }
//         }
//         cout<<str1<<"-"<<str2<<" = "<<str<<endl;
//     }
//     cout<<count<<" no. of iterations."<<endl;
// }
// int main(){
//     string num;
//     cout<<"Enter a number : ";
//     cin>>num;
//     getResult(num);
// return  0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> arr{-4,3,3,4,4,4};
//     vector<int> count(2000);

//     for(int i=0;i<arr.size();i++)
//     {
//         cout<<arr[i]<<" ";
//         if(arr[i]<0)count[1000-abs(arr[i])]++;
//         else count[1000+arr[i]]++;
//     }
//     int flag = 0;

//     vector<int> counter(2000);
//     for(int i =0 ;i<2000;i++)
//     {
//         if(count[i]!=0)
//         {
//             if(counter[count[i]]==0)
//             {
//             counter[count[i]]++;
//             }
//             else
//             flag = 1;
//         }
//     }
//     cout<<flag;
//     return 0;
// }
// node* mergelist(node*head1,node*head2)
// {
//     if(head1==nullptr)return head2;
//     else if(head2==nullptr)return head1;

//     node * result = nullptr;
//     if(head1->data<=head2->data)
//     {
//         result = head1;
//         result->next = mergelist(head1->next,head2);
//     }
//     else{
//         result = head2;
//         result->next = mergelist(head1,head2->next);
//     }
//     return result;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     intmin
//     int arr[]={5,1,6,-2,0};
//     int secondMax = -999 ,max = -32000;
//     for(int i=0;i<5;i++)
//     {
//         if(arr[i]>max)
//         {
//             secondMax = max;
//             max = arr[i];
//         }
//         else if(arr[i]>secondMax && arr[i]<max)
//         {
//             secondMax = arr[i];
//         }
//     }
//     cout<<max<<" "<<secondMax;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//         int crime = 0;
//         int police = 0;
//         int ans = 0;
//     while(t)
//     {
//         int var = 0 ;
//         cin>>var;
//         if(var == -1)
//         {
//             crime++;
//         }
//         if(var>0){
//             police+=var;
//          }
//          if(crime>police)
//          {
//             ans += crime - police;
//             police=0;
//             crime=0;
//          }
//          t--;
//     }
//     cout<<ans<<" ";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t, x;
//     cin >> t >> x;
//     int dis = 0;
//     while (t)
//     {
//         int var;
//         cin >> var;
//         if (var < 0)
//         {
//             if (x + var < 0)
//                 dis++;
//             else
//                 x = x + var;
//         }
//         else
//             x += var;
//         t--;
//     }
//     cout << x << " " << dis;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int ans = 0;
//     vector<int>arr= {7,8,5};
//     multiset<int> s;
//     for(int i=0;i<arr.size();i++)
//     {
//         s.insert(arr[i]);
//     }
//     int target = 20;
//     for(auto x: s)cout<<x<<" ";
//         cout<<endl;
//         cout<<endl;
//     for(int i=0;i<arr.size();i++)
//     {
//         if(s.find(target - arr[i]) != s.end())
//         {
//             s.erase(s.find(arr[i]));
//             ans++;
//         }
//         for(auto x: s)cout<<x<<" ";
//         cout<<endl;
//     }
//     cout<<ans;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int myEval(int a, int b, char opr)
// {
//     if (opr == '+')
//         return a + b;
//     if (opr == '-')
//         return b - a;
//     if (opr == '*')
//         return a * b;
//     if (opr == '/')
//         return (int)b / a;
//     return -999;
// }
// int calculate(string s)
// {
//     stack<int> si;
//     stack<char> sy;
//     string ch = "";
//     for (int i = 0; i < s[i]; i++)
//     {
//         if (isdigit(s[i]))
//         {
//             while (isdigit(s[i]))
//             {
//                 ch += s[i];
//                 i++;
//             }
//             si.push(stoi(ch));
//             ch = "";
//         }
//         if (i < s.length() && s[i] != ' ')
//         {
//             sy.push(s[i]);
//         }
//     }
//     int a = 0, b = 0;
//     while (!sy.empty())
//     {
//         char opr = sy.top();
//         sy.pop();
//         if (!si.empty())
//         {
//             a = si.top();
//             si.pop();
//         }
//         if (!si.empty())
//         {
//             b = si.top();
//             si.pop();
//         }
//         int val = myEval(a, b, opr);
//         if (val == -999)
//         {
//             break;
//         }
//         si.push(val);
//     }
//     return si.top();
// }

// int main()
// {
//     cout << calculate("3+5 / 2");
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n ;
//     cin>>n;
//     if(n%15==0)cout<<3;
//     else if(n%3==0 && n%5!=0)cout<<1;
//     else if(n%5==0 && n%3!=0)cout<<2;
//     else cout<<0;
//     return 0;
// }

// char head = 'H',tail='T';
// if(n&2==0)
// {
//     if(state=='H')
//         return head;
//     else
//         return tail;
// }
// else
// {
//     if(state=='H')
//         return tail;
//     else
//         return head;
// }

// number addition using linked list

// Node *res = NULL;
// Node *temp, *prev = NULL;
// int carry = 0, sum;
// while (list1 != NULL || list2 != NULL)
// {
//     sum = carry + (list1 ? list1->data : 0) + (list2 ? list2->data : 0);
//     carry = (sum >= 10) ? 1 : 0;
//     sum = sum % 10;
//     temp = newNode(sum);
//     if (res == NULL)
//         res = temp;
//     else
//         prev->next = temp;
//     prev = temp;
//     if (list1)
//         list1 = list1->next;
//     if (list2)
//         list2 = list2->next;
// }
// if (carry > 0)
//     temp->next = newNode(carry);
// return res;

// Node * res = NULL;
//   Node * temp;
//   Node * prev = NULL;
//   int carry = 0, sum = 0;
//   while (list1 != NULL || list2 != NULL) {
//     sum = carry;

//     int val =0;

//     if(list1!=NULL)
//         val = list1->data;
//     sum+=val;
//     if(list2!=NULL)
//         val = list2->data;
//     sum+=val;

//     if (sum >= 10) {
//       carry = 1;
//     } else {
//       carry = 0;
//     }
//     sum %= 10;
//     temp = newNode(sum);
//     if (res != NULL) {
//       prev -> next = temp;
//     } else {
//       res = temp;
//     }
//     prev = temp;
//     if (list1) {
//       list1 = list1 -> next;
//     }
//     if (list2) {                change null to nullptr small
//       list2 = list2 -> next;
//     }
//   }

//   if (carry > 0)
//     temp -> next = newNode(carry);
//   return res;
// }

#include <bits/stdc++.h>
using namespace std;

void solve(string digit, vector<string> &ans, string mapd[], string temp ,int i)
{
  // base case
  if (i >= digit.length())
  {
    ans.push_back(temp);
    return;
  }

  //--//
  int num = digit[i] - '0';
  string val = mapd[num];

  for (int j = 0; j < val.length(); j++)
  {
    temp.push_back(val[j]);
    solve(digit, ans, mapd, temp , i + 1);
    temp.pop_back();
  }
}

int main()
{
  string digits = "2345";
  string mapd[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  vector<string> ans;

  solve(digits, ans, mapd,"",0);

  for(auto x : ans){
    cout<<x<<" ";
  }
  return 0;
}
