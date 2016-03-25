//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface FBDiagnosticsAnalyser : NSObject
{
    NSObject<OS_dispatch_queue> *_loadingQueue;
    NSString *_logfile;
    struct sqlite3 *_logfileDatabase;
    struct sqlite3_stmt *_statement;
    NSMutableDictionary *_columnNameToIndexMap;
}

- (void).cxx_destruct;
- (id)stringForColumn:(id)arg1;
- (id)stringForColumnIndex:(int)arg1;
- (double)doubleForColumnIndex:(int)arg1;
- (double)doubleForColumn:(id)arg1;
- (int)intForColumnIndex:(int)arg1;
- (int)intForColumn:(id)arg1;
- (int)columnIndexForName:(id)arg1;
- (id)columnNameToIndexMap;
- (int)columnCount;
- (void)_processQuery:(id)arg1 tableName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processTable:(id)arg1 foreignTable:(id)arg2 from:(id)arg3 toDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)process:(id)arg1 from:(id)arg2 toDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithLogfile:(id)arg1;

@end

