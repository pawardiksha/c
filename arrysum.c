#include <stdio.h>
#include <stdlib.h>
int i;
void print(int arr[5]){
for(i = 0;i < 5;i++){
printf("%d\t",arr[i]);
}
}

int main(){
int arr[5];
printf("Enter array elements: ");
for(i = 0;i < 5;i++){
scanf("%d",&arr[i]);
}
printf("Original array: ");
print(arr);
int n = sizeof(arr) / sizeof(arr[0]);
int sum = 0;
for(i = 0;i < n;i++){
sum += arr[i];
}
printf("\nSum of array elements: %d\n",sum);
return 0;
}
