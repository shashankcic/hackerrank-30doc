# Day 3: Intro to Conditional Statements

## Objective 
In this challenge, we're getting started with conditional statements. Check out the Tutorial tab for learning materials and an instructional video!

## Task 
Given an integer, **_n_**, perform the following conditional actions:

If **_n_** is odd, print ```Weird```

If **_n_** is even and in the inclusive range of **2** to **5**, print ```Not Weird```

If **_n_** is even and in the inclusive range of **6** to **20**, print ```Weird```

If **_n_** is even and greater than **20**, print ```Not Weird```

Complete the stub code provided in your editor to print whether or not **_n_** is weird.

## Input Format

A single line containing a positive integer, **_n_**.

## Constraints
**1 <= _n_ <= 100**

## Output Format

Print ```Weird``` if the number is weird; otherwise, print ```Not Weird```.

## Sample Input 0

```bash
3
```

## Sample Output 0

```bash
Weird
```

## Sample Input 1

```bash
24
```

## Sample Output 1

```bash
Not Weird
```

## Explanation

Sample Case 0: **_n_ = 3** 

**_n_** is odd and odd numbers are weird, so we print ```Weird```.

Sample Case 1:  **_n_ = 24**

**_n_ > 20** and **_n_** is even, so it isn't weird. Thus, we print ```Not Weird```.