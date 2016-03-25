//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIActionSheetDelegate-Protocol.h"

@class CLLocation, FBUserSession, NSMutableArray, NSString, UIActionSheet;

@interface FBFriendsNearbyPingActionSheetController : NSObject <UIActionSheetDelegate>
{
    UIActionSheet *_actionSheet;
    NSMutableArray *_openInObjects;
    CLLocation *_fromLocation;
    CLLocation *_toLocation;
    NSString *_toPersonName;
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (void)showWithFromLocation:(id)arg1 toLocation:(id)arg2 toPersonName:(id)arg3 inView:(id)arg4;
- (void)showWithFromLocation:(id)arg1 toLocation:(id)arg2 inView:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_openInApp:(id)arg1;
- (void)_prepareActionSheetDataItems;
- (BOOL)_uberFeatureEnabled;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

