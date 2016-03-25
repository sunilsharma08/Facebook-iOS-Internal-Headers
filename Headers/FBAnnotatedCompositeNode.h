//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ASDisplayNode.h"

@class FBAnnotationOverlayNode, FBAnnotationUnderlayNode;
@protocol FBRichStoryFrameSetter;

@interface FBAnnotatedCompositeNode : ASDisplayNode
{
    FBAnnotationOverlayNode *_overlayNode;
    ASDisplayNode *_blockNode;
    ASDisplayNode *_underlayDarkeningNode;
    FBAnnotationUnderlayNode *_underlayNode;
    id <FBRichStoryFrameSetter> _frameSetter;
    float _underlayVisibilityPercentage;
}

@property(nonatomic) float underlayVisibilityPercentage; // @synthesize underlayVisibilityPercentage=_underlayVisibilityPercentage;
@property(retain, nonatomic) id <FBRichStoryFrameSetter> frameSetter; // @synthesize frameSetter=_frameSetter;
- (void).cxx_destruct;
- (id)_blockNodeLayoutAttributes;
- (void)setVisibleOverlayAnnotations:(id)arg1 withAnimation:(CDStruct_29228278)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (void)layout;
- (id)initWithOverlayNode:(id)arg1 blockNode:(id)arg2 underlayNode:(id)arg3;

@end

