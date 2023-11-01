#ifndef __MDB_H__
#define __MDB_H__

struct MdbRec {
    char name[16];
    char msg[24];
};
int loadmdb(FILE *fp, struct List *dest);
void freemdb(struct List *list);

#endif
