//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class MNAnimatedPhotoSource, MNStaticPhotoSource;

@interface MNPhotoSource : NSObject <NSCopying>
{
    unsigned int _subtype;
    MNStaticPhotoSource *_static_staticPhotoSource;
    MNAnimatedPhotoSource *_animated_animatedPhotoSource;
}

+ (id)staticWithStaticPhotoSource:(id)arg1;
+ (id)animatedWithAnimatedPhotoSource:(id)arg1;
- (void).cxx_destruct;
- (void)matchStatic:(CDUnknownBlockType)arg1 animated:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

