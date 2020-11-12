/*

Vector Notes
Vectors are C++ templates. 
templates and instantiation.

#include <vector>
using std::vector;

vector<string> string_vector;


vector<T> v1; vector that holds objects of type T and is empty
vector<T> v2 = v1; vector that holds objects of type T and each element in v2 is a copy of v1
vector<T> v3(n,val); vector has n elements of value val.
vector<T> v4(n) v4 has n copies of value initailized object
vector<T> v5{a,b,c,d,e,...}
vector<T> v6 = {a,b,c,d,e,f..}
*/

#include<vector>
#include<iostream>
#include<string>;
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

void vector_intro() {
	vector<string> v1;
	vector<string> v2(100);
	vector<double> v3(1000, 12.45);
	vector<int> v4{ 1,2,3,5,6,7,7,8,9 };
	vector<int> v5 = v4;
	vector<string> v6 = { "a", "b", "c", "d", "e" };
	vector<vector<string>> v7;
	vector <int> v8;



	cout << v2.size() << endl;
	
	for (auto a : v3) {
		cout << a <<" "<< v3.size()<< endl;
	}
	for (auto b : v4) {
		cout << v4.size() << " " << b << endl;
	}

	for (auto c : v6) {
		cout << v6.size() << c << endl;
	}


	for (decltype(v8.size()) i = 0; i < 1000; i++) {
		v8.push_back(i);
		cout << "size: " << v8.size() << endl;
	}
}


void read_into_vector() {

	vector<string> v1 = { "a", "b","c" };
	string word;
	cout << "siize" << v1.size();
/*
	while (cin >> word) {
		v1.push_back(word);

	}
*/
//	cout << v1[v1.size() - 1] << endl;
	cin >> v1[0];
	cout << v1[0] <<endl;
	cin >> v1[1];
	cout << v1[v1.size()-1] << endl;
}

/* 
v.empty()
v.size()
v.push_back(t)
v[n]
v1 = v2
v1 = (a,b,c,d,e...)
v1 == v2
v1 != v2
< , <=, >=, >

*/

void manipulate_int_vector() {
	vector<int> v1 = { 1,2,3,4,5,6 };

	for (auto &i : v1) {
		i = i * i;
	}

	for (auto i : v1) {
		cout << i << endl;
	}
}

void grade_bucket()
{
	vector<int> grade(11,0);
	unsigned long  a;
	for (auto i = 0; i < 20; i++) {
		cin >> a;
		if (a <= 100) {
			cout << "is " << a << endl;
			++grade[a / 10];
			cout << grade[a / 10]<<endl;
		}
	}

	for (auto i : grade) {
		cout << i << endl;
	}
}


void sum_elements() {
	vector<int> v1;
	vector<int> v2;
	int a;
	for (auto i = 0; i < 10; i++) {
		cin >> a;
		v1.push_back(a);
	}
	v2 = v1;

	for (decltype(v1.size()) i = 0; i < v1.size()-1; i = i + 2) {
		cout << i << " & "<< i+1 <<" : "<< v1[i] <<" -> "<< v1[i+1] << endl;
		cout << (v1[i] + v1[i + 1]) << endl;
	}
	for (decltype(v2.size()) i = 0; i < v2.size()/2; i++) {
		cout << v2[i] + v2[v2.size()-i-1] << endl;
	}
}








