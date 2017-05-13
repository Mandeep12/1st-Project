#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int s,val=0;
    int n;
    int m;
    int value;
    vector<int>money;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0;keyboards_i < n;keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> pendrives(m);
    for(int pendrives_i = 0;pendrives_i < m;pendrives_i++){
       cin >> pendrives[pendrives_i];
    }
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
    value = keyboards[i]+pendrives[j];
    money.push_back(value);
    }
    }
    sort(money.begin(),money.end());
    reverse(money.begin(),money.end());
    for(int i=0;i<m*n;i++)
    {
    if(money[i]<=s)
    {
    val=money[i];
    cout << money[i];
    break ;
    }
    }
    if(val==0)
    {
    cout << "-1";
    }

    return 0;
    }
