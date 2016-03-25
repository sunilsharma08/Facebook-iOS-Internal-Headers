//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBRichStoryLayout, NSDictionary;

@protocol FBTransitioningBlockController <NSObject>
- (BOOL)blockControllerCanTransitionToPresentationAttributes:(NSDictionary *)arg1;

@optional
- (struct CGPoint)contentCenterPoint;
- (void)didFinishTransitionToPresentationAttributes:(NSDictionary *)arg1;
- (void)willFinishTransitionToPresentationAttributes:(NSDictionary *)arg1 animationConfiguration:(CDStruct_29228278)arg2;
- (void)didUpdateTransitionToPresentationAttributes:(NSDictionary *)arg1 withProgress:(float)arg2;
- (void)didBeginTransitionToPresentationAttributes:(NSDictionary *)arg1 withGestureAtPoint:(struct CGPoint)arg2 originLayout:(FBRichStoryLayout *)arg3 destinationLayout:(FBRichStoryLayout *)arg4;
@end

