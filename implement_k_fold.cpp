#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>x={0,1,2,3,4,5,6,7,8,9};
    vector<int>y={0,1,2,3,4,5,6,7,8,9};
    vector<pair<vector<int>,vector<int>>>ret;
    int k=5;
    int lim=x.size()/k;

    vector<int>ans(k);
    int fold;
    int idx;
    for (int i=0;i<k;i++)
    {
        fold=i+1;
        idx=fold*lim - lim;

        // if(i<idx && i>idx+lim-1)
        // {
            vector<int>v1;
            vector<int>v2;
            
            for(int p=0;p<x.size();p++)
            {
                if(p>=idx && p<=idx+lim-1)
                {
                    for(int j=idx;j<=idx-lim+1;j++)
                    {
                        v2.push_back(x[j]);
                    }
                }
                else{
                    v1.push_back(x[p]);
                }

            }
            for(auto kk:v1) cout<<kk<<" ";
            cout<<'\n';
            for (auto ll:v2) cout<<ll<<" ";
        }




    // }





}