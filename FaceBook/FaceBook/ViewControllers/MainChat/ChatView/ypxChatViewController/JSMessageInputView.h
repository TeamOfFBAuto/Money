//
//  JSMessageInputView.h


#import <UIKit/UIKit.h>
#import "JSDismissiveTextView.h"

@interface JSMessageInputView : UIImageView

@property (strong, nonatomic) JSDismissiveTextView *textView;
@property (strong, nonatomic) UIButton *voiceButton;
@property (strong, nonatomic) UIButton *faceButton;
@property (strong, nonatomic) UIButton *addButton;
@property (strong, nonatomic) UIButton *recordVoiceButton;

#pragma mark - Initialization
- (id)initWithFrame:(CGRect)frame
           delegate:(id<UITextViewDelegate>)delegate;

#pragma mark - Message input view
- (void)adjustTextViewHeightBy:(CGFloat)changeInHeight;

+ (CGFloat)textViewLineHeight;
+ (CGFloat)maxLines;
+ (CGFloat)maxHeight;

@end