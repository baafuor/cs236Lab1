# cs236Lab1
A lexical analyzer groups characters in an input stream into tokens. A token is a sequence of one or more characters that form a single element of a language (e.g., a symbol, a numerical value, a string literal, or a keyword).

The project is to write a lexical analyzer for a subset of the Datalog language. The Lexer should output the UNDEFINED token if an undefined symbol is found. The input to your Lexer is a text file and the output is a print-out of formatted tokens explained below. Please refer to the project standards for details on how to indicate the program input and where the output should be directed.

A token object is comprised of:

a string - extracted from the file text
a number - the line the token started on
a token type - listed below
The lexical analyzer must use finite state machines to recognize tokens in the input streams. It is recommended that you consider using enumerated types to enumerate the potential states of the machine.

The link provides detailed requirement for this project https://cswiki.cs.byu.edu/cs-236/lexical-analyzer
