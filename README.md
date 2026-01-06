# OpenGL Engine Template (CMake + GLFW + GLAD)

A modern **C++ OpenGL starter template** designed to scale into a **game engine or rendering engine**.

This repository provides a clean, minimal foundation using **CMake**, **GLFW**, and **GLAD**, following industry-standard practices for graphics and engine development.

---

## ✨ Features

- C++20
- CMake-based build system
- OpenGL Core Profile (4.6)
- GLFW (windowing + input) built from source
- GLAD 2 (vendored, `gl.c` variant)
- Cross-platform ready (Windows / macOS / Linux)
- Clean structure suitable for engine expansion
- GitHub template–friendly

---

## 📁 Project Structure

```
.
├── CMakeLists.txt
├── source/
│   └── main.cpp
├── GLAD/
│   ├── include/
│   │   └── glad/
│   │       └── gl.h
│   └── src/
│       └── gl.c
├── glfw-3.4/
│   ├── CMakeLists.txt
│   └── ...
├── out/                # build output (ignored by git)
└── README.md
```

---

## 🔧 Dependencies

All dependencies are **vendored** or **built from source**:

- **OpenGL** – system graphics API
- **GLFW** – window creation and input
- **GLAD** – OpenGL function loader (GLAD 2)

---

## 🛠️ Build Instructions

### Requirements
- CMake 3.20+
- C++20 compatible compiler  
  - Windows: Visual Studio 2022+  
  - Linux: GCC / Clang  
  - macOS: Clang (Xcode)

---

### Build (All Platforms)

```bash
cmake -S . -B out/build
cmake --build out/build
```

On Windows with Visual Studio:
- Open the folder directly in Visual Studio
- Let CMake configure automatically
- Select the `App` target and run

---

## ▶️ Running

The build produces a neutral executable named:

```
App
```

This is intentional so users of the template can rename it freely.

---

## 📌 Important Notes

### GLAD Variant

This project uses **GLAD 2 (`gl.c` variant)**.

Your include order in source files must be:

```cpp
#include <glad/gl.h>
#include <GLFW/glfw3.h>
```

Do **not** use `glad/glad.h` unless you regenerate GLAD with that layout.

---

## 🧱 Intended Use

This repository is designed as:

- A starting point for a **custom game engine**
- A **graphics sandbox** for OpenGL experiments
- A **teaching / learning template** for modern C++ graphics
- A clean base for adding:
  - Renderer abstraction
  - Vulkan backend
  - ImGui editor
  - Asset pipelines
  - ECS systems

---

## 🔁 Using This Template

1. Click **“Use this template”** on GitHub
2. Rename the repository
3. Update the `project()` name in `CMakeLists.txt`
4. Rename the `App` target if desired

---

## 📜 License

MIT License — free to use, modify, and distribute.

---

## 🚀 Roadmap (Suggested)

- OpenGL debug layer (KHR_debug)
- Renderer API abstraction
- Engine core library
- Editor executable
- Vulkan backend

---

## 👤 Author

Created as a professional OpenGL engine foundation and reusable GitHub template.

Happy hacking 🎮🧠
