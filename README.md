# Hospital Queue Management System

A console-based hospital queue management system developed in C++ as part of my programming and problem-solving coursework.

The program manages patient queues across different medical specializations and prioritizes urgent patients.

## Features

- Supports 20 medical specializations.
- Stores up to 5 patients per specialization.
- Adds regular patients to the end of the queue.
- Adds urgent patients to the beginning of the queue.
- Prevents patients from joining a full queue.
- Displays all waiting patients by specialization.
- Allows doctors to call and remove the next patient.
- Provides an interactive command-line menu.

## Queue Rules

Each specialization has a maximum of five available spots.

| Patient type | Status value | Queue position |
|---|---:|---|
| Regular | `0` | End of the queue |
| Urgent | `1` | Beginning of the queue |

## Technologies and Concepts

- C++
- Multidimensional arrays
- Functions
- Loops and conditional statements
- Queue operations
- Input validation
- Console input and output

## Getting Started

### Prerequisites

You need a C++ compiler that supports C++11 or later, such as:

- GCC
- Clang
- Microsoft Visual C++

### Compilation

Using GCC:

```bash
g++ -std=c++11 main.cpp -o hospital-system
```

### Running the Program

On Linux or macOS:

```bash
./hospital-system
```

On Windows:

```powershell
.\hospital-system.exe
```

## Usage

The program displays the following menu:

```text
Enter your choice:
1) Add new patient
2) Print all patients
3) Get next patient
4) Exit
```

### Add a Patient

Enter the specialization number, patient name, and patient status:

```text
Enter specialization, name, status:
3 Ahmed 1
```

In this example:

- `3` is the specialization number.
- `Ahmed` is the patient's name.
- `1` means the patient is urgent.

### Display Waiting Patients

```text
There are 2 patients in specialization 3
Ahmed urgent
Mona regular
```

### Call the Next Patient

```text
Enter specialization:
3
Ahmed please go with the Dr
```

The first patient in the selected specialization is called and removed from the queue.

## Input Constraints

- Specialization numbers must be between `1` and `20`.
- Each specialization can contain no more than `5` patients.
- Patient status must be:
  - `0` for a regular patient.
  - `1` for an urgent patient.
- Patient names must currently be entered as a single word.

## What I Learned

This project helped me practice:

- Translating requirements into a working program.
- Managing fixed-size queues using arrays.
- Implementing priority-based queue behavior.
- Organizing program logic into reusable functions.
- Working with multidimensional arrays.
- Updating and shifting stored data.
- Building an interactive console application.

## Future Improvements

- Use STL containers instead of fixed-size arrays.
- Add stronger input validation.
- Support patient names containing spaces.
- Represent patients using classes or structures.
- Save patient data between program sessions.
- Add automated tests.

## Acknowledgements

This project was completed as part of a C++ course focused on programming fundamentals, problem-solving, software design, and project-building skills.

## License

This project is available for educational purposes.
