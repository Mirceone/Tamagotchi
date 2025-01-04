# 🐾 **Tamagotchi CLI Game**

A fun, interactive Tamagotchi-inspired CLI game written in **C++**.

---

## 📦 **Features**

- 🐶 **Pet Simulation:** Care for your Tamagotchi's health and happiness.  

- 🎮 **Mini-Games:** Play interactive games like **Rock, Paper, Scissors** and **Links oder Rechts**.  

- 🤖 **Unique Behaviors:** Special pets like **Gudetama** have unique game logic (random mini-game selection).  

- 📝 **Log System:** Keep track of game events and actions.  

- 🧩 **Modular Design:** Clear separation of game logic, display, and mini-games for scalability.  

---

## 🚀 **Usage**

When you start the game, you’ll see a **menu-driven interface** in your terminal.

**Main Menu Options:**  

1. 🐣 **Name your new pet:** Start your journey with a new pet.  

2. 🍔 **Feed Your Pet:** Keep your Tamagotchi healthy and happy.  

3. 🎲 **Play Mini-Games:** Choose between two interactive mini-games:  
   - **Rock, Paper, Scissors**  
   - **Links oder Rechts**  

4. 🛑 **Exit:** End the game.  

**Special Behavior for Gudetama:**  
- Game selection is **randomly determined:**  
   - **75% chance:** Links oder Rechts  
   - **25% chance:** Rock, Paper, Scissors  

---

## 🛠️ **Architecture Overview**
```bash
.
├── README.md
├── include
│   ├── Game1.hpp
│   ├── Game2.hpp
│   ├── Gudetama.hpp
│   ├── Log.hpp
│   ├── RunMainGame.hpp
│   ├── Tamagotchi.hpp
│   ├── Tier.hpp
│   └── Utils.hpp
└── src
    ├── Game1.cpp
    ├── Game2.cpp
    ├── Gudetama.cpp
    ├── Log.cpp
    ├── RunMainGame.cpp
    ├── Tamagotchi.cpp
    ├── main
    ├── main.cpp
    └── main.exe

3 directories, 18 files
```
---

## 🧠 **Core Components**

- **Tier (Abstract Class):** Base class for all pets.  

- **Tamagotchi:** Standard pet behavior and game interactions.  

- **Gudetama:** Special pet with unique random game logic.  

- **Game1 & Game2:** Mini-games (*Rock, Paper, Scissors* and *Links oder Rechts*).  

- **Log:** Tracks game events and actions.  

- **RunMainGame:** Manages the main game loop.  

---
 
 ---
 
