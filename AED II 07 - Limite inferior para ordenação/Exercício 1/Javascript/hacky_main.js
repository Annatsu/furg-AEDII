/**
 * Returns how many different numbers are there inside the array.
 * Hacky way, since i use a javascript object to get faster results.
 * 
 * @param {Array} arr an array of integers.
 * 
 * @returns {Number} how many different numbers the array contains.
 */
function countDiff(arr) {
    if (!(arr && arr.length))
        return 0;

    const memo = {};

    return arr
        .filter((v, i) => {
            if (!(v in memo)) {
                memo[v] = v;
                return true;
            }
            return false;
        }).length;
}


// Should return 6.
console.log('Test with array: [1, 2, 3, 4, 5, 6]', countDiff([1, 2, 3, 4, 5, 6]));

// Should return 4.
console.log('Test with array: [1, 2, 2, 4, 4, 6]', countDiff([1, 2, 2, 4, 4, 6]));
