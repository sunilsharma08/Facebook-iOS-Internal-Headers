//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPlacesTileMapAnnotationsDatasource-Protocol.h"

@class NSDictionary;

@interface FBPlacesTileMapAnnotationsDatasource : NSObject <FBPlacesTileMapAnnotationsDatasource>
{
    NSDictionary *_fbidToFBTileEdgeDict;
}

@property(retain, nonatomic) NSDictionary *fbidToFBTileEdgeDict; // @synthesize fbidToFBTileEdgeDict=_fbidToFBTileEdgeDict;
- (void).cxx_destruct;
- (id)_createFbidDictFromResults:(id)arg1;
- (id)_preferredClusterFrontPlaceSortDescriptors;
- (id)_chooseFrontPlaceFromPlaces:(id)arg1;
- (id)_preparePlacesForDisplay:(id)arg1 frameForAnnotationHelper:(id)arg2 clusterPlaces:(BOOL)arg3 intersectionPercentageThresholdForClustering:(float)arg4;
- (id)resultsCellForFbid:(id)arg1;
- (id)loadDataFromResults:(id)arg1 frameForAnnotationHelper:(id)arg2 clusterPlaces:(BOOL)arg3 badgeHidden:(BOOL)arg4 intersectionPercentageThresholdForClustering:(float)arg5;

@end

