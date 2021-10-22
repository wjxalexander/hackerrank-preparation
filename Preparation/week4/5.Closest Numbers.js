function closestNumbers(arr) {
  // Write your code here
  // 最小的差值一定是在两个连续数之间
  arr.sort((a, b) => a - b);
  let smallest = arr[1] - arr[0];
  let ret = [arr[0], arr[1]];
  for (let i = 2; i < arr.length; i++) {
    const diff = arr[i] - arr[i - 1];
    if (diff === smallest) {
      ret.push(arr[i - 1], arr[i]);
    }
    if (diff < smallest) {
      smallest = diff;
      ret = [arr[i - 1], arr[i]];
    }
  }
  return ret;
}
