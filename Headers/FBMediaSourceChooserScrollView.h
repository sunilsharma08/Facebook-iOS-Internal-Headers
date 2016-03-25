//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBMediaSourceChooserProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBMediaPickerSession, NSArray, NSString, UIScrollView;
@protocol FBMediaDataSourceProtocol, FBMediaSourceChooserDelegate;

@interface FBMediaSourceChooserScrollView : UIView <UIScrollViewDelegate, FBMediaSourceChooserProtocol>
{
    FBMediaPickerSession *_session;
    id <FBMediaDataSourceProtocol> _currentDataSource;
    int _currentDataSourceIndex;
    id <FBMediaSourceChooserDelegate> _delegate;
    UIScrollView *_scrollView;
    NSArray *_dataSourceButtons;
}

@property(copy, nonatomic) NSArray *dataSourceButtons; // @synthesize dataSourceButtons=_dataSourceButtons;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <FBMediaSourceChooserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didChangeDataSources:(id)arg1;
- (void)_reloadDataSourceButtons;
- (void)_didSelectDataSourceWithButton:(id)arg1;
- (void)_moveSelectedSourceButtonToCenterAnimated:(BOOL)arg1;
- (void)_reframeDataSources;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;
- (id)initWithSession:(id)arg1 selectedDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

