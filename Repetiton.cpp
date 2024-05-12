#include <iostream>
#include <string>

using namespace std;

int main() {
    string dna_seq;
    cin>>dna_seq;
    char prev_char = dna_seq[0];
    int max_len = 1, curr_len = 1;

    for(int i = 1; i < dna_seq.length(); i++) {
        if(dna_seq[i] == prev_char) {
            curr_len++;
        } else {
            prev_char = dna_seq[i];
            max_len = max(max_len, curr_len);
            curr_len = 1;
        }
    }

    // Check if the last substring is the longest
    max_len = max(max_len, curr_len);

    cout << max_len << endl;

    return 0;
}