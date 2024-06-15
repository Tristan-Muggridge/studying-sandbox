function isPalindrome(s: string): boolean {
    // clean the input string to only alphanumeric characters - lowercased;
    s = s
        .replace(/[^a-zA-Z0-9]/g, '')
        .toLowerCase();

    // if single character is already palindrome by default;
    if (s.length === 1) return true;

    let l = 0;          // start at beginning of string;
    let r = s.length-1; // start at end of string;

    // until left exceeds right pointer ( ~s.length / 2 )
    while (l<r) {
        // return false if characters don't match ( ie: not a palindrome )
        if (s[l++] !== s[r--]) return false; 
    }
    
    // if got through the while loop then we know it's a palindrome
    return true; 
};