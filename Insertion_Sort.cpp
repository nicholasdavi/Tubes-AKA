int insertion_sort(int arr[], int len) {
    int temp;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j <= i; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

