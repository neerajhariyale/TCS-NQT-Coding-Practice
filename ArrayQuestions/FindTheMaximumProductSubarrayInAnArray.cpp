
#include <iostream>
#include <climits>
using namespace std;

int maxProductSubarray(int arr[], int n) {
    if (n == 0){
        return 0;
    }

    int maxProduct = arr[0];
    int minProduct = arr[0];
    int result = arr[0];

    for (int i = 1; i < n; i++) {
        int curr = arr[i];

        if (curr < 0){
            swap(maxProduct, minProduct);
        }

        maxProduct = max(curr, maxProduct * curr);
        minProduct = min(curr, minProduct * curr);

        result = max(result, maxProduct);
    }

    return result;
}

int main() {
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxProd = maxProductSubarray(arr, n);

    cout << maxProd << endl;

    return 0;
}
