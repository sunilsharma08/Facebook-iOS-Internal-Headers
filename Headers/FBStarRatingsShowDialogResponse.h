//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBStarRatingsDialogMetadata, NSDate, NSString;

@interface FBStarRatingsShowDialogResponse : NSObject <NSCoding, NSCopying>
{
    BOOL _shouldShow;
    unsigned int _mode;
    NSDate *_showDialogTime;
    NSDate *_nextPingTime;
    unsigned int _maxStarsForFeedback;
    unsigned int _minStarsForStore;
    NSString *_targetPurpose;
    FBStarRatingsDialogMetadata *_dialogMetadata;
}

+ (id)responseWithServerResponse:(id)arg1 delegate:(id)arg2;
+ (id)defaultAppStoreDialogMetadataConfig;
+ (id)defaultStarDialogMetadataConfig:(id)arg1;
+ (id)responseForSendFeedbackWithDelegate:(id)arg1;
+ (id)responseForTesting;
@property(copy, nonatomic) FBStarRatingsDialogMetadata *dialogMetadata; // @synthesize dialogMetadata=_dialogMetadata;
@property(copy, nonatomic) NSString *targetPurpose; // @synthesize targetPurpose=_targetPurpose;
@property(nonatomic) unsigned int minStarsForStore; // @synthesize minStarsForStore=_minStarsForStore;
@property(nonatomic) unsigned int maxStarsForFeedback; // @synthesize maxStarsForFeedback=_maxStarsForFeedback;
@property(retain, nonatomic) NSDate *nextPingTime; // @synthesize nextPingTime=_nextPingTime;
@property(retain, nonatomic) NSDate *showDialogTime; // @synthesize showDialogTime=_showDialogTime;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(nonatomic) BOOL shouldShow; // @synthesize shouldShow=_shouldShow;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;

@end

