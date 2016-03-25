//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBNewAccountRegistrationStepViewController-Protocol.h"

@class FBNewAccountRegistrationData, FBNewAccountRegistrationLegaleseView, FBNewAccountRegistrationStepView, NSArray, NSString;
@protocol FBNewAccountRegistrationStepViewControllerDelegate;

@interface FBNewAccountRegistrationLegaleseStepViewController : UIViewController <FBNewAccountRegistrationStepViewController>
{
    FBNewAccountRegistrationLegaleseView *_legaleseView;
    id <FBNewAccountRegistrationStepViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBNewAccountRegistrationStepViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) FBNewAccountRegistrationStepView *stepView;
- (id)errorTextForServerValidationErrorCode:(int)arg1;
- (id)serverValidationErrorCodes;
- (id)errorTextForType:(int)arg1;
- (int)validateRegistrationData:(id)arg1;
@property(retain, nonatomic) FBNewAccountRegistrationData *registrationData;
@property(readonly, copy, nonatomic) NSArray *registrationDataPropertyNames;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

