function insertionSort(arr) {

    for (let i = 1; i < arr.length; i++) {

        let key = arr[i];
        let j = i - 1;


        while (j >= 0 && arr[j] > key) {

            arr[j + 1] = arr[j];

            j--;
        }

        arr[j + 1] = key;
    }

    return arr;
}

let array = [31, 41, 59, 26, 41, 58];
console.log("Original Array:", array);
console.log("Sorted Array:", insertionSort(array));