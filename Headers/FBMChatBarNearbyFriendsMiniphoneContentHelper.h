//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBClassProvidable-Protocol.h"

@class FBMChatContextManager, NSString;

@interface FBMChatBarNearbyFriendsMiniphoneContentHelper : NSObject <FBClassProvidable>
{
    FBMChatContextManager *_chatContextManager;
}

@property(retain, nonatomic) FBMChatContextManager *chatContextManager; // @synthesize chatContextManager=_chatContextManager;
- (id)bylineTextForPurposeListWithNearbyFriends:(id)arg1;
- (id)_bylineTextForOptedInButZeroNearbyFriends;
- (id)bylineTextForPurposeUpsell;
- (id)infoTextWithNearbyFriendsCount:(unsigned int)arg1;
- (id)filteredNearbyFriendsWithContacts:(id)arg1;
@property(readonly, nonatomic) BOOL optedInToNearbyFriends;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

