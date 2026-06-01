    #include<iostream>
    using namespace std;
    int partition(int arr[], int low, int high) {
        int st = low, end = high;
        int pivot = arr[low];
        while(st < end) {
            while(arr[st] <= pivot && st < high) {
                st++;
            }
            while(arr[end] > pivot && end > low) {
                end--;
            }
            if(st < end) {
                swap(arr[st], arr[end]);
            }
        }
        swap(arr[low], arr[end]);
        return end;
    }
    void quickSort(int arr[], int low, int high) {
        int pos;
        if(low < high) {
            pos = partition(arr, low, high);
            quickSort(arr, low, pos - 1);
            quickSort(arr, pos + 1, high);
        }
    }
    void display(int arr[], int n) {
        for(int i=0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
    }
    int main() {
        int arr[] = {4, 1, 3, 5, 2, 3};
        int n = sizeof(arr) / sizeof(int);
        quickSort(arr, 0, n-1);
        display(arr, n);
        return 0;
    }