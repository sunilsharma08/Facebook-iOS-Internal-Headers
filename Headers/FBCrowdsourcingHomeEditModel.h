//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation, FBComposerPrivacySetting, FBMemPage, FBUserSession, NSString;
@protocol FBPhotoAttachmentProtocol;

@interface FBCrowdsourcingHomeEditModel : NSObject
{
    BOOL _hasChangedPhoto;
    BOOL _isMinorUser;
    BOOL _shouldRemovePreviousPhoto;
    FBUserSession *_session;
    NSString *_placeID;
    FBMemPage *_place;
    CLLocation *_originalLocation;
    CLLocation *_location;
    NSString *_originalName;
    NSString *_name;
    NSString *_originalCity;
    NSString *_city;
    NSString *_originalCityID;
    NSString *_cityID;
    NSString *_originalAddress;
    NSString *_address;
    NSString *_originalNeighborhood;
    NSString *_neighborhood;
    FBComposerPrivacySetting *_originalPrivacySetting;
    FBComposerPrivacySetting *_privacySetting;
    id <FBPhotoAttachmentProtocol> _photoAttachment;
    struct CGImage *_originalImage;
}

@property(readonly, nonatomic) BOOL shouldRemovePreviousPhoto; // @synthesize shouldRemovePreviousPhoto=_shouldRemovePreviousPhoto;
@property(nonatomic) BOOL isMinorUser; // @synthesize isMinorUser=_isMinorUser;
@property(nonatomic) struct CGImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) id <FBPhotoAttachmentProtocol> photoAttachment; // @synthesize photoAttachment=_photoAttachment;
@property(retain, nonatomic) FBComposerPrivacySetting *privacySetting; // @synthesize privacySetting=_privacySetting;
@property(readonly, copy, nonatomic) FBComposerPrivacySetting *originalPrivacySetting; // @synthesize originalPrivacySetting=_originalPrivacySetting;
@property(copy, nonatomic) NSString *neighborhood; // @synthesize neighborhood=_neighborhood;
@property(readonly, copy, nonatomic) NSString *originalNeighborhood; // @synthesize originalNeighborhood=_originalNeighborhood;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSString *originalAddress; // @synthesize originalAddress=_originalAddress;
@property(copy, nonatomic) NSString *cityID; // @synthesize cityID=_cityID;
@property(readonly, copy, nonatomic) NSString *originalCityID; // @synthesize originalCityID=_originalCityID;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, copy, nonatomic) NSString *originalCity; // @synthesize originalCity=_originalCity;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) CLLocation *originalLocation; // @synthesize originalLocation=_originalLocation;
@property(retain, nonatomic) FBMemPage *place; // @synthesize place=_place;
@property(readonly, copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)updateData:(id)arg1;
- (id)initWithPage:(id)arg1 session:(id)arg2;

@end

