//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBMemFeedStory, FBMemStoryAttachment, NSArray, NSDictionary, NSString, NSURL, UITapGestureRecognizer;
@protocol FBIntentHandler;

@interface FBVideoSponsorshipView : UIView
{
    UITapGestureRecognizer *_tapRecognizer;
    NSArray *_trackingCodes;
    NSDictionary *_extras;
    NSURL *_url;
    FBMemFeedStory *_story;
    FBMemStoryAttachment *_attachment;
    NSString *_videoID;
    NSString *_analyticsModule;
    id <FBIntentHandler> _intentHandler;
}

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (void)setIntentHandler:(id)arg1;
- (void)_handleSponsorshipBarTapped:(id)arg1;
- (void)configureWithStory:(id)arg1 attachment:(id)arg2 url:(id)arg3 intentHandler:(id)arg4 videoID:(id)arg5 trackingCodes:(id)arg6 analyticsModule:(id)arg7;

@end

