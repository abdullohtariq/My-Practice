## My Practice

A personal collection of programming exercises and small projects. Most code is in C and C++, covering fundamentals (I/O, conditionals, loops), arrays, pointers, functions, recursion, basic data structures, and OOP. There are also a few GUI experiments and some Python/course materials.

### Repository Structure

- `1. C and Cpp/`
  - `1. Programming Fundamentals/` – Intro C++ programs by topic:
    - `1. Simple Input Output/`, `2. Input + Variable Programs/`, `2. If Else Statements/`,
      `3. Loops And For Loops/`, `4. Nested Loops/`, `5. Switches/`, `6. Functions/`,
      `7. Arrays/`, `8. Pointers/`, `9. Recursion/`, `91. Sturctures/`
  - `2. OOP using C++/` – Basics of classes and OOP concepts
  - `3. Small Projects/` – Console projects like `Game Of Life`, `Tic Tac Toe`,
    plus demos like `LinkList.cpp`, `stack.cpp`
  - `4. Projects With GUI/` – Visual Studio C++ project files (e.g., `Ping Pong Game`)
- `2. python/`
  - Space for Python practice (scripts, exercises)
- `5. Courses/`
  - Course-related code and notes (e.g., `CS50 Intro To CS`, `CS50p Intro to Python`)

Most folders contain `.cpp`/`.c` sources and sometimes compiled `.exe` files for Windows.

### Prerequisites

- Windows (PowerShell) or any OS with a C/C++ toolchain
- C++ compiler (choose one):
  - MSVC (Visual Studio or Build Tools)
  - MinGW-w64 (GCC/G++)
  - Clang
- Optional: Visual Studio for opening `.sln`/`.vcxproj` GUI projects

### Build (Windows)

You can compile any program from its folder. Paths have spaces; wrap them in quotes.

- MSVC (Developer Command Prompt):
```powershell
# Open "x64 Native Tools Command Prompt for VS"
cd "1. C and Cpp/1. Programming Fundamentals/2. If Else Statements/1. Maximum Number From 3 Values"
cl /EHsc "1. Maximum Number From 3 Values.cpp"
```

- MinGW-w64 (g++):
```powershell
cd "1. C and Cpp/1. Programming Fundamentals/3. Loops And For Loops/1. For Loops"
g++ -std=c++17 "1. For Loops.cpp" -o ForLoops.exe
./ForLoops.exe
```

- Clang++:
```powershell
cd "1. C and Cpp/3. Small Projects/1. Game Of Life"
clang++ -std=c++17 game.cpp -o game.exe
./game.exe
```

Notes:
- Some folders already include `.exe` files you can run directly.
- Use quotes around paths and filenames that contain spaces or punctuation.

### Run

- File Explorer: double-click the `.exe` (Windows)
- Terminal:
```powershell
./program.exe
```
Follow on-screen prompts for input-based programs.

### GUI Projects (Visual Studio)

- Open `1. C and Cpp/4. Projects With GUI/1. Ping Pong Game/1. Ping Pong Game.sln` in Visual Studio
- Build and run (Debug/Release as desired)

### Python

If present, run Python scripts from `2. python/` like this:
```powershell
python script.py
```

### Contributing / Notes

- Personal learning repository; folder names mirror exercise titles.
- Suggestions are welcome—open an issue or a pull request with a short description.


