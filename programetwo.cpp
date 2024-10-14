#include <iostream>
#include <string>

std::string sentenceFunction(){
	std::string sentence;
	std::cout << "Enter your sentence: ";
	std::getline(std::cin, sentence);
	return sentence;
}

int charToValue(char c) {
	if (c >= 'A' && c <= 'Z') {
		return c - 'A' + 1;
	}
	else if (c >= 'a' && c <= 'z') {
		return c - 'a' + 1;
	}
	else if (c == ' ') {
		return 27;
	}
	return 0;
}

int computeHash(const std::string &sentence) {
	int hashValue = 0;
	for (int i = 0; i < sentence.length(); ++i) {
		char c = sentence[i];
		hashValue += charToValue(c);
	}
	return hashValue % 31;
}


int main() {
        std::string sentence = sentenceFunction();
	int hash = computeHash(sentence);
        std::cout << "Hash value: " << hash << std::endl;
        return 0;
}       	
