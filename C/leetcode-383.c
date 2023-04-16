int canConstruct(char *ransomNote, char *magazine) {
    int freq[26] = {0};
    int i = 0;

    while (ransomNote[i]) {
        freq[ransomNote[i] - 'a']++;
        i++;
    }

    i = 0;
    while (magazine[i]) {
        freq[magazine[i] - 'a']--;
        i++;
    }

    for (int j = 0; j < 26; j++)
        if (freq[j] > 0) return 0;

    return 1;
}