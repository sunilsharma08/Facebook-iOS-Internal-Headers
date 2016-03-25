//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMegaphonesDownloadRequest, FBUserSession, NSMutableDictionary;

@interface FBMegaphoneService : NSObject
{
    FBUserSession *_session;
    NSMutableDictionary *_megaphonesByLocation;
    NSMutableDictionary *_hiddenMegaphones;
    BOOL _fetchOnlyQPMegaphones;
    NSMutableDictionary *_pendingMegaphonesByLocation;
    FBMegaphonesDownloadRequest *_request;
    double _lastRefreshTimestamp;
    double _lastQuickPromotionRefreshTimestamp;
}

@property(retain) FBMegaphonesDownloadRequest *request; // @synthesize request=_request;
@property(nonatomic) double lastQuickPromotionRefreshTimestamp; // @synthesize lastQuickPromotionRefreshTimestamp=_lastQuickPromotionRefreshTimestamp;
@property(nonatomic) double lastRefreshTimestamp; // @synthesize lastRefreshTimestamp=_lastRefreshTimestamp;
@property(retain, nonatomic) NSMutableDictionary *pendingMegaphonesByLocation; // @synthesize pendingMegaphonesByLocation=_pendingMegaphonesByLocation;
@property(nonatomic) BOOL fetchOnlyQPMegaphones; // @synthesize fetchOnlyQPMegaphones=_fetchOnlyQPMegaphones;
- (void).cxx_destruct;
- (BOOL)_fetchDummyMegaphoneForLocation:(id)arg1;
- (BOOL)_isMegaphoneHidden:(id)arg1;
- (void)_recordMegaphoneAsHidden:(id)arg1;
- (void)_prefetchImageForMegaphone:(id)arg1;
- (BOOL)_megaphonesEqualForLocation:(id)arg1;
- (void)_fetchLegacyMegaphones;
- (void)_failureFetchRequest;
- (void)_handleFetchResponse:(id)arg1 error:(id)arg2;
- (id)_fetchQuickPromotionMegaphoneForLocation:(id)arg1;
- (void)_scheduleFetchIfNeeded:(id)arg1;
- (void)removeMegaphoneForLocation:(id)arg1;
- (id)updateMegaphoneForLocation:(id)arg1;
- (BOOL)existsUpdateForLocation:(id)arg1;
- (id)megaphoneForLocation:(id)arg1;
- (BOOL)hasMegaphoneForLocation:(id)arg1;
- (void)sessionDidInvalidate;
- (void)dealloc;
- (id)init;
- (id)initWithSession:(id)arg1;

@end

