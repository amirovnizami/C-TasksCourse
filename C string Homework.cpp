#include<iostream>
using namespace std;
//void mystrlen(char* letter) {
//	int say = 0;
//	for (size_t i = 0; letter[i] !='\0'; i++)
//	{
//		cout << letter[i]<< " ";
//		say++;
//		cout << endl;
//	}
//	cout << "Say : " << say;
//}
//void mystcCopy(char *& str1, const char* str2){
//	int say1 = 0;
//	int say2= 0;
//	cout << str1<<endl;
//	//STR1 in uzun;ugnu tapmaq
//	for (size_t i = 0; str1[i] !='\0'; i++)
//	{
//		say1++;
//	}
//	//Str2 nin uzunglugunu tapmaq
//	for (size_t i = 0; str2[i] != '\0'; i++)
//	{
//		say2++;
//	}
//	//str1 -e str2 ni koypayalamq
//	for (size_t i = 0; i<=say2; i++)
//	{
//		str1[say1] = str2[i];
//		say1++;
//	}
//	cout << str1;
//}

// task3 St2 ni str1 e kopyalamaq
//void mystrCat(char* letter,char * letter2 ) {
//	char copyLetter[21]{};
//	int size = 0;
//	int say = 0;
//	//Letter1 in uzunlugun tapmaq
//	for (size_t i = 0; letter[i] !='\0'; i++)
//	{
//		say++;
//	}
//	//Letter 1 yeni massive elave etmek
//	for (size_t i = 0; letter[i] != '\0'; i++)
//	{	
//		copyLetter[i] = letter[i];
//	}
//	//Letter2 ni yeni massive elave etmek
//	for (size_t j = 0; j < letter2[j]!='\0'; j++)
//	{
//		copyLetter[say] = letter2[j];
//		say++;
//	}
//	cout<< copyLetter;
//}

//task4 
//
//char* mystrstr(char* str1, char s) {
//	bool check = false;
//	for (size_t i = 0; i < str1[i]!='\0'; i++)
//	{
//		if (str1[i] == s) {
//			check = true;
//		}
//		else continue;
//	}
//	if (check == true) {
//		return  &s;
//	}
//	else {
//		cout << "Bele bir herf yoxdur!";
//		return 0;
//	}
//}

//task5
//char* mystrstr(char* str1, char* str2) {
//	bool check = false;
//	int say = 0;
//	int size = 0;
//	for (size_t i = 0; str2[i] != '\0'; i++)
//		{	
//			size++;
//		}
//	for (size_t i = 0; str2[i]!='\0'; i++)
//	{
//		for (size_t j = 0; str1[j]!='\0'; j++)
//		{
//			if (str2[i]== str1[j])
//				say++;
//		}
//	}
//	if (say == size) {
//		return &str2[1];
//	}
//	else {
//		cout << "Yoxdur!!";
//		return 0;
//	}
//}-

//task 6
//int mystrcmp(const char* str1, const char* str2) {
//	int say1 = 0;
//	int say2 = 0;
//	for (size_t i = 0; str1[i]!='\0'; i++)
//	{
//		say1++;
//	}
//	for (size_t i = 0; str2[i] != '\0'; i++)
//	{
//		say2++;
//	}
//	if (say1 > say2) {
//		return  -1;
//	}
//	else if (say1 < say2) {
//		return 1;
//	}
//	else return 0;
//}
void main() {
	//char letter[]{ "nizamiamir" };
	//char letter2[]{ "username" };
	/*char letter[] = {"nizamiamirov"};
	char letter2[]{ "nizami" };*/
	//char* str1 = letter;
	//mystcCopy(str1, letter2);
	//mystrCat(letter, letter2);
	//mystrlen(letter);
	//cout<< int(mystrstr(letter, 'a'));
	char letter[] = { "asdfghj" };
	char letter2[]{ "asd" };
	//cout << int(mystrstr(letter, letter2));

	//cout << mystrcmp(letter, letter2);

}