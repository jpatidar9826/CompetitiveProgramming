
const converter = (initial) => {
  const lowerCase = ["ā","ą","ć","ď","ē","f","ģ","ĥ","ĩ","ĵ","ķ","ĺ","m","ň","ō","p","q","ŕ","ś","ŧ","ũ","v","ŵ","x","ŷ","ž",];
  const upperCase = [];
  var res = "";

  for (let i = 0; i < initial.length; i++) {
    let temp = initial[i];
    let num = temp.charCodeAt(0);
    if (num >= 65 && num <= 90) {
      res = res + lowerCase[num - 65];
    } else if (num >= 97 && num <= 122) {
      res = res + lowerCase[num - 97];
    } else {
      res = res + initial[i];
    }
  }

  return res;
};

