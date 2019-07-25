# Day 11: 2D Arrays

## Objective 
Today, we're building on our knowledge of Arrays by adding another dimension. Check out the Tutorial tab for learning materials and an instructional video!

## Context 
Given a **6 x 6** 2D Array, **_A_**:

```bash
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
```

We define an hourglass in **_A_** to be a subset of values with indices falling in this pattern in **_A_**'s graphical representation:

```bash
a b c
  d
e f g
```

There are **16** hourglasses in **_A_**, and an hourglass sum is the sum of an hourglass' values.

## Task 
Calculate the hourglass sum for every hourglass in **_A_**, then print the maximum hourglass sum.

## Input Format

There are **6** lines of input, where each line contains **6** space-separated integers describing 2D Array **_A_**; every value in **_A_** will be in the inclusive range of **-9** to **9**.

## Constraints
- **-9 <= _A[i][j]_ <= 9**
- **0 <= _i,j_ <= 5**

## Output Format

Print the largest (maximum) hourglass sum found in **_A_**.

## Sample Input

```bash
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0
```

## Sample Output

```bash
19
```

## Explanation

**_A_** contains the following hourglasses:

```bash
1 1 1   1 1 0   1 0 0   0 0 0
  1       0       0       0
1 1 1   1 1 0   1 0 0   0 0 0

0 1 0   1 0 0   0 0 0   0 0 0
  1       1       0       0
0 0 2   0 2 4   2 4 4   4 4 0

1 1 1   1 1 0   1 0 0   0 0 0
  0       2       4       4
0 0 0   0 0 2   0 2 0   2 0 0

0 0 2   0 2 4   2 4 4   4 4 0
  0       0       2       0
0 0 1   0 1 2   1 2 4   2 4 0
```

The hourglass with the maximum sum (**19**) is:

```bash
2 4 4
  2
1 2 4
```