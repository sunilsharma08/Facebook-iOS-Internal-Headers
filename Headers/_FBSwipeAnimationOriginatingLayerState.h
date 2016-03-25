//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CALayer, NSMutableDictionary;

@interface _FBSwipeAnimationOriginatingLayerState : NSObject
{
    BOOL _hidden;
    BOOL _removeAfterAnimation;
    CALayer *_parentLayer;
    unsigned int _parentSublayerIndex;
    NSMutableDictionary *_fadingLayersOpacityArray;
    struct CGPoint _anchorPoint;
    struct CGRect _frame;
    struct CGRect _dismissalFrame;
}

@property(nonatomic) struct CGRect dismissalFrame; // @synthesize dismissalFrame=_dismissalFrame;
@property(nonatomic) BOOL removeAfterAnimation; // @synthesize removeAfterAnimation=_removeAfterAnimation;
@property(retain, nonatomic) NSMutableDictionary *fadingLayersOpacityArray; // @synthesize fadingLayersOpacityArray=_fadingLayersOpacityArray;
@property(nonatomic) unsigned int parentSublayerIndex; // @synthesize parentSublayerIndex=_parentSublayerIndex;
@property(nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(retain, nonatomic) CALayer *parentLayer; // @synthesize parentLayer=_parentLayer;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

