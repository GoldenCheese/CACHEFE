
# CACHEFE

This tool "CACHEFE" is designed for estimating [SRAM](https://en.wikipedia.org/wiki/Static_random-access_memory) failure rate.

<script type="text/javascript" src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=default"></script>

## 1. Introduction 

Currently, the tool supports modeling three kinds of SRAM Failure Rate: **Read Failure**, **Write failure**, **Sense Amplifier Failure**. For more details about the failure , please refer to:

[[1]](http://ieeexplore.ieee.org/document/1542241) Mukhopadhyay S, Mahmoodi H, Roy K. Modeling of failure probability and statistical design of SRAM array for yield enhancement in nanoscaled CMOS[J]. IEEE Transactions on Computer-Aided Design of Integrated Circuits and Systems, 2005, 24(12):1859-1880.

Basically, MOSFET failure rate is so small ( typically $10^{-6}$ ) that [Monte Carlo method](https://en.wikipedia.org/wiki/Monte_Carlo_method) would be costly ( $10^8-10^9$ ) simulations required ), So here we use algorithm described in :

[[2]](http://ieeexplore.ieee.org/document/7827595/) Yu H, Tao J, Liao C, et al. Efficient statistical analysis for correlated rare failure events via Asymptotic Probability Approximation[C]// Ieee/acm International Conference on Computer-Aided Design. IEEE, 2017:18.


## 2. Prerequest

Currently, the source codes request **g++** to compile on Linux | Mac OSX platform.

## 3. Installation

1. Change directory to the path where your unzipped file. 
2. Compile the source code. 
3. Run the programm.

```
$ cd "your path"
$ make
$ ./CACHEFE -C (--Cell) argument [options]
```

## 4. Usage

 ./CACHEFE -C (--Cell) argument [-A (--Algo) arguement]  [-T (--Type) argument]


[-C (--Cell) argument]: represents the cell number, the argument must be a positive integer and must be given.

[-A (--Algo) argument]: represents the algorithm used to calculate SRAM Failure Rate, the argument must be one of "APA", "APE", default is "APA".

[-T (--Type) argument]: represents the type of the failure,the argument must be one of"all","read","write","sa", default is "all".



## 5. Example

**./CACHEFE --Cell 64**  : Using algorithm APA to simulate  all types of failure of a SRAM with 64 Cells.

**./CACHEFE -C 32 -T read** : Using algorithm APA to simulate  read failure of a SRAM with 32 Cells.


## 6. Acknowledgement

1. Thanks to a Github contributor with cmdline parser, you can find it here:[https://github.com/tanakh/cmdline](https://github.com/tanakh/cmdline)


## 7. Supports

If you have any questions related to this tool, please feel free to contact with me: <14307130100@fudan.edu.cn> or <zhengqigao@163.com>