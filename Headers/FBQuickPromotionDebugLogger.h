//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession;
@protocol OS_dispatch_queue;

@interface FBQuickPromotionDebugLogger : NSObject
{
    FBUserSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_extraDataForPromotion:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_shouldLog;
- (void)logEvent:(id)arg1 promotion:(id)arg2 extraData:(id)arg3;
- (id)initWithSession:(id)arg1;

@end

