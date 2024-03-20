## CGPA Calculator - README

This code calculates the CGPA (Cumulative Grade Point Average) for a student based on their marks in five subjects.

**Functions:**

* **input()**: Prompts the user to enter marks for each subject (S1 to S5).
* **grade(int mark)**: Takes a mark as input and returns the corresponding grade point (10 for S, 9 for A, etc.) using a predefined grading scale.
* **calculator()**: Calls the `grade` function for each subject's mark and stores the returned grade points in separate variables (g1, g2, etc.).
* **grading(int mark)**: Takes a mark as input and prints the corresponding letter grade (S, A, B, etc.) to the console.
* **gradingAll()**: Calls the `grading` function for each subject's mark, effectively printing the grades for all subjects.
* **result()**: Calculates the CGPA by averaging the grade points obtained from all subjects and displays the result on the console.

**Running the code:**

1. Save the code as a `.cpp` file (e.g., `cgpa_calculator.cpp`).
2. Compile and run the code using a C++ compiler (e.g., `g++ cgpa_calculator.cpp -o cgpa_calculator`).
3. Execute the compiled program (e.g., `./cgpa_calculator`).

**Input:**

The program will prompt you to enter the marks for each subject (S1 to S5).

**Output:**

* The program will display the calculated CGPA.
* It will also print the letter grade for each subject.

**Notes:**

* The code assumes that the marks are valid integers between 0 and 100.
* You can modify the grading scale in the `grade` function to suit your specific requirements.
