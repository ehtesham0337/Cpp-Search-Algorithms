#include <iostream>
using namespace std;
int BinSearch(int arr[], int x, int upper_bound){
    int lower_bound = 0;
    int mid = (upper_bound + lower_bound) / 2;
    while(upper_bound >= lower_bound && arr[mid] != x){
        if(x > arr[mid]){
            lower_bound = mid + 1;
        }
        else{
            upper_bound = mid - 1;
        }
        mid = (upper_bound + lower_bound) / 2;
    } 
    if(arr[mid] == x){
        return mid;
    }   
    return 0;
}
int main(){
    int arr[] = {1,3,4,5,7,8,9,10}; 
    cout << BinSearch(arr, 3, 7);
    return 0;
}