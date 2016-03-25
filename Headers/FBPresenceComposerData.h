//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBPresenceComposerActivityTypeSelection, NSAttributedString, NSString, NSURL, UIImage;

@interface FBPresenceComposerData : FBValueObject <NSCopying>
{
    BOOL _useGeneratedBackgroundColor;
    BOOL _isFreeform;
    unsigned int _type;
    FBPresenceComposerActivityTypeSelection *_activityTypeSelection;
    NSString *_objectGraphQLID;
    NSString *_placeGraphQLID;
    NSString *_iconGraphQLID;
    NSURL *_imageURL;
    UIImage *_image;
    NSAttributedString *_displayName;
    NSString *_objectLabel;
    NSString *_subtext;
    NSString *_trackingString;
}

@property(readonly, nonatomic) BOOL isFreeform; // @synthesize isFreeform=_isFreeform;
@property(readonly, copy, nonatomic) NSString *trackingString; // @synthesize trackingString=_trackingString;
@property(readonly, copy, nonatomic) NSString *subtext; // @synthesize subtext=_subtext;
@property(readonly, copy, nonatomic) NSString *objectLabel; // @synthesize objectLabel=_objectLabel;
@property(readonly, copy, nonatomic) NSAttributedString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) BOOL useGeneratedBackgroundColor; // @synthesize useGeneratedBackgroundColor=_useGeneratedBackgroundColor;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *iconGraphQLID; // @synthesize iconGraphQLID=_iconGraphQLID;
@property(readonly, copy, nonatomic) NSString *placeGraphQLID; // @synthesize placeGraphQLID=_placeGraphQLID;
@property(readonly, copy, nonatomic) NSString *objectGraphQLID; // @synthesize objectGraphQLID=_objectGraphQLID;
@property(readonly, copy, nonatomic) FBPresenceComposerActivityTypeSelection *activityTypeSelection; // @synthesize activityTypeSelection=_activityTypeSelection;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned int)arg1 activityTypeSelection:(id)arg2 objectGraphQLID:(id)arg3 placeGraphQLID:(id)arg4 iconGraphQLID:(id)arg5 imageURL:(id)arg6 image:(id)arg7 useGeneratedBackgroundColor:(BOOL)arg8 displayName:(id)arg9 objectLabel:(id)arg10 subtext:(id)arg11 trackingString:(id)arg12 isFreeform:(BOOL)arg13;

@end

