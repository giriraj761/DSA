#include <bits/stdc++.h>
using namespace std;

// gcd
// int algo(int a ,int b)
// {
//     if(b==0)return a;
//     return algo(b,a%b);
// }
// int algo1(int a ,int b) //euclid algo
// {
//     while(a!=b)
//     {
//         if(a>b)
//             a-=b;
//         else
//             b-=a;
//     }
//     return a;
// }

// lcm = (a*b)/gcd(a,b);
// while (true)
//     {
//         num = num + max(a, b);
//         if (num % a == 0 && num % b == 0)
//             break;
//     }
// bool isprime(int n)
// {
//     if (n == 1)
//         return false;
//     if (n == 2 || n == 3)
//         return true;
//     if (n % 2 == 0 || n % 3 == 0)
//         return false;
//     for (int i = 5; i * i <= n; i += 6)
//     {
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;
//     }
//     return true;
// }
// for (int i = 2; i < n; i++)
// {
//     if (isprime(i))
//     {
//         int x = i;
//         while (n % x == 0) to print all occurence of the prime factors
//         {
//             cout << i << " ";
//             x *= i;
//         }
//         if(n%i==0) only print one instance;
//             cout << i << " ";
//     }
// }
// int n = 40001;
// cout<< (n>>10);
// float x = 40001;
// x=x/1023;
// cout<<endl<<setprecision(100)<<x;

// int str[] = {2, 1, 3, 5, 6, 8, 7};  //printing the missing number in the sequence
// int n = sizeof(str) / sizeof(str[0]);
// int x = 0;
// for (int i = 0; i < n; i++)
// {
//     x = x ^ str[i];
// }
// for (int i = 1; i <= n + 1; i++)
// {
//     x = x ^ i;
// }
// cout << x;
// int str[] = {2, 2, 4, 5, 4, 6, 3, 3, 7, 7}; //finding 2 missng number in a sequence
// int n = sizeof(str) / sizeof(str[0]);
// int x = 0, res1 = 0, res2 = 0;
// for (int i = 0; i < n; i++)
// {
//     x ^= str[i];
// }
// int bit = (x & ~(x - 1));
// for (int i = 0; i < n; i++)
// {
//     if ((str[i] & bit) & 1)
//         res1 ^= str[i];
//     else
//         res2 ^= str[i];
// }
// cout << res1 << " " << res2;

// print all substring
//  void printSubsequence(string str, string answer)//str str and answer empty string
//  {
//      if (str.empty()) {
//          cout << answer << endl;
//          return;
//      }
//      printSubsequence(str.substr(1), answer);
//      printSubsequence(str.substr(1), answer + str[0]);
//  }

// power of 2 or not
// int n = 1024;
// (n &&(!(n&(n-1))))?cout<<"yes":cout<<"no";

// void permutation(string str, int i = 0)
// {
//     if (i == str.length() - 1)
//     {
//         cout << str << endl;
//         return;
//     }
//     for (int j = i; j < str.length(); j++)
//     {
//         swap(str[i], str[j]);
//         permutation(str, i + 1);
//         swap(str[i], str[j]);
//     }
// }
// string str = "abcde";
// transform(str.begin(), str.end(), str.begin(), ::toupper);
// permutation(str);

// vector in c++
//  vector<int> arr{10, 20, 30, 40};
//  vector<int> arr2{1, 2, 3, 4};
//  arr.insert(arr.begin() + 1, 15);
//  arr.insert(arr.begin(), arr2.begin(), arr2.end());
//  arr.push_back(50);
//  arr.erase(arr.begin() + 3); // delte the 4th position in the array
//  sort(arr.begin(), arr.end(), greater<int>());
//  for (auto x : arr)
//  {
//      cout << x << " ";
//  }
//  int maxele = *max_element(arr.begin(), arr.end());
//  cout << endl
//       << maxele;

// rotate array left d times
// while (d--)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         swap(arr[i], arr[arr.size() - 1]);
//         // cout<<arr[i]<<" ";
//     }
// }

// longest odd - even pair subarray
// vector<int> arr{10, 12, 8, 4};
// int ans = 0, odd = 0, even = 0;
// odd = (arr[0] % 2 != 0);
// even = (arr[0] % 2 == 0);
// int count = 0;
// for (int i = 1; i < arr.size(); i++)
// {
//     if ((arr[i] % 2 == 0) && odd)
//     {
//         count++;
//     }
//     else if ((arr[i] % 2 != 0) && even)
//     {
//         count++;
//     }
//     else
//     {
//         ans = max(ans, count);
//         count = 0;
//     }
//     even = (arr[i] % 2 == 0);
//     odd = (arr[i] % 2 != 0);
// }
// ans = max(ans, count);
// cout << ans + 1;

// to find the majority element in an array ;
// vector<int> arr{8, 8, 6, 6, 6, 4, 6, 5, 1};
// int counter[1000] = {0};
// int maximum = INT16_MIN;
// for (int i = 0; i < arr.size(); i++)
// {
//     counter[arr[i]]++;
// }
// int candidate = -1;
// for (int i = 0; i < 1000; i++)
// {
//     if (counter[i] > 1)
//     {
//         if (counter[i] > maximum)
//         {
//             maximum = counter[i];
//             candidate = i;
//         }
//     }
// }
// int count = 0;
// for (int i = 0; i < arr.size(); i++)
// {
//     if (candidate == arr[i])
//     {
//         count++;
//     }
// }
// (count > (arr.size() / 2)) ? cout << candidate : cout << "-1";
// for (int i = 1; i <= 6; i++)
// {
//     if (i % 2 == 0)
//     {
//         cout << i + 1 << " ";
//     }
// for (int j = 1; j <= 6; j++)
// {
//     cout << i << " ";
// }
//     if (i % 2 != 0)
//     {
//         cout << i + 1;
//     }
//     cout << endl;
// }

// longest subarray with the given sum
//     unordered_map<int,int> map;
//     int arr[]={8,-4,-4,1,3,-2,1};
//     int sum =1,prefSum=0,res=0;

//     for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
//     {
//         prefSum+=arr[i];
//         cout<<prefSum<<" ";
//         if(prefSum==sum)
//         {
//             res =i+1;
//         }
//         if(map.find(prefSum)==map.end())
//         {
//             map.insert({prefSum,i});
//         }
//         if(map.find(prefSum-sum)!=map.end())
//         {
//             res = max(res , i-map[prefSum-sum]);
//         }
//     }
//     cout<<"\n"<<res;
// }

// count no of distinct elements in k window
// {
//     int arr[] = {10, 20, 30, 40, 50, 50};
//     int n = 6, k = 4, i = 0;
//     while (i + k <= n)
//     {
//         // cout<<i<<" = i \n";
//         unordered_set<int> set;
//         for (int j = i; j < i + k; j++)
//         {
//             // cout<<arr[j]<<" ";
//             set.insert(arr[j]);
//         }
//         // cout <<endl<< set.size() << " ";
//         cout << set.size() << " ";
//         set.clear();
//         i++;
//     }
//     return 0;
// }
// printing a to z using pointers
//     char a = 'a';
//     char *ch = &a;
//     while (*ch <= 'z')
//     {
//         cout << *ch << " ";
//         *ch = *ch + 1;
//     }

int findsum(int sum, int n, int dig)
{
    if (dig < 0)
    {
        return sum;
    }
    findsum(((n % 10) + sum), n / 10, dig - 1);
}
int main()
{
    int n = 99999;
    int dig = log10(n) + 1;
    int sum = 0;
    while(dig!=1)
    {
        sum = findsum(sum, n, dig);
        n = sum;
        sum = 0;
        dig = log10(n) + 1;
    }

    cout << n;
    return 0;
}
