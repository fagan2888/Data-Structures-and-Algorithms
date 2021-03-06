#ifndef _hashsep_h
#define _hashsep_h

typedef int type;
typedef int position;


struct listentry;
typedef struct listentry* node;


struct hashtbl;
typedef struct hashtbl* hashtable;


        hashtable init( int tableSize );
        void destroy( hashtable H );
        position find( type Key, hashtable H );
        hashtable insert( type Key, hashtable H );
        hashtable delete( type Key, hashtable H );
        hashtable rehash( hashtable H );

#endif

