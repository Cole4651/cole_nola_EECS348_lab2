# AI Usage Log

## Interaction 1
### User
Can you define a function, isOdd, to determine whether a number is odd.

### Assistant Summary
Inspected the empty `isOdd.c` file and added an `int isOdd(int number)` function using the modulo operator. Compiled it with `cc -Wall -Wextra -Werror -c isOdd.c` to verify it compiled without warnings.

## Interaction 2
### User
How would we integrate this into the main file?

### Assistant Summary
Checked the project and found that no `main.c` file existed. Explained that `main.c` could declare `isOdd`, call it, and be compiled together with `isOdd.c`.

## Interaction 3
### User
Can you integrate this into main.c

### Assistant Summary
Created `main.c` with a declaration for `isOdd`, a sample integer, and output indicating whether the number was odd or even. Compiled and ran `main.c` with `isOdd.c`, producing `7 is odd`.

## Interaction 4
### User
Can you make an isEven.c file

### Assistant Summary
Created `isEven.c` with an `int isEven(int number)` function that returns true when the number is divisible by 2. Compiled it with strict warnings to verify the file.

## Interaction 5
### User
How would you create a makefile that compiles the program using multiple source files?

### Assistant Summary
Created a `Makefile` containing `all`, build, pattern-rule, and `clean` targets. The Makefile compiles `main.c`, `isOdd.c`, and `isEven.c` into an executable named `program`. Ran `make`, ran the program successfully, and then ran `make clean`.

## Interaction 6
### User
Can you make it so that the user is asked for an integer

### Assistant Summary
Updated `main.c` to prompt the user with `Enter an integer: ` and read input with `scanf`. Added validation for non-integer input. Built and tested the program with valid input (`8`, producing `8 is even`) and invalid input (`abc`, producing an error message).

## Interaction 7
### User
[Provided a Canvas course file link.]

### Assistant Summary
Tried to retrieve the Canvas file, but the link redirected to KU single sign-on and required authentication. Reported that the file could not be accessed without login and requested that its contents be pasted or uploaded.

## Interaction 8
### User
[Provided the parsed text of `Gen-AI Log Guide.pdf`.]

### Assistant Summary
Reviewed the guide. It explains that students should honestly document their AI interactions in a Markdown file beginning with `# AI Usage Log`, then submit the resulting `ai_usage_log.md` file. Created this log from the conversation history.
