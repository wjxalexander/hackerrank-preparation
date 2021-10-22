function caesarCipher(s, k) {
  // Write your code here
  const aCode = "a".charCodeAt(0);
  const ACode = "A".charCodeAt(0);

  const lowArr = [];
  const upperArr = [];
  for (let i = 0; i < 26; i++) {
    lowArr.push(String.fromCharCode(aCode + i));
    upperArr.push(String.fromCharCode(ACode + i));
  }
  let ret = "";
  for (const character of s) {
    if (!/[a-z]/i.test(character)) {
      ret += character;
    } else {
      if(lowArr.includes(character)){
        const should = (character.charCodeAt(0) - aCode + k) % 26;
        ret += String.fromCharCode(aCode + should)
      }else{
        const should = (character.charCodeAt(0) - ACode + k) % 26;
        ret += String.fromCharCode(ACode + should)
      }
    }
  }
  return ret;
}
caesarCipher('Hello_World!', 4)