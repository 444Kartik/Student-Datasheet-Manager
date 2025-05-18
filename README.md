

# Student Datasheet Manager

I created this console-based C program to manage student information, academic performance, and attendance in an organized way. The menu-driven interface guides through adding new student profiles, viewing existing profiles, entering progress reports, analyzing grades, submitting attendance, and viewing profiles of past toppers. I also added options to customize text and background colors for a better user experience.

---

## Table of Contents

1. [Overview](#overview)  
2. [Features](#features)  
3. [Requirements](#requirements)  
4. [Installation](#installation)  
5. [Usage](#usage)  
6. [Code Structure](#code-structure)  
7. [Error Handling](#error-handling)  
8. [Future Improvements](#future-improvements)  
9. [Developer](#developer)

---

## Overview

This application is written in C and uses standard libraries along with Windows-specific functions (such as `Sleep()` and `system("color")`) for console control. It can store up to ten student profiles, each containing:

- Full name  
- Roll number  
- Age  
- Gender  
- Contact number  
- Address  

After profile creation, you can enter marks for Hindi, English, Social Studies, Science, and Maths. The program calculates total marks, percentage, and assigns a letter grade. Attendance is initialized at 100 for every student and can be incremented one at a time. Finally, there is a section that displays last year’s top performers with their details and recommended books.

---

## Features

1. **Color-Theme Menu**  
   - Prompt to change text or background colors at the start  
   - Five predefined text colors (Blue, Green, Red, Purple, Yellow)  
   - Five predefined background colors (Blue, Green, Red, Purple, Yellow)  
   - Immediate application of the selected color scheme  

2. **Add a Student Profile**  
   - Store up to ten profiles  
   - Prompt for full name, roll number, age, gender, contact number, and address  
   - Display entered data for confirmation  
   - Option to edit before final submission  
   - Option to add another profile or return to the main menu  

3. **View Student’s Profile**  
   - View a single student profile by profile number  
   - View all stored profiles at once  
   - Validation when no profiles exist or when the requested profile number is out of range  

4. **Student’s Progress Report**  
   - Available only after at least one profile exists  
   - Prompt to enter marks for Hindi, English, Social Studies, Science, and Maths for each student  
   - Automatic calculation of total marks and percentage  
   - Letter grade assignment:
     - A for ≥ 90  
     - B for ≥ 75  
     - C for ≥ 60  
     - D for ≥ 45  
     - E for ≥ 30  
     - F for < 30  
   - Display of a tabular-style summary for each student  

5. **Students Grade Analyzer**  
   - Runs only if both student profiles and progress reports exist  
   - Displays each student’s name alongside the assigned letter grade  

6. **Submit Attendance of Student**  
   - Default attendance set to 100 for each student  
   - Display of current attendance values for all students  
   - Option to increment a student’s attendance by one using profile number  
   - Redisplay of updated attendance values  
   - Option to update multiple students before returning to the main menu  

7. **Profiles of Last Year’s Topper**  
   - Hardcoded details of past BCA batch toppers from 2018, 2019, and 2020  
   - Each topper’s:
     - Name  
     - Gender  
     - Attendance percentage  
     - Total marks obtained  
     - Overall percentage  
     - Behavior  
     - Daily study hours  
     - Favorite subject  
     - Recommended book  
   - Pause between each profile with an option to proceed or return to the main menu  

8. **Go to The Start Menu**  
   - Resets console colors to default (`system("COLOR 0F")`)  
   - Returns to the initial color-theme prompt  

9. **Exit The Program**  
   - Prompt to restart or exit  
   - If restarted, returns to the color-theme menu  
   - If exited, displays a thank-you message and developer credit  

---

## Requirements

- **Operating System:** Windows (due to `windows.h` dependencies)  
- **C Compiler:** GCC, Microsoft Visual C++, or any compatible compiler  
- **Console/Terminal:** Minimum 80×25 character dimensions for proper display  

---

## Installation

1. Download or clone this repository to your local machine.  
2. Open a Command Prompt (or PowerShell) in the project directory.  
3. Compile the source file:

   ```bash
   gcc student_datasheet.c -o student_datasheet.exe
