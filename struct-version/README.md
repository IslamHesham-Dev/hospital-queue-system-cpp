# Hospital Queue Management System

A console-based hospital queue management system built with C++.

This version uses custom structures to organize the application and encapsulate queue operations. It manages patients across multiple medical specializations while giving urgent cases priority.

## Features

- Supports 20 medical specializations.
- Stores up to 5 patients in each specialization.
- Adds regular patients to the end of the queue.
- Adds urgent patients to the beginning of the queue.
- Rejects new patients when a queue is full.
- Displays patients and their status.
- Allows doctors to call and remove the next patient.
- Provides an interactive command-line menu.

## Queue Rules

| Patient type | Status | Position |
|---|---:|---|
| Regular | `0` | End of the queue |
| Urgent | `1` | Beginning of the queue |

## Program Design

The program is divided into two main structures.

### `hospital_queue`

Represents the patient queue for one specialization. It stores patient names, statuses, and the current queue length.

Its responsibilities include:

- Adding a patient to the end of the queue.
- Adding an urgent patient to the front.
- Removing the next patient.
- Printing the waiting patients.

### `hospital_system`

Manages all specialization queues and the main application workflow.

Its responsibilities include:

- Displaying the menu.
- Registering patients.
- Printing patient queues.
- Calling the next patient.
- Running the application loop.

## Technologies and Concepts

- C++
- Structures
- Member functions
- Constructors
- Encapsulation
- Fixed-size arrays
- Queue operations
- Loops and conditional statements
- Console input and output

## Getting Started

### Prerequisites

A C++ compiler supporting C++11 or later, such as GCC, Clang, or Microsoft Visual C++.

### Compile

```bash
g++ -std=c++11 main.cpp -o hospital-system
```

### Run

Linux or macOS:

```bash
./hospital-system
```

Windows:

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

Provide the patient's name, specialization index, and status:

```text
Ahmed 3 1
```

In this example:

- `Ahmed` is the patient's name.
- `3` is the specialization index.
- `1` identifies the patient as urgent.

### Call the Next Patient

Select option `3`, then enter the required specialization:

```text
Enter specialization: 3
Ahmed please go with Dr
```

The first patient is called and removed from that specialization's queue.

## Project Constraints

- The system supports 20 specialization queues.
- Each queue can hold up to 5 patients.
- Regular patients use status `0`.
- Urgent patients use status `1`.
- Patient names are entered as single words.
- Data exists only while the program is running.

## What I Learned

This project helped me practice:

- Refactoring procedural code into structured components.
- Grouping related data and behavior with C++ structures.
- Using constructors and member functions.
- Implementing fixed-size queue operations.
- Prioritizing urgent patients.
- Separating queue logic from application logic.
- Translating requirements into a console application.

## Future Improvements

- Validate specialization numbers and patient statuses.
- Support patient names containing spaces.
- Replace fixed-size arrays with STL containers.
- Display only specializations that contain patients.
- Store specialization names instead of numeric indexes.
- Save queue data between sessions.
- Add automated tests.

## Acknowledgements

This project was completed as part of a C++ course focused on programming fundamentals, problem-solving, software design, and project-building skills.

## License

This project is intended for educational purposes.