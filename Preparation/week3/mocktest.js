function getGcd(a, b) {
  let max = Math.max(a, b);
  let min = Math.min(a, b);
  if (max % min === 0) {
    return min;
  } else {
    return getGcd(max % min, min);
  }
}
function getLcm(a, b) {
  return (a * b) / getGcd(a, b);
}

function getTotalX(a, b) {
  // Write your code here
  // Count the number of multiples of LCM that are divisible by the GCD.

  const lcmOfA = a.reduce((pre, cur) => getLcm(pre, cur));
  const gcdOfB = b.reduce((pre, cur) => getGcd(pre, cur));
  let time = 0;
  let ret = 0;
  while (time <= gcdOfB) {
    time += lcmOfA;
    if (gcdOfB % time === 0) {
      ret++;
    }
  }
  return ret;
}

console.log(getTotalX([2, 4], [16, 32, 96]));
