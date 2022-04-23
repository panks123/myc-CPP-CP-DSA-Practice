#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    char s1[100]="Hello";
    char s2[100]="World";
    cout<<"length(s1):"<<strlen(s1)<<endl;
    cout<<"s1 Concatenated with s2:"<<strcat(s1,s2)<<endl;
    cout<<"\ns1 Concatenated with s2:"<<strncat(s1,s2,2)<<endl;

    cout<<strcpy(s2,s1)<<endl;
    char s3[100]="";
    strncpy(s3,s2,4);
    cout<<s3<<endl;
    char s4[100]="Programming";
    if(strstr(s4,"gram")!=NULL)
        cout<<strstr(s4,"gram")<<endl;
    else
        cout<<"Not Found"<<endl;
    if(strstr(s4,"pro")!=NULL)
        cout<<strstr(s4,"pro")<<endl;
    else
        cout<<"Not Found"<<endl;

    if(strchr(s4,'m')!=NULL)
        cout<<strchr(s4,'m')<<endl;
    else
        cout<<"Not Found"<<endl;
    if(strchr(s4,'c')!=NULL)
        cout<<strchr(s4,'c')<<endl;
    else
        cout<<"Not Found"<<endl;

    if(strrchr(s4,'m')!=NULL)
        cout<<strrchr(s4,'m')<<endl;
    else
        cout<<"Not Found"<<endl;

    char s5[10]="Hello";
    char s6[10]="Hello";
    char s7[10]="hellO";
    cout<<strcmp(s7,s6)<<endl;
    cout<<strcmp(s5,s6)<<endl;
    cout<<strcmp(s6,s7)<<endl;
/*
    char s8[10]="237";
    char s9[10]="57.4";
    long int x=strtol(s8,NULL,10);//here 10-for decimal no. system
    float y=strtof(s9,NULL);
    cout<<x<<endl<<y<<endl;
    cout<<x+5<<endl<<y-5<<endl;*///will work with latest c++ compilers
    return 0;
}
