#include <iostream>
#include <string>

void check_vars() {
	bool boo = 1; // size is one byte
	std::cout << "Boolean " << boo << ":" << sizeof(boo) << std::endl;
	char a = 'c'; // size 8 bytes
	std::cout << a <<" "<<sizeof(a) << std::endl;
	//setlocale(LC_ALL, "CP-1252");
	wchar_t d = 129; // To hold extended character list
	std::wcout << "wchar_t " << d << " "<<sizeof(d) << std::endl;

	//char32_t e = '\u0D05';
	//std::wcout << "char32_t " << e << " " << sizeof(e) << std::endl;
	long m = 9;
	std::cout << "size of long  " << sizeof(m) << std::endl;
	long long k = 9;
	std::cout << "size of long long " << sizeof(k) << std::endl;

	double f = 9;
	std::cout << "size of double " << sizeof(f) << std::endl;

	long double g;
	std::cout << "size of long double " << sizeof(g) << std::endl;
}

/*
• When we assign one of the nonbool arithmetic types to a bool object, the result is false if the value is 0 and true otherwise.

• When we assign a bool to one of the other arithmetic types, the resulting value is 1 if the bool is true and 0 if the bool is false.

• When we assign a floating-point value to an object of integral type, the value is truncated. The value that is stored is the part before the decimal point.

• When we assign an integral value to an object of floating-point type, the fractional part is zero. Precision may be lost if the integer has more bits 
than the floating-point object can accommodate.

• If we assign an out-of-range value to an object of unsigned type, the result isthe remainder of the value modulo 
the number of values the target type can hold. For example, an 8-bit unsigned char can hold values from 0 through
255, inclusive. If we assign a value outside this range, the compiler assigns the remainder of that value modulo 256. 
Therefore, assigning –1 to an 8-bit unsigned char gives that object the value 255.

• If we assign an out-of-range value to an object of signed type, the result is undefined. The program might appear to work, 
it might crash, or it might
produce garbage values.

*/
void assign_bool_to_int();
void assign_nonbool_to_bool();
void out_of_range_to_signed();
void assign_float_to_int();
void assign_int_to_float();
void check_auto_conversion_of_unsigned();
void test_all_assignments() {
	//out_of_range_to_signed();
	unsigned char c = 0;
	c = 270;
	if (c == 270 % 256) {
		std::cout << "c == 129" << c<<std::endl;
	}
	std::cout << c << std::endl;
	assign_nonbool_to_bool();
	assign_bool_to_int();
	assign_float_to_int();
	assign_int_to_float();
	check_auto_conversion_of_unsigned();
	out_of_range_to_signed();
}


void assign_nonbool_to_bool() {
	int k = 123;
	bool b = NULL;
	b = k;
	std::cout << "Bool Value " <<b << std::endl;
}

void assign_bool_to_int() {
	int  k = 123;
	bool b = false;
	k = b;
	std::cout << "Value of non bool  k " << k << std::endl;
}

void assign_float_to_int() {
	float m = 123.456;
	int i = 0;
	i = m;
	std::cout << "Float Value: " << i << std::endl;
}

void assign_int_to_float() {
	int i = 999999;
	float k;
	k = i;
	std::cout << "Float value k from i " << k << std::endl;
}

/*
void assign_out_of_range_to_unsigned();
*/

void out_of_range_to_signed() {
	int i = 128;
	std::cout << "out of range 128 to signed int " << i << std::endl;
}

void check_auto_conversion_of_unsigned() {
	unsigned char c = 262;
	signed char m = 126;
	int k = 0;
	m = m + c;
	std::cout << "c =" << c << " m= " << m << "sum=" << k << std::endl;

}


void int_to_unsigned() {
	int u1 = 42;
	unsigned int u2 = 84;
	std::cout << u1 - u2 << std::endl;
}

void interesting_infinite_loop() {
	for (unsigned int i = 10; i >= 0; --i) {
		std::cout << i << std::endl;
	}
}


void exercise_2_3() {
	unsigned u = 10, u2 = 42;

	// Prints 32
	std::cout << u2 - u << std::endl;
	
	// Prints a big number 
	std::cout << u - u2 << std::endl;
	
	int i = 10, i2 = 42;

	// Prints 32
	std::cout << i2 - i << std::endl;
	// Prints -32
	std::cout << i - i2 << std::endl;

	// Prints 0
	std::cout << i - u << std::endl;
	// Prints 0
	std::cout << u - i << std::endl;
}

/*
Literals
Interger literals can be written as integer, octal (0123) or hexa (0xff12)

 20  decimal , 024  octal , 0x14  hexadecimal 

 decimal literals signed type
 octal and hexa literals are either signed or unsigned 

 Based on the value fits . Decimal literals can be integer, long or long long
 Octal and Hexadecimal can be int, unsigned int, long, unsigned long, long long, unsigned long long in order based on size that fits
 
 How to override the default type of the literal

 u -> char16_t -> Unicode character
 U -> char_32t -> Unicode 32 character
 L -> wchar_t -> wide character
 u8 -> utf-8 ( string literal only) char
 u or U -> unsigned 
 l or L -> Long
 l1 or LL -> long long
 f or F -> float
 l or L -> long double

 Interesting - decimal literal can be a never negetive
 for example, -42, the minus sign is not part of the literal.
The minus sign is an operator that negates the value of its (literal) operand.


Floating point literal by default double 
we can override with suffix given above.

Character and String literals
------------------------------
character enclosed in single quotes is a character literal
Zero or more characters enclosed ina double quote is a string literal
A string literal is a constant array of characters. Appends a '\0' to a string literal at the end.

'A' -> size is 1
"A" -> actually is "A\0" -> means size 2

L'a' // wide character literal, type is wchar_t
u8"hi!" // utf-8 string literal (utf-8 encodes a Unicode character in 8 bits)
42ULL // unsigned integer literal, type is unsigned long long
1E-3F // single-precision floating-point literal, type is float
3.14159L // extended-precision floating-point literal, type is long double

Boolean literal
true and false

Pointer literal
----------------
nullptr
*/


/*
Variables
--------------


Object - Object is a region of memory that can contain the data and has a  type.

Different Types of Initialization
---------------------------------
int units_sold = 0;
int units_sold = {0};
int units_sold{0};
int units_sold(0);


*/

/*
Initialization with curley braces {}
Called list initializers. Can initialize an object.
Also Check for loss of info when initialize the built in types.

*/

/*
void initialize_wth_curly_braces() {
	double d = 3.1423456;
	int a{ d }, b = { d };
}
*/

/* 
Initializers
Variables  defined outside functions are initialized to zero. Variables for builtin types defined inside the
function are uninirialized.

*/

char ga;
int gi;
float gf;
double gd;

void print_initial_values() {
	char la;
	int li;
	float lf;
	double ld;
	std::string ls;

	std::cout << ga <<" "<<gi<<" "<<gf<<" "<<gd<<" "<<std::endl;
	//std::cout << la << " " << li << " " << lf << " " << ld << " " << std::endl;
	std::cout << ls << std::endl;
}

void exercise_2_9() {
	//std::cin >> int input_value;
	//int i = { 3.14 };
	//double salary = wage = 999.999;
	int i = 3.14;
}


/* Reserved identifiers

alignas
alignof
asm
auto
bool
break
case
catch
char
char16_t
char32_t
class
const
constexpr
const_cast
continue
decltype
default
delete
do
double
dynamic_cast
else
enum
explicit
export
extern
false
float
for
firend
goto
if
inline
int
long
mutable
namespace
new
noexcept
nullptr
operator
private
protected
public
register
reinterpret_cast
return
short
signed
sizeof
static
static_assert
static_cast
struct
switch
template
this
thread_local
throw
true
try
typedef
typeid
typename
union
unsigned
using
virtual
void
volatile
wchar_t
while



Alternative operator names
and
and_eq
bitand
bitor
compl
not
not_eq
or
or_eq
xor
xor_eq

*/

/*
void identifiers() {
	int  _ = 123;
	std::cout << _ << std::endl;
}



void exercise_2_14() {
	int i = 100, sum = 0;
	for (int i = 0; i != 10; i++) {
		sum += i;
	}
	std::cout << sum << std::endl;
}

*/

/*
Compound Type - Refernces and Pointers

Reference is an alternative form of an object. 
Define by writing &d ( d is the name being decalred) 

A reference is an alias.

*/


void compound_type_reference() {
	int d = 123;
	int &refval = d;
	std::cout << refval << std::endl;
	refval = 254;
	std::cout << d << std::endl;
}


/* nullptr check v/s NULL*/

void ptr_initialization() {
	int* ptr = nullptr;
	std::string* ptr2 = NULL;


}