//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBPhotosCollageGridViewAbstractLayout : NSObject
{
    struct FBGridViewItemSpans _highlightedItemSpan;
    unsigned int _numItems;
    float _aspectRatio;
}

@property(readonly, nonatomic) unsigned int numItems; // @synthesize numItems=_numItems;
@property(readonly, nonatomic) struct FBGridViewItemSpans highlightedItemSpan; // @synthesize highlightedItemSpan=_highlightedItemSpan;
@property(nonatomic) float aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) struct FBGridViewItemSpans defaultItemSpan;
- (float)fitScoreForMedia:(id)arg1;
- (unsigned int)highlightedIndexForIndex:(unsigned int)arg1;
- (id)initWithAspectRatio:(float)arg1 highlightedItemSpan:(struct FBGridViewItemSpans)arg2 numItems:(unsigned int)arg3;

@end

