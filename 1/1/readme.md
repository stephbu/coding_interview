## Unique Characters

Implement an algorithm to determine if a string has all unique characters.  What if you cannot use additional data structures?

### Approach

This is a recursion problem that could be solved in a number of ways:

1. Sorted characters, then scan looking for duplicates
2. Enumerate through characters loading a hashmap as you progress, fail if the hashmap already contains the character
3. Enumerate through characters, for each character re-enumerate remaining characters looking for duplicates.
