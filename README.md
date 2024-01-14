# C - Stacks, Queues - LIFO, FIFO
**About:** In this project, we created a simple interpreter for Monty ByteCodes. The interpreter reads a bytecode file and executes the bytecode commands.
### The Monty language
The Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.
### Monty byte code files
Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument: [examples](https://github.com/isaquliyev/holbertonschool-monty/tree/master/bytecodes)

## Objectives:
* To know what LIFO and FIFO mean

LIFO and FIFO are acronyms that represent two different methods of inventory valuation used in accounting and financial management. They stand for "Last In, First Out" and "First In, First Out," respectively. These methods help businesses determine the cost of goods sold (COGS) and the value of ending inventory, which are crucial for financial reporting and tax purposes.

* To know what a stack is, and when to use it

A stack is a fundamental data structure in computer science that follows the Last In, First Out (LIFO) principle. This means that the last element added to the stack is the first one to be removed. Think of it as a stack of plates in a cafeteria – you can only take the plate from the top of the stack, and you can only add a plate to the top.

* To know what a queue is, and when to use it

A queue is another fundamental data structure in computer science that follows the First In, First Out (FIFO) principle. In a queue, the first element added is the first one to be removed. Think of it as a line of people waiting for a service – the person who arrives first is the first one to be served, and new arrivals join the back of the line.

* To know the common implementations of stacks and queues


-**Stacks:**

**Array Implementation:**
Fixed-size array with a top pointer.
Push increments the top and adds an element; pop retrieves the element and decrements the top.

**Linked List Implementation:**
Each node in a linked list represents a stack element.
Top is the head of the linked list.
Push involves creating a new node at the head; pop involves removing the head.

-**Queues:**

**Array Implementation:**
Fixed-size array with front and rear pointers.
Enqueue increments the rear and adds an element; dequeue retrieves the element and increments the front.

**Linked List Implementation:
Each node in a linked list represents a queue element.
Front and rear pointers track the head and tail.
Enqueue involves adding a new node at the tail; dequeue involves removing the head.

* To know the most common use cases of stacks and queues

**Most Common Use Cases of Stacks:**

1.Function call management (call stack).
2.Expression evaluation and parsing.
3.Undo mechanisms in applications.
4.Browser history navigation (back and forward).
5.Managing local variables and context in recursion.

**Most Common Use Cases of Queues:**

1.Task scheduling in operating systems.
2.Print job management in printers (print queues).
3.Breadth-first search (BFS) algorithms in graph traversal.
4.Buffering in I/O operations.
5.Handling requests in a first-come, first-served manner.
6.Call center systems for managing incoming calls.

* To know the proper way to use global variables

1.Minimize Usage:
Limit the use of global variables to cases where they are truly necessary.
2.Descriptive Names:
Choose clear and descriptive names for global variables.
3.Explicit Declaration:
Explicitly declare global variables at the beginning of the script or module.
4.Avoid Mutability:
Minimize mutable global state to prevent unintended side effects.
5.Use Constants:
If a global variable should be treated as a constant, use uppercase names.
6.Limit Scope:
Keep the scope of global variables as small as possible.

## General Requirements
* Allowed editors: **vi**, **vim**, **emacs**
* All files is compiled on **Ubuntu 20.04 LTS using gcc**, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**
* All files ends with a new line
* There is **README.md** file at the root of the **holbertonschool_monty**
* Maximum of one global variable is allowed
* No more than 5 functions per file
* The C standard library is allowed
* The prototypes of all the functions were included in the header file called monty.h
* All the header files are include guarded

## FILES
|File|Description|
|---|---|
|[README.md](https://github.com/isaquliyev/holbertonschool-monty/blob/master/README.md)|Information about this repository|
|[main.c](https://github.com/isaquliyev/holbertonschool-monty/blob/master/main.c)|Initialize global variable and read .m files.
|[free_glob.c](https://github.com/isaquliyev/holbertonschool-monty/blob/master/free_glob.c)|Frees global variable end of process and any error case.|
|[get_function.c](https://github.com/isaquliyev/holbertonschool-monty/blob/master/get_function.c)|Gets token and return appropiate function.|
|[_isnumber.c](https://github.com/isaquliyev/holbertonschool-monty/blob/master/_isnumber.c)|Checks string if convertable to integer or not.|
|[input_checker.c](https://github.com/isaquliyev/holbertonschool-monty/blob/master/input_checker.c)|Checks command line arguments.|
|[push.c](https://github.com/isaquliyev/holbertonschool-monty/blob/master/push.c)|Contains push function, which push value into stack or queue.|
|[pall.c](https://github.com/isaquliyev/holbertonschool-monty/blob/master/pall.c)|Prints all values of stack.|
|[pint.c](https://github.com/isaquliyev/holbertonschool-monty/blob/master/pint.c)|Prints top element of stack.|
|[pop.c](https://github.com/isaquliyev/holbertonschool-monty/blob/master/pop.c)|Removes top element of stack.|
|[swap.c](https://github.com/isaquliyev/holbertonschool-monty/blob/master/swap.c)|Swaps the values of top two elements of stack.|
|[add.c](https://github.com/isaquliyev/holbertonschool-monty/blob/master/add.c)|Adds top two elements of stack and make it top.|
|[nop.c](https://github.com/isaquliyev/holbertonschool-monty/blob/master/nop.c)|This instruction doesn't anything.|
|[monty.h](https://github.com/isaquliyev/holbertonschool-monty/blob/master/monty.h)|Including essential libraries and structs for this project.|
## Authors/Collaborators
*	Isa Guliyev-[Github](https://github.com/isaquliyev/)
*	Zeynal Mustafayev-[Github](https://github.com/ZeynalMustafayev/)

## Picture

![alt text](data:image/png;base64,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)
