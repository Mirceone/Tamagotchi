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
 
## 🤝 **Contributions**

The development of the **Tamagotchi CLI Game** was a collaborative effort, with each team member focusing on distinct areas to ensure clarity, efficiency, and scalability.

### **👤 Mircea Pavel**  
- 🛠️ Developed the **Tier Abstract Class**, establishing a robust base for all creatures.  
- 🐾 Implemented the **Gudetama** and **Tamagotchi** classes, ensuring unique and interactive creature behaviors.  
- 🧰 Contributed to the **Utils** module, providing essential utility functions for the game's functionality.  

---

### **👤 Savin Horia Mater**  
- 🎮 Managed the **Main Program Loop**, ensuring smooth execution and user interaction.  
- 🔄 Developed the **RunMainGame** class, orchestrating the main game flow and handling core logic.  
- 📝 Implemented the **Log System**, enabling event tracking and debugging across game activities.  

---

### **👤 Cristiana Rusu**  
- 🎲 Designed and implemented the interactive **Mini-Games**, including:  
   - 🕹️ **Links oder Rechts**  
   - 🪨 **Rock, Paper, Scissors**  
- 🔗 Ensured seamless integration of games into the main gameplay loop.  
- 🎯 Focused on enhancing **user experience** within the game mechanics.  

---

> 🧠 *Each team member played a **crucial role** in delivering a **modular**, **extensible**, and **user-friendly** Tamagotchi CLI application.*
