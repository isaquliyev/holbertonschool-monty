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
