//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBMStickerInputViewDelegate-Protocol.h"
#import "FBMStickerStoreViewControllerDelegate-Protocol.h"

@class FBMStickerInputView, FBUserSession, NSString;
@protocol FBComposerStickerPostViewDelegate;

@interface FBComposerStickerPostViewController : UIViewController <FBMStickerInputViewDelegate, FBMStickerStoreViewControllerDelegate>
{
    FBUserSession *_session;
    FBMStickerInputView *_stickerInputView;
    id <FBComposerStickerPostViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBComposerStickerPostViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapBackButton;
- (void)didSelectDismissStickerStoreViewController:(id)arg1;
- (void)stickerStoreViewController:(id)arg1 didSelectViewStickerPack:(id)arg2;
- (void)stickerInputView:(id)arg1 didEndSearching:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stickerInputView:(id)arg1 didBeginSearching:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didSelectStickerStoreWith:(unsigned long long)arg1 sourceView:(id)arg2;
- (void)stickerInputView:(id)arg1 didSelectSticker:(id)arg2;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

