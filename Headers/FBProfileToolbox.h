//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBFeedComponentToolbox, FBMemPerson, FBProtileAnalytics, NSDictionary, NSString;

@interface FBProfileToolbox : NSObject
{
    FBProtileAnalytics *_protileAnalytics;
    FBFeedComponentToolbox *_feedToolbox;
    NSString *_analyticsUUID;
    NSDictionary *_analyticsExtras;
    FBMemPerson *_targetPerson;
}

+ (id)toolboxWithAnalyticsUUID:(id)arg1 analyticsExtras:(id)arg2 targetPerson:(id)arg3 feedComponentToolbox:(id)arg4;
@property(readonly, nonatomic) FBProtileAnalytics *protileAnalytics; // @synthesize protileAnalytics=_protileAnalytics;
@property(readonly, copy, nonatomic) FBMemPerson *targetPerson; // @synthesize targetPerson=_targetPerson;
@property(readonly, copy, nonatomic) NSDictionary *analyticsExtras; // @synthesize analyticsExtras=_analyticsExtras;
@property(readonly, copy, nonatomic) NSString *analyticsUUID; // @synthesize analyticsUUID=_analyticsUUID;
@property(readonly, copy, nonatomic) FBFeedComponentToolbox *feedToolbox; // @synthesize feedToolbox=_feedToolbox;
- (void).cxx_destruct;
- (void)updateTargetPerson:(id)arg1;
- (id)experimentCache;
- (id)scenePath;
- (id)analyticsModule;
- (unsigned int)layoutIdiom;
- (id)intentHandler;
- (id)navigationCoordinator;
- (id)session;
- (id)targetPersonID;
- (BOOL)isViewingSelf;
- (id)initWithAnalyticsUUID:(id)arg1 analyticsExtras:(id)arg2 targetPerson:(id)arg3 feedComponentToolbox:(id)arg4;

@end

