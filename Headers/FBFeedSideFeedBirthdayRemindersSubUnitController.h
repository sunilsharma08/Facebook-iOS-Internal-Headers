//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFeedSideFeedRemindersSubUnitController-Protocol.h"

@class FBUserSession, NSString;
@protocol FBFeedSideFeedRemindersSubUnitControllerDelegate;

@interface FBFeedSideFeedBirthdayRemindersSubUnitController : NSObject <FBFeedSideFeedRemindersSubUnitController>
{
    FBUserSession *_session;
    id <FBFeedSideFeedRemindersSubUnitControllerDelegate> delegate;
}

@property(nonatomic) __weak id <FBFeedSideFeedRemindersSubUnitControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)tapEventName;
- (void)remindersTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 withData:(id)arg3;
- (id)summaryTextForData:(id)arg1;
- (id)validEdgesFromData:(id)arg1;
- (BOOL)isResponsibleForData:(id)arg1;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

