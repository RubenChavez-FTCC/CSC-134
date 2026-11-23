# Project Proposal: *Where is Logan?*

**Course:** CSC 134  
**Author:** Ruben Chavez  
**Date:** November 11, 2026  
**Source File:** `m6lab2_0002.cpp`  

---

## 1. Executive Summary
*Where is Logan?* is a console-based, narrative-driven mystery text adventure written in C++. Players explore the empty home of a missing friend named Logan, uncover environmental clues, solve a lock-and-key puzzle, and piece together the truth behind his disappearance before escaping the property.

## 2. Project Objectives
* **Interactive Storytelling:** Deliver an atmospheric mystery through descriptive room exploration and progressive clue discovery.
* **Data-Driven Architecture:** Implement scalable, clean C++ data structures (`enum`s, parallel arrays, and a 2D adjacency matrix) to separate game data from core loop logic.
* **State-Based Progression:** Manage player inventory, container states, and win conditions dynamically using boolean flags.

## 3. Narrative & Gameplay Loop

### Premise
The player arrives at Logan’s house to find it eerily empty—his dog is missing, a mug sits abandoned on the counter, and his dusty car remains parked outside.

### Core Mechanics & Progression
1. **Navigation:** Players traverse five interconnected locations (`Entrance`, `Kitchen`, `Garage`, `Bedroom`, and `Outside`) using cardinal direction commands (`north`/`n`, `east`/`e`, `south`/`s`, `west`/`w`).
2. **Investigation (`search`):** Players inspect rooms to discover hidden items.
3. **Puzzle Solving (`open`):**
   * Finding the **Note** in the `Kitchen` reveals the existence of a locked box in the `Bedroom`.
   * Finding the **Box Key** in the `Garage` and the **Box** in the `Bedroom` allows the player to unlock the container.
   * Opening the box reveals a hidden warning (**Note inside the box**) implicating a character named *Talan* and urging the player to run.
4. **Win Condition:** Exiting to the `Outside` area while possessing the final note triggers the endgame sequence.

## 4. Technical Architecture
The application relies on procedural C++ design patterns tailored for readability and easy expansion:

| Component | Implementation | Purpose |
| :--- | :--- | :--- |
| **Identifiers** | `enum Direction`, `Room`, `Item` | Replaces magic numbers with readable constants and auto-tracks array bounds (`NUM_ROOMS`, `NUM_ITEMS`). |
| **World Map** | `int connections[NUM_ROOMS][NUM_DIRECTIONS]` | A 2D adjacency matrix mapping room exits (`-1` denotes a blocked path). |
| **Entity Data** | Parallel Arrays (`roomNames`, `itemRooms`, `itemFound`) | Links names, descriptions, locations, and discovery states across matching indices. |
| **Game Engine** | `while (gameRunning)` loop | Handles turn-based rendering, `cin` command parsing, state validation, and win-condition checks. |
| **Modularity** | `searchRoom()` helper function | Encapsulates room-searching logic outside `main()` to keep input handling clean. |

## 5. How to Compile & Run
```bash
g++ -std=c++17 m6lab2_0002.cpp -o where_is_logan
./where_is_logan
```

## 6. Future Scope & Planned Enhancements
* [ ] **Improved Entrance & Player Onboarding:** Redesign the opening sequence at the `Entrance` to establish the story hook more clearly and display a clean menu of known commands (`north`/`n`, `east`/`e`, `south`/`s`, `west`/`w`, `search`, `open`, `quit`/`q`) so first-time players immediately know how to interact with the world.
* [ ] **Map Expansion (New Room):** Expand the house layout by adding a new room (such as utilizing the commented-out `ATTIC` placeholder in the `Room` enum) along with updated parallel array entries and two-way exits in the `connections` matrix to deepen exploration.
