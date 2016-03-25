//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CKComponentHostingViewDelegate-Protocol.h"
#import "CKComponentProvider-Protocol.h"

@class CKComponentHostingView, FBMemorializedPerson, NSString, UIScrollView;

@interface FBMemorialContactIntroViewController : UIViewController <CKComponentProvider, CKComponentHostingViewDelegate>
{
    CKComponentHostingView *_componentView;
    FBMemorializedPerson *_person;
    UIScrollView *_scrollView;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)fb_showNavBarSearchField;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithMemorializedFBID:(id)arg1 memorializedPersonFirstName:(id)arg2 memorialContactName:(id)arg3 gender:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

