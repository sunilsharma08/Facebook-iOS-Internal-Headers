//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBFeedComponentToolbox, NSURL;

@interface FBFNNearbyUpsell3CircleProfilePictureData : NSObject
{
    NSURL *_profilePictureURL1;
    NSURL *_profilePictureURL2;
    NSURL *_profilePictureURL3;
    FBFeedComponentToolbox *_toolbox;
}

@property(readonly, nonatomic) FBFeedComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(readonly, nonatomic) NSURL *profilePictureURL3; // @synthesize profilePictureURL3=_profilePictureURL3;
@property(readonly, nonatomic) NSURL *profilePictureURL2; // @synthesize profilePictureURL2=_profilePictureURL2;
@property(readonly, nonatomic) NSURL *profilePictureURL1; // @synthesize profilePictureURL1=_profilePictureURL1;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithProfilePictureURL1:(id)arg1 profilePictureURL2:(id)arg2 profilePictureURL3:(id)arg3 toolbox:(id)arg4;

@end

