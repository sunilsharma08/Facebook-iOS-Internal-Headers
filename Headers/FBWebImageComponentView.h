//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBWebImageView.h"

@class FBPhotoBlankTimeLogger, FBWebImageViewComponentSpecifier;

@interface FBWebImageComponentView : FBWebImageView
{
    FBPhotoBlankTimeLogger *_logger;
    FBWebImageViewComponentSpecifier *_componentSpecifier;
}

@property(retain, nonatomic) FBWebImageViewComponentSpecifier *componentSpecifier; // @synthesize componentSpecifier=_componentSpecifier;
- (void).cxx_destruct;
- (void)restartDownload;
- (void)cancelDownload;
- (void)_performDownload;
- (id)initWithSession:(id)arg1;

@end

