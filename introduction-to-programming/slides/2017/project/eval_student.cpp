/*
 * eval_student.cpp
 *
 *  Created on: 3 Jan 2018
 *      Author: fanj
 */
#include "stock_analy.h"


int main() {

	int load_num = LoadStockData("data/eval.csv");
	cout << "# of records loaded: " << load_num << endl;
	cout << endl;

	cout << "############ Evaluate Query ###############" << endl;
	char query_1[] = "-C 000001.SZ -h -d 2016-01-21 -a";
	int query_status = Query(query_1);
	cout << "query status of " << query_1 << ": " << query_status << endl;
	char query_2[] = "-C 002767.SZ -o -c -a -d 2016-01-07";
	query_status = Query(query_2);
	cout << "query status of " << query_2 << ": " << query_status << endl;
	char query_3[] = "-C 002768.SZ -o -c -a -d 2016-03-16";
	query_status = Query(query_3);
	cout << "query status of " << query_3 << ": " << query_status << endl;
	cout << endl;

	cout << "############ Evaluate TopK ###############" << endl;
	int topk_status = TopK("2016-01-28", "Volumn", 4, 1);
	cout << "topk status: " << topk_status << endl;
	topk_status = TopK("2016-03-03", "Range", 5, 0);
	cout << "topk status: " << topk_status << endl;
	topk_status = TopK("2016-02-20", "AdjClose", 10, 1);
	cout << "topk status: " << topk_status << endl;
	cout << endl;

	cout << "############ Evaluate Calculate ###############" << endl;
	Calculate("-C 000001.SZ -d 2016-01-04 -d 2016-01-18 -c -v");
	Calculate("-C 000001.SZ -d 2016-01-04 -d 2016-01-18 -l -s");
	Calculate("-C 000002.SZ -d 2016-02-16 -d 2016-03-07 -c -v");
	Calculate("-C 000002.SZ -d 2016-02-16 -d 2016-03-07 -l -s");
	Calculate("-C 000005.SZ -d 2016-02-17 -d 2016-03-03 -c -v");
	Calculate("-C 000005.SZ -d 2016-02-17 -d 2016-03-03 -l -s");
	cout << endl;

	cout << "############ Evaluate Fuzzy Match ###############" << endl;
	int match_num = FuzzyMatch("000007.SS", 1);
	cout << "# of matched: " << match_num << endl;
	match_num = FuzzyMatch("00008.SZ", 1);
	cout << "# of matched: " << match_num << endl;
	match_num = FuzzyMatch("00q009.SZ", 2);
	cout << "# of matched: " << match_num << endl;

	//system("pause");
	return 0;
}
