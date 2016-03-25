//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSearchResultsActivityListener-Protocol.h"

@class NSString;

@interface FBPPSLogger : NSObject <FBSearchResultsActivityListener>
{
    unsigned int _sourceType;
    NSString *_typeaheadSessionID;
    NSString *_queryString;
    NSString *_ppsID;
}

@property(copy, nonatomic) NSString *ppsID; // @synthesize ppsID=_ppsID;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(copy, nonatomic) NSString *typeaheadSessionID; // @synthesize typeaheadSessionID=_typeaheadSessionID;
- (void).cxx_destruct;
- (id)_filterTypeFromResultType:(unsigned int)arg1;
- (void)_logEvent:(id)arg1 extra:(id)arg2;
- (void)resultsDidFailWithError:(id)arg1;
- (void)resultsWithSessionID:(id)arg1 didLoadCount:(unsigned int)arg2 isHeadRequest:(BOOL)arg3 resultType:(unsigned int)arg4 fromCache:(BOOL)arg5 networkTime:(unsigned long long)arg6 totalTime:(unsigned long long)arg7;
- (void)resultsWithSessionID:(id)arg1 didReceiveInlineAction:(unsigned int)arg2 onEntity:(id)arg3 resultType:(unsigned int)arg4;
- (void)resultsWithContext:(id)arg1 didReceiveClickOnNode:(id)arg2 atIndex:(int)arg3;
- (void)resultsWithSessionID:(id)arg1 didYieldImpressionWithResultType:(unsigned int)arg2 source:(id)arg3 resultsState:(unsigned int)arg4;
- (id)searchExtrasForResultType:(unsigned int)arg1;
- (id)initWithQueryString:(id)arg1 typeaheadSessionID:(id)arg2 sourceType:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

