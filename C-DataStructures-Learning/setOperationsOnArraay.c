#include<stdio.h>
void setFinalSetZero(int finalSet[],int n)
{
    for(int i=0;i<n;i++)
    {
        finalSet[i]=0;
    }
}
void Union(int set1[],int n1,int set2[],int n2,int finalSet[],int n)
{
    int flag,length;//if flag==0 to track the element in set1 is not present in set2 and flag==1 means set1 element is also present in set2
                    //and length variable is used to keep track of the no. of elements in the final set of corresponding set operation
    for(int i=0;i<n1;i++)
        finalSet[i]=set1[i];
    for(int i=0;i<n2;i++)
    {
        flag=0;
        for(int j=0;j<n1;j++)
        {
            if(set2[i]==finalSet[j])
                flag=1;
        }
        if(flag==0)
        {
            finalSet[n1++]=set2[i];
            length=n1;
        }
    }
    printf("\nset1 U Set2={");
    for(int i=0;i<length;i++)
        printf("%d  ",finalSet[i]);
    printf("}\n\n");
}
void Intersection(int set1[],int n1,int set2[],int n2,int finalSet[],int n)
{
    int flag,length,k=0;
    for(int i=0;i<n1;i++)
    {
        flag=0;
        for(int j=0;j<n2;j++)
        {
            if(set1[i]==set2[j])
                flag=1;
        }
        if(flag==1)
        {
            finalSet[k]=set1[i];
            k++;
            length=k;
        }
    }
    printf("set1 I Set2={");
    for(int i=0;i<length;i++)
        printf("%d  ",finalSet[i]);
    printf("}\n\n");
}
void setDiff(int set1[],int n1,int set2[],int n2,int finalSet[],int n)
{
    int flag,length,k=0;
    for(int i=0;i<n1;i++)
    {
        flag=0;
        for(int j=0;j<n2;j++)
        {
            if(set1[i]==set2[j])
                flag=1;
        }
        if(flag==0)
        {
            finalSet[k]=set1[i];
            k++;
            length=k;
        }
    }
    printf("set1 - Set2={");
    for(int i=0;i<length;i++)
        printf("%d  ",finalSet[i]);
    printf("}\n\n");
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
    printf("set1={");
    for(int i=0;i<n1;i++)
        printf("%d  ",set1[i]);
    printf("}\n");
    printf("set2={");
    for(int i=0;i<n2;i++)
        printf("%d  ",set2[i]);
    printf("}\n");
    setFinalSetZero(finalSet,n1+n2);
    Union(set1,n1,set2,n2,finalSet,n1+n2);
    Intersection(set1,n1,set2,n2,finalSet,n1+n2);
    setDiff(set1,n1,set2,n2,finalSet,n1+n2);
}
