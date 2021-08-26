function findMedian(arr) {
  // Write your code here
  arr.sort((a, b) => a - b);
  const mid = (arr.length - 1) / 2;
  return arr[mid];
}
