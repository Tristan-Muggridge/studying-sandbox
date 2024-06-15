/*

    Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

    An input string is valid if:

    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.
    
    Example 1:
        Input: s = "()"
        Output: true

    Example 2:
        Input: s = "()[]{}"
        Output: true
    
    Example 3:
        Input: s = "(]"
        Output: false

*/

/*
    - Create a queue of the openParentheses
    - upon finding an 'openParenthesis' add it to the queue
    - upon finding a 'closedParenthesis' check the top of the queue
    - if the closedParenthesis matches the openParenthesis the pop from queue and continue
    - else return false
*/

function isValid(s: string): boolean {
    if (s.length % 2 !== 0) return false;
    
    const closerToOpener: {[k: string]: string} = {
        ')':'(',
        '}':'{',
        ']':'[',
    }

    const stack: string[] = [];

    for (const parenthesis of s) {
        if (parenthesis in closerToOpener) {
            if (stack.length === 0 || stack.pop() !== closerToOpener[parenthesis]) {
                return false;
            }
            
            continue;
        }

        stack.push(parenthesis);
    }

    return stack.length === 0;
};


console.log( isValid('()') )
console.log( isValid('()[]{}') )
console.log( isValid('(]') )
console.log( isValid('([)]') ) 