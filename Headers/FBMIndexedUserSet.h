//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"

@class NSArray, NSDictionary;

@interface FBMIndexedUserSet : NSObject <NSFastEnumeration, NSCopying, NSCoding>
{
    NSDictionary *_userIdToUserMap;
    NSArray *_users;
}

@property(readonly, copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(readonly, copy, nonatomic) NSDictionary *userIdToUserMap; // @synthesize userIdToUserMap=_userIdToUserMap;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)userByUserId:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserIdToUserDictionary:(id)arg1;

@end

