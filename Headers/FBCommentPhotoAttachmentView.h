//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "FBWebImageViewListener-Protocol.h"

@class FBMemStoryAttachment, FBWebPhotoView, NSString, UIActivityIndicatorView, UIImageView;

@interface FBCommentPhotoAttachmentView : UIControl <FBWebImageViewListener>
{
    UIImageView *_optimisticImageView;
    UIActivityIndicatorView *_activityIndicatorView;
    FBMemStoryAttachment *_storyAttachment;
    FBWebPhotoView *_photoView;
}

@property(readonly, nonatomic) FBWebPhotoView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) FBMemStoryAttachment *storyAttachment; // @synthesize storyAttachment=_storyAttachment;
- (void).cxx_destruct;
- (void)webImageView:(id)arg1 didFailDownloadingWithError:(id)arg2;
- (void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2;
- (void)webImageView:(id)arg1 didUpdateLoadProgress:(float)arg2;
- (void)_cleanUpPhotoView;
- (void)_setUpPhotoView:(id)arg1 reuseOptimisticContents:(BOOL)arg2;
- (void)_cleanUpOptimisticView;
- (void)_setUpOptimisticView:(id)arg1;
- (void)setStoryAttachment:(id)arg1 reuseCurrentContents:(BOOL)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

