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
	 * �������Ľṹ�嶨��
	 */
};

/**
 * ����1����������
 * �������壺
 *   filename��ʾ�ļ���
 */
int LoadStockData(char *filename);

/**
 * ����2����ȡ����
 * �������壺
 *   1) index ��ʾ���ݼ�¼�ı��
 *   2) name ��ʾ�ֶ�������ɽ��� "Volume"
 *   3) pvalue ��һ��������ָ���ַ����ָ���ѯ���ľ����ֶ�ֵ
 */
int GetFieldVal(int index, const char *name, void *pvalue);

/**
 * ����3����¼����
 * �������壺
 *   1) reco_index���������������������ݼ�¼�ı�ţ�
 *       ���н������������Ѱ�Ҫ���Ź����������
 *   2) n ��ʾ��¼������
 *   3) order_byָ�������׼���������ɶ��ŷָ����ֶ������
 */
void SortRecords(int reco_index[], int n, const char *order_by);

/**
 * ����4����ѯ������
 * �������壺
 *   1) condition Ϊ��ѯ���������ʽ
 *   2) reco_index ������ݱ�ŵ����飬Ӧ���ǽ�������Ϊһ����̬����ռ䣬
 *      ��Ϊ��ѯ����ľ�����Ŀ���Ȳ���Ԥ֪
 */
int* Select(const char *condition, int& n);

/**
 * ����5������ͳ��
 * �������壺
 *   1) reco_index �� n �ĺ�����ǰ���������������ͬ
 *   2) cmd ��ʾͳ��ָ���"COUNT(*)"
 *   3)	group_by Ϊ�������ݣ���"Date"
 *
 */
int Aggregate (int reco_index[], int n, const char *cmd, const char *group_by);

/**
 * ����6��������ļ�
 * �������壺
 *    1) reco_index�ĺ�����ǰ�涨������ͬ
 *    2) pf��ʾһ���ļ�ָ��
 * ���������Ҫ�����£�
 *    1)	��1��Ϊ�����У����ն����ļ��ı���˳��
 *    2)	�ӵ�2���𣬰������е��ֶ�˳�������Ӧ��ֵ��
 *    3)	С������2λ��
 *
 */
void OutputToFile (int reco_index[], int n, FILE *pf);


