//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBSimpleNUXStep-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class FBBezelView, FBNativeNameStepView, FBUserSession, NSArray, NSString;
@protocol FBNativeNameStepViewControllerDelegate, FBSimpleNUXStepViewControlling;

@interface FBNativeNameStepViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, FBSimpleNUXStep>
{
    FBUserSession *_session;
    NSArray *_tableViewCells;
    id <FBSimpleNUXStepViewControlling> _nuxController;
    id <FBNativeNameStepViewControllerDelegate> _delegate;
    NSString *_locale;
    FBNativeNameStepView *_contentView;
    FBBezelView *_loadingView;
}

@property(retain, nonatomic) FBBezelView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) FBNativeNameStepView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) __weak id <FBNativeNameStepViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <FBSimpleNUXStepViewControlling> nuxController; // @synthesize nuxController=_nuxController;
- (void).cxx_destruct;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)trySubmit;
- (id)nativeNameFields;
- (BOOL)_isKanaField:(id)arg1;
- (BOOL)_localeHasLastnameFirst;
- (BOOL)_requiresPhoneticReadingForLocale;
- (void)_setupTableViewCells;
- (id)_firstEmptyNativeNameCell;
- (void)didTapContinue:(id)arg1;
- (void)_hideLoadingView;
- (void)_showLoadingView;
- (void)_attemptNativeNameChange:(id)arg1;
- (id)analyticsModule;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)initWithSession:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

