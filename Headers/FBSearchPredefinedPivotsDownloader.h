//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSearchResultsDownloaderDelegate-Protocol.h"

@class FBGraphSearchResultsDownloader, FBScenePath, FBUserSession, NSArray, NSMutableDictionary, NSString;
@protocol FBSearchPredefinedPivotsDownloaderDelegate;

@interface FBSearchPredefinedPivotsDownloader : NSObject <FBSearchResultsDownloaderDelegate>
{
    FBUserSession *_session;
    unsigned int _callSite;
    FBScenePath *_scenePath;
    NSArray *_semanticArray;
    NSArray *_resultTypeArray;
    unsigned int _previewCount;
    FBGraphSearchResultsDownloader *_resultsDownloader;
    unsigned int _currentPivotIndex;
    NSMutableDictionary *_pivots;
    id <FBSearchPredefinedPivotsDownloaderDelegate> _delegate;
}

@property(nonatomic) __weak id <FBSearchPredefinedPivotsDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_downloadNextPivot;
- (void)_didLoadOrFailOnePivot;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2;
- (void)downloader:(id)arg1 didLoadConnection:(id)arg2 latency:(unsigned long long)arg3 isCachedResponse:(BOOL)arg4 isHeadRequest:(BOOL)arg5;
- (void)load;
- (id)initWithSession:(id)arg1 callSite:(unsigned int)arg2 scenePath:(id)arg3 semanticArray:(id)arg4 resultTypeArray:(id)arg5 previewCount:(unsigned int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

