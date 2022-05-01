#include<stdio.h>
#define MAX 10
void insertionsort(int a[],int n);
void selectionsort(int a[],int n);
void bubblesort(int a[],int n);
void readDATA(int a[],int n);
void display(int a[], int n);
int main(){

    int a[MAX],n;
    int op; 
    printf("Enter number of element");
    scanf("%d", &n);

    printf("choose a option:-");
    scanf("%d", &op);
    readDATA(a , n);
    printf("before sorting");
    display(a , n);
    switch(op)
    {
        case 1: insertionsort(a,n);
                printf("\nAfter sorting");
                display( a , n);
                
        break;
        case 2: selectionsort(a,n);
         printf("\nAfter sorting");
                display( a , n);
        break;
        case 3: bubblesort(a,n);
         printf("\nAfter sorting");
                display( a , n);
        break;
        default: printf("invalid Option!");
    }

return 0;
}

void readDATA(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void display(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d",&a[i]);
    }
}

void insertionsort(int a[],int n)
{
    int temp;
    for(int i=1; i<n; i++)
    {
        temp = a[i];

        for(int j=i-1; j>=0; j--)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];
            }
            else{
                break;
            }
        a[j+1]=temp;
        }
        
    }
}

void selectionsort(int a[],int n)
{
    int min, minloc, temp;
    for(int i=1;i<n-1;i++)
    {
        min=a[i];
        minloc=i;

        for(int j=i; j<n; j++)
        {
            if(a[j]<=min)
            {
                min=a[i];
                minloc=j;
            }

        }
        temp=a[i];
        a[i]=a[minloc];
        a[minloc]=temp;
    }
}

void bubblesort(int a[], int n)
{
    int temp;
    for(int i=0; i<n-1;i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;   
            }
        }
    }
}