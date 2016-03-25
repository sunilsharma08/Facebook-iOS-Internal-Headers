//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBPersonSyncSummary, FBSyncGroupConversation, FBSyncMessengerStatusUpdate, FBSyncPerson, FBSyncPresence, NSArray;
@protocol FBFavoriteContact;

@interface FBSyncEvent : NSObject
{
    FBSyncGroupConversation *_groupConversation;
    FBSyncPerson *_person;
    FBSyncPresence *_presence;
    id <FBFavoriteContact> _favoriteContact;
    FBSyncMessengerStatusUpdate *_messengerStatus;
    NSArray *_searchTokens;
    FBPersonSyncSummary *_summary;
    unsigned int _type;
}

+ (id)completeMessengerStatusUpdateEventWithSummary:(id)arg1;
+ (id)statusUpdateEvent:(id)arg1;
+ (id)presenceUpdateEvent:(id)arg1;
+ (id)syncEventWithFavoriteContact:(id)arg1;
+ (id)updateChatContextEventWithSyncPerson:(id)arg1;
+ (id)removePersonEventWithSyncPerson:(id)arg1;
+ (id)addPersonEventWithSyncPerson:(id)arg1 searchTokens:(id)arg2;
+ (id)completeChatContextSyncEvent;
+ (id)completePresenceSyncEventWithSummary:(id)arg1;
+ (id)completeFBFriendsSyncEventWithSummary:(id)arg1;
+ (id)invalidateChatContextSyncEvent;
+ (id)invalidateFavoritesSyncEvent;
+ (id)invalidatePresenceSyncEvent;
+ (id)invalidateFBFriendsSyncEvent;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) FBPersonSyncSummary *summary; // @synthesize summary=_summary;
@property(readonly, copy, nonatomic) NSArray *searchTokens; // @synthesize searchTokens=_searchTokens;
@property(readonly, copy, nonatomic) FBSyncMessengerStatusUpdate *messengerStatus; // @synthesize messengerStatus=_messengerStatus;
@property(readonly, retain, nonatomic) id <FBFavoriteContact> favoriteContact; // @synthesize favoriteContact=_favoriteContact;
@property(readonly, copy, nonatomic) FBSyncPresence *presence; // @synthesize presence=_presence;
@property(readonly, retain, nonatomic) FBSyncPerson *person; // @synthesize person=_person;
@property(readonly, retain, nonatomic) FBSyncGroupConversation *groupConversation; // @synthesize groupConversation=_groupConversation;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)initWithPerson:(id)arg1 groupConversation:(id)arg2 favoriteContact:(id)arg3 eventType:(unsigned int)arg4 searchTokens:(id)arg5 summary:(id)arg6 presence:(id)arg7 statusUpdate:(id)arg8;

@end

