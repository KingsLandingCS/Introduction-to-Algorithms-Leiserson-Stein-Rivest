function modifiedInsertionSort(arr) {

    let isSorted = true;
    for (let i = 1; i < arr.length; i++) {

        if (arr[i] < arr[i - 1]) {
            isSorted = false;
            break;
        }
    }


    if (isSorted) {

        return arr;
    }

    for (let i = 1; i < arr.length; i++) {

        let current = arr[i];
        let j = i - 1;
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    return arr;
}

let arr = [3, 7, 1, 9, 4];
console.log("Original array:", arr);
arr = modifiedInsertionSort(arr);
console.log("Sorted array:", arr);