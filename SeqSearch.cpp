#include <iostream>
using namespace std;
int search(int arr[], int x){
    int pos = 0;    
    while (arr[pos] != x){
        pos++;
    }

    if (arr[pos] == x ){
        return pos;
    }
    else{
        return -1;
    }

}


int main(){
    int array[] = {3,1,9,6,4,0,2};
    cout << search(array, 0);
    return 0;
}
 