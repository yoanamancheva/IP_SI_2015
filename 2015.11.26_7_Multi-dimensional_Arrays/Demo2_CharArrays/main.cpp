#include <iostream>
#include <string.h>

using namespace std;

const int MAX = 100;

bool isSeparator(char c) {
	return c == ' ' || c == ',' || c == '.' || c == '\0';
}

void countWords() {
	char s[MAX];
	cin.getline(s, MAX);

	int counter = 0, i = 0;
	bool onWord = false;

	while (s[i] != '\0') {
		bool onWordNext = !isSeparator(s[i]);
		if (onWord && !onWordNext)
			counter++;
		onWord = onWordNext;
		i++;
	}
	if (onWord)
		counter++;

	cout << "Find " << counter << " words" << endl;
}

int main()
{
    char ch1[10];
    cin.getline(ch1, 5);
    cout<<ch1<<'\n';
    cout<<strlen(ch1);

//    countWords();
    cout << "Hello world!" << endl;
    return 0;
}
