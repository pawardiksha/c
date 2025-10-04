#include <iostream>
using namespace std;

class arrsum{
public:
void arraysum(int arr[5]){
int sum = 0;
for(int i = 0;i < 5;i++){
sum += arr[i];
}
}
};

int main(){
int arr[5] = {10,20,30,40,50};
arrsum S;
cout << "Sum of array elements is " << S.arraysum(arr) << endl;
return 0;
}
