// #include<iostream>
// #include<unordered_map>
// using namespace std;
// string a[200005];
// unordered_map<string,int> mp;
// int main(){
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int m,n;
//   while(cin>>m>>n){//m＝區間長 n=一排顏色
//     for(int i=0;i<n;i++){
//       cin>>a[i];
//     }
//     mp.clear();
//     int cnt=0;//
//     for(int i=0;i<m;i++){
//       if(!mp[a[i]])cnt++;//看幾個顏色重複
//       //mp[a[i]]==false;
//       mp[a[i]]++;//某個顏色出現幾次
//     }
//     int ans=(cnt==m);//重複次數是否等於區間長
//     for(int L=0,R=m;R<n;L++,R++){
//       mp[a[L]]--;
//       if(mp[a[L]]==0)cnt--;
//       if(mp[a[R]]==0)cnt++;
//       mp[a[R]]++;
//       ans+=(cnt==m);
//     }
//     cout<<ans<<"\n";
//   }
// }