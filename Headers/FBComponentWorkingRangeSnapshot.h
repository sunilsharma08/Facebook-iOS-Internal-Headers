//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBWorkingRangeSnapshot-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FBComponentWorkingRangeSnapshot : NSObject <FBWorkingRangeSnapshot, NSCopying>
{
    NSArray *_itemViewStates;
    double _timestamp;
    struct CGRect _visibleBounds;
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSArray *itemViewStates; // @synthesize itemViewStates=_itemViewStates;
@property(readonly, nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVisibleBounds:(struct CGRect)arg1 itemViewStates:(id)arg2 timestamp:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

