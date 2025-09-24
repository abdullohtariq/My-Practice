## My Practice

A personal collection of programming practice exercises and small projects. The repo primarily contains C and C++ programs covering fundamentals (I/O, conditionals, loops), data structures, algorithms, OOP, and a few mini projects (some with simple GUIs). It also includes notes and code from courses like CS50.

### Repository Structure

- `1. Programming Fundamentals/`
  - Introductory C++ programs organized by topic:
    - `1. Simple Input Output/`
    - `2. Input + Variable Programs/`
    - `2. If Else Statements/`
    - `3. Loops And For Loops/`
    - `4. Nested Loops/`
    - `5. Switches/`
    - `6. Functions/`
    - `7. Arrays/`
    - `8. Pointers/`
    - `9. Recursion/`
    - `91. Sturctures/`
- `2. OOP using C++/` – Basic OOP examples
- `3. Small Projects/` – Console projects like `Game Of Life`, `Tic Tac Toe`, and data structure demos (`LinkList.cpp`, `stack.cpp`)
- `4. Projects With GUI/` – Visual Studio C++ project files and binaries for a simple `Ping Pong Game`
- `5. Courses/` – Course-related code and notes, notably `CS50 Intro To CS` and `CS50p Intro to Python`

Most folders contain `.cpp`/`.c` sources and sometimes compiled `.exe` files for Windows.

### Prerequisites

- Windows (PowerShell) or any OS with a C/C++ toolchain
- C++ compiler (choose one):
  - MSVC (Visual Studio or Build Tools)
  - MinGW-w64 (GCC/G++)
  - Clang
- Optional: Visual Studio for opening `.sln`/`.vcxproj` GUI projects

### Build Instructions (Windows)

You can compile any program from its folder. Paths have spaces; wrap them in quotes.

- Using MSVC (Developer Command Prompt):
```powershell
# Open "x64 Native Tools Command Prompt for VS"
cd "1. Programming Fundamentals/2. If Else Statements/1. Maximum Number From 3 Values"
cl /EHsc "1. Maximum Number From 3 Values.cpp"
```

- Using MinGW-w64 (g++):
```powershell
cd "1. Programming Fundamentals/3. Loops And For Loops/1. For Loops"
g++ -std=c++17 "1. For Loops.cpp" -o ForLoops.exe
./ForLoops.exe
```

- Using Clang++:
```powershell
cd "3. Small Projects/1. Game Of Life"
clang++ -std=c++17 game.cpp -o game.exe
./game.exe
```

Notes:
- Some folders already include `.exe` files; you can run them directly.
- Use quotes around paths and filenames that contain spaces or punctuation.

### Running Programs

- File Explorer: double-click the `.exe` (Windows)
- Terminal:
```powershell
./program.exe
```

For input-based programs, follow the console prompts.

### GUI Project in Visual Studio

- Open `4. Projects With GUI/1. Ping Pong Game/1. Ping Pong Game.sln` in Visual Studio
- Build and run (Debug/Release as desired)

### Contributing / Notes

- This is a personal learning repository; folder names mirror exercise titles.
- Suggestions are welcome—open an issue or a pull request with a short description.


