function minimumSwaps(arr) {
  let ret = 0;
  const map = new Map();
  arr.forEach((item, index) => {
    map.set(item, index);
  });
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === i + 1) {
      continue;
    }

    const currentPos = map.get(i + 1);
    const temp = arr[i];
    arr[i] = i + 1;
    arr[currentPos] = temp;
    map.set(i + 1, i);
    map.set(temp, currentPos);
    ret++;
  }
  return ret;
}

minimumSwaps([4, 3, 1, 2]);
