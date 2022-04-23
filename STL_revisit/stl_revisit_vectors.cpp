#include<bits/stdc++.h>
using namespace std;
void display(vector<int> v)
{
    cout<<"Elements of vector are:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v{3,2,7,4,6};
    cout<<"Size of vector: "<<v.size();

    vector<int>::iterator it;
    cout<<"Printing vector elements using iterator: "<<endl;
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<"Printing vector elements using loop: "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

    cout<<"Element at index 1"<<v.at(1)<<endl;

    sort(v.begin(),v.end());
    cout<<"After sorting the vector: "<<endl;
    display(v);
    cout<<"First element of the vector: "<<v.front()<<endl;
    cout<<"Last element of the vector: "<<v.back()<<endl;

    v.push_back(100);
    display(v);
    v.push_back(200);
    display(v);

    v.pop_back();
    display(v);
    v.pop_back();
    display(v);

    cout<<"Maximum element in the vector: "<<*max_element(v.begin(),v.end())<<endl;
    cout<<"Minimum element in the vector: "<<*min_element(v.begin(),v.end())<<endl;

    reverse(v.begin(),v.end());
    display(v);

    vector<int> v1;
    if(v1.empty())
        cout<<"Vector is empty"<<endl;
    else
        cout<<"Vector is not empty"<<endl;

    v1=v;
    if(v1.empty())
        cout<<"Vector is empty"<<endl;
    else
        cout<<"Vector is not empty"<<endl;

    v1.clear();

    if(v1.empty())
        cout<<"Vector is empty"<<endl;
    else
        cout<<"Vector is not empty"<<endl;
    display(v);
    v.insert(v.begin(),55);
    display(v);

    v.insert(v.begin()+2,100);
    display(v);

    v.erase(v.begin());
    display(v);

    v.erase(v.begin()+3);
    display(v);

    v1.insert(v1.begin(),23);
    display(v1);

    cout<<"Before swapping:"<<endl;
    cout<<"v"<<endl;
    display(v);
    cout<<"v1"<<endl;
    display(v1);
    v1.swap(v1);

    cout<<"After swapping:"<<endl;
    cout<<"v"<<endl;
    display(v);
    cout<<"v1"<<endl;
    display(v1);

}
