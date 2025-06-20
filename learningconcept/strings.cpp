#include <iostream>
#include <string> // this is optional in most compilers but best practice

using namespace std;

int main() {
    string str;
    getline(cin, str, '$'); // Will read input until '#' is encountered
    cout << "You entered: " << str;

    // cout<<"this is the length :"<<str.length()<<" "<<str.size()<< " ";

    // cout<<endl;

    // for(char ch: str){
    //     cout<< ch;
    // }

    // cout<< endl ;

    // cout<< str + " hello world";

    int st=0 , end=str.size()-1;
        while(st<end){
            cout<<"swapping : "<<str[st]<<" and "<< str[end]<<endl;
            swap(str[st++],str[end--]);
            // or reverse(str.begin(),str.end())
        }

        for(int i=0;i<str.size();i++){
            cout<<str[i];
        }
    return 0;
}


// C++ provides a wide range of **string functions** to manipulate and interact with strings. Below is a comprehensive list of all the major string functions available in C++ (using the `std::string` class).

// ### **String Functions in C++**

// #### 1. **Construction and Assignment:**

// - **`std::string` Constructor**  
//   ```cpp
//   std::string str1; // Empty string
//   std::string str2("Hello, World!"); // Construct from C-string
//   std::string str3(5, 'a'); // Construct string with 5 'a' characters
//   std::string str4 = str2; // Copy constructor
//   ```

// - **`assign()`**: Assigns a new value to a string.
//   ```cpp
//   str.assign("New string");
//   ```

// - **`operator=`**: Assign a new value to the string.
//   ```cpp
//   str = "Another string";
//   ```

// ---

// #### 2. **Length and Size:**

// - **`size()`** / **`length()`**: Returns the length of the string.
//   ```cpp
//   size_t len = str.size(); // or str.length();
//   ```

// - **`empty()`**: Returns true if the string is empty.
//   ```cpp
//   bool isEmpty = str.empty();
//   ```

// - **`capacity()`**: Returns the size of the allocated memory.
//   ```cpp
//   size_t cap = str.capacity();
//   ```

// - **`resize()`**: Resizes the string.
//   ```cpp
//   str.resize(10, 'x'); // Resizes the string to 10 characters with 'x'
//   ```

// ---

// #### 3. **Modifying Strings:**

// - **`append()`**: Appends characters to the end.
//   ```cpp
//   str.append(" added text");
//   ```

// - **`push_back()`**: Appends a single character to the end.
//   ```cpp
//   str.push_back('A');
//   ```

// - **`insert()`**: Inserts characters at a specific position.
//   ```cpp
//   str.insert(5, " inserted ");
//   ```

// - **`replace()`**: Replaces a part of the string with another string.
//   ```cpp
//   str.replace(6, 5, "modified");
//   ```

// - **`erase()`**: Removes characters from the string.
//   ```cpp
//   str.erase(5, 3); // Removes 3 characters starting at index 5
//   ```

// - **`pop_back()`**: Removes the last character.
//   ```cpp
//   str.pop_back();
//   ```

// ---

// #### 4. **Accessing Characters:**

// - **`at()`**: Access a character by index with bounds checking.
//   ```cpp
//   char ch = str.at(2);
//   ```

// - **`operator[]`**: Access a character by index without bounds checking.
//   ```cpp
//   char ch = str[2];
//   ```

// - **`front()`**: Access the first character.
//   ```cpp
//   char ch = str.front();
//   ```

// - **`back()`**: Access the last character.
//   ```cpp
//   char ch = str.back();
//   ```

// ---

// #### 5. **Searching:**

// - **`find()`**: Finds the first occurrence of a substring.
//   ```cpp
//   size_t pos = str.find("search");
//   ```

// - **`rfind()`**: Finds the last occurrence of a substring.
//   ```cpp
//   size_t pos = str.rfind("search");
//   ```

// - **`find_first_of()`**: Finds the first occurrence of any character from a set of characters.
//   ```cpp
//   size_t pos = str.find_first_of("aeiou");
//   ```

// - **`find_last_of()`**: Finds the last occurrence of any character from a set of characters.
//   ```cpp
//   size_t pos = str.find_last_of("aeiou");
//   ```

// - **`find_first_not_of()`**: Finds the first character that is not part of the set.
//   ```cpp
//   size_t pos = str.find_first_not_of("abc");
//   ```

// - **`find_last_not_of()`**: Finds the last character that is not part of the set.
//   ```cpp
//   size_t pos = str.find_last_not_of("abc");
//   ```

// - **`compare()`**: Compares two strings lexicographically.
//   ```cpp
//   int result = str.compare("another");
//   ```

// ---

// #### 6. **Substrings:**

// - **`substr()`**: Extracts a substring starting from a given position.
//   ```cpp
//   std::string sub = str.substr(2, 5); // Extracts 5 characters from index 2
//   ```

// - **`copy()`**: Copies a portion of the string into a character array.
//   ```cpp
//   char arr[6];
//   str.copy(arr, 5, 2); // Copy 5 characters starting from index 2
//   ```

// ---

// #### 7. **String Manipulation:**

// - **`c_str()`**: Returns a pointer to the underlying C-style string.
//   ```cpp
//   const char* cStr = str.c_str();
//   ```

// - **`data()`**: Similar to `c_str()`, returns a pointer to the internal array of characters.
//   ```cpp
//   const char* dataStr = str.data();
//   ```

// - **`swap()`**: Swaps two strings.
//   ```cpp
//   str.swap(otherStr);
//   ```

// ---

// #### 8. **Conversion:**

// - **`stoi()`**: Converts a string to an integer.
//   ```cpp
//   int num = stoi(str);
//   ```

// - **`stol()`**: Converts a string to a long integer.
//   ```cpp
//   long lnum = stol(str);
//   ```

// - **`stof()`**: Converts a string to a float.
//   ```cpp
//   float fnum = stof(str);
//   ```

// - **`stod()`**: Converts a string to a double.
//   ```cpp
//   double dnum = stod(str);
//   ```

// - **`to_string()`**: Converts a number to a string.
//   ```cpp
//   std::string numStr = to_string(123);
//   ```

// ---

// #### 9. **Other Useful Functions:**

// - **`resize()`**: Changes the size of the string.
//   ```cpp
//   str.resize(10, 'x');
//   ```

// - **`shrink_to_fit()`**: Shrinks the capacity of the string to fit its size.
//   ```cpp
//   str.shrink_to_fit();
//   ```

// - **`operator+`**: Concatenates two strings.
//   ```cpp
//   std::string fullStr = str1 + str2;
//   ```

// - **`operator+=`**: Concatenates and assigns to the original string.
//   ```cpp
//   str += " added text";
//   ```

// ---

// ### **Conclusion:**
// This covers the most common and useful string functions in C++! String manipulation is crucial, and C++ provides a rich set of functions to work with strings efficiently.

// Let me know if you want examples of any specific function or if you need more details!
