/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKLabel, GKTextBubbleControl, GKTurnBasedMatch, NSArray, NSString;

@interface GKTurnBasedMatchDetailHeaderView : UICollectionReusableView {
    GKTextBubbleControl *_actionBubble;
    GKLabel *_infoLabel;
    NSString *_infoText;
    GKLabel *_lastTurnLabel;
    GKTurnBasedMatch *_match;
    GKLabel *_playingWithLabel;
    NSArray *_replaceableConstraints;
    GKLabel *_startedLabel;
}

@property(retain) GKTextBubbleControl * actionBubble;
@property(copy) NSString * bubbleText;
@property int bubbleType;
@property(retain) GKLabel * infoLabel;
@property(retain) NSString * infoText;
@property(retain) GKLabel * lastTurnLabel;
@property(retain) GKTurnBasedMatch * match;
@property(retain) GKLabel * playingWithLabel;
@property(readonly) NSString * playingWithString;
@property(retain) NSArray * replaceableConstraints;
@property(retain) GKLabel * startedLabel;

+ (BOOL)requiresConstraintBasedLayout;

- (id)actionBubble;
- (id)bubbleText;
- (int)bubbleType;
- (void)dealloc;
- (void)didUpdateModel;
- (id)infoLabel;
- (id)infoText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)lastTurnLabel;
- (id)match;
- (id)playingWithLabel;
- (id)playingWithString;
- (id)replaceableConstraints;
- (void)setActionBubble:(id)arg1;
- (void)setBubbleText:(id)arg1;
- (void)setBubbleType:(int)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInfoText:(id)arg1;
- (void)setLastTurnLabel:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setPlayingWithLabel:(id)arg1;
- (void)setReplaceableConstraints:(id)arg1;
- (void)setStartedLabel:(id)arg1;
- (id)startedLabel;
- (void)updateConstraints;

@end
