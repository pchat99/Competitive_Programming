#include <iostream>
#include <math.h>
using namespace std;

bool pairsum(int arr[] , int n , int k) {

    int low = 0;
    int high = n-1;

    while (low<high) {
        if (arr[low] + arr[high] == k) {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if (arr[low] + arr[high] > k) {
            high--;
        }
        else {
            low--;
        }
    }
    return false;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k  = 19;

    cout<<pairsum(arr,10,k)<<endl;

}