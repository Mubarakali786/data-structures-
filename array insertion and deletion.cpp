#include<stdio.h>
int main()
{
int a[50],i,n,p,val,num=0;
printf("enter the choose you want: ");
scanf("%d",&num);
switch(num)
{
case 1:
printf("enter the no .of elemnts in the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the position to insert an element:");
scanf("%d",&p);
printf("enter the value to insert");
scanf("%d",&val);
for(i=i-1;i>=p-1;i--)
a[i+1]=a[i];
a[p-1]= val;
printf("the final array of elements are:");
for(i=0;i<=n;i++)
printf("%d\n",a[i]);
break;
case 2:
 int arr[50]; 
 int pos, i, num;
 printf (" \n Enter the number of elements in an array: \n "); 
 scanf (" %d", &num); 
 
 printf (" \n Enter %d elements in array: \n ", num); 
 for (i = 0; i < num; i++ ) 
 { 
 scanf (" %d", &arr[i]); 
 } 
 printf( " Define the position of the array element where you want to delete: \n "); 
 scanf (" %d", &pos); 
 if (pos >= num+1) 
 { 
 printf (" \n Deletion is not possible in the array."); 
 } 
 else 
 { 
 for (i = pos - 1; i < num -1; i++) 
 { 
 arr[i] = arr[i+1]; 
 } 
 printf (" \n The resultant array is: \n"); 
 for (i = 0; i< num - 1; i++) 
 { 
 printf (" %d \n", arr[i]); 
 } 
 } 
 break;
 case 3:
 #define MAX_SIZE 100 
{
 int arr[MAX_SIZE];
 int size, i, toSearch, found;
 printf("Enter size of array: ");
 scanf("%d", &size);
 printf("Enter elements in array: ");
 for(i=0; i<size; i++)
 {
 scanf("%d", &arr[i]);
 }
 printf("\nEnter element to search: ");
 scanf("%d", &toSearch);
 found = 0; 
 
 for(i=0; i<size; i++)
 {
 if(arr[i] == toSearch)
 {
 found = 1;
 break;
 }
 }
 if(found==1)
 {
 printf("\n%d is found at position %d",toSearch,i+1);
 }
 else
 {
 printf("\n%d is not found in the array",toSearch);
 }
 return 0;
}
break;
default:
printf("you entered invalid option");
break;
}
return 0;
} 
