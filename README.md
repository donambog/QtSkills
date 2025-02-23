# QtSkills - Learning Qt on Android/Termux

This project demonstrates basic Qt development on Android using Termux. It includes several examples progressing from basic concepts to more advanced features.

## Environment Setup

- Device: Samsung S22
- Environment: Termux
- Qt Version: 5
- Build System: CMake

### Prerequisites

```bash
pkg update && pkg upgrade
pkg install cmake
pkg install make
pkg install clang
pkg install tree  # For viewing project structure
```

## Project Structure
```
QtSkills/
├── README.md
├── CMakeLists.txt
├── docs/
│   ├── setup.md
│   └── cmake_explanation.md
├── src/
│   ├── basic/    # Basic Qt application
│   ├── timer/    # Timer and event handling
│   ├── worker/   # Signals and slots
│   └── data/     # Qt data structures
└── scripts/
    └── setup_termux.sh
```

## Building the Project

1. Create build directory:
```bash
mkdir build
cd build
```

2. Configure with CMake:
```bash
cmake ..
```

3. Build:
```bash
make
```

## Running Examples

From the build directory:

```bash
# Run basic example
./src/basic/hello

# Run timer example
./src/timer/timer_example

# Run worker example
./src/worker/worker_example

# Run data example
./src/data/data_example
```

## Learning Path

1. **Basic Qt (src/basic/hello.cpp)**
   - First Qt application
   - QCoreApplication basics
   - Console output with qDebug

2. **Timer Example (src/timer/timer_example.cpp)**
   - Qt's event loop
   - Basic timer operations
   - Async programming concepts

3. **Worker Example (src/worker/)**
   - Signals and slots system
   - Class inheritance in Qt
   - QObject and MOC system

4. **Data Structures (src/data/data_example.cpp)**
   - QString manipulation
   - Qt containers (QList)
   - Qt data types

## Documentation

- `docs/setup.md`: Detailed setup instructions
- `docs/cmake_explanation.md`: CMake keywords explanation
- Source code comments: Each example is thoroughly documented

## Troubleshooting

If you encounter X11-related issues:
```bash
pkg install x11-repo
pkg install xorg-server
```

Common errors and solutions:
- CMake Qt5 not found: Check Qt5 installation
- Compilation errors: Ensure all prerequisites are installed
- Runtime errors: Check terminal output for detailed error messages

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## License

MIT License - See LICENSE file for details

## Acknowledgments

- Qt Documentation
- CMake Documentation
- Termux Community
```
