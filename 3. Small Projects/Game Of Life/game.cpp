#include <iostream>
#include <vector>
#include <ctime> // For random initialization

using namespace std;

const int GRID_SIZE = 20; // Adjust for desired grid size

// Function prototypes
void initializeGrid(vector<vector<bool>>& grid);
void displayGrid(const vector<vector<bool>>& grid);
int countLiveNeighbors(const vector<vector<bool>>& grid, int row, int col);
void updateGrid(vector<vector<bool>>& grid);

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator

    // Create a 2D grid of booleans to represent cells (true = alive, false = dead)
    vector<vector<bool>> grid(GRID_SIZE, vector<bool>(GRID_SIZE, false));

    // Initialize the grid with a random pattern (optional)
    initializeGrid(grid);

    cout << "Welcome to Conway's Game of Life!\n";
    cout << "Press Enter to start the simulation, or 'q' to quit.\n";

    char keypress;
    do {
        displayGrid(grid);

        cout << "Press Enter to proceed to the next generation, or 'q' to quit.\n";
        cin.get(keypress);

        if (keypress != '\n') {
            break;
        }

        updateGrid(grid);
    } while (true);

    return 0;
}

// Function implementations

void initializeGrid(vector<vector<bool>>& grid) {
    // Example: Create a glider pattern (uncomment for a specific pattern)
    /*
    grid[1][2] = true;
    grid[2][3] = true;
    grid[3][1] = true;
    grid[3][2] = true;
    grid[3][3] = true;
    */

    // Random initialization
    for (int i = 0; i < GRID_SIZE; ++i) {
        for (int j = 0; j < GRID_SIZE; ++j) {
            grid[i][j] = rand() % 2; // 50% chance of being alive
        }
    }
}

void displayGrid(const vector<vector<bool>>& grid) {
    for (int i = 0; i < GRID_SIZE; ++i) {
        for (int j = 0; j < GRID_SIZE; ++j) {
            cout << (grid[i][j] ? '*' : '.');
        }
        cout << endl;
    }
}

int countLiveNeighbors(const vector<vector<bool>>& grid, int row, int col) {
    int count = 0;
    for (int i = row - 1; i <= row + 1; ++i) {
        for (int j = col - 1; j <= col + 1; ++j) {
            // Wrap around the edges for a toroidal grid
            int x = (i + GRID_SIZE) % GRID_SIZE;
            int y = (j + GRID_SIZE) % GRID_SIZE;
            if (grid[x][y] && !(x == row && y == col)) { // Exclude the current cell
                count++;
            }
        }
    }
    return count;
}

void updateGrid(vector<vector<bool>>& grid) {
    vector<vector<bool>> newGrid(GRID_SIZE, vector<bool>(GRID_SIZE, false));

    for (int i = 0; i < GRID_SIZE; ++i) {
        for (int j = 0; j < GRID_SIZE; ++j) {
            int liveNeighbors = countLiveNeighbors(grid, i, j);
            // Apply Game of Life rules
            if (grid[i][j]) {
                newGrid[i][j] = (liveNeighbors == 2 || liveNeighbors == 3);  // Stays alive
            } else {
                newGrid[i][j] = (liveNeighbors == 3); // Becomes alive
            }
        }
    }

    grid = newGrid;
}
