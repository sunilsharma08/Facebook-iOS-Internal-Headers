//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMemPerson;

@interface FBOutgoingFriendRequestModel : NSObject
{
    int _type;
    FBMemPerson *_person;
}

@property(readonly, nonatomic) FBMemPerson *person; // @synthesize person=_person;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)fbid;
- (id)init;
- (id)initWithType:(int)arg1 andPerson:(id)arg2;

@end

