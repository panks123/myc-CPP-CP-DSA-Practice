#include<stdio.h>
#include<limits.h>
void UnionUsingMerge(int set1[],int n1,int set2[],int n2,int finalset[])
{
    int Set1[n1+1];
    int Set2[n2+1];
    for(int i=0;i<n1;i++)
        Set1[i]=set1[i];
    for(int i=0;i<n2;i++)
        Set2[i]=set2[i];
    Set1[n1]=INT_MAX;
    Set2[n2]=INT_MAX;
    int i=0,j=0,k,length=0;
    while((i+j)<(n1+n2))
    {
        if(Set1[i]<Set2[j])
        {
            finalset[length]=Set1[i];
            i++;
            length++;
        }
        if(Set1[i]>Set2[j])
        {
            finalset[length]=Set2[j];
            j++;
            length++;
        }
        if(Set1[i]==Set2[j]&&(Set1[i]!=INT_MAX||Set2[j]!=INT_MAX))
        {
            finalset[length]=Set1[i];
            i++;
            j++;
            length++;
        }
    }
    printf("set1 U set2={");
    for(int x=0;x<length;x++)
    {
        printf("%d  ",finalset[x]);
    }
    printf("}\n");
}
void Sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void IntersectionUsingMerge(int set1[],int n1,int set2[],int n2,int finalset[])
{
    int Set1[n1+1];
    int Set2[n2+1];
    for(int i=0;i<n1;i++)
        Set1[i]=set1[i];
    for(int i=0;i<n2;i++)
        Set2[i]=set2[i];
    Set1[n1]=INT_MAX;
    Set2[n2]=INT_MAX;
    int i=0,j=0,k,length=0;
    while((i+j)<(n1+n2))
    {
        if(Set1[i]<Set2[j])
        {
            i++;
        }
        if(Set1[i]>Set2[j])
        {
            j++;
        }
        if(Set1[i]==Set2[j]&&(Set1[i]!=INT_MAX||Set2[j]!=INT_MAX))
        {
            finalset[length]=Set1[i];
            i++;
            j++;
            length++;
        }
    }
    printf("set1 I set2={");
    for(int x=0;x<length;x++)
    {
        printf("%d  ",finalset[x]);
    }
    printf("}\n");
}
void SetDiffUsingMerge(int set1[],int n1,int set2[],int n2,int finalset[])
{
    int Set1[n1+1];
    int Set2[n2+1];
    for(int i=0;i<n1;i++)
        Set1[i]=set1[i];
    for(int i=0;i<n2;i++)
        Set2[i]=set2[i];
    Set1[n1]=INT_MAX;
    Set2[n2]=INT_MAX;
    int i=0,j=0,k,length=0;
    while((i+j)<(n1+n2))
    {
        if(Set1[i]<Set2[j])
        {
            finalset[length]=Set1[i];
            i++;
            length++;
        }
        if(Set1[i]>Set2[j])
        {
            j++;
        }
        if(Set1[i]==Set2[j]&&(Set1[i]!=INT_MAX||Set2[j]!=INT_MAX))
        {
            i++;
            j++;
        }
    }
    printf("set1 - set2={");
    for(int x=0;x<length;x++)
    {
        printf("%d  ",finalset[x]);
    }
    printf("}\n");
}
void main()
{
    int n1,n2;
    printf("Enter size of set1:\n");
    scanf("%d",&n1);
    printf("Enter size of set2:\n");
    scanf("%d",&n2);
    int set1[n1];
    printf("Enter %d elements in set1:\n",n1);
    for(int i=0;i<n1;i++)
        scanf("%d",&set1[i]);
    int set2[n2];
    printf("Enter %d elements in set2:\n",n2);
    for(int i=0;i<n2;i++)
        scanf("%d",&set2[i]);
    int finalSet[n1+n2];
    Sort(set1,n1);
    Sort(set2,n2);
    printf("set1={");
    for(int i=0;i<n1;i++)
        printf("%d  ",set1[i]);
    printf("}\n");
    printf("set2={");
    for(int i=0;i<n2;i++)
        printf("%d  ",set2[i]);
    printf("}\n");
    UnionUsingMerge(set1,n1,set2,n2,finalSet);
    IntersectionUsingMerge(set1,n1,set2,n2,finalSet);
    SetDiffUsingMerge(set1,n1,set2,n2,finalSet);
}
