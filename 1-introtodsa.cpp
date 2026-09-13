/*
INTRODUCTION TO DATA STRUCTURES AND ALGORITHMS (DSA)

============================================================
1. WHAT IS DATA?
============================================================

Data means raw facts or values that can be processed by a computer.

Examples:
- 10
- "Bhargav"
- 3.14
- A list of student marks
- A collection of names

Data becomes useful when it is organized and processed properly.


============================================================
2. WHAT IS A DATA STRUCTURE?
============================================================

A Data Structure is a way of organizing and storing data in a computer so
that it can be accessed, modified, and processed efficiently.

Simple definition:

Data Structure = A method of organizing data.

Examples:
- Array
- Linked List
- Stack
- Queue
- Tree
- Graph
- Hash Table


WHY DO WE NEED DATA STRUCTURES?

We use data structures because different problems require different ways
of storing and accessing data.

Example:

If we need fast access using an index:
    Array

If we need LIFO behavior:
    Stack

If we need FIFO behavior:
    Queue

If we need hierarchical data:
    Tree

If we need relationships between objects:
    Graph

If we need fast key-value lookup:
    Hash Table


============================================================
3. WHAT IS AN ALGORITHM?
============================================================

An algorithm is a finite sequence of well-defined steps used to solve a
problem or perform a task.

Simple definition:

Algorithm = Step-by-step procedure to solve a problem.

Example: Algorithm to add two numbers

1. Start
2. Take two numbers A and B
3. Calculate SUM = A + B
4. Display SUM
5. Stop


CHARACTERISTICS OF A GOOD ALGORITHM

1. Input
   It may accept zero or more inputs.

2. Output
   It should produce at least one result/output when required.

3. Definiteness
   Every step should be clear and unambiguous.

4. Finiteness
   The algorithm must eventually terminate.

5. Effectiveness
   Each step should be simple enough to actually be performed.


============================================================
4. DATA STRUCTURE VS ALGORITHM
============================================================

Data Structure:
    Describes how data is organized and stored.

Algorithm:
    Describes how a problem is solved or how data is processed.

Example:

Array + Binary Search

Array = Data Structure
Binary Search = Algorithm

Graph + Dijkstra's Algorithm

Graph = Data Structure
Dijkstra = Algorithm


============================================================
5. DATA STRUCTURE CLASSIFICATION
============================================================

Data structures can broadly be classified into:

A. Primitive Data Structures
B. Non-Primitive Data Structures


------------------------------------------------------------
5.1 PRIMITIVE DATA STRUCTURES
------------------------------------------------------------

Primitive data types are the basic data types provided by a programming
language.

Examples in C++:

- int
- char
- float
- double
- bool
- pointers

Example:

int age = 19;
char grade = 'A';
float marks = 81.5;
bool passed = true;


------------------------------------------------------------
5.2 NON-PRIMITIVE DATA STRUCTURES
------------------------------------------------------------

Non-primitive data structures are used to organize collections of data.

They are commonly divided into:

1. Linear Data Structures
2. Non-Linear Data Structures


============================================================
6. LINEAR DATA STRUCTURES
============================================================

In a linear data structure, elements are arranged sequentially.

Common linear data structures:

- Array
- Linked List
- Stack
- Queue
- Deque


------------------------------------------------------------
6.1 ARRAY
------------------------------------------------------------

An array stores elements of the same type in contiguous memory locations.

Example:

int arr[5] = {10, 20, 30, 40, 50};

Visual representation:

[10] [20] [30] [40] [50]
  0    1    2    3    4

Advantages:
- Fast access using index
- Simple to use
- Good cache performance
- Easy to traverse

Disadvantages:
- Fixed-size arrays cannot easily grow
- Insertion/deletion in the middle can be expensive


------------------------------------------------------------
6.2 LINKED LIST
------------------------------------------------------------

A linked list consists of nodes.

Each node usually contains:
1. Data
2. A pointer/reference to another node

Example:

[10 | *] -> [20 | *] -> [30 | NULL]

Advantages:
- Dynamic size
- Easy insertion/deletion when the position/node is known

Disadvantages:
- Extra memory is needed for pointers
- No direct/random access like arrays
- Traversal can be slower than arrays


------------------------------------------------------------
6.3 STACK
------------------------------------------------------------

A stack follows:

LIFO = Last In, First Out

Example:

        TOP
         |
        [30]
        [20]
        [10]

The last element inserted is the first one removed.

Main operations:
- PUSH: Insert an element
- POP: Remove the top element
- PEEK: View the top element
- isEmpty: Check whether stack is empty
- isFull: Check whether stack is full (for fixed-size array stack)

Applications:
- Undo/Redo
- Function calls
- Expression conversion
- Parentheses matching
- Backtracking


------------------------------------------------------------
6.4 QUEUE
------------------------------------------------------------

A queue follows:

FIFO = First In, First Out

Example:

FRONT -> [10] [20] [30] <- REAR

The first element inserted is the first element removed.

Main operations:
- ENQUEUE: Insert an element
- DEQUEUE: Remove an element
- FRONT/PEEK: View the front element
- isEmpty
- isFull

Applications:
- CPU scheduling
- Printer queues
- Task processing
- Breadth First Search (BFS)


------------------------------------------------------------
6.5 DEQUE
------------------------------------------------------------

Deque means Double-Ended Queue.

Insertion and deletion can happen from both ends.

Example:

<-> [10] [20] [30] [40] <->

It combines properties of stacks and queues.


============================================================
7. NON-LINEAR DATA STRUCTURES
============================================================

In non-linear data structures, elements are not arranged in one simple
sequence.

Major examples:
- Trees
- Graphs


------------------------------------------------------------
7.1 TREE
------------------------------------------------------------

A tree represents hierarchical relationships.

Example:

             50
            /            30    70
         / \    /        20  40  60  80

Important terms:
- Root: Topmost node
- Parent: Node having children
- Child: Node connected below a parent
- Leaf: Node with no children
- Edge: Connection between two nodes
- Height: Longest path from a node to a leaf


Types of trees include:
- Binary Tree
- Binary Search Tree (BST)
- Heap
- AVL Tree
- B-Tree
- B+ Tree


------------------------------------------------------------
7.2 GRAPH
------------------------------------------------------------

A graph is a collection of vertices (nodes) and edges (connections).

Example:

A ----- B
|       |
|       |
C ----- D

Graphs are useful for representing:
- Social networks
- Maps
- Computer networks
- Road networks
- Dependencies
- Relationships

Types:
- Directed graph
- Undirected graph
- Weighted graph
- Unweighted graph


============================================================
8. HASH TABLE
============================================================

A hash table stores data using key-value relationships.

Example:

"Bhargav" -> 19
"Rahul"   -> 21
"John"    -> 25

A hash function converts a key into an index/location.

Hash tables are designed to provide very fast average-case lookup,
insertion, and deletion.

Examples:
- C++ unordered_map
- Python dictionary (dict)


============================================================
9. ABSTRACT DATA TYPE (ADT)
============================================================

ADT = Abstract Data Type

An ADT defines WHAT operations a data type should support without
specifying HOW those operations are implemented.

Simple definition:

ADT = WHAT
Implementation = HOW

Example: Stack ADT

A Stack should support operations such as:
- push()
- pop()
- peek()
- isEmpty()

The Stack ADT does not require a specific implementation.

A stack can be implemented using:
- Array
- Linked List

Both can implement the same Stack ADT.

Important:

ADT describes behavior and operations.
Data structure describes the actual organization/implementation.


============================================================
10. DATA STRUCTURE VS ADT
============================================================

ADT:
    Defines the logical behavior and operations.

Data Structure:
    Provides a concrete way to store and implement the data.

Example:

Stack ADT:
    push
    pop
    peek

Possible implementations:
    Array
    Linked List


============================================================
11. BASIC OPERATIONS ON DATA STRUCTURES
============================================================

Common operations include:

1. Traversal
   Visiting each element of a data structure.

2. Insertion
   Adding a new element.

3. Deletion
   Removing an element.

4. Searching
   Finding a particular element.

5. Sorting
   Arranging elements in a particular order.

6. Updating
   Changing an existing value.

7. Merging
   Combining two data structures.


============================================================
12. WHAT IS TIME COMPLEXITY?
============================================================

Time complexity describes how the amount of work performed by an
algorithm grows as the input size increases.

It does NOT simply mean the exact number of seconds an algorithm takes.

We usually represent input size using n.

Example:

for(int i = 0; i < n; i++)
    cout << i;

The loop runs n times.

Time complexity = O(n)


WHY DO WE NEED TIME COMPLEXITY?

Two algorithms may solve the same problem but one may become extremely
slow when the input becomes large.

Time complexity helps us compare the efficiency and scalability of
algorithms.


============================================================
13. COMMON TIME COMPLEXITIES
============================================================

From generally better growth to worse growth:

O(1)
O(log n)
O(n)
O(n log n)
O(n^2)
O(n^3)
O(2^n)
O(n!)


------------------------------------------------------------
13.1 O(1) - CONSTANT
------------------------------------------------------------

The amount of work does not depend on the size of the input.

Example:

int x = arr[5];

Complexity:
O(1)


------------------------------------------------------------
13.2 O(log n) - LOGARITHMIC
------------------------------------------------------------

The problem size is repeatedly reduced, often by half.

Example:
Binary Search

Complexity:
O(log n)


------------------------------------------------------------
13.3 O(n) - LINEAR
------------------------------------------------------------

Work grows directly with input size.

Example:

for(int i = 0; i < n; i++)
    cout << arr[i];

Complexity:
O(n)


------------------------------------------------------------
13.4 O(n log n)
------------------------------------------------------------

Common in efficient sorting algorithms.

Examples:
- Merge Sort
- Heap Sort
- Average-case Quick Sort

Complexity:
O(n log n)


------------------------------------------------------------
13.5 O(n^2) - QUADRATIC
------------------------------------------------------------

Often appears with nested loops.

Example:

for(int i = 0; i < n; i++)
{
    for(int j = 0; j < n; j++)
    {
        cout << i << j;
    }
}

Complexity:
O(n^2)


------------------------------------------------------------
13.6 O(2^n) - EXPONENTIAL
------------------------------------------------------------

The amount of work can double as input increases.

Often appears in certain recursive/brute-force algorithms.

Complexity:
O(2^n)


------------------------------------------------------------
13.7 O(n!) - FACTORIAL
------------------------------------------------------------

Extremely fast growth.

Often appears in brute-force solutions involving permutations.

Complexity:
O(n!)


============================================================
14. ASYMPTOTIC NOTATIONS
============================================================

Asymptotic notation describes the growth of an algorithm as the input
size becomes very large.

The three major notations are:

1. Big-O: O
2. Big-Omega: Ω
3. Big-Theta: Θ


------------------------------------------------------------
14.1 BIG-O - O()
------------------------------------------------------------

Big-O represents an upper bound on the growth of an algorithm.

It is commonly used to describe worst-case complexity.

Example:

Linear Search:
Worst case -> O(n)


------------------------------------------------------------
14.2 BIG-OMEGA - Ω()
------------------------------------------------------------

Big-Omega represents a lower bound on the growth of an algorithm.

It is commonly associated with the best-case analysis.

Example:

Linear Search:
Best case -> Ω(1)


------------------------------------------------------------
14.3 BIG-THETA - Θ()
------------------------------------------------------------

Big-Theta represents a tight bound.

It means the algorithm grows asymptotically at the same rate from
both the upper and lower bound perspective.

Example:

A loop that always executes n times:

for(int i = 0; i < n; i++)
    cout << i;

Complexity:
Θ(n)


IMPORTANT:

Do NOT memorize:

Theta = average case.

That is a common oversimplification and is technically incorrect.

Correct idea:

O      = Upper Bound
Ω      = Lower Bound
Θ      = Tight Bound

They can be used to describe different kinds of bounds, while
best/worst/average refer to cases of an algorithm's input/execution.


============================================================
15. SPACE COMPLEXITY
============================================================

Space complexity describes how much additional memory an algorithm needs
as the input size grows.

Example:

int x;

This uses constant extra space.

Space complexity:
O(1)


Example:

int arr[n];

This requires space proportional to n.

Space complexity:
O(n)


TIME COMPLEXITY vs SPACE COMPLEXITY

Time complexity:
    How computation/work grows.

Space complexity:
    How memory usage grows.


============================================================
16. BEST, AVERAGE, AND WORST CASE
============================================================

An algorithm can behave differently for different inputs.

1. Best Case
   The input that causes the minimum amount of work.

2. Average Case
   The expected/typical amount of work over inputs under a specified
   distribution or assumption.

3. Worst Case
   The input that causes the maximum amount of work.

Example: Linear Search

Array:
[10, 20, 30, 40, 50]

Search for 10:
Best case -> 1 comparison -> Ω(1)

Search for 50:
Worst case -> n comparisons -> O(n)

Average case:
The number of comparisons depends on where the element usually occurs.


============================================================
17. BASIC ALGORITHM ANALYSIS
============================================================

To find the time complexity of simple code:

Step 1:
Identify the input size, usually n.

Step 2:
Count how many times the important operation executes.

Step 3:
Ignore constants and lower-order terms for asymptotic analysis.

Examples:

Example 1:

for(int i = 0; i < n; i++)
    cout << i;

Runs n times.

Complexity:
O(n)


Example 2:

for(int i = 0; i < n; i++)
{
    for(int j = 0; j < n; j++)
        cout << i << j;
}

Runs n * n times.

Complexity:
O(n^2)


Example 3:

int i = 1;
while(i < n)
{
    i = i * 2;
}

Values:
1, 2, 4, 8, 16, ...

Complexity:
O(log n)


============================================================
18. STACK COMPLEXITY
============================================================

For a typical array-based stack:

push()       -> O(1)
pop()        -> O(1)
peek()       -> O(1)
isEmpty()    -> O(1)
isFull()     -> O(1)

These operations work on the top of the stack.


============================================================
19. QUEUE COMPLEXITY
============================================================

For a typical array-based queue:

enqueue()    -> O(1)
dequeue()    -> O(1)
peek/front   -> O(1)
isEmpty()    -> O(1)

A circular queue also allows efficient reuse of empty positions.


============================================================
20. LINEAR QUEUE VS CIRCULAR QUEUE
============================================================

Linear Queue:

FRONT -> [10] [20] [30] [ ] [ ]

After removing elements from the front, empty positions may remain
unused if rear has already reached the end.

Circular Queue:

The last position is connected logically back to the first position.

This allows previously freed positions to be reused.

Advantages of circular queue:
- Better memory utilization
- Reuses empty positions
- Avoids unnecessary shifting
- Efficient enqueue/dequeue operations


============================================================
21. STACK VS QUEUE
============================================================

STACK:
LIFO
Last In, First Out

Example:
Stack of plates

QUEUE:
FIFO
First In, First Out

Example:
People standing in a line


============================================================
22. COMMON DATA STRUCTURE PROGRESSION
============================================================

A useful learning order is:

1. Arrays
2. Linked Lists
3. Stacks
4. Queues
5. Circular Queues
6. Deques
7. Hash Tables
8. Trees
9. Binary Search Trees
10. Heaps / Priority Queues
11. Graphs
12. Advanced trees and graph structures


============================================================
23. IMPORTANT ALGORITHMS TO LEARN LATER
============================================================

Searching:
- Linear Search
- Binary Search

Sorting:
- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Heap Sort

Trees:
- Tree Traversals
- BST operations
- Heap operations

Graphs:
- BFS
- DFS
- Dijkstra's Algorithm
- Prim's Algorithm
- Kruskal's Algorithm

These algorithms are built on top of data structures and are used to
solve specific problems efficiently.


============================================================
24. KEY TERMS TO REMEMBER
============================================================

Data:
    Raw facts or values.

Data Structure:
    Way of organizing and storing data.

Algorithm:
    Step-by-step procedure for solving a problem.

ADT:
    Logical definition of a data type and its operations, independent
    of implementation.

Time Complexity:
    Growth of computational work with input size.

Space Complexity:
    Growth of memory usage with input size.

LIFO:
    Last In, First Out.

FIFO:
    First In, First Out.

Traversal:
    Visiting elements of a data structure.

Searching:
    Finding an element.

Sorting:
    Arranging elements in an order.

Node:
    Basic element used in structures such as linked lists and trees.

Pointer:
    A variable that stores a memory address.


============================================================
25. ONE-PAGE MENTAL MAP
============================================================

                    DSA
                     |
          +----------+----------+
          |                     |
    DATA STRUCTURES         ALGORITHMS
          |                     |
     +----+----+          Searching
     |         |           Sorting
   Linear   Non-Linear     Traversal
     |         |
  Array      Tree
  Linked     Graph
  List
  Stack
  Queue
  Deque

                     |
                  ANALYSIS
                     |
              +------+------+
              |             |
         Time Complexity  Space Complexity
              |
        Asymptotic Notation
              |
        O   Ω   Θ


============================================================
26. EXAM-READY DEFINITIONS
============================================================

DATA STRUCTURE:
"A data structure is a method of organizing and storing data so that
operations can be performed on it efficiently."

ALGORITHM:
"An algorithm is a finite sequence of well-defined steps used to solve
a particular problem."

ADT:
"An Abstract Data Type is a logical model that defines a data type by
its behavior and supported operations without specifying its
implementation."

TIME COMPLEXITY:
"Time complexity describes the growth of the running time or number of
basic operations of an algorithm with respect to input size."

SPACE COMPLEXITY:
"Space complexity describes the amount of memory required by an
algorithm as a function of input size."

BIG-O:
"Big-O notation represents an asymptotic upper bound on the growth of
an algorithm."

BIG-OMEGA:
"Big-Omega notation represents an asymptotic lower bound on the growth
of an algorithm."

BIG-THETA:
"Big-Theta notation represents an asymptotically tight bound on the
growth of an algorithm."


============================================================
END
============================================================

Core idea to remember:

DATA STRUCTURE = HOW DATA IS ORGANIZED
ALGORITHM       = HOW THE PROBLEM IS SOLVED
ADT             = WHAT OPERATIONS ARE PROVIDED
TIME COMPLEXITY = HOW WORK GROWS
SPACE COMPLEXITY= HOW MEMORY GROWS
*/