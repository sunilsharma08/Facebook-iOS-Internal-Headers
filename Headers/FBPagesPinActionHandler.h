//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFeedSecondaryActionHandler-Protocol.h"

@class NSString;

@interface FBPagesPinActionHandler : NSObject <FBFeedSecondaryActionHandler>
{
}

- (void)_pinPostForPageFBID:(id)arg1 legacyAPIStoryID:(id)arg2 pinActionType:(int)arg3 userSession:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)actionsForFeedUnit:(id)arg1 element:(id)arg2 trackingCodes:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *handlerName;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

