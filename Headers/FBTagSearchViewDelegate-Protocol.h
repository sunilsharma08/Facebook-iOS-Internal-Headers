//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBTagSearchView, NSString;
@protocol FBAvatarProtocol;

@protocol FBTagSearchViewDelegate <NSObject>
- (void)tagSearchView:(FBTagSearchView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)tagSearchView:(FBTagSearchView *)arg1 searchTextDidChange:(NSString *)arg2;

@optional
- (void)didFinishTagEditing:(NSString *)arg1 withAvatar:(id <FBAvatarProtocol>)arg2 loggingSource:(NSString *)arg3;
- (void)tagSearchViewDidDisappear:(FBTagSearchView *)arg1;
- (void)tagSearchViewWillDisappear:(FBTagSearchView *)arg1 animated:(BOOL)arg2;
- (void)tagSearchViewDidAppear:(FBTagSearchView *)arg1;
- (void)tagSearchViewWillAppear:(FBTagSearchView *)arg1 preserveScrollEnabled:(BOOL)arg2;
@end

