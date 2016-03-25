//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface FBFriendingPossibilitiesState : NSObject
{
    int _totalCount;
    int _totalCountIncludeHidden;
    int _unseenCount;
    NSDate *_timestamp;
}

@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) int unseenCount; // @synthesize unseenCount=_unseenCount;
@property(readonly, nonatomic) int totalCountIncludeHidden; // @synthesize totalCountIncludeHidden=_totalCountIncludeHidden;
@property(readonly, nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
- (void).cxx_destruct;
- (BOOL)isEqualToState:(id)arg1;
- (id)initWithTotalCount:(int)arg1 totalCountIncludeHidden:(int)arg2 unseenCount:(int)arg3 timestamp:(id)arg4;

@end

