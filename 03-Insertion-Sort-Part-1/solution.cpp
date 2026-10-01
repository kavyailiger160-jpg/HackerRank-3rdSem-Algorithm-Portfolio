# HackerRank 3rd Sem Algorithm Portfolio

## Student Information

- **Name:** YOUR NAME
- **USN / Student ID:** YOUR USN
- **Semester:** 3rd Semester
- **Programming Language:** C++
- **HackerRank Profile:** YOUR HACKERRANK PROFILE URL
- **GitHub Repository:** YOUR GITHUB REPOSITORY URL

---

## About This Portfolio

This repository contains my solutions to five mandatory algorithmic problems
completed as part of the 3rd Semester Computer Science and Engineering
algorithm activity.

The problems cover arrays, searching, sorting, and greedy algorithms.

---

## Problems Completed

| No. | Problem | Topic | Time Complexity | Space Complexity |
|---|---|---|---|---|
| 1 | Mini-Max Sum | Arrays | O(N) | O(1) |
| 2 | Birthday Cake Candles | Arrays / Counting | O(N) | O(1) |
| 3 | Insertion Sort Part 1 | Sorting | O(N) | O(1) |
| 4 | Binary Search | Searching | O(log N) | O(1) |
| 5 | Mark and Toys | Greedy / Sorting | O(N log N) | O(1) |

---

## 1. Mini-Max Sum

### Approach
Traverse the array once while calculating the total sum, minimum value,
and maximum value.

The minimum sum is obtained by subtracting the maximum value from the
total sum.

The maximum sum is obtained by subtracting the minimum value from the
total sum.

### Complexity
- Time: O(N)
- Auxiliary Space: O(1)

### HackerRank
[Mini-Max Sum](https://www.hackerrank.com/challenges/mini-max-sum/problem)

---

## 2. Birthday Cake Candles

### Approach
Traverse the array and maintain the maximum candle height and the number
of candles having that maximum height.

### Complexity
- Time: O(N)
- Auxiliary Space: O(1)

### HackerRank
[Birthday Cake Candles](https://www.hackerrank.com/challenges/birthday-cake-candles/problem)

---

## 3. Insertion Sort Part 1

### Approach
Take the last element as the value to insert. Shift larger elements one
position to the right until the correct position is found.

### Complexity
- Time: O(N)
- Auxiliary Space: O(1)

### HackerRank
[Insertion Sort Part 1](https://www.hackerrank.com/challenges/insertionsort1/problem)

---

## 4. Binary Search

### Approach
Use two pointers, low and high, to repeatedly divide the sorted array
into halves.

If the middle element is the target, return its index.

If the middle element is smaller than the target, search the right half.
Otherwise, search the left half.

### Complexity
- Time: O(log N)
- Auxiliary Space: O(1)

### HackerRank
[Intro to Tutorial Challenges](https://www.hackerrank.com/challenges/tutorial-intro/problem)

---

## 5. Mark and Toys

### Approach
Sort the toy prices in ascending order and purchase the cheapest toys
while staying within the available budget.

### Complexity
- Time: O(N log N)
- Auxiliary Space: O(1) auxiliary space apart from sorting implementation

### HackerRank
[Mark and Toys](https://www.hackerrank.com/challenges/mark-and-toys/problem)

---

## Algorithmic Techniques Learned

Through these problems, I practiced array traversal, minimum and maximum
tracking, counting, insertion-based sorting, binary search, sorting, and
greedy selection.

These problems helped me understand how choosing an appropriate algorithm
can reduce unnecessary operations and improve efficiency.

---

## Evidence

Screenshots of accepted HackerRank submissions and earned badges are
included as part of the activity submission.

---

## Conclusion

This portfolio demonstrates my implementation and analysis of basic
algorithmic techniques using C++. It also documents the time and auxiliary
space complexity of each solution.