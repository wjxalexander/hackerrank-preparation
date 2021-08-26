function processData(input) {
  //Enter your code here
  const lines = input.split(/\r\n|\n|\r/);
  let ret = [];
  for (const line of lines) {
    ret.push(handleLine(line));
  }
  return ret;
}
function handleLine(input) {
  const method = input[0];
  const type = input[2];
  const toMod = input.substring(4, input.length);
  if (method === "S") {
    let filteredWord = toMod;
    const parPos = toMod.indexOf("(");
    if (parPos > -1) {
      filteredWord = toMod.substring(0, parPos);
    }
    let ret = [];
    let char = filteredWord[0];
    for (let i = 1; i < filteredWord.length; i++) {
      const item = filteredWord[i];
      if (/[A-Z]/.test(item)) {
        ret.push(char);
        char = item;
      } else {
        char += item;
      }
    }
    ret.push(char);
    return ret.join(" ").toLowerCase();
  } else {
    let wordsArr = toMod.split(" ");
    if (type === "C") {
      // class
      return wordsArr.map(camelWord).join("");
    }
    const transFormedName =
      wordsArr[0] + wordsArr.slice(1).map(camelWord).join("");
    return type === "V" ? transFormedName : transFormedName + "()";
  }
}
function camelWord(s) {
  return s[0].toUpperCase() + s.substring(1);
}
process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
  _input += input;
});

process.stdin.on("end", function () {
  const ret = processData(_input);
  console.log(ret.join("\r\n"));
});
