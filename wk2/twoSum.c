#include <stdbool.h>
#include <stdio.h>

// return whether there are two numbers in the array that sum to 'sum'
// n = size of the array
// 1,2,3,4,5; target = 10 => false
// 1,2,3,4,5; target = 9 => true
bool hasTwoSum(int *arr, int n, int sum) {
    // O(n^2)
    // for each element in the array
    for (int i = 0; i < n; i++) {  // O(n)
        //      compute its 'partner' (targetsum - element)
        int partner = sum - arr[i];
        //      search for the 'partner' in the array -> if found, then true
        for (int j = 0; j < i; j++) {  // O(n)
            if (arr[j] == partner) return true;
        }
    }
    // return false
    return false;
}
