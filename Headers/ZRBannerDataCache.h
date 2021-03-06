//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSessionClassProvidable-Protocol.h"
#import "ZRBannerDataFetcherDelegate-Protocol.h"

@class FBExponentialBackoffTimer, NSString, ZRApplicationState, ZRBannerData, ZRBannerDataFetcher;

@interface ZRBannerDataCache : NSObject <FBSessionClassProvidable, ZRBannerDataFetcherDelegate>
{
    ZRBannerData *_bannerData;
    ZRApplicationState *_zeroRatingState;
    FBExponentialBackoffTimer *_backoffTimer;
    ZRBannerDataFetcher *_bannerDataFetcher;
    CDUnknownBlockType _bannerDataFactoryBlock;
}

@property(copy, nonatomic) CDUnknownBlockType bannerDataFactoryBlock; // @synthesize bannerDataFactoryBlock=_bannerDataFactoryBlock;
@property(retain, nonatomic) ZRBannerDataFetcher *bannerDataFetcher; // @synthesize bannerDataFetcher=_bannerDataFetcher;
@property(retain, nonatomic) FBExponentialBackoffTimer *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property(retain, nonatomic) ZRApplicationState *zeroRatingState; // @synthesize zeroRatingState=_zeroRatingState;
@property(retain, nonatomic) ZRBannerData *bannerData; // @synthesize bannerData=_bannerData;
- (void)clearCachedBannerData;
- (void)couldNotFetchBannerData:(id)arg1;
- (void)didFetchBannerData:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (void)_updateBannerData:(id)arg1;
- (void)_checkCachedBannerData;
- (void)forceRefresh;
- (void)refreshIfNeeded;
- (BOOL)needsRefresh;
- (void)tokenChanged:(id)arg1;
- (void)dealloc;
- (id)initWithBannerDataFetcherProvider:(id)arg1 zeroRatingState:(id)arg2 bannerDataFactoryBlock:(CDUnknownBlockType)arg3 backoffTimer:(id)arg4 projectGatingDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

