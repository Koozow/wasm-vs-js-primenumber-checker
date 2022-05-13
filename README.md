# wasm-vs-js-primenumber-checker
first u need to make sure to download Emscripten, the steps are as following:

// cloning Emscripten repo
git clone https://github.com/emscripten-core/emsdk.git
// navigate to the file location in Terminal
cd emsdk
// Download latest version
.\emsdk install latest
// activate it
.\emsdk activate latest
// path activation
.\emsdk_env.bat

the steps above are for windows which i used for it, if u trying to download it on linux or mac then kindly follow the steps on Emscripten page: https://emscripten.org/docs/getting_started/downloads.html

after that you can start the yarn server which is already included

yarn start

then compile the C code with Emscripten to do the Tests in JavaScript and WebAssembly

the following command will do that

emcc lib/prime.c -s WASM=1 -s EXPORTED_FUNCTIONS="['_isPrime','_checkPrimes']" -o public/prime.js

open the localhost:2222 on any browser you like.

open developer console then you can see the results of the Test.

to do new test with new number just go to index.html and adjust the number in the code line 17 to the new wanted number

refresh the browser and wait for the new results.

Easy Peasy :D

your forever thankful Student Kozo :)
