#include<iostream>
using namespace std;
template <typename T>
class A
{
    T val;
public:
    static int count;
    A()
    {
        count++;
    }
};
template <class T>
int A<T>::count=0;
int main()
{
    A<int> a;//value of count for A<int> is 1 now
    A<int> b;//value of count for A<int> is 2 now
    A<float> c;//value of count for A<float> is 1 now
    cout<<A<int>::count<<endl;
    cout<<A<float>::count<<endl;
    return 0;
}
