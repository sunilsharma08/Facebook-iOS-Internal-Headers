//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBPlacesCategory, FBPlacesMapRegion, NSString;

@interface FBPlacesSearchSuggestionData : NSObject <NSCoding, NSCopying>
{
    BOOL _useCurrentUserLocation;
    FBPlacesCategory *_category;
    NSString *_categoryHexColorString;
    NSString *_buttonImageURL;
    NSString *_buttonPressedImageURL;
    NSString *_tableRowImageURL;
    FBPlacesMapRegion *_mapRegion;
    NSString *_graphSearchQueryFunction;
    NSString *_displayString;
    NSString *_mapRegionString;
}

@property(nonatomic) BOOL useCurrentUserLocation; // @synthesize useCurrentUserLocation=_useCurrentUserLocation;
@property(copy, nonatomic) NSString *mapRegionString; // @synthesize mapRegionString=_mapRegionString;
@property(copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(copy, nonatomic) NSString *graphSearchQueryFunction; // @synthesize graphSearchQueryFunction=_graphSearchQueryFunction;
@property(copy, nonatomic) FBPlacesMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(copy, nonatomic) NSString *tableRowImageURL; // @synthesize tableRowImageURL=_tableRowImageURL;
@property(copy, nonatomic) NSString *buttonPressedImageURL; // @synthesize buttonPressedImageURL=_buttonPressedImageURL;
@property(copy, nonatomic) NSString *buttonImageURL; // @synthesize buttonImageURL=_buttonImageURL;
@property(copy, nonatomic) NSString *categoryHexColorString; // @synthesize categoryHexColorString=_categoryHexColorString;
@property(copy, nonatomic) FBPlacesCategory *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)clearRegionData;
- (void)clearCategoryData;
- (void)copyCategoryData:(id)arg1;
- (BOOL)isValidSearchData:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end

