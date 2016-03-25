//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBBookmarkStyle, FBUserSession;

@interface FBBookmarkConfigurer : NSObject
{
    FBBookmarkStyle *_style;
    FBUserSession *_session;
}

+ (id)badgeViewForStyle:(id)arg1 badgeCount:(unsigned int)arg2 bookmarkID:(id)arg3;
+ (unsigned int)typeForCustomizedAccessoryForBookmark:(id)arg1 moduleManager:(id)arg2;
+ (id)errorBadge;
+ (id)upsellBadgeForStyle:(unsigned int)arg1;
+ (BOOL)shouldShowGearForBookmark:(id)arg1 moduleManager:(id)arg2;
+ (id)gearButtonForBookmark:(id)arg1;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FBBookmarkStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_setImageSizeForSummaryView:(id)arg1 bookmark:(id)arg2;
- (void)_setInsetsForSummaryView:(id)arg1 style:(id)arg2 bookmark:(id)arg3;
- (id)imageOrNilForImageNamed:(id)arg1;
- (BOOL)_bookmarkIsPage:(id)arg1;
- (BOOL)_bookmarkIsProfile:(id)arg1;
- (BOOL)_shouldShowOverlay:(id)arg1;
- (void)_updateNetworkImageView:(id)arg1 forURL:(id)arg2 placeholderImage:(id)arg3 selected:(BOOL)arg4 overlayImage:(id)arg5 overlayImageHighlighted:(id)arg6;
- (void)_configureBookmarkSummaryView:(id)arg1 style:(id)arg2 badgeCount:(unsigned int)arg3 isLastCellInSection:(BOOL)arg4 selected:(BOOL)arg5 title:(id)arg6 subtitle:(id)arg7 sectionID:(id)arg8 bookmarkID:(id)arg9 bookmark:(id)arg10;
- (void)configurePageSummaryView:(id)arg1 title:(id)arg2 image:(id)arg3 iconURL:(id)arg4 badgeCount:(unsigned int)arg5 style:(id)arg6 showSeparator:(BOOL)arg7;
- (void)configureBookmarkSummaryView:(id)arg1 bookmark:(id)arg2 style:(id)arg3 isLastCellInSection:(BOOL)arg4 gearButtonTarget:(id)arg5 gearButtonSelector:(SEL)arg6 selected:(BOOL)arg7;
- (void)updateBookmarkHeaderView:(id)arg1 expanded:(BOOL)arg2 animated:(BOOL)arg3;
- (void)configureBookmarkHeaderView:(id)arg1 expanded:(BOOL)arg2 expandable:(BOOL)arg3 bookmarkStyle:(id)arg4 sectionID:(id)arg5 sectionIndex:(unsigned int)arg6 aggregatedBadgeCount:(unsigned int)arg7 title:(id)arg8 target:(id)arg9 headerViewSelector:(SEL)arg10;
- (id)_viewConfigurationForTitle:(id)arg1 subtitle:(id)arg2 font:(id)arg3 badgeCount:(unsigned int)arg4 gearButton:(id)arg5 style:(id)arg6 bookmarkID:(id)arg7 sectionID:(id)arg8 isSection:(BOOL)arg9 editing:(BOOL)arg10;
- (id)viewConfigurationForBookmark:(id)arg1 style:(id)arg2 editing:(BOOL)arg3;
- (id)viewConfigurationForSection:(id)arg1 style:(id)arg2 editing:(BOOL)arg3;
- (id)initWithSession:(id)arg1 style:(id)arg2;
- (id)init;

@end

