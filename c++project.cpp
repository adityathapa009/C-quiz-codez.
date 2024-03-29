#include <iostream> 
#include <string>


char guess; //Answer user inputs for question.
int total;  //Total score.


//4 possible answers, correct answer and question score.
class Question{
public:
    void setValues(std::string, std::string, std::string, std::string, std::string, char, int); 
    void askQuestion(); 

private:
    std::string Question_Text;
    std::string answer_1;
    std::string answer_2;
    std::string answer_3;
    std::string answer_4;

    char correct_answer;
    int Question_Score;
};

int main()
{
    //Program Title designed with an ASCII art generator.
    //Link: http://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20
    std::cout << R"(
 _    _      _                            _          _   _            _____              _____       _     
| |  | |    | |                          | |        | | | |          /  __ \ _     _    |  _  |     (_)    
| |  | | ___| | ___ ___  _ __ ___   ___  | |_ ___   | |_| |__   ___  | /  \/| |_ _| |_  | | | |_   _ _ ____
| |/\| |/ _ \ |/ __/ _ \| '_ ` _ \ / _ \ | __/ _ \  | __| '_ \ / _ \ | |  |_   _|_   _| | | | | | | | |_  /
\  /\  /  __/ | (_| (_) | | | | | |  __/ | || (_) | | |_| | | |  __/ | \__/\|_|   |_|   \ \/' / |_| | |/ / 
 \/  \/ \___|_|\___\___/|_| |_| |_|\___|  \__\___/   \__|_| |_|\___|  \____/             \_/\_\\__,_|_/___|

----------------------------------------------By:ADITYA THAPA---------------------------------------------
    )" << "\n";

    std::cout << "Press enter to start...\n";
    std::cin.get();

    //Get the user's name.
    std::string name;
    std::cout << "What's your name?\n";
    std::cin >> name;
    std::cout << "\n";

    //Ask if user wants to start quiz.
    std::string respond;
    std::cout << "Are you ready to start the quiz, " << name << "? Yes/No.\n";
    std::cin >> respond;

    //If user says yes, the quiz begins.
    if (respond == "Yes" || respond == "yes") {
        std::cout << "\n";
        std::cout << "Good luck!\n";
        std::cout << "\n";
        std::cout << "Press enter to continue.";
        std::cin.get();
        std::cin.ignore();
    }else{
        std::cout << "\n";
        std::cout << "Goodbye!\n";
        std::cin.ignore();
        std::cin.get();
        return 0;
    }//Else, quiz ends.

    //Instances of the questions. 
    //25 questions total generated for this quiz. 
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;
    Question q11;
    Question q12;
    Question q13;
    Question q14;
    Question q15;
    Question q16;
    Question q17;
    Question q18;
    Question q19;
    Question q20;
    Question q21;
    Question q22;
    Question q23;
    Question q24;
    Question q25;
    Question q26;
    Question q27;
    Question q28;
    Question q29;
    Question q30;
    Question q31;
    Question q32;
    Question q33;
    Question q34;
    Question q35;
    Question q36;
    Question q37;
    

    //Calling the member function setValues. 
    //Question is set, 4 answer choices, the correct char answer, 4 points per question.
    q1.setValues("1. What command prints something to the screen?",
        "cin",
        "cout",
        "char",
        "print",
        'b',
        4);

    q2.setValues("2. Which of the following categories does C++ belong to?",
        "Operating System",
        "High-level programming language",
        "low-level programming language",
        "Compiler",
        'b',
        4);

    q3.setValues("3. Which command is correctly written?",
        "cout >>",
        "cin <<",
        "cout <>",
        "cin >>",
        'd',
        4);

    q4.setValues("4. What is this called, <iostream>?",
        "directive",
        "pre-processor directive",
        "file",
        "command",
        'b',
        4);

    q5.setValues("5. What punctuation ends most lines of code?",
        " . ",
        " ; ",
        " : ",
        " ' ",
        'b',
        4);

    q6.setValues("6. Which of the following is a correct comment?",
        "*/ Comments */",
        "** Comment **",
        "/* Comment */",
        "{ Comment }",
        'c',
        4);

    q7.setValues("7. Which of the following is the boolean operator for logical-and?",
        "&",
        "|",
        "&&",
        "|&",
        'c',
        4);

    q8.setValues("8. Which of the following shows the correct syntax for an if statement?",
        "if expression",
        "if {expression",
        "if (expression)",
        "expression if",
        'c',
        4);

    q9.setValues("9. How many times is a do while loop guaranteed to loop?",
        "1",
        "0",
        "Infinitely",
        "Variable",
        'a',
        4);

    q10.setValues("10. A subscipt is a(n) __________ .",
        "element in an array",
        "alternate name for an array",
        "number that represents the highest value stored within an array",
        "number that indicates the position of the particular item in an array",
        'd',
        4);

    q11.setValues("11. Which of the following correctly declares an array?",
        "int anarray[10];",
        "int anarray",
        "anarray{10};",
        "array anarray[10];",
        'a',
        4);

    q12.setValues("12. What is the index number of the last element of an array with 29 elements?",
        "29",
        "28",
        "0",
        "Programmer-defined",
        'b',
        4);

    q13.setValues("13. Which is not a loop structure?",
        "for",
        "do while",
        "while",
        "repeat until",
        'd',
        4);

    q14.setValues("14. When does the code block following while(x < 100) execute?",
        "When x is less than one hundred",
        "When x is greater than one hundred",
        "When x is equal to one hundred",
        "While it wishes",
        'a',
        4);

    q15.setValues("15. Most programmers use a for loop __________ .",
        "for every loop they write",
        "when a loop will not repeat",
        "when they do not know the exact number of times a loop will repeat",
        "when they know the exact number of times a loop will repeat",
        'd',
        4);

    q16.setValues("16. Adding 1 to a  variable is also called __________ it.",
        "digesting",
        "incrementing",
        "decrementing",
        "resetting",
        'b',
        4);

    q17.setValues("17. What is required to avoid falling through from one case to the next?",
        "end;",
        "break;",
        "Stop;",
        "A semicolon",
        'b',
        4);

    q18.setValues("18. A __________ is a variable that you set to indicate whether some event has occured.",
        "subscript",
        "banner",
        "counter",
        "flag",
        'd',
        4);

    q19.setValues("19. Identify the C++ compiler of Linux.",
        "cpp",
        "g++",
        "Borland",
        "vc++",
        'b',
        4);

    q20.setValues("20. What is the size of 'int'? ",
        "2",
        "4",
        "8",
        "Compiler dependent",
        'd',
        4);

    q21.setValues("21. Which data type can be used to hold a wide character in C++?",
        "unsigned char;",
        "int",
        "wchar",
        "none of the above.",
        'c',
        4);

    q22.setValues("22. C++ does not support the following",
        "Multilevel inheritance",
        "Hierarchical inheritance",
        "Hybrid inheritance",
        "None of the above.",
        'd',
        4);

    q23.setValues("23. Which is not a protection level provided by classes in C++?",
        "protected",
        "hidden",
        "private",
        "public",
        'b',
        4);

    q24.setValues("24. What purpose do classes serve?",
        "data encapsulation",
        "providing a convenient way of modeling real-world objects",
        "simplifying code reuse",
        "all of the above",
        'd',
        4);

    q25.setValues("25. Who developed the C++ language?",
        "Steve Jobs",
        "Linus Torvalds",
        "Bill Gates",
        "Bjarne Stroustrup",
        'd',
        4);
        
    // Question 26
     q26.setValues("26. What is the time complexity of inserting an element into a set in C++?",
          "O(1)",
          "O(log n)",
          "O(n)",
          "O(n log n)",
          'b',
          4);

// Question 40
      q27.setValues("27. Implement a function to check if a linked list has a cycle.",
          "bool hasCycle(ListNode *head)",
          "ListNode* detectCycle(ListNode *head)",
          "void removeCycle(ListNode *head)",
          "void reverseList(ListNode *head)",
          'a',
          4);

// Question 41
      q28.setValues("28. Write a program to find the longest common subsequence of two strings.",
          "string longestCommonSubsequence(string text1, string text2)",
          "int longestCommonSubsequenceLength(string text1, string text2)",
          "void printLongestCommonSubsequence(string text1, string text2)",
          "vector<string> allLongestCommonSubsequences(string text1, string text2)",
          'a',
          4);

// Question 42
        q29.setValues("29. Implement the quicksort algorithm in C++.",
          "void quicksort(vector<int>& arr)",
          "vector<int> quicksort(vector<int> arr)",
          "void quicksort(int arr[], int low, int high)",
          "vector<int> quicksort(int arr[], int n)",
          'c',
          4);

// Question 43
       q30.setValues("30. What is the output of the following code?\n"
          "int x = 5;\n"
          "cout << x++ + ++x;",
          "10",
          "11",
          "12",
          "Undefined behavior",
          'c',
          4);

// Question 44
       q31.setValues("31. Implement a function to calculate the factorial of a non-negative integer.",
          "int factorial(int n)",
          "long long factorial(int n)",
          "void calculateFactorial(int n)",
          "int factorialRecursive(int n)",
          'b',
          4);

// Question 45
        q32.setValues("32. Write a program to implement a binary search tree in C++.",
          "class BST {...};",
          "void insertNode(Node* root, int key)",
          "Node* search(Node* root, int key)",
          "void deleteNode(Node* root, int key)",
          'a',
          4);

// Question 46
        q33.setValues("33. Implement a function to reverse a linked list in C++.",
          "ListNode* reverseList(ListNode* head)",
          "void reverse(ListNode* head)",
          "ListNode* flipList(ListNode* head)",
          "void reverseLinkedList(ListNode* head)",
          'a',
          4);

// Question 47
        q34.setValues("34. What is the output of the following code?\n"
          "int arr[] = {1, 2, 3};\n"
          "cout << arr[3];",
          "1",
          "2",
          "3",
          "Undefined behavior",
          'd',
          4);

// Question 48
        q35.setValues("35. Implement a function to check if a given number is a prime number.",
          "bool isPrime(int n)",
          "void checkPrime(int n)",
          "int findPrime(int n)",
          "bool primeCheck(int n)",
          'a',
          4);

// Question 49
       q36.setValues("36. Write a program to find the intersection of two arrays.",
          "vector<int> intersection(vector<int>& nums1, vector<int>& nums2)",
          "void findIntersection(int arr1[], int arr2[], int n1, int n2)",
          "int* getIntersection(int arr1[], int arr2[], int n1, int n2)",
          "void printIntersection(int arr1[], int arr2[], int n1, int n2)",
          'a',
          4);

// Question 50
       q37.setValues("37. Implement a function to calculate the power of a number recursively.",
          "int power(int base, int exponent)",
          "void calculatePower(int base, int exponent)",
          "int calculatePowerRecursive(int base, int exponent)",
          "void powerOfNumber(int base, int exponent)",
          'c',
          4);
    

    //Calling askQuestion member function. 
    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();
    q11.askQuestion();
    q12.askQuestion();
    q13.askQuestion();
    q14.askQuestion();
    q15.askQuestion();
    q16.askQuestion();
    q17.askQuestion();
    q18.askQuestion();
    q19.askQuestion();
    q20.askQuestion();
    q21.askQuestion();
    q22.askQuestion();
    q23.askQuestion();
    q24.askQuestion();
    q25.askQuestion();
    q26.askQuestion();
    q27.askQuestion();
    q28.askQuestion();
    q29.askQuestion();
    q30.askQuestion();
    q31.askQuestion();
    q32.askQuestion();
    q33.askQuestion();
    q34.askQuestion();
    q35.askQuestion();
    q36.askQuestion();
    q37.askQuestion();
    
    
    std::cout << "Your Total Score is " << total << " out of 100!\n";
    std::cout << "\n";

    //User scores above a 69, user passes the quiz.
    //Display message created with ASCII art generator.
    //Link: http://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20
    if (total > 69) {
        std::cout << R"(

__  __               ____                           ____
\ \/ /___  __  __   / __ \____ ______________  ____/ / /
 \  / __ \/ / / /  / /_/ / __ `/ ___/ ___/ _ \/ __  / / 
 / / /_/ / /_/ /  / ____/ /_/ (__  |__  )  __/ /_/ /_/  
/_/\____/\__,_/  /_/    \__,_/____/____/\___/\__,_(_)   

    )" << "\n";
        std::cout << "\n";
        std::cin.get();
        std::cin.ignore();
        return 0;
    }
    else
    {
        std::cout << "You failed... Sorry, better luck next time.\n";
        std::cout << "\n";
    }
    std::cin.get();
    std::cin.ignore();
    return 0;
}

//Function called for question guidelines. 
void Question::setValues(std::string q, std::string a1, std::string a2, std::string a3, std::string a4, char ca, int pa)
{
    Question_Text = q;
    answer_1 = a1;
    answer_2 = a2;
    answer_3 = a3;
    answer_4 = a4;
    correct_answer = ca;
    Question_Score = pa;
}
//Format for possible answers displayed when program executes. 
void Question::askQuestion()
{
    std::cout << "\n";
    std::cout << Question_Text << "\n";
    std::cout << "a. " << answer_1 << "\n";
    std::cout << "b. " << answer_2 << "\n";
    std::cout << "c. " << answer_3 << "\n";
    std::cout << "d. " << answer_4 << "\n";
    std::cout << "\n";

    //User enters their answer.
    std::cout << "What is your answer?" << "\n";
    std::cin >> guess;
    //If their answer is correct, message is displayed and 4 points are added to their score.
    if (guess == correct_answer) {
        std::cout << "\n";
        std::cout << "Correct!" << "\n";
        total = total + Question_Score;
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
    else //If their answer is incorrect, message is displayed, no points added. 
         //Correct answer displayed. 
    {
        std::cout << "\n";
        std::cout << "Sorry, you're wrong..." << "\n";
        std::cout << "The correct answer is " << correct_answer << "." << "\n";
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
}