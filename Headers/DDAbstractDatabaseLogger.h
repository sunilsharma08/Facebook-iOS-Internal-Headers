//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DDAbstractLogger.h"

@class NSObject;
@protocol OS_dispatch_source;

@interface DDAbstractDatabaseLogger : DDAbstractLogger
{
    unsigned int saveThreshold;
    double saveInterval;
    double maxAge;
    double deleteInterval;
    BOOL deleteOnEverySave;
    BOOL saveTimerSuspended;
    unsigned int unsavedCount;
    unsigned long long unsavedTime;
    NSObject<OS_dispatch_source> *saveTimer;
    unsigned long long lastDeleteTime;
    NSObject<OS_dispatch_source> *deleteTimer;
}

- (void)flush;
- (void)logMessage:(id)arg1;
- (void)willRemoveLogger;
- (void)didAddLogger;
- (void)deleteOldLogEntries;
- (void)savePendingLogEntries;
@property BOOL deleteOnEverySave;
@property double deleteInterval;
@property double maxAge;
@property double saveInterval;
@property unsigned int saveThreshold;
- (void)createAndStartDeleteTimer;
- (void)updateDeleteTimer;
- (void)destroyDeleteTimer;
- (void)createSuspendedSaveTimer;
- (void)updateAndResumeSaveTimer;
- (void)destroySaveTimer;
- (void)performDelete;
- (void)performSaveAndSuspendSaveTimer;
- (void)db_saveAndDelete;
- (void)db_delete;
- (void)db_save;
- (BOOL)db_log:(id)arg1;
- (void)dealloc;
- (id)init;

@end

