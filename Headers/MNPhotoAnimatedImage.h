//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FLAnimatedImage;

@interface MNPhotoAnimatedImage : FBValueObject <NSCopying>
{
    FLAnimatedImage *_animatedImage;
}

@property(readonly, copy, nonatomic) FLAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
- (void).cxx_destruct;
- (id)initWithAnimatedImage:(id)arg1;

@end

