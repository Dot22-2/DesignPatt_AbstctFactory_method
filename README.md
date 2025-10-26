# C++ Abstract Factory Method

This repository demonstrates a clean implementation of the **Abstract Factory** design pattern in C++ for a console-based application.

---

## Project Structure

- `User.hpp` – Base interface for user objects  
- `Settings.hpp` – Base interface for user settings  
- `IUserFactory.hpp` – Abstract factory interface for creating users and settings  
- `AdminUser.hpp / AdminSettings.hpp` – Admin-specific user and settings  
- `GuestUser.hpp / GuestSettings.hpp` – Guest-specific user and settings  
- `AdminFactory.hpp / GuestFactory.hpp` – Concrete factories for admin and guest creation  
- `main.cpp` – Entry point showcasing factory-based object creation  

---

### Requirements

- **Compiler**: Tested with `MSVC v19.44` (Visual Studio 2022)  
- **C++ Standard**: C++17 or higher  

---

## Usage Example

```cpp
AdminFactory admin;
GuestFactory guest;

std::cout << "/___Admin___\\\n";
runFactory(admin);

std::cout << "\n/___Guest___\\\n";
runFactory(guest);

// Output:
// /___Admin___\
// Admin user
// Admin settings: full access

// /___Guest___\
// Guest user
// Guest settings: read-only
