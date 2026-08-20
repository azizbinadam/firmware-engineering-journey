## What is a variable?
A variable is a container that associated with an address, which holds data.
- ChatGPT refinement:
A variable is a named object used by a program to store a value. It occupies memory, and that memory has an address.

## What is a memory address?
A memory address is the location of where a data is stored.
- ChatGPT refinement:
A memory address identifies a location in memory where data can be stored.

## What is a pointer?
A pointer points to the memory location its pointed.
- ChatGPT refinement:
A pointer is a variable whose value is an address.

## What does &x mean?
The address of x.

## What does *p mean?
P is a pointer.
- ChatGPT refinement:
Dereference p: access the value at the address stored in p.

## Why did int *p; *p = 100; cause a problem?
It does not cause an error. *p do not have a memory location to go or point to. So, in the end, *p prints 100 with different memory address from x. As for x, it prints the data it assigned to, which is 42.
- ChatGPT correction:
The pointer variable is created, but have not initialized. It contains some indeterminate value. It does not automatically point somewhere useful. Then, *p = 100; means "Take whatever address happens to be inside p, go there, and write 100." The program has no gurantee that the address is valid.
This is called undefined behaviour. Once your program performs undefined behavior, you cannot rely on what happens next. It might:
- crash;
- appear to work;
- print something strange;
- overwrite unrelated memory;
- behave differently every time;
- behave differently after you recompile;
- behave differently on another computer;
- behave differently with optimization enabled.
So if you happened to observe:
"*p prints 100 at a different memory address"
that doesn't mean the program successfully created another memory location for *p.
It means the program has already entered undefined behavior. This distinction is extremely important.

## Why are pointers important for firmware?
Pointers important for firmware because it is crucial to manipulate the registers of a hardware, configuring its state.
ChatGPT add on:
However, don't reduce the importance of pointers only to registers. They're also heavily used for:
- buffers;
- arrays;
- structures;
- drivers;
- DMA;
- memory management;
- data structures;
- APIs;
- hardware interfaces.