/*

*iter - Returns a reference to the element denoted by the iterator iter
iter->mem - Derefence Iter and fetches the member named mem from the underlying elemenet
         (*iter).mem
++iter -> Increment iter to refer to the next element in the container
--iter -> Decrement iter to refer to previous element in the container
iter1 == iter2
iter1 != iter2 Compares two iterators for equality (inequality). Two iterators are
               equal if the denote the same element or if they are the off-the-end
               iterator for the same container.
*/

#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::getline;
using std::string;
using std::endl;
using std::vector;
void iterator_play()
{
    string s1;
    getline(cin, s1, '\n');

    struct testme {
        int ab = 1;
        string tester = "hello";
    };
    vector<struct testme> te(10);


    if (s1.begin() != s1.end()) {
        auto it = s1.begin();
        cout << typeid(it).name() << endl;
        cout << s1.end() - s1.begin() << endl;

        auto i = s1.end() - s1.begin();
        i = i / 2;
        it = s1.begin() + i;
        cout << toupper(*it) << endl;
        for (; it != s1.end(); it++) {
            *it = toupper(*it);
        }
        cout << s1 << endl;
    }

    auto it = te.begin();

    for (; it != te.end(); it++) {
        cout << it->ab << it->tester << endl;
        it->ab = rand();
        it->tester = "prasanth";
        cout << it->ab << it->tester << endl;
    }

}

/* Constant Iterators */
/* cbegin wil return a const iterator and begin can return both const and non const*/
void iterator_declarations() {
    string s1(100, 'c');
    string s2 = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ 0123456789";
    vector<int>v1(1000, 3);
    const vector<int> v4(1200,56);

    vector<string> s5(100,s1);
    vector<string> s6(0);

    vector<int>::iterator it2 = v1.begin();
    vector<int>::const_iterator itc2 = v1.begin();

    vector<string>::iterator it1 = s5.begin();

    //*itc2 = 1234; // Will be an error
    
    itc2 = v4.begin();
    cout << *itc2 << endl;
    (*it1).empty();
    (*it1) = "Prasanth Kurian has Mary at heart";
    (*(it1+1)) = "Please watch your thoughts and words.";
    
    (*(it1+2)) = (*it1) + (*(it1 + 1));
    it1 = it1 + 2;
    cout << *(it1) << endl;
    
    it1++;
    if (!it1->empty()) {
        cout << "Thats a problem" << endl;
    }
    
    for (auto i = 0; i < 100; i++) {
        string temp;
        for (auto j = 0; j < 100; j++) {
            temp.push_back(s2[rand() % (s2.size() - 1)]);
        }
        s6.push_back(temp);
    }
    
    it1 = s6.begin();

    for (it1 = s6.begin(); it1 != s6.end(); it1++) {
        cout << *it1 << endl;
    }
    
}


