//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBPageServiceRegionComponentToolbox, FBPageServiceRegionMapPickerViewController;

@interface FBPageServiceRegionMapPickerViewControllerContext : NSObject
{
    FBPageServiceRegionMapPickerViewController *_viewController;
    FBPageServiceRegionComponentToolbox *_toolbox;
}

@property(retain, nonatomic) FBPageServiceRegionComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(nonatomic) __weak FBPageServiceRegionMapPickerViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 toolbox:(id)arg2;

@end

