//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol FBDiagnosticsPowerLogsDownloadServiceDelegate, OS_dispatch_source;

@interface FBDiagnosticsPowerLogsDownloadService : NSObject
{
    NSObject<OS_dispatch_source> *_src;
    id <FBDiagnosticsPowerLogsDownloadServiceDelegate> _delegate;
    NSArray *_sqlLogFiles;
    NSArray *_compressSqlFiles;
    id _mbsDevice;
    unsigned int _retryCount;
}

@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) id mbsDevice; // @synthesize mbsDevice=_mbsDevice;
@property(copy, nonatomic) NSArray *compressSqlFiles; // @synthesize compressSqlFiles=_compressSqlFiles;
@property(copy, nonatomic) NSArray *sqlLogFiles; // @synthesize sqlLogFiles=_sqlLogFiles;
@property(nonatomic) __weak id <FBDiagnosticsPowerLogsDownloadServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_logPath;
- (void)_prepareLogDirectory;
- (id)_extractGZIPFile:(id)arg1;
- (void)_loadPowerLogs;
- (void)startPowerLogDownload;

@end

