function bubbleSort(arr) {
    let n = arr.length;
    let x;

    for (let i = 0; i < n; i++) {
        for (let j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }

    console.log("The ascending order of the elements is:");
    for (let i = 0; i < n; i++) {
        console.log(arr[i]);
    }
}

function main() {
    let arr = [];
    let n;

    n = parseInt(prompt("Enter the number of elements:"));

    console.log("Enter elements:");
    for (let i = 0; i < n; i++) {
        arr.push(parseInt(prompt(`Enter element ${i + 1}:`)));
    }

    bubbleSort(arr);
}

main();
