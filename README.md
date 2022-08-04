# Project4-in-Program-Design
Project 4,

Program Design Problem 1- Pointers as array arguments and using pointers to process arrays (50 points) Suppose you are given an array of positive integers of length n. An array is called good if the elements of the arrays have the same parity (even or odd). For example, elements of array [1, 5, 7] have the same parity odd, elements of array [2, 3, 4] do not have the same parity. Example input/output #1: Enter the length of the array: 7 Enter the elements of the array: 3 5 1 4 9 8 11 Output: not good Example input/output #2: Enter the length of the array: 4 Enter the elements of the array: 2 16 8 4 Output: good, all elements are even Example input/output #3: Enter the length of the array: 3 Enter the elements of the array: 5 13 17 Output: good, all elements are odd 1. In the main function, ask the user to enter the length of the input array, declare the input array. Then ask the user to enter the elements of the array. 2. The program should include the following function. Do not modify the function prototype. void find_parity(int *a, int n, int * all_even, int `*all_odd); a represents the input array with length n. The all_even and all_odd parameters point to variables in which the function will store whether all of the array elements are all even or all odd. This function should use pointer arithmetic– not subscripting – to visit array elements. In other words, eliminate the loop index variables and all use of the [] operator in the function. 3. In the main function, call the find_parity function to find whether all of the array elements are all even or all odd, or neither. 4. The main function displays the result

Problem 2 – Check the inventory (50 points)
A certain computer factory has grown over the years, and it now must improve its
production lines to meet the demand. The first problem that the managers identified is the
lack of organization in their inventory. They cannot even compute how many computers
they can build using the parts available in storage. Luckily, they know that there are at most
K different part types and each part has a unique code from 1 to K. Also, they know they
have N parts in storage through a list of part codes that was created during this
reorganization. Knowing that a computer is composed of K distinct parts, one of each of
the existing part types, can you write a program that computes how many computers can
be assembled with the parts in storage?
1. The program takes the number of parts in storage (N), the number of part types
(K) and a list of N part codes from 1 to K. It computes the number of computers
that can be assembled with the existing parts.
2. Input validation: the program validates the number of parts in storage (1 ≤ N ≤
1000000), the number of part types (1 ≤ K ≤ 10000), and the code ci of the i-th part
in storage (1 ≤ ci ≤ 1000). If any of the input values are invalid, the program prints
a message and exits.

