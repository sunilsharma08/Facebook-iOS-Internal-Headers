//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBFaceNode.h"

@class ASTextNode, FBFacepileExpandableViewMetrics;

@interface FBNamedFaceNode : FBFaceNode
{
    ASTextNode *_nameNode;
    FBFacepileExpandableViewMetrics *_metrics;
    BOOL _pointInsideIncludesName;
    float _nameFontSize;
    float _maximumTotalWidth;
}

@property(nonatomic) BOOL pointInsideIncludesName; // @synthesize pointInsideIncludesName=_pointInsideIncludesName;
@property(nonatomic) float maximumTotalWidth; // @synthesize maximumTotalWidth=_maximumTotalWidth;
@property(nonatomic) float nameFontSize; // @synthesize nameFontSize=_nameFontSize;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layout;
@property(nonatomic) float nameAlpha;
- (void)setFaceModel:(id)arg1;
- (void)_updateString;
- (id)initWithCache:(id)arg1 downloader:(id)arg2 metrics:(id)arg3;

@end

