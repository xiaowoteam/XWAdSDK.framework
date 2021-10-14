//
//  XWNoticeAd.h
//  XWAdSDK
//
//  Created by laole918 on 2021/5/18.
//

#import <Foundation/Foundation.h>
#import <XWAdSDK/XWAdSDKConfig.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class XWNoticeAd;
@protocol XWNoticeAdDelegate <NSObject>

- (void)xw_noticeAdDidLoad:(XWNoticeAd *)noticeAd;
- (void)xw_noticeAdDidFailToLoad:(XWNoticeAd *)noticeAd error:(NSError *)error;
- (void)xw_noticeAdDidExpose:(XWNoticeAd *)noticeAd;
- (void)xw_noticeAdDidClick:(XWNoticeAd *)noticeAd;
- (void)xw_noticeAdDidClose:(XWNoticeAd *)noticeAd;
@end

@interface XWNoticeAd : NSObject
@property (nonatomic, weak, nullable) id<XWNoticeAdDelegate> delegate;
@property (nonatomic, assign, readonly) XWAdSdkUnionType unionType;
-(instancetype) initWithSlotId:(NSString *) slotId;
- (void)loadAd;
- (void)showAdInWindow:(UIWindow *)window;
@end

NS_ASSUME_NONNULL_END
