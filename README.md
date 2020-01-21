# Tools_CMake

# Install Catch2
```bash
git clone https://github.com/catchorg/Catch2.git
cd Catch2
cmake -Bbuild -H. -DBUILD_TESTING=OFF -DCMAKE_INSTALL_PREFIX=build
cmake --build build/ --target install
```

# Build Project with Catch2
`bash
$ cmake -DCMAKE_PREFIX_PATH=~/Catch2/build/lib/cmake/Catch2/ -DBUILD_TESTS=ON ..
`
