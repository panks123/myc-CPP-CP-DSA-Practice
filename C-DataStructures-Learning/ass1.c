#include<stdio.h>
#include<limits.h>

void sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0&& arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }


}
int main()
{
    int n1,n2,n3,n4,n5;
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

    int z1[n1+1],z2[n2+1],z3[n3+1],z4[n4+1],z5[n5+1];
    for(int i=0;i<n1;i++)
        scanf("%d",&z1[i]);
    for(int i=0;i<n2;i++)
        scanf("%d",&z2[i]);
    for(int i=0;i<n3;i++)
        scanf("%d",&z3[i]);
    for(int i=0;i<n4;i++)
        scanf("%d",&z4[i]);
    for(int i=0;i<n5;i++)
        scanf("%d",&z5[i]);

    sort(z1,n1);
    sort(z2,n2);
    sort(z3,n3);
    sort(z4,n4);
    sort(z5,n5);

    z1[n1]= INT_MAX-4;
    z2[n2]= INT_MAX-3;
    z3[n3]= INT_MAX-2;
    z4[n4]= INT_MAX-1;
    z5[n5]= INT_MAX-0;


    for(int i=0;i<n1;i++)
        printf("%d  ",z1[i]);
    printf("\n");
    for(int i=0;i<n2;i++)
        printf("%d  ",z2[i]);

    printf("\n");
    for(int i=0;i<n3;i++)
        printf("%d  ",z3[i]);

    printf("\n");
    for(int i=0;i<n4;i++)
        printf("%d  ",z4[i]);

    printf("\n");
    for(int i=0;i<n5;i++)
        printf("%d  ",z5[i]);

    int s = n1+n2 +n3+n4+n5;
    int k =0 ;
    int A[s];
    int i=0,j=0,l=0,m=0,n=0;
    while(k< s)
    {
        if(z1[i] < z2[j])
        {
            if(z1[i] < z3[l])
            {
                if(z1[i] < z4[m])
                {
                    if(z1[i] <z5[n])
                       A[k++] = z1[i++];
                    else
                       A[k++] = z4[m++];
                }
                else{
                    if(z4[m] < z5[n])
                        A[k++] = z4[m++];
                    else
                        A[k++] = z5[n++];
                }
            }
            else
            {
              if(z3[l] < z4[m])
              {
                  if(z3[l] < z5[n])
                      A[k++] = z3[l++];
                  else
                    A[k++]  = z5[n++];

              }
              else{
                if (z4[m] < z5[n])
                    A[k++] = z4[m++];
                else
                    A[k++] = z5[n++];
              }
            }
        }
        else
        {
            if(z2[j] < z3[l])
            {
                if(z2[j] < z4[m])
                {
                    if(z2[j] < z5[n])
                        A[k++] = z2[j++];
                    else
                        A[k++] = z5[n++];
                }
                else
                {
                    if(z4[m] < z5[n])
                        A[k++] = z4[m++];
                    else
                        A[k++] = z5[n++];
                }
            }
            else{

                if(z3[l] < z4[m])
                {
                    if(z3[l] < z5[n])
                        A[k++] = z3[l++];
                    else
                        A[k++] = z5[n++];
                }
                else
                {
                    if(z4[m] < z5[n])
                        A[k++] = z4[m++];
                    else
                        A[k++] = z5[n++];
                }
            }

        }
    }

    printf("\n");
    for(i=0 ;i< k ;i++)
            printf("%d ",A[i]);

    int count=0;
    int arr[k];
    i=0;
    int count1=0;
    j=0;
    int key=A[0];
    while(i<k)
    {
        if(A[i]==key)
        {

            count = count+1;
            if(count<3 && count>=1)
            {
                i++;
            }
            else if(count==3)
            {
                count1++;
                arr[j++]=key;
                i++;
            }
            else if(count>3)
            {
                i++;
            }
        }
        else
        {
            key=A[i];
            count=1;
            i++;
        }

    }
    printf("\n");
    for(i=0 ;i< j ;i++)
            printf("%d ",arr[i]);
    printf("\n");
    printf("%d",count1);

    return 0;
}
