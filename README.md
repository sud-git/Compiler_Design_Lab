Lab-1
1.     Write a program that reads a source code file (or multi-line input) and:

Detects and classifies comments as:

Ø  Single-line comment: // ...

Ø  Multi-line comment: /* ... */ (may span multiple lines)

Ø  Documentation comment:

§  /** ... */ (JavaDoc-style)

§  /// ... (triple-slash style, treat as doc)

Ignores comment-like patterns inside strings/characters, e.g.
"http://abc.com" or "/* not a comment */"

Reports:

o   Total number of each comment type

o   Line numbers where each comment starts and ends

o   The actual extracted comment text (optional but recommended)

 

2.     Write a program that takes N tokens (space-separated OR one per line) and classifies each token into exactly one category:

 

KEYWORD (use a configurable keyword set; choose one):

 

C keywords (e.g., int, float, return, for, while, struct...)

 

OR Java keywords (e.g., class, public, static, void...)

 

VALID_IDENTIFIER

 

Must follow language rules: starts with letter or _, followed by letters/digits/_

 

Must not be a keyword

 

INVALID_IDENTIFIER with reason:

 

Starts with digit (9abc)

 

Contains illegal characters (a-b, name$)

 

Contains whitespace or punctuation

 

Empty token

 

NUMERIC_LITERAL (extra difficulty)

 

Integer: 0, 10, 123

 

Float: 10.5, 3.0, .5, 5. (decide rule and justify)

 

OPERATOR / SYMBOL (extra difficulty)

 

Operators: + - * / == != <= >= && ||

 

Separators: ; , ( ) { } [ ]

 

Additional Requirements (Advanced)

 

Case sensitivity should follow language rules (C/Java are case-sensitive): Int is identifier, int is keyword.

 

Track and report frequency of each category.

 

Report top 3 most frequent identifiers (if input is many tokens).

 

Provide a symbol table preview: unique identifiers with a generated ID number.
