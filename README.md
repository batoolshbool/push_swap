*This project has been created as part of the 42amman curriculum by bshbool.*

# push_swap

Description
-----------
push_swap is a program that sorts a list of integers using two stacks (A and B) and a limited set of operations. 

The goal is to sort stack A in ascending order while printing the operations used.

Instructions
------------
Compile: make

Run examples:

./push_swap 3 2 1

./push_swap "5 4 3 2 1"

Allowed Operations
------------------
- sa : swap first two elements of A
- sb : swap first two elements of B
- ss : sa and sb at the same time
- pa : push top of B to A
- pb : push top of A to B
- ra : rotate A (top to bottom)
- rb : rotate B
- rr : ra and rb at the same time
- rra: reverse rotate A
- rrb: reverse rotate B
- rrr: rra and rrb at the same time

Input Validation
----------------
- Input not empty
- Only numbers
- Numbers in int range
- No duplicates
- Leading zeros handled
Invalid input prints "Error"

Sorting Strategy
----------------
Small inputs (2-5 numbers):
- 2: swap if needed
- 3: swap/rotate
- 4-5: move smallest to B, sort A, push back

Large inputs (>5 numbers):
- Convert values to indexes
- Radix sort bit by bit using stack B

Files Overview
--------------
push_swap.c : main logic

sort_small.c : 2-5 numbers

radix_sort.c : >5 numbers

is_valid_input.c : input validation

utils1.c / utils2.c : stack utilities

swap.c / push.c / rotate.c / reverse_rotate.c : operations

Memory
------
All allocated memory is freed. No leaks.

Resources
---------
[42 gitbook](https://42-cursus.gitbook.io/guide/2-rank-02/push_swap)

[Medium article](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)

[Thuggonaut yt video](https://www.youtube.com/watch?v=wRvipSG4Mmk)

[Radix sort](https://www.geeksforgeeks.org/dsa/radix-sort/)

[Radix sort (yt video)](https://www.youtube.com/watch?v=UyFH-KayvM4)

### AI Usage

AI tools were used to clarify project requirements, understand system calls, and structure this README.
All code, debugging, and implementation were done manually by me.