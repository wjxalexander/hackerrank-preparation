function maxMin(k, arr) {
  // Write your code here
  arr.sort((a, b) => a - b);
  let ret = Number.MAX_SAFE_INTEGER
  let i = 0;
  while(i <= arr.length - k){
      const min = arr[i]
      const max = arr[i + k - 1]
      if(ret > max - min){
          ret = max - min
      }
      i++
  }
  return ret
}
const k = 3;
const arr = [100, 200, 300, 350, 400, 401, 402];

maxMin(k, arr);
