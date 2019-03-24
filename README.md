# Contents

## Code Jam 2018

### Trouble Sort:
 
 The fundamental flaw in Trouble Sort: even-index elements are compared with other even-index elements, and odd-index elements are compared with other odd-index elements, but even-index and odd-index elements are never compared with each other.
 
 

### Saving The University Again:

As long as there is an instance of CS in the current program, we always swap the latest (rightmost) instance. After each swap, we can recompute the damage and check whether it is still more than D. If it is not, then we can terminate the program. If we ever run out of instances of CS to swap, but the damage that the program will cause is still more than D, then the universe is doomed

### Go-gopher

This problem is interactive, which means that the concepts of input and output are different than in standard Code Jam problems. (have to flush after print the output: fflush(stdout) in order to get the next input)


## Code Jam 2017

### Oversize Pancake Flipper

From left to right, when it is '-', flip and count. finally check if it all '+'.


### Tiny Number

Find the the last tidy number: 10-based number that the digit in higher position is smaller or equal than lower position: some examples of this are 8, 123, 555, and 224488.  Converting number to array and from the higher to lower position find the first that not meet the condition, minus one and change the rest part after than to be 9.
