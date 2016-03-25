//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBDiagnosticsPowerLogsDownloadServiceDelegate-Protocol.h"

@class FBDiagnosticsPowerLogsDownloadService, NSString;
@protocol FBDiagnosticsDownloaderDelegate;

@interface FBDiagnosticsDownloader : NSObject <FBDiagnosticsPowerLogsDownloadServiceDelegate>
{
    FBDiagnosticsPowerLogsDownloadService *_downloadService;
    id <FBDiagnosticsDownloaderDelegate> _delegate;
    unsigned int _requestedInterval;
}

@property(nonatomic) unsigned int requestedInterval; // @synthesize requestedInterval=_requestedInterval;
@property(nonatomic) __weak id <FBDiagnosticsDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_collectDataFromSqlLogFiles:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_collectAndReturnDiagnosticsDataFromSqlLogFiles:(id)arg1;
- (void)_collectAndLogUnsentDiagnosticsDataFromSqlLogFiles:(id)arg1;
- (void)powerLogDownloadService:(id)arg1 didFinishWithSQLLogFiles:(id)arg2 compressedSQLFiles:(id)arg3;
- (void)powerLogDownloadService:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDiagnosticsWithInterval:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

