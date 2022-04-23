#include<stdio.h>
#include<stdlib.h>

struct heap
{
    int *A;
    int size;
    int n;
};
void insert(struct heap * h, int x)
{
   if(h->size < h->n)
   {
       h->size++;
       h->A[h->size] = x;
       int i = h->size;
       while(i>1 && h->A[i/2] < x)
       {
           h->A[i] = h->A[i/2];
           i = i/2;

       }
       h->A[i] = x;
   }
   else
    printf("heap if full");
}
void heapify(struct heap *h, int i)
{
    int max = i;
    if( 2*i <= h->n && h->A[2*i] > h->A[max])
        max = 2*i;
    if( 2*i+1 <= h->n && h->A[2*i +1] > h->A[max])
    max = 2*i +1;
    if(max != i)
    {
        int t = h->A[i];
        h->A[i]= h->A[max];
        h->A[max] = t;
        heapify(h,max);
    }

}
void Extractmax(struct heap *h)
{
    if (h->size > 0){
     int x = h->A[1];
     int last = h->A[h->size];
     h->size--;
     int i = 1;
     int j = 2*i;
     while (j <= h->size)
     {
         if ( j+1 <= h->size &&  h->A[j+1] > h->A[j] )
            j = j+1;
         if (h->A[j] > last)
         {
             h->A[i] = h->A[j];
             i = j;
             j = 2*i;
         }
         else
            break;
     }
     h->A[i] = last;
     h->A[h->size+1]= x; // for Sorting the list
     }

     else{
        printf("heap is empty\n");
     }
}

void Merge(struct heap *h,int R[], int z1[], int z2[], int z3[], int z4[],int z5[], int n1, int n2, int n3 , int n4, int n5)
{
    int i=0;
    while(i<n1)
     insert(h,z1[i++]);
    i=0;
    while(i<n2)
        insert(h,z2[i++]);
    i=0;
    while(i<n3)
        insert(h,z3[i++]);
    i=0 ;
    while(i<n4)
        insert(h,z4[i++]);
    i =0;
    while(i<n5)
        insert(h, z5[i++]);

    i= 1;
     while(i <= h->n)
     {
     Extractmax(h);
     i++;
     }

    i = 1;
    int k =0;
    while(i<= h->n)
    {
        if(i+1 <= h->n && h->A[i+1]== h->A[i])
        {
            int j = i+1;
            while(h->A[j] == h->A[i] )
                j++;

            if(j-i >=3)
              R[k++] = h->A[i];
            i = j;
        }
        else
            i++;
    }



    printf("%d", k);

}

int main()
{
    int n1,n2,n3,n4,n5;
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

    int z1[n1],z2[n2],z3[n3],z4[n4],z5[n5];
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

    int s = n1+n2+n3+n4+n5;
    struct heap h;
    h.size = 0;
    h.n = s;
    h.A = (int*)malloc(sizeof(int )*(h.n +1));
    int R[s];
    Merge(&h,R, z1,z2,z3,z4,z5,n1,n2,n3,n4,n5);


}
