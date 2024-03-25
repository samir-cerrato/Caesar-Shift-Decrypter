# Caesar-Shift-Decrypter
 A program to decrypt a Caesar shifted string of characters.

Have your
program first read in the encrypted string. Your program should then compute and output the
possible decrypted strings and the corresponding shift amount. You are free to choose the order
in which the possible decrypted strings and corresponding shift amounts are printed, the decrypted string corresponding to using a shift of 0 to encrypt is printed
on the first line, and on the second line the decrypted string corresponding to using a shift of 94 is
printed, rather than incrementing the shift to 1.

In the string, the user can include any ASCII character with decimal code
in the range [32,126], and again this range determines the range of shifts permitted, from 0 to
126-32 = 94. Again, you may assume that the user will enter a string of at most 256 characters,
and you should use fgets to read the string from the keyboard. While most of the work for your
program will be done in the main function, you must write at least one function that is responsible
for performing (or reversing) a Caesar shift. That function might return the result of shifting a
single character, or it might shift many characters in a single call.
