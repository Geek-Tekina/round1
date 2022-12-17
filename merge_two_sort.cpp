/* Live to DIE || DIE to Live  */
 /* for (auto &i : a) cin >> i; */
#include <bits/stdc++.h>
using namespace std;
// Typedef ->>
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
// Define ->>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; ++i)


   int main(){
 int arr[]={9,5,1,2,8};
 int vrr[]={3,7,4,6};
 vector<int>v;
 for(auto it : arr){
    v.push_back(it);
 }
 for(auto it : vrr){
    v.push_back(it);
 }
 cout<<"MERGED ARRAY ";
 for(auto it : v)cout<<it<<" ";
  sort(v.begin(),v.end());
  cout<<endl<<"Sorted array ";
 for(auto it : v){
    cout<<it<<" ";
 }
return 0;
   }