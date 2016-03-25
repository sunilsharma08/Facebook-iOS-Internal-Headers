//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSNumber, UIImage;

@interface FBComposerSticker : FBValueObject <NSCopying>
{
    NSNumber *_stickerID;
    UIImage *_stickerImage;
}

@property(readonly, copy, nonatomic) UIImage *stickerImage; // @synthesize stickerImage=_stickerImage;
@property(readonly, copy, nonatomic) NSNumber *stickerID; // @synthesize stickerID=_stickerID;
- (void).cxx_destruct;
- (id)initWithStickerID:(id)arg1 stickerImage:(id)arg2;

@end

