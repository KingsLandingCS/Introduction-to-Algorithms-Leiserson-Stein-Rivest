function efficientMergeSort(arr, start = 0, end = arr.length - 1) {

    if (start >= end) return;

    const mid = Math.floor((start + end) / 2);

    efficientMergeSort(arr, start, mid);
    efficientMergeSort(arr, mid + 1, end);

    let i = start, j = mid + 1;

    while (i <= mid && j <= end) {

        if (arr[i] <= arr[j]) {

            i++;
        } else {

            const temp = arr[j];

            for (let k = j; k > i; k--) {

                arr[k] = arr[k - 1];
            }

            arr[i] = temp;
            i++; mid++; j++;
        }
    }
}

const dataset = [5, 3, 8, 2, 7, 1, 4, 6];

efficientMergeSort(dataset);
console.log("Sorted dataset:", dataset);