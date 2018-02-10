#ifndef _HSK_ERRORS_H
#define _HSK_ERRORS_H

// Generic
#define HSK_SUCCESS 0
#define HSK_EOK 0
#define HSK_EFAILURE 1
#define HSK_EBADARGS 2
#define HSK_EBADSTRING 3
#define HSK_EENCODING 4
#define HSK_ENOMEM 5

// Proofs
#define HSK_EPROOFOK 0
#define HSK_EHASHMISMATCH 6
#define HSK_EMALFORMEDNODE 7
#define HSK_EINVALIDNODE 8
#define HSK_EEARLYEND 9
#define HSK_ENORESULT 10
#define HSK_EUNKNOWNERROR 11
#define HSK_EUNEXPECTEDNODE 12

// Cuckoo
#define HSK_EPOWOK 0
#define HSK_EPOWPROOFSIZE 13
#define HSK_EPOWTOOBIG 14
#define HSK_EPOWTOOSMALL 15
#define HSK_EPOWNONMATCHING 16
#define HSK_EPOWBRANCH 16
#define HSK_EPOWDEADEND 17
#define HSK_EPOWSHORTCYCLE 18

// POW
#define HSK_NEGTARGET 18
#define HSK_HIGHHASH 19
#endif
