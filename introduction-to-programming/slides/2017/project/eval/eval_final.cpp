/*
 * eval_final.cpp
 *
 *  Created on: 4 Jan 2018
 *      Author: fanj
 */


#include "stock_analy.h"

int main() {

	int load_num = LoadStockData("data/eval.csv");
	cout << load_num << endl;
	cout << endl << endl;

	int query_status;// = Query(query_1);

	query_status = Query("-C 000001.SZ -h -d 2016-01-07 -a");
	query_status = Query("-C 000004.SZ -a -d -h 2016-01-07 ");
	query_status = Query("-C 000005.SZ -d 2016-02-04 -h -a");
	query_status = Query("-C 002715.SZ -d 2016-03-26 -c -o");
	query_status = Query("-C 002715.SS -d 2016-03-26 -c -o");
	query_status = Query("-C 600689.SS -c -o -d 2016-03-28");
	query_status = Query("-C 600691.SS -l -a -d 2016-02-23");
	query_status = Query("-C 600691.SZ -l -a -d 2016-01-23");
	query_status = Query("-C 600691.SS -l -h -d 2016-02-23");
	query_status = Query("-C 600691.SS -o -d 2016-02-23");
	cout << endl << endl;


	int topk_status = TopK("2016-01-07", "Volumn", 3, 1);
	cout << topk_status << endl;
	topk_status = TopK("2016-03-28", "Range", 10, 1);
	cout  << topk_status << endl;
	topk_status = TopK("2016-01-12", "AdjClose", 5, 1);
	cout  << topk_status << endl;
	topk_status = TopK("2016-01-12", "AdjClose", 5, 0);
	cout  << topk_status << endl;
	topk_status = TopK("2016-02-03", "Range", 10, 0);
	cout  << topk_status << endl;
	cout << endl << endl;


	Calculate("-C 600321.SS -d 2016-01-12 -d 2016-03-09 -h -v");
	Calculate("-C 600321.SS -d 2016-01-12 -d 2016-03-09 -c -s");
	Calculate("-C 002445.SZ -d 2016-02-01 -d 2016-03-31 -o -v");
	Calculate("-C 002445.SZ -d 2016-02-01 -d 2016-03-31 -l -s");
	Calculate("-C 300292.SZ -d 2016-01-22 -d 2016-03-31 -c -s");
	cout << endl << endl;

	CalcMacd("002727.SZ", "2016-02-22", "2016-03-31");
	CalcMacd("603333.SS", "2016-02-25", "2016-03-15");
	CalcMacd("300444.SZ", "2016-03-04", "2016-03-21");
	CalcMacd("002222.SZ", "2016-02-24", "2016-02-24");
	cout << endl << endl;

	int match_num = FuzzyMatch("000007.SS", 1);
	cout  << match_num << endl;
	match_num = FuzzyMatch("00008.SZ", 1);
	cout  << match_num << endl;
	match_num = FuzzyMatch("00q009.SZ", 2);
	cout << match_num << endl;
	match_num = FuzzyMatch("100008-ST", 3);
	cout  << match_num << endl;
	return 0;
}
