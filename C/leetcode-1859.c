char* sortSentence(char* s) {
    int size = strlen(s);
    char* sent = (char*) malloc(sizeof(char) * (size+9));
    int index = 0;
    char word = '1';
    
    for(int i = size; i >= 0; i--){
        if(s[i] == word) {
            int end = i;
            while((s[i] != ' ') && (i > 0)) {i--;}
            if(i == 0) {i--;}
            for(int j = i+1; j < end; j++) {sent[index++] = s[j];}
            sent[index++] = ' ';
            word++;
            i = size+1;
        }
    }

    sent[index - 1] = '\0';
    return sent;
}