//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMemComment, FBPaperCommentMetrics, FBUserSession, NSArray, NSAttributedString;

@interface FBPaperCommentLayout : NSObject
{
    FBUserSession *_session;
    FBPaperCommentMetrics *_metrics;
    FBMemComment *_comment;
    NSArray *_attachmentNodes;
    float _contentWidth;
    float _height;
    NSAttributedString *_actorAttributedString;
    NSAttributedString *_messageAttributedString;
    NSAttributedString *_timestampAttributedString;
    NSAttributedString *_messageAndTimestampAttributedString;
    struct CGRect *_attachmentNodeFrames;
    struct CGRect _actorImageFrame;
    struct CGRect _actorLabelFrame;
    struct CGRect _messageLabelFrame;
    struct CGRect _frameForUFIBar;
}

+ (id)_timestampAttributedStringForComment:(id)arg1 textMetrics:(struct FBTextMetrics)arg2;
+ (id)_messageAttributedStringForComment:(id)arg1 textMetrics:(struct FBTextMetrics)arg2;
+ (id)_actorAttributedStringForComment:(id)arg1 textMetrics:(struct FBTextMetrics)arg2;
+ (id)layoutForComment:(id)arg1 attachmentNodes:(id)arg2 contentWidth:(float)arg3 session:(id)arg4 metrics:(id)arg5;
@property(readonly, nonatomic) struct CGRect *attachmentNodeFrames; // @synthesize attachmentNodeFrames=_attachmentNodeFrames;
@property(readonly, nonatomic) struct CGRect frameForUFIBar; // @synthesize frameForUFIBar=_frameForUFIBar;
@property(readonly, nonatomic) struct CGRect messageLabelFrame; // @synthesize messageLabelFrame=_messageLabelFrame;
@property(readonly, nonatomic) struct CGRect actorLabelFrame; // @synthesize actorLabelFrame=_actorLabelFrame;
@property(readonly, nonatomic) struct CGRect actorImageFrame; // @synthesize actorImageFrame=_actorImageFrame;
@property(readonly, copy, nonatomic) NSAttributedString *messageAndTimestampAttributedString; // @synthesize messageAndTimestampAttributedString=_messageAndTimestampAttributedString;
@property(readonly, copy, nonatomic) NSAttributedString *timestampAttributedString; // @synthesize timestampAttributedString=_timestampAttributedString;
@property(readonly, copy, nonatomic) NSAttributedString *messageAttributedString; // @synthesize messageAttributedString=_messageAttributedString;
@property(readonly, copy, nonatomic) NSAttributedString *actorAttributedString; // @synthesize actorAttributedString=_actorAttributedString;
@property(readonly, nonatomic) float height; // @synthesize height=_height;
@property(readonly, nonatomic) float contentWidth; // @synthesize contentWidth=_contentWidth;
@property(readonly, copy, nonatomic) NSArray *attachmentNodes; // @synthesize attachmentNodes=_attachmentNodes;
@property(readonly, nonatomic) FBMemComment *comment; // @synthesize comment=_comment;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithComment:(id)arg1 attachmentNodes:(id)arg2 contentWidth:(float)arg3 session:(id)arg4 metrics:(id)arg5;

@end

