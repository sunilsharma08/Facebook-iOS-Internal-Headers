//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKComponentController.h"

#import "FBPhotoComponentPhotoViewProviderDelegate-Protocol.h"

@class FBFeedComponentPhotoHandler, NSString;

@interface FBTouchHandlingSingleImageComponentController : CKComponentController <FBPhotoComponentPhotoViewProviderDelegate>
{
    FBFeedComponentPhotoHandler *_photoHandler;
}

@property(retain, nonatomic) FBFeedComponentPhotoHandler *photoHandler; // @synthesize photoHandler=_photoHandler;
- (void).cxx_destruct;
- (id)photoAttachmentPhotoViewProvider:(id)arg1 needsOverlayComponentForPhoto:(id)arg2;
- (id)photoAttachmentPhotoViewProvider:(id)arg1 needsPhotoComponentForPhoto:(id)arg2;
- (void)tappedImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

