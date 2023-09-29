// Question Link:- https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long int merge(long long int arr[], int low, int mid, int high) {
        long long int temp[high - low + 1]; // temporary array
        int left = low; // starting index of left half of arr
        int right = mid + 1; // starting index of right half of arr

        long long int cnt = 0;

        int index = 0; // Index for the temporary array

        // Storing elements in the temporary array in a sorted manner
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp[index++] = arr[left++];
            } else {
                temp[index++] = arr[right++];
                cnt += mid - left + 1;
            }
        }

        // If elements on the left half are still left
        while (left <= mid) {
            temp[index++] = arr[left++];
        }

        // If elements on the right half are still left
        while (right <= high) {
            temp[index++] = arr[right++];
        }

        // Transfer all elements from the temporary array to arr
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }

        return cnt;
    }

    long long int mergeSort(long long int arr[], int low, int high) {
        long long int cnt = 0;
        if (low < high) {
            int mid = low + (high - low) / 2;
            cnt += mergeSort(arr, low, mid); // Left half
            cnt += mergeSort(arr, mid + 1, high); // Right half
            cnt += merge(arr, low, mid, high); // Merging sorted halves
        }
        return cnt;
    }

    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergeSort(arr, 0, N-1);
    }
};


// Refer this article: https://takeuforward.org/data-structure/count-inversions-in-an-array/
