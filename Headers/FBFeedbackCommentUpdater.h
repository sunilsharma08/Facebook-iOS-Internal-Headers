//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession;

@interface FBFeedbackCommentUpdater : NSObject
{
    FBUserSession *_session;
}

@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)updateComment:(id)arg1 body:(id)arg2 photoFBID:(id)arg3 actorFBID:(id)arg4 withModule:(id)arg5 analyticsExtras:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)init;
- (id)initWithSession:(id)arg1;

@end

