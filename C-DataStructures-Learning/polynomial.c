#include<stdio.h>
#include<stdlib.h>
struct term
{
    int exp;
    int coeff;
};
struct polynomial
{
    int n;
    struct term *t;
};
void create(struct polynomial *p,int n)
{
    printf("Enter no. of terms in the polynomial %d:",n);
    scanf("%d",&p->n);
    p->t=(struct term*)malloc(p->n*sizeof(struct term));
    for(int i=0;i<p->n;i++)
    {
        printf("Enter coeff. and exponent for term %d:",i+1);
        scanf("%d %d",&p->t[i].coeff,&p->t[i].exp);
    }
}
void display(struct polynomial p,int n)
{
    printf("P%d(x)=",n);
    for(int i=0;i<p.n;i++)
    {
        printf("%dx^%d+",p.t[i].coeff,p.t[i].exp);
    }
    printf("\n");
}
struct polynomial *add(struct polynomial *p1,struct polynomial *p2)
{
 int i,j,k;
 struct polynomial *sum;

 sum=(struct polynomial*)malloc(sizeof(struct polynomial));
 sum->t=(struct term *)malloc((p1->n+p2->n)*sizeof(struct term));
 i=j=k=0;

 while(i<p1->n && j<p2->n)
 {
 if(p1->t[i].exp>p2->t[j].exp)
 sum->t[k++]=p1->t[i++];
 else if(p1->t[i].exp < p2->t[j].exp)
 sum->t[k++]=p2->t[j++];
 else
 {
 sum->t[k].exp=p1->t[i].exp;
 sum->t[k++].coeff=p1->t[i++].coeff+p2->t[j++].coeff;
 }
 }
 for(;i<p1->n;i++)sum->t[k++]=p1->t[i];
 for(;j<p2->n;j++)sum->t[k++]=p2->t[j];

 sum->n=k;
 return sum;


}
void main()
{
    struct polynomial p1;
    create(&p1,1);
    display(p1,1);
    struct polynomial p2;
    create(&p2,2);
    display(p2,2);
    struct polynomial *sum=add(&p1,&p2);
    display(*sum,3);
}
