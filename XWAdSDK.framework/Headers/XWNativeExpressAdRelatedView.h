//
//  XWNativeExpressAdRelatedView.h
//  XWAdSDK
//
//  Created by laole918 on 2021/5/17.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class XWNativeExpressAdRelatedView;

@protocol XWNativeExpressAdRelatedViewDelegate <NSObject>
@optional
- (void)xw_nativeExpressAdRelatedViewDidRenderSuccess:(XWNativeExpressAdRelatedView *)nativeExpressAdRelatedView;
- (void)xw_nativeExpressAdRelatedViewDidRenderFail:(XWNativeExpressAdRelatedView *)nativeExpressAdRelatedView;
- (void)xw_nativeExpressAdRelatedViewDidExpose:(XWNativeExpressAdRelatedView *)nativeExpressAdRelatedView;
- (void)xw_nativeExpressAdRelatedViewDidClick:(XWNativeExpressAdRelatedView *)nativeExpressAdRelatedView;
- (void)xw_nativeExpressAdRelatedViewDidCloseOtherController:(XWNativeExpressAdRelatedView *)nativeExpressAdRelatedView;
- (void)xw_nativeExpressAdRelatedViewDislike:(XWNativeExpressAdRelatedView *)nativeExpressAdRelatedView;
@end

@interface XWNativeExpressAdRelatedView : NSObject

@property (nonatomic, weak) UIViewController *viewController;
@property (nonatomic, weak, nullable) id<XWNativeExpressAdRelatedViewDelegate> delegate;

- (void)render;
- (UIView *)getAdView;

@end

NS_ASSUME_NONNULL_END
