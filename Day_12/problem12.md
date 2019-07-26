# Day 12: Inheritance

## Objective 
Today, we're delving into Inheritance. Check out the attached tutorial for learning materials and an instructional video!

## Task 
You are given two classes, Person and Student, where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

Complete the Student class by writing the following:

- A Student class constructor, which has **4** parameters:
> 1. A string, **_firstName_**.
> 2. A string, **_lastName_**.
> 3. An integer, **_id_**.
> 4. An integer array (or vector) of test scores, **_scores_**.
- A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:

**Grading Scale**

| **Letter** | **Average(_a_)** |
|:----------:|:----------------:|
| **O**	| **90 <= _a_ <= 100** |
| **E**	| **80 <= _a_ < 90** |
| **A**	| **70 <= _a_ < 80** |
| **P**	| **55 <= _a_ < 70** |
| **D**	| **40 <= _a_ < 55** |
| **T**	| **_a_ < 40** |

## Input Format

The locked stub code in your editor calls your Student class constructor and passes it the necessary arguments. It also calls the calculate method (which takes no arguments).

You are not responsible for reading the following input from stdin: 

The first line contains **_firstName_**, **_lastName_**, and **_id_**, respectively. The second line contains the number of test scores. The third line of space-separated integers describes **_scores_**.

## Constraints
- **1 <= |_firstName_|,|_lastName_| <= 10**
- **|_id_| ≡ 7**
- **0 <= _score_, _average_ <= 100**

## Output Format

This is handled by the locked stub code in your editor. Your output will be correct if your Student class constructor and calculate() method are properly implemented.

## Sample Input

```bash
Heraldo Memelli 8135627
2
100 80
```

## Sample Output

```bash
Name: Memelli, Heraldo
ID: 8135627
Grade: O
```

## Explanation

This student had **2** scores to average: **100** and **80**. The student's average grade is **(100+80)/2 = 90**. An average grade of **90** corresponds to the letter grade **_O_**, so our calculate() method should return the character'O'.