//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol FBSampledWorkingRangeControllerDelegate, FBWorkingRangeSnapshot;

@interface FBSampledWorkingRangeController : NSObject
{
    id <FBWorkingRangeSnapshot> _previousSnapshot;
    NSMutableDictionary *_edgeStateTransitions;
    CDUnknownFunctionPointerType _transitionFunction;
    NSString *_identifier;
    id <FBSampledWorkingRangeControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBSampledWorkingRangeControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_itemsMovedOutOfSnapshotStates:(id)arg1 visibleBounds:(struct CGRect)arg2 timestamp:(double)arg3 snapshot:(id)arg4;
- (void)sampleSnapshot:(id)arg1;
- (id)initWithTransitionFunction:(CDUnknownFunctionPointerType)arg1 identifier:(id)arg2;

@end

