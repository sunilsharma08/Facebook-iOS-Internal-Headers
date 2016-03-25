//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBActivityIcon, NSString, UIImage;

@interface FBPresenceActivityIconWithImage : FBValueObject <NSCopying>
{
    FBActivityIcon *_icon;
    UIImage *_image;
    NSString *_imageAssetName;
}

@property(readonly, copy, nonatomic) NSString *imageAssetName; // @synthesize imageAssetName=_imageAssetName;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) FBActivityIcon *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)initWithIcon:(id)arg1 image:(id)arg2 imageAssetName:(id)arg3;

@end

