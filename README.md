# 🧠 Quiz Game (C Programming)

## 📌 Project Description

The Quiz Game is a console-based application written in C.  
It presents multiple-choice questions to the user, tracks the score, and includes a timer feature for answering each question.

This project demonstrates the use of arrays, structures, conditionals, loops, and time-based logic in C.

---

## 🚀 Features

- Multiple choice questions (MCQs)
- Score tracking system
- Timer for each question (advanced feature)
- Instant feedback (Correct / Wrong)
- Final score display
- File support (optional for storing questions or scores)
- Menu-driven interface

---

## 🛠 Concepts Used

- Arrays
- Structures (struct)
- Loops (for / while)
- Conditional statements (if / else)
- switch statement
- Functions
- Time handling:
  - time.h
  - clock()
- File handling (optional for storing questions/scores):
  - fopen()
  - fprintf()
  - fscanf()
  - fclose()

---

## 📂 Project Structure

Quiz-Game/
│
├── quiz.c        → Main source code
├── questions.txt → (Optional) Question bank file
└── README.md     → Project documentation

---

## 🎮 How the Game Works

1. The program displays a question with 4 options (A, B, C, D).
2. The user selects an answer.
3. A timer runs for each question.
4. If the user answers within the time limit:
   - Correct answer → Score increases
   - Wrong answer → No score
5. If time runs out:
   - Question is marked as unanswered
6. Final score is displayed at the end.

---

## ⏳ Timer Feature (Advanced)

- Each question has a time limit (e.g., 10 seconds).
- Implemented using:
  - `time.h`
  - `clock()` or system time functions
- If time exceeds the limit, the answer is automatically rejected.

---

## 🏆 Score System

- Correct Answer → +1 point
- Wrong Answer → 0 points
- Final score displayed after all questions
- Percentage calculation (optional)

Example:
Score: 7 / 10  
Percentage: 70%

---

## ▶️ How to Compile and Run

Step 1: Compile  
gcc quiz.c -o quiz  

Step 2: Run  
./quiz  

(For Windows)  
quiz.exe  

---

## 🖥 Example Question Format

Q1: What is the capital of India?  
A. Mumbai  
B. Delhi  
C. Kolkata  
D. Chennai  

Enter your answer: B  

---

## ⚠ Limitations

- Console-based UI
- Basic timer implementation
- No negative marking
- Limited question bank (unless file-based)

---

## 🔮 Future Improvements

- Add difficulty levels
- Add high score system
- Store scores in file
- Random question selection
- Add lifelines (50-50, skip question)
- Add sound effects
- Convert into graphical version
- Add multiplayer mode

---

## 📋 Requirements

- GCC Compiler
- Works on Linux / Windows / macOS

---

## 📜 License

This project is open-source and free to use for educational purposes.
You may modify and enhance it as needed.
