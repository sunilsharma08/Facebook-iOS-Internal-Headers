//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface ZRBannerData : NSObject <NSCoding>
{
    NSString *_campaignId;
    NSString *_uid;
    NSString *_title;
    NSString *_body;
    NSString *_actionText;
    NSString *_actionUrl;
    NSString *_hashString;
}

+ (id)bannerDataFromFile:(id)arg1;
@property(copy, nonatomic) NSString *hashString; // @synthesize hashString=_hashString;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)matchesTokenData:(id)arg1;
- (id)initWithCampaignId:(id)arg1 uid:(id)arg2 title:(id)arg3 body:(id)arg4 actionText:(id)arg5 actionUrl:(id)arg6;
- (void)writeToFile:(id)arg1;

@end

