// C Prime numbers checker

int isPrime(num) {
        for(int i=2; i < num; i++)
        if(num % i == 0) return 0;
        return (num != 1 && num !=0) ? 1 : 0;
    }


    //Check numbers 0- {primes}

    int checkPrimes(num) {
    int count =0;
    for(int i=0; i < num; i++) {
        if(isPrime(i)) count++;
     }
     return count;
    }

    //emcc lib/prime.c -s WASM=1 -s EXPORTED_FUNCTIONS="['_isPrime','_checkPrimes']" -o public/prime.js