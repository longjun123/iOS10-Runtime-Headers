/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKTitledBuddyHeaderView : UIView {
    NSLayoutConstraint * _bodyBottomConstraint;
    UITextView * _bodyTextView;
    NSLayoutConstraint * _bodyZeroHeightConstraint;
    <HKTitledBuddyHeaderViewDelegate> * _delegate;
    NSLayoutConstraint * _logoTitleGapConstraint;
    UIButton * _optionalLinkButton;
    NSLayoutConstraint * _titleBottomConstraint;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSString *bodyText;
@property (nonatomic) <HKTitledBuddyHeaderViewDelegate> *delegate;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) NSString *titleText;

- (void).cxx_destruct;
- (void)_linkButtonTapped:(id)arg1;
- (id)bodyText;
- (id)delegate;
- (id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2;
- (void)setBodyText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleLabel;
- (id)titleText;

@end