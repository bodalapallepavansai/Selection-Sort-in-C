/*Selection Sort in C */

#include<stdio.h>
int n;  /*Global N = Size of List */
int prints( int arr[]);
int Selection_sort(int seq[]);
int prints(int arr[])
{
int k;
printf("Sorted List:\t ");
    for(k=0;k<n;k++)
    {
        if(k==(n-1))
        {
            printf("%d",arr[k]);
        }
        else
        {
            printf("%d,",arr[k]);
        }
    }
}

int Selection_sort(int seq[])   /* Selection Sort Algorithmic Procedure */
{
    int i,j,temp,min;
    for(i=0;i<n;i++)
    {
     min=i;
        for(j=i+1;j<n;j++)
        {
            if(seq[i]>seq[j])
            {
                min=j;
            }
        }
        temp=seq[min];
        seq[min]=seq[i];
        seq[i]=temp;
        

    }
    return prints(seq);
}
int main()
{
 int i,a[100];
printf("pl enter size of list\n");/* Enter the size of the list */
scanf("%d",&n);
print("List :")/* Enter the List */
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
Selection_sort(a); 
}


