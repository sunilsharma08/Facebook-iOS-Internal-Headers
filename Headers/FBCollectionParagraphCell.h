//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBCollectionAbstractCell.h"

@class FBCollectionProfileFieldSection, UILabel;

@interface FBCollectionParagraphCell : FBCollectionAbstractCell
{
    UILabel *_titleLabel;
    FBCollectionProfileFieldSection *_collectionItem;
}

+ (float)desiredHeightForCollectionItem:(id)arg1;
+ (float)availableWidth;
@property(retain, nonatomic) FBCollectionProfileFieldSection *collectionItem; // @synthesize collectionItem=_collectionItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

