//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBFaceModel, FBFacepileExpandableView;

@protocol FBFacepileExpandableViewDataSource <NSObject>
- (FBFaceModel *)facepileExpandableView:(FBFacepileExpandableView *)arg1 faceModelAtIndex:(unsigned int)arg2;
- (unsigned int)facepileExpandableViewNumberOfFaces:(FBFacepileExpandableView *)arg1;
@end

