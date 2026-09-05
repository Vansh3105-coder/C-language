#include <stdio.h>
#include <ctype.h>

int askquestion(char ques[], char o1[], char o2[], char o3[], char o4[], char correctans); // Function prototype

int main(void)
{
    int score, a, b;
    do
    {

        score = 0;
        printf("Choose the quiz you want to participate in:\n");
        printf("1) Physics Quiz\n2) Maths Quiz\n3) C language Quiz\n4) Miscellaneous Quiz\n");
        scanf("%d", &a);
        if (a == 1)
        {
            // Function call
            score += askquestion("What type of physical quantity work done is?", "Vector", "Scalar", "Can't Say", "None of these", 'B');
            score += askquestion("Who proposed 'The Special Theory of Relativity'?", "Isaac Newton", "Galelio Galilie", "Albert Einstein", "Stephen Hawking", 'C');
            score += askquestion("How many coordinate systems are there in 3-D space?", "3", "2", "1", "4", 'A');
            score += askquestion("Which one of the following gives a scalar as answer?", "Curl", "Divergence", "Gradient", "None of these", 'B');
            score += askquestion("Which one of the following gives a vector as answer?", "Curl", "Divergence", "Gradient", "Both A and C", 'D');
            printf("Your final score is %d out of 5.\n", score);
        }
        else if (a == 2)
        {
            // Function call
            score += askquestion("What is the exact value of sin^2(27) + sin^2(63)?", "0", "1", "2", "1/2", 'B');
            score += askquestion("For an nxn matrix A, the sum of its eigenvalues is always equal to its:", "Determinant", "Trace", "Nullity", "Rank", 'B');
            score += askquestion("If A is an orthogonal matrix, what are the possible values of det(A)?", "Always 0", "Always 1", "Always -1", "+1 and -1", 'D');
            score += askquestion("If the curl of a vector field F is zero (curl F = 0), then F is called:", "Solenoidal", "Conservative/Irrotational", "Harmonic", "Incompressible", 'B');
            score += askquestion("According to the Cayley-Hamilton Theorem, every square matrix satisfies its own:", "Characteristic Equation", "Differential-equation", "Rank-nulllity equation", "Eigenvector equation", 'A');
            printf("Your final score is %d out of 5.\n", score);
        }
        else if (a == 3)
        {
            // Function call
            score += askquestion("How many keywords are there in C language?", "31", "33", "32", "34", 'C');
            score += askquestion("What is the result of (0 && printf(\"Hello\")) in C?", "Prints Hello", "Prints nothing (short-circuit)", "Compilation Error", "Runtime Error", 'B');
            score += askquestion("Which keyword prevents a variable from being cached in CPU registers?", "register", "volatile", "static", "const", 'B');
            score += askquestion("What is the default return type of an unprototyped C function (C89)?", "void", "int", "char", "float", 'B');
            score += askquestion("What is the specifier used to print a pointer address in printf?", "%u", "%d", "%p", "%x", 'C');
            score += askquestion("What is a pointer that points to a deallocated memory location called?", "Null pointer", "Dangling pointer", "Void pointer", "Wild pointer", 'B');
            score += askquestion("What is the result of applying sizeof to a variable length array (VLA)?", "Compile-time constant", "Evaluated at runtime", "Always 0", "Undefined behavior", 'B');
            score += askquestion("What does the %n format specifier in printf() do?", "Prints newline", "Stores characters printed so far", "Prints NULL", "Reads integer", 'B');
            score += askquestion("How many bytes of memoery does int keyword consumes?", "32", "4", "8", "2", 'B');
            score += askquestion("Which character always terminates a string in C?", "\\n", "\\0", "\\t", ";", 'B');
            printf("Your final score is %d out of 10.\n", score);
        }
        else if (a == 4)
        {
            // Function call
            score += askquestion("In which format of cricket Virat Kohli completed his 71st international century?", "ODIs", "Test", "T20s", "IPL", 'C');
            score += askquestion("Who said these iconic line 'Dhoni Finishes off in style'?", "Ravi Shastri", "Tom Moody", "Robin Jackman", "Kepler Wessels", 'A');
            score += askquestion("Which company originally developed the Java programming language?", "Microsoft", "Sun Microsystems", "Apple", "IBM", 'B');
            score += askquestion("Which country gifted the Statue of Liberty to the United States?", "United Kingdom", "Germany", "France", "Italy", 'C');
            score += askquestion("What is the name of the deepest point in the world's oceans?", "Java Trench", "Mariana Trench", "Puerto Rico Trench", "Sunda Trench", 'B');
            printf("Your final score is %d out of 5.\n", score);
        }
        else
        {
            printf("Please,choose between the given options.\n");
        }
        do
        {
            printf("Want to participate again? (1 for yes and 0 for no)\n");
            scanf("%d", &b);
            if (b != 0 && b != 1)
            {
                printf("Please enter only 0 or 1.\n");
            }
        } while (b != 0 && b != 1);
    } while (b == 1);
    printf("Thanks for taking this quiz.\n");
    printf("Hope, it helped you in a way.\n");
}



// Function definition
int askquestion(char ques[], char o1[], char o2[], char o3[], char o4[], char correctans)
{
    char ans;
    printf("%s\n", ques);
    printf("A) %s\n", o1);
    printf("B) %s\n", o2);
    printf("C) %s\n", o3);
    printf("D) %s\n", o4);
    scanf(" %c", &ans);
    if (toupper(ans) == correctans)
    {
        printf("Correct answer!\n");
        return 1;
    }
    else
    {
        printf("Wrong answer\n");
        return 0;
    }
}
