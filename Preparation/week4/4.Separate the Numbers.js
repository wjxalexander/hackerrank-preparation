function separateNumbers(s) {
  // Write your code here
  for (let i = 0; i < s.length / 2; i++) {
    if (checkNumbers(s.substring(0, i + 1), s.substring(i + 1))) {
      console.log(`YES ${s.substring(0, i + 1)}`);
      return;
    }
  }
  console.log("NO");
}
function checkNumbers(n1, n2) {
  const nextNumber = (BigInt(n1) + 1n).toString();
  const regExStr = "^" + nextNumber;
  const regExp = new RegExp(regExStr);
  if (regExp.test(n2)) {
    const nextNum = n2.replace(regExp, "");
    if (nextNum.length === 0) {
      return true;
    }
    return checkNumbers(nextNumber, nextNum);
  } else {
    return false;
  }
}
const a = [
  "90071992547409929007199254740993",
  "45035996273704964503599627370497",
  "22517998136852482251799813685249",
  "11258999068426241125899906842625",
  "562949953421312562949953421313",
  "90071992547409928007199254740993",
  "45035996273704963503599627370497",
  "22517998136852481251799813685249",
  "11258999068426240125899906842625",
  "562949953421312462949953421313",
];
a.forEach((item) => separateNumbers(item));
// separateNumbers('90071992547409929007199254740993')