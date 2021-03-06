//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@interface FBComposerMediaThumbListTraits : FBValueObject <NSCopying>
{
    BOOL _allowPhotoDragging;
    BOOL _allowPhotoRemoving;
    BOOL _allowPhotoEditing;
    BOOL _allowMentions;
    BOOL _singlePhotoInterface;
    BOOL _allowModifyingCaptionsOnPhotos;
    int _style;
}

@property(readonly, nonatomic) BOOL allowModifyingCaptionsOnPhotos; // @synthesize allowModifyingCaptionsOnPhotos=_allowModifyingCaptionsOnPhotos;
@property(readonly, nonatomic) BOOL singlePhotoInterface; // @synthesize singlePhotoInterface=_singlePhotoInterface;
@property(readonly, nonatomic) BOOL allowMentions; // @synthesize allowMentions=_allowMentions;
@property(readonly, nonatomic) BOOL allowPhotoEditing; // @synthesize allowPhotoEditing=_allowPhotoEditing;
@property(readonly, nonatomic) BOOL allowPhotoRemoving; // @synthesize allowPhotoRemoving=_allowPhotoRemoving;
@property(readonly, nonatomic) BOOL allowPhotoDragging; // @synthesize allowPhotoDragging=_allowPhotoDragging;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (id)initWithStyle:(int)arg1 allowPhotoDragging:(BOOL)arg2 allowPhotoRemoving:(BOOL)arg3 allowPhotoEditing:(BOOL)arg4 allowMentions:(BOOL)arg5 singlePhotoInterface:(BOOL)arg6 allowModifyingCaptionsOnPhotos:(BOOL)arg7;

@end

