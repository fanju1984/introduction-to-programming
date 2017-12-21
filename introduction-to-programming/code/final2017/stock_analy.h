/*
* stock_analy.h
*
*  Created on: 21 Dec 2017
*      Author: fanj
*/

#ifndef STOCK_ANALY_H_
#define STOCK_ANALY_H_

#include <iostream>
#include <cstdio>
#include <vector> 
#include <cstring>
#include <assert.h>
#include <time.h>
#include <malloc.h>
#include <fstream>
#include <iomanip>
using namespace std;

// 一、读入数据
// Example: LoadStockData("C:\\stock_trade.csv");
int LoadStockData(char *filename);

// 二、查询类任务
// Example: Query(“-C 000001.SZ -h -d 2017-01-03 -a”)
int Query(char * para_str);
// Example: TopK(“2017-01-03”, “Volumn”, 3, 1)
int TopK(char *date, char *data, int k, int desc);

// 三、计算类任务
// Example: Calculate("-C 000001.SZ -d 2017-01-03 -d 2017-01-10 -o -v");
double Calculate(char *para_str);
// Example: CalcMacd("000001.SZ", "2017-01-03", "2017-01-10")
void CalcMacd(char *code, char *start_date, char *end_date);
// Example: MACDTopK(“2017-01-01”, “2017-01-31”, 3)
int MACDTopK(char *start_date, char *end_date, int k);
// Example: FuzzyMatch(“000011.SC”, 3)
int FuzzyMatch(char *query, int threshold);


#endif /* STOCK_ANALY_H_ */
