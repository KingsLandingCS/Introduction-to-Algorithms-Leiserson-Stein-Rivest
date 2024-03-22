@param { number[] } A
@returns(number)

function sumArray(A) {

    let sum = 0;

    for (let i = 0; i < A.length; i++) {

        sum += A[i];
    }

    return sum;
}

const array = [3,5,7,2,8];

console.log("Array:", array);
console.log("Sum:", sumArray(array));