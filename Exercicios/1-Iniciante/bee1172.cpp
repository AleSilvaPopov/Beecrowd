    #include <iostream>
    #include <vector>

    using namespace std;
    int main()
    {
        vector<long long> vetor(10);

        for (int i = 0; i < 10; i++)
        {
            cin >> vetor[i];
            if (vetor[i] < 1){
                 vetor[i] = 1;
            }
        }   

        for (int i = 0; i < 10; i++)
        {
            cout << "X[" << i << "] = "<< vetor[i] << endl;
        }

        return 0;
    }