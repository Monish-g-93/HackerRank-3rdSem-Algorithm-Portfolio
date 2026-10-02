# HackerRank 3rd Semester Algorithm Portfolio

## Student Details

| Field                  | Details                                                              |
| ---------------------- | -------------------------------------------------------------------- |
| **Name**               | Monish G                                                             |
| **SRN**                | R25EF153                                                             |
| **Semester**           | 3rd Semester CSE                                                     |
| **HackerRank Profile** | https://www.hackerrank.com/profile/monishgowda1008                   |
| **GitHub Repository**  | https://github.com/Monish-g-93/HackerRank-3rdSem-Algorithm-Portfolio |

---

## About This Portfolio

This repository contains my solutions to five mandatory algorithmic problems completed as part of the HackerRank Algorithms & GitHub Coding Portfolio activity. The problems cover array processing, counting, insertion sort, binary search, and greedy algorithms.

The solutions focus on writing clear and efficient algorithms and analyzing their Time Complexity and Auxiliary Space Complexity. The repository also documents the problem-solving approaches and provides evidence of completed HackerRank challenges.

---

## Problem Summary

| No. | Problem                 | Main Concept               | Time Complexity | Auxiliary Space |
| --- | ----------------------- | -------------------------- | --------------- | --------------- |
| 1   | Mini-Max Sum            | Array / Min-Max Tracking   | O(N)            | O(1)            |
| 2   | Birthday Cake Candles   | Array / Counting           | O(N)            | O(1)            |
| 3   | Insertion Sort – Part 1 | Sorting / Element Shifting | O(N)            | O(1)            |
| 4   | Binary Search           | Divide and Conquer         | O(log N)        | O(1)            |
| 5   | Mark and Toys           | Greedy / Sorting           | O(N log N)      | O(1)*           |

* Excludes implementation-dependent internal memory used by the sorting algorithm.

---

# 1. Mini-Max Sum

### Problem Summary

Given five positive integers, calculate the minimum and maximum sums that can be obtained by summing exactly four of the five integers.

### Approach

The solution calculates the total sum of all elements while simultaneously finding the minimum and maximum values.

* Minimum sum = Total sum − Maximum element
* Maximum sum = Total sum − Minimum element

This avoids sorting the array and requires only one traversal.

### Complexity

* **Time Complexity:** O(N)
* **Auxiliary Space Complexity:** O(1)

### Alternative Approach

The array could be sorted first. The sum of the first `N-1` elements gives the minimum sum, while the sum of the last `N-1` elements gives the maximum sum. However, sorting requires O(N log N) time, so tracking the minimum and maximum directly is more efficient.

### HackerRank

HackerRank Profile:
https://www.hackerrank.com/profile/monishgowda1008

### Repository Folder

`01-Mini-Max-Sum/`

---

# 2. Birthday Cake Candles

### Problem Summary

Given the heights of candles, determine how many candles have the maximum height.

### Approach

The solution traverses the array once while maintaining:

* The current maximum candle height
* The number of candles having that maximum height

Whenever a larger height is found, the maximum is updated and the count is reset to one. If the same maximum height is encountered again, the count is increased.

### Complexity

* **Time Complexity:** O(N)
* **Auxiliary Space Complexity:** O(1)

### Alternative Approach

The array could be sorted and the frequency of the last element could be counted. However, sorting would require O(N log N) time, while a single traversal requires only O(N).

### Repository Folder

`02-Birthday-Cake-Candles/`

---

# 3. Insertion Sort – Part 1

### Problem Summary

The problem demonstrates the insertion step of insertion sort. The last element is stored as the value to be inserted, and larger elements are shifted one position to the right until the correct position is found.

### Approach

1. Store the last element as the value to insert.
2. Start comparing it with elements to its left.
3. Shift larger elements one position to the right.
4. Insert the stored value into its correct position.
5. Print the array after each shift and after insertion.

### Complexity

* **Time Complexity:** O(N)
* **Auxiliary Space Complexity:** O(1)

### Alternative Approach

A complete insertion sort implementation could process every element from left to right. However, this problem specifically requires demonstrating only one insertion operation, so processing only the final element is appropriate.

### Repository Folder

`03-Insertion-Sort-Part-1/`

---

# 4. Binary Search

### Problem Summary

Given a sorted array and a target value, determine whether the target exists in the array and return its index.

### Approach

Binary search repeatedly divides the search interval into two halves.

1. Set left and right boundaries.
2. Calculate the middle position.
3. If the middle element equals the target, return its index.
4. If the middle element is smaller than the target, search the right half.
5. Otherwise, search the left half.
6. Continue until the target is found or the search interval becomes empty.

### Complexity

* **Time Complexity:** O(log N)
* **Auxiliary Space Complexity:** O(1)

### Alternative Approach

Linear search can examine each element sequentially, but it requires O(N) time. Binary search is more efficient for sorted arrays because it eliminates approximately half of the remaining elements during every iteration.

### Repository Folder

`04-Binary-Search/`

---

# 5. Mark and Toys

### Problem Summary

Given the prices of toys and a fixed budget, determine the maximum number of toys that can be purchased.

### Approach

The prices are sorted in ascending order. The algorithm then purchases the cheapest toys first while sufficient budget remains.

Buying the cheapest available toy at each step maximizes the number of toys purchased within the given budget.

### Complexity

* **Time Complexity:** O(N log N)
* **Auxiliary Space Complexity:** O(1), excluding implementation-dependent internal memory used by sorting.

### Alternative Approach

A linear-time approach may be possible using frequency/counting techniques when the price range is small and bounded. However, sorting provides a simple and generally applicable solution for arbitrary integer prices.

### Repository Folder

`05-Mark-and-Toys/`

---

# Algorithm Comparison

| Problem                 | Technique                    |       Time | Auxiliary Space |
| ----------------------- | ---------------------------- | ---------: | --------------: |
| Mini-Max Sum            | Single-pass min/max tracking |       O(N) |            O(1) |
| Birthday Cake Candles   | Single-pass counting         |       O(N) |            O(1) |
| Insertion Sort – Part 1 | Element shifting             |       O(N) |            O(1) |
| Binary Search           | Divide and conquer           |   O(log N) |            O(1) |
| Mark and Toys           | Greedy + sorting             | O(N log N) |           O(1)* |

---

# Learning Outcomes

Through these problems, I practiced several fundamental algorithmic techniques:

* Array traversal and processing
* Minimum and maximum tracking
* Frequency counting
* Element shifting
* Sorting
* Divide-and-conquer searching
* Greedy decision-making
* Big-O Time Complexity analysis
* Auxiliary Space Complexity analysis
* Writing and organizing solutions in a GitHub repository

The activity also helped me understand that choosing an appropriate algorithm can significantly improve efficiency. For example, binary search reduces the search time from O(N) to O(log N) for sorted data, while direct minimum and maximum tracking avoids the unnecessary O(N log N) cost of sorting.

---

# Evidence of Completion

Screenshots of successful submissions are maintained as evidence for the five completed problems.

### Evidence Checklist

* [x] Mini-Max Sum accepted submission
* [x] Birthday Cake Candles accepted submission
* [x] Insertion Sort – Part 1 accepted submission
* [x] Binary Search working implementation
* [x] Mark and Toys accepted submission
* [x] GitHub repository created
* [x] Solutions organized into separate folders

---

# HackerRank Profile

Public HackerRank Profile:

https://www.hackerrank.com/profile/monishgowda1008

# GitHub Repository

Public GitHub Repository:

https://github.com/Monish-g-93/HackerRank-3rdSem-Algorithm-Portfolio

---

## Conclusion

This portfolio demonstrates the implementation and analysis of fundamental algorithms using practical coding problems. The five problems provided experience with array manipulation, sorting, searching, greedy strategies, and algorithm efficiency. The solutions are organized in a structured GitHub re
