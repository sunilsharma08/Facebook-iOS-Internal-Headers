//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKComponentController.h"

@class NSError, NSString;
@protocol FBAdInterfacesAdPreviewFetcher;

@interface FBAdInterfacesAdPreviewComponentController : CKComponentController
{
    id <FBAdInterfacesAdPreviewFetcher> _adPreviewFetcher;
    NSString *_previewHTML;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(copy) NSString *previewHTML; // @synthesize previewHTML=_previewHTML;
- (void).cxx_destruct;
- (void)showError:(id)arg1;
- (void)showPreview:(id)arg1;
- (void)showLoadingIndication;
- (void)componentTreeWillAppear;

@end

