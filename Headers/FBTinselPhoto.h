//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class FBMemPhoto, NSString;
@protocol FBPhotoAttachmentProtocol;

@interface FBTinselPhoto : NSObject <NSCopying>
{
    FBMemPhoto *_existingPhoto;
    id <FBPhotoAttachmentProtocol> _localPhoto;
}

@property(readonly, nonatomic) id <FBPhotoAttachmentProtocol> localPhoto; // @synthesize localPhoto=_localPhoto;
@property(readonly, nonatomic) FBMemPhoto *existingPhoto; // @synthesize existingPhoto=_existingPhoto;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocalPhoto:(id)arg1;
- (id)initWithExistingPhoto:(id)arg1;

@end

