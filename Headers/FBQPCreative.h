//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBQPEntity.h"

@class FBQPAction, FBQPImage, FBQPSocialContext, NSString;

@interface FBQPCreative : FBQPEntity
{
    NSString *_title;
    NSString *_content;
    FBQPSocialContext *_socialContext;
    FBQPImage *_image;
    FBQPAction *_primaryAction;
    FBQPAction *_secondaryAction;
    FBQPAction *_dismissAction;
}

@property(retain, nonatomic) FBQPAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(retain, nonatomic) FBQPAction *secondaryAction; // @synthesize secondaryAction=_secondaryAction;
@property(retain, nonatomic) FBQPAction *primaryAction; // @synthesize primaryAction=_primaryAction;
@property(retain, nonatomic) FBQPImage *image; // @synthesize image=_image;
@property(retain, nonatomic) FBQPSocialContext *socialContext; // @synthesize socialContext=_socialContext;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithParams;
- (BOOL)isValid;
- (void)parseParameters:(id)arg1;

@end

