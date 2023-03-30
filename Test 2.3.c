#include<stdio.h>
void main (){
    int i,n,a[100],count=0;
    printf("Enter size of the array :");
    scanf("%d",&n);
    printf("enter elements of the array : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
       if(a[i]==2){
          continue;
       }       
        else if(a[i]%2==0){
         count++;
        }
    }
        if(count>2){    
        }
       printf("total number of composite number are: %d",count);
 }
