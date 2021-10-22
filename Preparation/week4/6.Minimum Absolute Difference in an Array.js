function minimumAbsoluteDifference(arr) {
  // Write your code here
  // 最小的差值一定是在两个连续数之间
  arr.sort((a, b) => a - b);
  let smallest = Math.abs(arr[1] - arr[0]);
  for (let i = 2; i < arr.length; i++) {
    const diff = Math.abs(arr[i] - arr[i - 1]);
    smallest = Math.min(smallest, diff)
  }
  return smallest;
}
