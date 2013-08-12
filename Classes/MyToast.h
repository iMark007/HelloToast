#import <UIKit/UIKit.h>
#define RGB(a, b, c) [UIColor colorWithRed:(a / 255.0f) green:(b / 255.0f) blue:(c / 255.0f) alpha:1.0f]
#define RGBA(a, b, c, d) [UIColor colorWithRed:(a / 255.0f) green:(b / 255.0f) blue:(c / 255.0f) alpha:d]

@interface MyToast : UIView

+ (void)showWithText:(NSString *)text:(int)toastY:(int)second;
+ (void)showWithImage:(UIImage *)image :(int)second;
@end
