//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CKComponentProvider-Protocol.h"
#import "FBAdPreviewFetcherDelegate-Protocol.h"

@class CKComponentHostingView, FBAdPreviewFetcher, FBAdPreviewView, FBUserSession, NSString;

@interface FBAdPreviewViewController : UIViewController <FBAdPreviewFetcherDelegate, CKComponentProvider>
{
    FBAdPreviewFetcher *_adPreviewFetcher;
    NSString *_adPreviewID;
    CKComponentHostingView *_hostingView;
    FBUserSession *_session;
    BOOL _openAttachment;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)analyticsModule;
- (void)loadView;
- (void)adPreviewFetched:(id)arg1 failure:(id)arg2;
- (void)adPreviewFetched:(id)arg1 didFetchUnit:(id)arg2;
- (id)initWithAdPreviewID:(id)arg1 openAttachment:(BOOL)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) FBAdPreviewView *view; // @dynamic view;

@end

