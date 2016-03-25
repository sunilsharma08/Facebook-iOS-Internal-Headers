//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MKMapViewDelegate-Protocol.h"

@class MKMapView, NSArray, NSString;

@interface FBLocationMapView : UIView <MKMapViewDelegate>
{
    BOOL _showsUserLocation;
    BOOL _shouldOverrideSpan;
    BOOL _shouldAnnotateMap;
    NSArray *_locations;
    MKMapView *_mapView;
    UIView *_divider;
    CDStruct_951efa70 _span;
}

@property(retain, nonatomic) UIView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) BOOL shouldAnnotateMap; // @synthesize shouldAnnotateMap=_shouldAnnotateMap;
@property(nonatomic) CDStruct_c3b9c2ee span; // @synthesize span=_span;
@property(nonatomic) BOOL shouldOverrideSpan; // @synthesize shouldOverrideSpan=_shouldOverrideSpan;
@property(nonatomic) BOOL showsUserLocation; // @synthesize showsUserLocation=_showsUserLocation;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
- (void).cxx_destruct;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (CDStruct_feeb6407)_regionThatFitsLocations:(id)arg1;
- (void)_updateMapViewRegion;
- (void)_updateMapViewIfNeeded;
- (void)_createMapView;
- (void)layoutSubviews;
@property(readonly, nonatomic) BOOL shouldRenderMap;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

