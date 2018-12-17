#include "stock.h"

Record *ptr; // 指向动态结构体数组的指针

int LoadStockData(char *filename)
{
  //TODO

  return 0;
}

int GetFieldVal(int index, const char *name, void *pvalue)
{
  //TODO

  return 0;
}

void SortRecords(int reco_index[], int n, const char *order_by)
{

}

int* Select(const char *condition, int& n)
{
  //TODO

  return NULL;
}

int Aggregate (int reco_index[], int n, const char *cmd, const char *group_by)
{
  //TODO

  return 0;
}

void OutputToFile (int reco_index[], int n, FILE *pf)
{

}

