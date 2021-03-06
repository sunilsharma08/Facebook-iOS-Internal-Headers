//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CKComponentProvider-Protocol.h"

@class FBProfileToolbox, FBProfileVideoPreviewModel, FBProfileVideoPreviewView, NSString;
@protocol FBVideoAttachmentProtocol;

@interface FBProfileVideoPreviewViewController : UIViewController <CKComponentProvider>
{
    FBProfileToolbox *_toolbox;
    FBProfileVideoPreviewModel *_model;
    FBProfileVideoPreviewView *_previewView;
    BOOL _needToSetView;
    id <FBVideoAttachmentProtocol> _video;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) id <FBVideoAttachmentProtocol> video; // @synthesize video=_video;
- (void).cxx_destruct;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithToolbox:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

