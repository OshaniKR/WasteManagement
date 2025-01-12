# ♻️ Waste Management System

## 📖 Overview
The **Waste Management System** is a project designed to efficiently manage waste items and bins using data structures and algorithms. It provides functionality to add, remove, and organize waste items and bins, ensuring proper data handling through file operations.

## ✨ Features
- 🗑️ **Waste Bin Management**: Add, view, and organize waste bins.
- 🛠️ **Waste Item Management**: Add, view, and sort waste items.
- 💾 **Data Persistence**: Store waste bin and item information in text files for later use (`waste_bins.txt`, `waste_items.txt`).
- 📚 **Data Structures**:
  - 🌀 **Stacks** (`WasteStack`): Used for temporary storage or undo-like functionality.
  - 📝 **Lists** (`WasteList`): Used for managing collections of waste items and bins.

## 🗂️ File Structure
The project contains the following files:

### 📄 Source Files:
- `FileOperations.cpp` - Handles file I/O operations.
- `MainWaste.cpp` - Contains the main logic of waste management.
- `WasteList.cpp` - Implements list functionality for managing waste data.
- `WasteStack.cpp` - Implements stack functionality for temporary storage.
- `main.cpp` - Entry point of the program.

### 🖹 Header Files:
- `FileOperations.h` - Declarations for file handling functions.
- `WasteBin.h` - Defines the `WasteBin` class.
- `WasteItem.h` - Defines the `WasteItem` class.
- `WasteList.h` - Declarations for the list operations.
- `WasteStack.h` - Declarations for the stack operations.

### ⚙️ Configuration Files:
- `WasteManagement.vcxproj`, `WasteManagement.vcxproj.filters`, `WasteManagement.sln` - Project configuration for Visual Studio.

### 📂 Data Files:
- `waste_bins.txt` - Stores information about waste bins.
- `waste_items.txt` - Stores information about waste items.

