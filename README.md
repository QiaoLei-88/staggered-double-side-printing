# staggered-double-side-printing
Make double side printing as convenient for reading as single side printing.

If you double side print something, the odd pages will apper on the back of the even pages by defalut printing
sequence. Then you can't look at half of consecutive pages at the same time.

Take a five pages article for example, the standard double side printing will give you a layout like:

 1|2 3|4 5

Then it is impossible to look page 1 and 2, page 3 and 4 at the same time.

If you print the article out in such a sequence:

 1|4 2|5 3

you can look at any three consequtive pages at the same time.

This small tool is designed to produce auch a sequence and you can copy and plaste its out put the Adobe reader's print setting window.


Usage:

$ bash build.sh

$ ./po [End Page]

or

$ ./po [Begine Page] [End Page]
