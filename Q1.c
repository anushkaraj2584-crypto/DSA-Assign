#include<stdio.h>
int main(){
    int i;
    int sum=0;
    
     int arr[4]={1,2,3,5};
for(i=0;i<4;i++){
    sum =sum+arr[i];
}
printf("Sum : %d\n",sum);
int total= (4+1)*(4+2)/2;
printf("Number missed: %d\n",total-sum);

return 0;
}