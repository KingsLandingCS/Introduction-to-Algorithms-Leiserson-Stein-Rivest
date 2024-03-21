function findInsertionSortBeatsMergeSort() {
    let n = 1;
    const results = [];

    while (true) {
        const insertionSortSteps = 8 * n * n;
        const mergeSortSteps = 64 * n * Math.log2(n);

        if (insertionSortSteps < mergeSortSteps) {
            results.push(n);
            n++;
        } else {
            break;
        }
    }

    return results;
}

// Example usage:
const valuesOfN = findInsertionSortBeatsMergeSort();
console.log("Values of n where insertion sort beats merge sort:", valuesOfN);
