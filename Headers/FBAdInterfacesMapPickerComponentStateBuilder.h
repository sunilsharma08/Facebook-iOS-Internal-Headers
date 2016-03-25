//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBAdInterfacesDisplayableLocation;

@interface FBAdInterfacesMapPickerComponentStateBuilder : NSObject
{
    FBAdInterfacesDisplayableLocation *_selectedLocation;
    BOOL _loadingGeocoding;
    BOOL _loadingPopulationEstimation;
    int _estimatedPopulation;
}

+ (id)anAdInterfacesMapPickerComponentStateFromExistingAdInterfacesMapPickerComponentState:(id)arg1;
+ (id)anAdInterfacesMapPickerComponentState;
- (void).cxx_destruct;
- (id)withEstimatedPopulation:(int)arg1;
- (id)withLoadingPopulationEstimation:(BOOL)arg1;
- (id)withLoadingGeocoding:(BOOL)arg1;
- (id)withSelectedLocation:(id)arg1;
- (id)build;

@end

