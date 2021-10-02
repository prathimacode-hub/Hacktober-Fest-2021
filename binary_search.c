#include<stdio.h>
void main()
{
 int a[10], item, mid, beg=0, end=9,i;
 printf("\nEnter 10 nos in sorted order ");
 for(i=0;i<10;i++)
 scanf("%d",&a[i]);
 printf("\nEnter the number to search ");
 scanf("%d",&item);
 while(beg<=end)
 {
 mid=(beg+end)/2;
 if(a[mid]==item)
 {
 printf("\n %d is found at %d position",item,mid);
 break;
 }
 else
 if(item>a[mid])
 beg = mid+1;
 else
 end= mid-1;
 }
 if(beg>end)
 printf("\n%d is not found ", item);
} // end of main
