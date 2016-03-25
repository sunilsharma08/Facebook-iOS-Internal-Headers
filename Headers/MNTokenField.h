//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSObject;
@protocol MNTokenFieldDelegate;

@interface MNTokenField : UITextField
{
    NSObject<MNTokenFieldDelegate> *_touchDelegate;
}

@property(nonatomic) __weak NSObject<MNTokenFieldDelegate> *touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)becomeFirstResponder;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;

@end

