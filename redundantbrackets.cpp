// Absolutely! Let’s do a dry run of your code on the input string:

// css
// Copy
// Edit
// ((a+b))
// Input string characters and indices:
// Index	Char
// 0	'('
// 1	'('
// 2	'a'
// 3	'+'
// 4	'b'
// 5	')'
// 6	')'

// Step-by-step dry run of the code:
// cpp
// Copy
// Edit
// stack<char> st;
// string s = "((a+b))";
// i = 0, ch = '('
// ch == '(', so push '(' onto stack.

// Stack now: '('

// i = 1, ch = '('
// Again ch == '(', push '('.

// Stack now: '(', '(' (top is rightmost '(')

// i = 2, ch = 'a'
// 'a' is not '(' or operator or ')' → do nothing.

// Stack unchanged: '(', '('

// i = 3, ch = '+'
// '+' is an operator, push it.

// Stack now: '(', '(', '+'

// i = 4, ch = 'b'
// 'b' is neither '(', operator, nor ')' → ignore.

// Stack unchanged: '(', '(', '+'

// i = 5, ch = ')'
// ch == ')', so check for redundancy:

// Start with:

// cpp
// Copy
// Edit
// bool isRedundant = true;
// while (!st.empty() && st.top() != '(') {
//     char top = st.top();
//     if (top == '+' || top == '-' || top == '*' || top == '/') {
//         isRedundant = false;
//     }
//     st.pop();
// }
// Top of stack is '+' → operator found → isRedundant = false

// Pop '+'.

// Stack now: '(', '('

// Next top is '(' → stop the loop.

// Now:

// cpp
// Copy
// Edit
// if (!st.empty()) st.pop();  // pop the '('
// Pop '('.

// Stack now: '('

// Then:

// cpp
// Copy
// Edit
// if (isRedundant) return 1;  // not triggered because isRedundant == false
// So no return, continue.

// i = 6, ch = ')'
// ch == ')', check redundancy again:

// Start:

// cpp
// Copy
// Edit
// bool isRedundant = true;
// while (!st.empty() && st.top() != '(') {
//     char top = st.top();
//     if (top == '+' || top == '-' || top == '*' || top == '/') {
//         isRedundant = false;
//     }
//     st.pop();
// }
// Top of stack is '(' already → loop does not execute.

// Then:

// cpp
// Copy
// Edit
// if (!st.empty()) st.pop();
// Pop '('.

// Stack now: empty.

// Finally:

// cpp
// Copy
// Edit
// if (isRedundant) return 1;
// isRedundant is still true because the loop never found any operator inside these brackets.

// So return 1 → redundant brackets detected!

// Final answer returned: 1
// Summary:
// First closing bracket ) matched a pair containing operator +, so NOT redundant.

// Second closing bracket ) matched a pair containing no operator → redundant.

// The function correctly identifies redundancy and returns 1.

// If you'd like, I can do the dry run for another example or explain any specific part further!

//correct approach below

// class Solution {
//   public:
//     int checkRedundancy(string s) {
//         stack<char> st;

//         for (int i = 0; i < s.length(); i++) {
//             char ch = s[i];

//             if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//                 st.push(ch);
//             } else if (ch == ')') {
//                 bool isRedundant = true;

//                 while (!st.empty() && st.top() != '(') {
//                     char top = st.top();
//                     if (top == '+' || top == '-' || top == '*' || top == '/') {
//                         isRedundant = false;
//                     }
//                     st.pop();
//                 }

//                 if (!st.empty()) st.pop();  // pop the opening '('

//                 if (isRedundant) {
//                     return 1;  // ✅ Redundant brackets found
//                 }
//             }
//         }

//         return 0;  // ✅ No redundancy
//     }
// };
