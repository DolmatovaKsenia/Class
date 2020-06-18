#include <iostream> 
#include <vector>
#include <cstring>

using namespace std;

void sieveOfEratosthenes(vector<int>& primes, int K)
{
    int size = 1000000;
    bool* isPrime = new bool[size];
    memset(isPrime, true, sizeof(isPrime));

    for (int p = 2; p * p <= size; p++)
    {
        if (isPrime[p] == true)
        {
            for (int i = p * p; i < size; i += p)
            {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p < size && primes.size() != K; p++)
        if (isPrime[p])
        {
            primes.push_back(p);
        }
    delete[] isPrime;
}

int main()
{
    vector<int> primes;
    int K = 0;
    cin >> K;
    sieveOfEratosthenes(primes, K);

    cout << primes[K] << endl;

    return 0;
}
