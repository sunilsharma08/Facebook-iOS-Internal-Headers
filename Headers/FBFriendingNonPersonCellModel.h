//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBFriendingNonPersonCellModel : NSObject
{
    unsigned int _type;
    struct FBFriendingNonPersonCellConfiguration _config;
}

@property(nonatomic) struct FBFriendingNonPersonCellConfiguration config; // @synthesize config=_config;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(unsigned int)arg1 config:(struct FBFriendingNonPersonCellConfiguration)arg2;
- (id)initWithType:(unsigned int)arg1;

@end

