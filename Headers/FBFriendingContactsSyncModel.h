//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface FBFriendingContactsSyncModel : NSObject
{
    NSArray *_facepileURLs;
    NSArray *_friendNames;
    unsigned int _friendCount;
}

@property(readonly, nonatomic) unsigned int friendCount; // @synthesize friendCount=_friendCount;
@property(readonly, copy, nonatomic) NSArray *friendNames; // @synthesize friendNames=_friendNames;
@property(readonly, copy, nonatomic) NSArray *facepileURLs; // @synthesize facepileURLs=_facepileURLs;
- (void).cxx_destruct;
- (id)initWithFacepileURLs:(id)arg1 friendNames:(id)arg2 friendCount:(unsigned int)arg3;

@end

