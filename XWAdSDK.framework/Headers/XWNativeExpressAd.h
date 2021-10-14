//
//  XWNativeExpressAd.h
//  XWAdSDK
//
//  Created by laole918 on 2021/5/14.
//

#import <Foundation/Foundation.h>
#import "XWNativeExpressAdRelatedView.h"
#import <XWAdSDK/XWAdSDKConfig.h>

NS_ASSUME_NONNULL_BEGIN

@class XWNativeExpressAd;
@protocol XWNativeExpressAdDelegate <NSObject>

- (void)xw_nativeExpressAdDidLoad:(NSArray<XWNativeExpressAdRelatedView *> * _Nullable)nativeExpressAdRelatedViews error:(NSError * _Nullable)error;
@end


@interface XWNativeExpressAd : NSObject
@property (nonatomic, weak, nullable) id<XWNativeExpressAdDelegate> delegate;
@property (nonatomic, assign, readonly) XWAdSdkUnionType unionType;

-(instancetype) initWithSlotId:(NSString *) slotId adSize:(CGSize) adSize;
- (void)loadAdWithCount:(NSInteger) count;
@end

NS_ASSUME_NONNULL_END
