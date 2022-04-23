#include<iostream>
#include<array>
using namespace std;
template<size_t SIZE>
void display(array<int,SIZE> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
}
int main()
{
    array<int,6> arr{};
    cout<<"Size: "<<arr.size()<<endl;
    cout<<"max size: "<<arr.max_size()<<endl;
    display(arr);
    for(int i=0;i<arr.size();i++)
        arr[i]=(i+1)*2;
    display(arr);
    cout<<arr.at(3)<<endl;
    cout<<arr[3]<<endl;

    cout<<"First element:"<<arr.front()<<endl;
    cout<<"Last element:"<<arr.back()<<endl;

    array<int ,6> arr1{1,2,3};
    arr1.swap(arr);
    cout<<"arr: ";
    display(arr);
    cout<<"arr1: ";
    display(arr1);

    if(arr.empty())
       cout<<"arr is empty"<<endl;
    else
        cout<<"arr is not empty"<<endl;

    array<int ,5> arr2;
    arr2.fill(100);
    display(arr2);
    arr1.fill(200);
    display(arr1);
    return 0;
}
