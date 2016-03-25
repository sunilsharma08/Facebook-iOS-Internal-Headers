//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBGravityManagerSubscriberDelegate-Protocol.h"

@class FBUserSession, NSString;

@interface FBGravityVisitReporter : NSObject <FBGravityManagerSubscriberDelegate>
{
    FBUserSession *_session;
    NSString *_currentPageID;
}

@property(copy, nonatomic) NSString *currentPageID; // @synthesize currentPageID=_currentPageID;
- (void).cxx_destruct;
- (void)_reportDidExitToPageFBID:(id)arg1;
- (void)_reportDidEnterToPageFBID:(id)arg1;
- (void)didExitPulsar;
- (void)didSwitchPulsarWithPage:(id)arg1 pulsarInfo:(id)arg2 extraData:(id)arg3;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

