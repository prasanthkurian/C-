#include <iostream>
#include <string>

/*
String is in std name space.
using std::string;

*/
/*
String Declarations

string s1;
string s2 = s1;
string s2(s1);  Same as above. s2 is the copy of s1;
string s3 = "Prasanth";
string s3("Prasanth"); Same as above 
string s4 = (10,c);

copy initialize v/s direct initialize
copy initialize: s2 = s1 directs compiler to copy the initializer on the right hand side.
direct initialize:
Copy initialization creates a temperory variable whereas direct initialization doesnt

string s6 = string(10,'f'); Creates a temperory variable for storing data
string s7(11,'r'); = no temperory variable. 

There are many other diffrerences. Need to explore more.


*/
using std::string;
using std::cout; using std::endl;
string string_declaration() {
	string s1 = "Prasanth";
	string s2 = s1;
	string s3;
	string s4(10, 'P');
	string s5(s1);
	string s6("Heyada Heeya");

	cout << s4 << endl;
	cout << s5 << endl;
	cout << s6 << endl;
	return "success";

}

/* String Operators */
/*

os << s => Writes s onto the output stream os. Returns os.
is >> s => Reads whitespace seperated string from is into s. Returns is.
getline(is,s) =>  Reads line of input from is into s. Returns is.
s.empty() => Returns true if s is empty. Otherwise returns false.
s.size() => Returns number of charactors in s.
s[n] => Returns the reference to char at the position n in s. Position start at 0.
s1+s2 => Returns a string that is a concatentation of s1 and s2.
s1 == s2 => The string s1 and s2 is equal if they contain same charactors.
s1 != s2 => True is not equal (Case sensitive all cases)
<, <=,>,>=    => Comparison are case sensitive and use ditcionary ordering.
*/


using std::cin;

void string_ops() {
	string s1, s2("Prasanth");
	cin >> s1 >> s2;

	cout << (s1 == s2) << endl;
	cout << (s1 != s2) << endl;
	cout << (s1 < s2) << endl;
	cout << (s1 > s2) << endl;
	cout << s1[2] << endl;
	cout << s1.size() << endl;

	s2 = (10, 'p');

	s1 = (0, 'l');

	cout << s1.empty() << endl;


}
void string_read_multiple() {
	string word;

	while (cin >> word) {
		cout << word << endl;
	}
}
using std::getline;
void string_read_lines() {
	string line;

	while (getline(cin, line)) {
		cout << line << endl;
	}
}

/* auto and decl_type */
/*

auto -> C++11 will automatically detect the type of the RHS 



*/

double func1() {
	string m;
	return 10.100;
}


void get_size() {
	string::size_type m;
	unsigned long n = 10;
	string line;

	auto k = line;
	auto g = n;
	cout << typeid(line).name() << endl;
	cout << typeid(g).name() << endl;

	decltype(line) f;
	decltype(func1) r;
	cout << typeid(r).name() << endl;
	cout << typeid(f).name() << endl;
	while (getline(cin, line)) {
		m = line.size();
		n = line.size();
		auto len = line.size();
		cout << "String Size : " << m << n <<" "<<len<< endl;
	}
}

/* String Comparison */

/*

Rule 1
-------
If string1 is shorter than string2 in length and every charctor in string1 is same at the corresponding location at string2.
then string1 is shorter.

Rule 2:
--------
If any of the charactors at the corresponding position differ, Then comparison is based on the first charactor that differ.


string str1 = "Hello";
string str2 = "Hello World";
string str3 = "Hiya";

comparing str1 and str2
str2 is shorter than str1. But second char in str3 is different from str1 and it is greater than the char at same pos in str1. So str3 is greater than str1.


*/

void string_comparison() {
	string str1 = "Hello";
	string str2 = "Hello world";
	string str3 = "Hiya";

	cout << (str1 == str3) << endl;
	cout << (str1 < str3) << endl;
	cout << (str1 > str3) << endl;

	cout << str1 << str2 << (str1 <= str3) << endl;
}


void string_input_by_word() {
	string word;

	while (getline(cin, word, ' ')) {

		cout << word << endl;
	}
}


void string_comparison_exercise() {
	string str1, str2;
	getline(cin, str1, '\n');
	getline(cin, str2, '\n');

	if (str1.length() == str1.length()) {
		cout << str1 << " " << str2 << " " << "Has same length " << endl;
	}
	else {
		cout << str1 << " " << str1.length() << " differ  " << str2 << " " << str2.length() << endl;
	}

	if (str1 == str2) {
		cout << str1 << " and " << str2 << " are same" << endl;
	}
	else if (str1 < str2) {
		cout << str1 << " < " << str2 << endl;
	}
	else {
		cout << str1 << " > " << str2 << endl;
	}


}

/*

Charactor Functions
--------------------

isalnum()
isalpha()
iscntrl()
isdigit()
isgraph(c) - true if c is not a space but is printable 
islower()
isupper()
isprint(c) - printable including space char
ispunct()
isspace()
isxdigit()
tolower()
toupper()

*/



void toUpperString() {
	string word;
	unsigned short i = 0;
	getline(cin, word, '\n');
	while (word[i] != NULL) {
		if (islower(word[i])) {
			word[i] = toupper(word[i]);
			
		}
		i++;
		cout << word << endl;
	}
}


// Range for statement
/*

	for(declaration : expression) {
		statement;
	}

*/


void check_the_range_for_statement() {
	string str;
	getline(cin, str, '\n');

	for (auto c : str) {
		c = islower(c) ? toupper(c) : tolower(c);
		cout << c;
	}

	int m[] = { 1,2,3,4,5};
	for (auto i : m) {
		cout << i << endl;
	}
	cout << endl;


}


void get_punct_count()
{
	string word;
	getline(cin, word, '\n');
	decltype(word.size()) punct_count = 0;

	for (auto c : word) {
		ispunct(c) ? punct_count++: 1;
	}
	cout << punct_count << endl;

}


void change_to_upper()
{
	string line;
	getline(cin, line, '\n');
	
	for (auto &c : line) {
		c = toupper(c);
		cout << c << endl;
	}
	cout << line << endl;

}


void first_word_to_upper() {
	string line;

	getline(cin, line, '\n');
	for (decltype(line.size()) index = 0; index < line.size() && line[index] != ' '; index++) {
		line[index] = toupper(line[index]);
	}

	cout << line << endl;
}

void change_to_X() {
	string line;
	getline(cin, line, '\n');

	for (char &c : line) {
		cout << typeid(c).name() << endl;
		c = 'X';
	}
	cout << line << endl;
}

void exercise_3_8() {

	string line;
	string m;
	getline(cin, line, '\n');
	decltype(line.size()) index = 0;
	m = line;
	while (index < line.size()) {
		line[index] = 'x';
		index++;
	}
	cout << line << endl;

	for (decltype(m.size()) i = 0; i < m.size(); i++) {
		m[i] = 'P';
	}

}
