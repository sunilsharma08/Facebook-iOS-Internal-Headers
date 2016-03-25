//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBItemView_DEPRECATED, FBMemPerson, FBNetworkImageView, FBUserSession;

@interface FBGroupMemberCell : UITableViewCell
{
    FBUserSession *_session;
    FBMemPerson *_person;
    FBItemView_DEPRECATED *_summaryView;
    FBNetworkImageView *_photoView;
}

- (void).cxx_destruct;
- (void)setPerson:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHasSeparator:(BOOL)arg1;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (id)initWithSession:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

