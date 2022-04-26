cd build
cmake ..

cmake --build . --config Release

rem cd ..
rem python run.py

cd Release
ContactList.exe