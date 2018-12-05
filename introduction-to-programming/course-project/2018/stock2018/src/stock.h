//----------------------------------------------------------------------
//		File:			stock.h
//		Programmer:		Zhang San and Li Si
//		Last modified:	2018-12-xx (Release 0.1)
//		Description:	 This is the header file of stock.h
//----------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>

struct Record {
	/**
	 * 请填充你的结构体定义
	 */
};

/**
 * 任务1：读入数据
 * 参数定义：
 *   filename表示文件名
 */
int LoadStockData(char *filename);

/**
 * 任务2：提取数据
 * 参数定义：
 *   1) index 表示数据记录的编号
 *   2) name 表示字段名，如成交量 "Volume"
 *   3) pvalue 是一个空类型指针地址，它指向查询到的具体字段值
 */
int GetFieldVal(int index, const char *name, void *pvalue);

/**
 * 任务3：记录排序
 * 参数定义：
 *   1) reco_index数组代表所有须排序的数据记录的编号，
 *       运行结束后，其中是已按要求排过序的索引号
 *   2) n 表示记录的数量
 *   3) order_by指向排序的准则，它由若干逗号分隔的字段名组成
 */
void SortRecords(int reco_index[], int n, const char *order_by);

/**
 * 任务4：查询类任务
 * 参数定义：
 *   1) condition 为查询的条件表达式
 *   2) reco_index 存放数据编号的数组，应考虑将它创建为一个动态数组空间，
 *      因为查询结果的具体数目事先不可预知
 */
int Select(const char *condition, int reco_index[]);

/**
 * 任务5：分组统计
 * 参数定义：
 *   1) reco_index 和 n 的含义与前面第四项任务中相同
 *   2) cmd 表示统计指令，如"COUNT(*)"
 *   3)	group_by 为分组依据，如"Date"
 *
 */
int Aggregate (int reco_index[], int n, const char *cmd, const char *group_by);

/**
 * 任务6：输出到文件
 * 参数定义：
 *    1) reco_index的含义与前面定义中相同
 *    2) pf表示一个文件指针
 * 对于输出的要求如下：
 *    1)	第1行为标题行，按照读入文件的标题顺序；
 *    2)	从第2行起，按标题行的字段顺序，输出相应的值；
 *    3)	小数保留2位；
 *
 */
void OutputToFile (int reco_index[], int n, FILE *pf);


