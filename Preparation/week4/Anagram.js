function anagram(s) {
  // Write your code here
  if (s.length % 2 === 1) {
    return -1;
  }
  const firstHalfMap = {};
  const lastHalfMap = {};

  for (let i = 0; i < s.length / 2; i++) {
    const char = s[i];
    if (firstHalfMap[char]) {
      firstHalfMap[char]++;
    } else {
      firstHalfMap[char] = 1;
    }
  }
  for (let i = s.length / 2; i < s.length; i++) {
    const char = s[i];
    if (lastHalfMap[char]) {
      lastHalfMap[char]++;
    } else {
      lastHalfMap[char] = 1;
    }
  }
  let ret = s.length / 2;
  for (const [key, value] of Object.entries(firstHalfMap)) {
    const corValue = lastHalfMap[key];
    if (corValue === value) {
      ret -= value;
      continue;
    }
    if (corValue && corValue !== value) {
      ret -= Math.min(corValue, value);
      continue;
    }
  }
  return ret;
}
