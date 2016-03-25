//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMemPage, FBScenePath, FBUserSession, NSString;
@protocol FBPageActivitiesCardControllerDelegate;

@interface FBPageActivitiesCardController : NSObject
{
    FBMemPage *_page;
    FBUserSession *_userSession;
    id <FBPageActivitiesCardControllerDelegate> _delegate;
    NSString *_analyticsUUID;
    FBScenePath *_scenePath;
}

@property(readonly, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
@property(readonly, copy, nonatomic) NSString *analyticsUUID; // @synthesize analyticsUUID=_analyticsUUID;
@property(readonly, nonatomic) FBUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak id <FBPageActivitiesCardControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBMemPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (void)logPageActionWithEventName:(id)arg1 extra:(id)arg2;
- (id)cardView;
- (void)configureWithPage:(id)arg1;
- (id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 scenePath:(id)arg5;
- (id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4;

@end

