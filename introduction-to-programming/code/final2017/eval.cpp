/*
* eval.cpp
*
*  Created on: 21 Dec 2017
*      Author: fanj
*/

#include "stock_analy.h"

int main() {
	LoadStockData("data/sample.csv");

	Query("-C 000001.SZ -h -d 2017-01-03 -a");

	Query("-C 000001.SZ -h -d 2017-01-03 -a");

	system("pause");
	return 0;
}
