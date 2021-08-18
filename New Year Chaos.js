function minimumBribes(q) {
  // Write your code here
  let ret = 0;
  const bribeCounter = Array.from(q, () => 0);
  for (let i = 0; i < q.length; i++) {
    if (q[i] === i + 1) {
      continue;
    }
    const currentIndex = q.indexOf(i + 1);
    const temp = q[i];
    q[i] = q[currentIndex];
    q[currentIndex] = temp;
    ret++;
    bribeCounter[i]++;
    bribeCounter[temp - 1]++;
    if (bribeCounter.some((val) => val > 2)) {
      console.log("Too chaotic");
      return;
    }
  }
  console.log(ret);
}
const q1 = [5, 1, 2, 3, 7, 8, 6, 4];
const q2 = [1, 2, 5, 3, 7, 8, 6, 4];
const q3 = [2, 1, 5, 3, 4];
const q4 = [2, 5, 1, 3, 4];
const q5 = [1, 2, 5, 3, 4, 7, 8, 6];
// console.log(1);
// // minimumBribes(q1);
// console.log(2);
minimumBribes(q2);
// console.log(3);
// minimumBribes(q3);
// console.log(4);
// minimumBribes(q4);
// console.log(5);
// minimumBribes(q5);
