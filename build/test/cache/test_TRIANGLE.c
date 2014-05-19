#include "unity.h"
#include "TRIANGLE.h"


char *respond(int value1 , int value2 , int value3);



void setUp(void)

{

}



void tearDown(void)

{

}



void test_side1_is_4_side2_is_2_and_length_is_5(void)

{

 char *P;

 P = respond(4,2,5);

 UnityAssertEqualString((const char*)("Scalene"), (const char*)(P), (((void *)0)), (_U_UINT)18);

}



void test_side1_is_5_side2_is_5_and_length_is_8(void)

{

 char *P;

 P = respond(5,5,8);

 UnityAssertEqualString((const char*)("Isosceles"), (const char*)(P), (((void *)0)), (_U_UINT)25);

}



void test_side1_is_2_side2_is_8_and_length_is_2(void)

{

 char *P;

 P = respond(4,8,4);

 UnityAssertEqualString((const char*)("Isosceles"), (const char*)(P), (((void *)0)), (_U_UINT)32);

}



void test_side1_is_8_side2_is_12_and_length_is_12(void)

{

 char *P;

 P = respond(8,12,12);

 UnityAssertEqualString((const char*)("Isosceles"), (const char*)(P), (((void *)0)), (_U_UINT)39);

}



void test_side1_is_8_side2_is_8_and_length_is_8(void)

{

 char *P;

 P = respond(8,8,8);

 UnityAssertEqualString((const char*)("Equilateral"), (const char*)(P), (((void *)0)), (_U_UINT)46);

}





void test_side1_is_negative2_side2_is_4_and_length_is_8(void)

{

 char *P;

 P = respond(-2,4,8);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)54);

}



void test_side1_is_negative2_side2_is_5_and_length_is_negative6(void)

{

 char *P;

 P = respond(-2,5,-6);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)61);

}



void test_side1_is_negative8_side2_is_negative8_and_length_is_negative8(void)

{

 char *P;

 P = respond(-8,-8,-8);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)68);

}



void test_side1_is_10_side2_is_30_and_length_is_8(void)

{

 char *P;

 P = respond(0,30,8);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)75);

}



void test_side1_is_0_side2_is_0_and_length_is_8(void)

{

 char *P;

 P = respond(0,0,8);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)82);

}



void test_side1_is_0_side2_is_0_and_length_is_0(void)

{

 char *P;

 P = respond(0,0,0);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)89);

}



void test_side1_is_1_side2_is_1_and_length_is_7(void)

{

 char *P;

 P = respond(1,1,7);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)96);

}



void test_side1_is_7_side2_is_12_and_length_is_3(void)

{

 char *P;

 P = respond(7,12,3);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)103);

}
