function plusMinus(arr) {
  // Write your code here
  const total = arr.length;
  let positive = 0;
  let zero = 0;
  let negative = 0;
  for (const item of arr) {
    if (item < 0) {
      negative++;
    } else if (item === 0) {
      zero++;
    } else {
      positive++;
    }
  }
  console.log((positive / total).toFixed(5));
  console.log((zero / total).toFixed(5));
  console.log((negative / total).toFixed(5));
}
