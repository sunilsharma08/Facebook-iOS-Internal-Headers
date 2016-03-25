//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBFriendCenterView;

@interface FBFriendCenterScrollManager : NSObject
{
    FBFriendCenterView *_fcView;
    struct UIEdgeInsets _startInset;
    float _startOffset;
    float _menuStartOriginY;
    struct CGSize _menuViewSize;
    float _viewStartHeight;
}

- (void).cxx_destruct;
- (void)_moveMenuBarPositionByDelta:(float)arg1 scrollView:(id)arg2;
- (void)didScrollToTop;
- (void)didEndScrolling:(id)arg1;
- (void)willBeginDragging:(id)arg1;
- (void)updateMenuPosition:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;
- (id)initWithFriendCenterView:(id)arg1;

@end

