//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAlertViewProtocol-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class FBAlertViewCoordinator, NSString;
@protocol FBAlertViewProtocol, UIAlertViewDelegate;

@interface FBAlertView : NSObject <UIAlertViewDelegate, FBAlertViewProtocol>
{
    FBAlertViewCoordinator *_coordinator;
    id <UIAlertViewDelegate> _mainDelegate;
    int _firstOtherButtonIndex;
    id <FBAlertViewProtocol> _alertProxy;
}

@property(readonly, nonatomic) id <FBAlertViewProtocol> alertProxy; // @synthesize alertProxy=_alertProxy;
@property(readonly, nonatomic) int firstOtherButtonIndex; // @synthesize firstOtherButtonIndex=_firstOtherButtonIndex;
- (void).cxx_destruct;
- (BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)didPresentAlertView:(id)arg1;
- (void)willPresentAlertView:(id)arg1;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_enumerateDelegatesRespondingToSelector:(SEL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)textFieldAtIndex:(int)arg1;
@property(nonatomic) int alertViewStyle;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)show;
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
@property(nonatomic) int cancelButtonIndex;
@property(readonly, nonatomic) int numberOfButtons;
- (id)buttonTitleAtIndex:(int)arg1;
- (int)addButtonWithTitle:(id)arg1;
@property(nonatomic) int tag;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) id delegate;
- (void)dealloc;
- (id)initWithProxy:(id)arg1 firstOtherButtonIndex:(int)arg2 delegate:(id)arg3 coordinator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

