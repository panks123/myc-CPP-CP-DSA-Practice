
//https://www.programminggeek.in/2018/08/codevita-2018-round-1-question-bride-hunting.html#.XxBskCgzZPY
#include<bits/stdc++.h>

using namespace std;



struct hash_pair {
   template <class T1, class T2>
   size_t operator()(const pair<T1, T2>& p) const{
      auto hash1 = hash<T1>{}(p.first);
      auto hash2 = hash<T2>{}(p.second);
      return hash1 ^ hash2;
   }
};
void display(unordered_map<pair<int,int>,int, hash_pair> m)
{
    cout<<"Brides:"<<endl;
    unordered_map<pair<int,int>,int, hash_pair> ::iterator p;
    for(p=m.begin();p!=m.end();p++)
    {
        cout<<"("<<(p.first).first<<","<<(p.first).second<<") : "<<p.second<<endl;
    }
    cout<<endl;
}
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m+2][n+2];
    for(int i=0,j=0;j<n+2;j++)
    {
        arr[i][j]=0;
    }
    for(int i=0,j=0;i<n+2;i++)
    {
        arr[i][j]=0;
    }
    for(int i=n+1,j=0;j<n+2;j++)
    {
        arr[i][j]=0;
    }
    for(int i=0,j=n+1;i<n+2;i++)
    {
        arr[i][j]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<n+2;i++)
    {
        for(int j=0;j<n+2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    unordered_map<pair<int,int>,int, hash_pair> mq,md;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(arr[i][j]==1&&i!=1&j!=1)
            {
                int quality=0;
                int distance=((i-1)*(i-1)+(j-1)*(j-1));
                if(arr[i][j+1]==1)
                    quality++;
                if(arr[i][j-1]==1)
                    quality++;
                if(arr[i-1][j]==1)
                    quality++;
                if(arr[i+1][j]==1)
                    quality++;
                mq[{i,j}]=quality;
                md[{i,j}]=distance;
            }
        }
        cout<<endl;
    }
    //display(mq);
    //display(md);
}
