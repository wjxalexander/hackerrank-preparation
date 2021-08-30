/*keep in mind that; using multiple rotations, you can bring any number into the quadrant that you desire.

*for any position in the upper left quadrant (position [x][y], where x and y < n (and not 2*n)), you can move numbers in any quadrant at the following positions to [x][y]:

*[x][y] or // upper left quadrant [x][2*n-1-y] or // upper right quadrant [2*n-1-x][y], or // lower left quadrant [2*n-1-x][2*n-1-y] // lower right quadrant

*all you need to do then is, for every position (x and y) in the upper left quadrant, you need to find the maximum of the four numbers at the above positions, sum them and print the answer.

*Note: Complexity is O(n) where n is the number of elements in the array */

function flippingMatrix(matrix) {
  // Write your code here
  const n = matrix.length / 2;
  let ret = 0;
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
      const rightMost = 2 * n - 1 - i;
      const downMost = 2 * n - 1 - j;
      const elementsToCompare = [
        matrix[i][j],
        matrix[i][downMost],
        matrix[rightMost][j],
        matrix[rightMost][downMost],
      ];
      ret += Math.max(...elementsToCompare);
    }
  }
  return ret;
}
const matrix = [
  [112, 42, 83, 119],
  [56, 125, 56, 49],
  [15, 78, 101, 43],
  [62, 98, 114, 108],
];
flippingMatrix(matrix);
