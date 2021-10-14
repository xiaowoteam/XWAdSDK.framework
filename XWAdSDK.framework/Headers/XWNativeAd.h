//
//  XWNativeAd.h
//  XWAdSDK
//
//  Created by laole918 on 2021/4/20.
//

#import <Foundation/Foundation.h>
#import "XWNativeAdDataObject.h"
#import <XWAdSDK/XWAdSDKConfig.h>

NS_ASSUME_NONNULL_BEGIN

@class XWNativeAd;
@protocol XWNativeAdDelegate <NSObject>

- (void)xw_nativeAdDidLoad:(NSArray<XWNativeAdDataObject *> * _Nullable)nativeAdDataObjects error:(NSError * _Nullable)error;

@end

@interface XWNativeAd : NSObject
@property (nonatomic, weak, nullable) id<XWNativeAdDelegate> delegate;
@property (nonatomic, assign, readonly) XWAdSdkUnionType unionType;

-(instancetype) initWithSlotId:(NSString *) slotId;
- (void)loadAdWithCount:(NSInteger) count;
@end

NS_ASSUME_NONNULL_END
