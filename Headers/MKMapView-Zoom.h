//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKMapView.h>

@interface MKMapView (Zoom)
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 zoom:(unsigned int)arg2 animated:(BOOL)arg3;
- (CDStruct_c3b9c2ee)coordinateSpanForMapView:(id)arg1 centerCoordinate:(CDStruct_c3b9c2ee)arg2 zoom:(unsigned int)arg3;
- (double)screenYToLatitude:(double)arg1;
- (double)screenXToLongitude:(double)arg1;
- (double)latitudeToScreenY:(double)arg1;
- (double)longitudeToScreenX:(double)arg1;
@end

