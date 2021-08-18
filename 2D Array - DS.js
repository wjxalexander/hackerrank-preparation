function hourglassSum(arr) {
  // Write your code here
  const calcSingleHourGlass = (i, j) => {
    return (
      arr[i][j] +
      arr[i - 1][j - 1] +
      arr[i - 1][j] +
      arr[i - 1][j + 1] +
      arr[i + 1][j - 1] +
      arr[i + 1][j] +
      arr[i + 1][j + 1]
    );
  };
  let ret = Number.MIN_SAFE_INTEGER;
  for (let i = 1; i < 5; i++) {
    for (let j = 1; j < 5; j++) {
      ret = Math.max(ret, calcSingleHourGlass(i, j));
    }
  }
  return ret;
}
