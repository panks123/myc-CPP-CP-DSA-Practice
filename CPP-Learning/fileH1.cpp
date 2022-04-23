#include<iostream>
 #include<fstream>
 using namespace std;
 int main()
 {
     ofstream ofs;
     ofs.open("ex.txt",ios::app);
     ofs<<"John"<<endl;
     ofs<<25<<endl;
     ofs<<"CS"<<endl;
     ofs.close();
     return 0;
 }
