# Day 8: Dictionaries and Maps

## Objective 
Today, we're learning about Key-Value pair mappings using a Map or Dictionary data structure. Check out the Tutorial tab for learning materials and an instructional video!

## Task 
Given **_n_** names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will then be given an unknown number of names to query your phone book for. For each **_name_** queried, print the associated entry from your phone book on a new line in the form ```name=phoneNumber```; if an entry for **_name_** is not found, print ```Not found``` instead.

### Note: 
Your phone book should be a Dictionary/Map/HashMap data structure.

## Input Format

The first line contains an integer, **_n_**, denoting the number of entries in the phone book. 

Each of the **_n_** subsequent lines describes an entry in the form of **2** space-separated values on a single line. The first value is a friend's name, and the second value is an **8**-digit phone number.

After the **_n_** lines of phone book entries, there are an unknown number of lines of queries. Each line (query) contains a **_name_** to look up, and you must continue reading lines until there is no more input.

### Note: 
Names consist of lowercase English alphabetic letters and are first names only.

## Constraints
- **1 <= _n_ <= 10<sup>5</sup>**

- **1 <= _queries_ <= 10<sup>5</sup>**

## Output Format

On a new line for each query, print Not found if the name has no corresponding entry in the phone book; otherwise, print the full **_name_** and **_phoneNumber_** in the format ```name=phoneNumber```.

## Sample Input

```bash
3
sam 99912222
tom 11122222
harry 12299933
sam
edward
harry
```

## Sample Output

```bash
sam=99912222
Not found
harry=12299933
```

## Explanation

We add the following **_n_ = 3** (Key,Value) pairs to our map so it looks like this:

**_phoneBook_ = {(_sam_,99912222),(_tom_,11122222),(_harry_,12299933)}**

We then process each query and print ```key=value``` if the queried **_key_** is found in the map; otherwise, we print ```Not found```.

Query 0: sam 

Sam is one of the keys in our dictionary, so we print ```sam=99912222```.


Query 1: edward 

Edward is not one of the keys in our dictionary, so we print ```Not found```.


Query 2: harry 

Harry is one of the keys in our dictionary, so we print ```harry=12299933```.