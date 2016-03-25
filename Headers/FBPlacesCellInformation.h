//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMemPage, NSArray, NSNumber;

@interface FBPlacesCellInformation : NSObject
{
    FBMemPage *_page;
    NSArray *_friends;
    unsigned int _totalCountConnectedFriends;
    NSNumber *_searchScore;
    NSNumber *_priority;
}

+ (id)connectedFriendsFromPage:(id)arg1;
@property(copy, nonatomic) NSNumber *priority; // @synthesize priority=_priority;
@property(readonly, copy, nonatomic) NSNumber *searchScore; // @synthesize searchScore=_searchScore;
@property(readonly, nonatomic) unsigned int totalCountConnectedFriends; // @synthesize totalCountConnectedFriends=_totalCountConnectedFriends;
@property(copy, nonatomic) NSArray *friends; // @synthesize friends=_friends;
@property(readonly, nonatomic) FBMemPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPage:(id)arg1 seachScore:(id)arg2 priority:(id)arg3 connectedFriendsCount:(unsigned int)arg4 friends:(id)arg5;
- (id)initWithFBPage:(id)arg1;
- (id)initWithFBPlacesTileResultsEdge:(id)arg1;

@end

