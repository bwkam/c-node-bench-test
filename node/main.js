function sort(arr) {
  const size = arr.length;
  for (let i = 0; i < size - 1; i++) {
    for (let j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        let temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

const arr = [5, 2, 8, 12, 1, 6];
sort(arr);
console.log("Sorted array:", arr);
