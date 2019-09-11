# Taller5-SE
## Usage
After the installation of this project you have to make sure you have installed the following libraries:
- CMake


If you don't have installed these libraries you can follow the next commands:
```bash
    sudo apt update
    sudo apt install cmake
```

## Installation
After test the project you have to create 2 directories with the command below
```bash
    mkdir build && mkdir build/usr
```

Then you'll need to run the command below in the main folder of the project to generate all the binaries of the project:
```bash
    cmake -DCMAKE_INSTALL_PREFIX:PATH=/home/<USER>/Taller5-SE/build/usr
```
This command above will generate all the binaries to test the project.

## Test
1. Execute the command make to build the program
```bash
    make
```

2. Install the program
```bash
    make install 
```

3. Test the librarie, you'll need to export the path
```bash
    export LD_LIBRARY_PATH=/home/<USER>/Taller5-SE/build/usr/lib
```

4. Run the program, inside the root of the project use:
```bash
    cd build/usr/bin && ./hello
```

5. (Optional) To create a .tar.gz of the project use:
```bash
    make package_source
```