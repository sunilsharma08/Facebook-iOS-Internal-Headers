//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class CLLocation, FBMemPage, FBMemPerson, FBNearbyPlace, NSArray, NSString;

@interface FBNearbyDataSet : NSObject <NSCoding>
{
    BOOL _shareCity;
    BOOL _loadedFromCache;
    BOOL _offlinePlaces;
    BOOL _recentPlaces;
    NSString *_query;
    CLLocation *_location;
    NSArray *_places;
    FBNearbyPlace *_nearbyCity;
    NSString *_searchID;
    unsigned int _checkinPromptType;
    FBMemPerson *_actor;
    FBMemPage *_closestCity;
}

@property(retain, nonatomic) FBMemPage *closestCity; // @synthesize closestCity=_closestCity;
@property(retain, nonatomic) FBMemPerson *actor; // @synthesize actor=_actor;
@property(nonatomic) unsigned int checkinPromptType; // @synthesize checkinPromptType=_checkinPromptType;
@property(nonatomic) BOOL recentPlaces; // @synthesize recentPlaces=_recentPlaces;
@property(nonatomic) BOOL offlinePlaces; // @synthesize offlinePlaces=_offlinePlaces;
@property(nonatomic) BOOL loadedFromCache; // @synthesize loadedFromCache=_loadedFromCache;
@property(copy, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(nonatomic) BOOL shareCity; // @synthesize shareCity=_shareCity;
@property(retain, nonatomic) FBNearbyPlace *nearbyCity; // @synthesize nearbyCity=_nearbyCity;
@property(copy, nonatomic) NSArray *places; // @synthesize places=_places;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)residence;
- (id)allPlacesID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

