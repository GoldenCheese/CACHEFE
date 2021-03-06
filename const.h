#ifndef __CONST__H__
#define __CONST__H__

#include<vector>
#include<iostream>
#include<string>
#include<math.h>
#include <random>

using namespace std;

#define NumParam 1
#define NumTrans 3
#define NewTonIer 100
#define VerrTol  1E-6
#define IerrTol  1E-7
#define PMOS_ 0
#define NMOS_ 1
#define NumNodes 2
#define PI 3.1415926
#define PROBSUB 0.1
#define NITERMAX 30
#define VDD 1
#define MYEPSILON 0.0001
#define NL_ 0
#define AXL_ 1
#define PL_ 2
#define NR_ 3
#define AXR_ 4
#define PR_ 5
#define MYMIN -1E-10
#define MYMAX 1E10
#define READFAIL_ 1
#define WRITEFAIL_ 2
#define SAFAIL_ 3

//#define MYRATE 0.39
#define MYRATE 0.522
#define REALCOR 0.025
#define FAKECOR 0.025


// 0.65 0.05 0.05
//0.6 0.04 0.08
//0.5 0.03 0.02
// 0.52 0.025 0.025
// 0.525 0.025 0.025
// 0.522(0.521) 0.025 0.025
#define GD 1
#define GS 2

#define TWL 16E-8
#define REALCOR2 0.11
#define FAKECOR2 0.11
// 25E-8 0.20 0.20
// 27E-8 0.19 0.19
// 16E-8 0.11 0.11
extern std::mt19937 e;
extern normal_distribution<double> n;
extern std::uniform_real_distribution<double>randengine;
#endif 
