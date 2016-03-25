//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@class UIBarButtonItem, UIView;
@protocol FBWebToolbarViewDelegate;

@interface FBWebToolbarView : UIToolbar
{
    UIBarButtonItem *_flexibleSpace;
    UIBarButtonItem *_fixedSpace;
    UIBarButtonItem *_metricsFenceLeft;
    UIBarButtonItem *_metricsFenceRight;
    BOOL _padded;
    BOOL _backgroundVisible;
    id <FBWebToolbarViewDelegate> _toolbarDelegate;
    UIBarButtonItem *_backItem;
    UIBarButtonItem *_forwardItem;
    UIBarButtonItem *_refreshItem;
    UIBarButtonItem *_actionItem;
    UIBarButtonItem *_appLinkOpenItem;
    UIBarButtonItem *_appLinkInstallItem;
    UIView *_opacityControlBackgroundView;
    unsigned int _style;
    UIBarButtonItem *_shareItem;
}

+ (float)defaultWidthForStyle:(unsigned int)arg1;
+ (float)defaultHeight;
@property(retain, nonatomic) UIBarButtonItem *shareItem; // @synthesize shareItem=_shareItem;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(retain, nonatomic) UIView *opacityControlBackgroundView; // @synthesize opacityControlBackgroundView=_opacityControlBackgroundView;
@property(readonly, nonatomic) UIBarButtonItem *appLinkInstallItem; // @synthesize appLinkInstallItem=_appLinkInstallItem;
@property(readonly, nonatomic) UIBarButtonItem *appLinkOpenItem; // @synthesize appLinkOpenItem=_appLinkOpenItem;
@property(readonly, nonatomic) UIBarButtonItem *actionItem; // @synthesize actionItem=_actionItem;
@property(readonly, nonatomic) UIBarButtonItem *refreshItem; // @synthesize refreshItem=_refreshItem;
@property(readonly, nonatomic) UIBarButtonItem *forwardItem; // @synthesize forwardItem=_forwardItem;
@property(readonly, nonatomic) UIBarButtonItem *backItem; // @synthesize backItem=_backItem;
@property(nonatomic) __weak id <FBWebToolbarViewDelegate> toolbarDelegate; // @synthesize toolbarDelegate=_toolbarDelegate;
@property(nonatomic) BOOL backgroundVisible; // @synthesize backgroundVisible=_backgroundVisible;
@property(nonatomic) BOOL padded; // @synthesize padded=_padded;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addSubview:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(int)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)_reorderViewHierarchy;
- (void)_insertOpacityControlView;
- (id)_fb_toolbarBackgroundView;
- (Class)_fb_toolbarBackgroundClass;
- (void)_appLinkInstall:(id)arg1;
- (void)_appLinkOpen:(id)arg1;
- (void)_action:(id)arg1;
- (void)_refresh:(id)arg1;
- (void)_forward:(id)arg1;
- (void)_back:(id)arg1;
- (void)updateAppLinkInstall:(BOOL)arg1;
- (void)updateAppLinkOpen:(BOOL)arg1;
- (void)updateForNavigationStateBack:(BOOL)arg1 forward:(BOOL)arg2;
- (void)setCustomBarTintColor:(id)arg1;
- (void)setCustomItemsTintColor:(id)arg1;
- (void)_updateItems;
- (struct CGPoint)centerPointForActionItem;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned int)arg2;

@end

