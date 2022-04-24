//
//  XWNativeAdDataObject.h
//  XWAdSDK
//
//  Created by laole918 on 2021/4/21.
//

#import <Foundation/Foundation.h>
#import "XWVideoConfig.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, XWNativeAdCreativeType) {
    XWNativeAdCreativeTypeUnkown = 0,
    
    XWNativeAdCreativeType_ADX_NONE = (1 << 24) | 0,
    XWNativeAdCreativeType_ADX_TXT = (1 << 24) | 1,//TXT 纯文字
    XWNativeAdCreativeType_ADX_IMG = (1 << 24) | 2,//IMG 纯图片
    XWNativeAdCreativeType_ADX_HYBRID = (1 << 24) | 3,//HYBRID 图文混合
    XWNativeAdCreativeType_ADX_VIDEO = (1 << 24) | 4,//VIDEO 视频广告

//    XWNativeAdCreativeType_GDT_isAppAd = (2 << 24) | 1,//isAppAd
    XWNativeAdCreativeType_GDT_isVideoAd = (2 << 24) | 2,//isVideoAd
    XWNativeAdCreativeType_GDT_isThreeImgsAd = (2 << 24) | 3,//isThreeImgsAd
    
    XWNativeAdCreativeType_CSJ_SmallImage = (3 << 24) | 2,
    XWNativeAdCreativeType_CSJ_LargeImage = (3 << 24) | 3,
    XWNativeAdCreativeType_CSJ_GroupImage = (3 << 24) | 4,
    XWNativeAdCreativeType_CSJ_VideoImage = (3 << 24) | 5,// video ad || rewarded video ad horizontal screen
    XWNativeAdCreativeType_CSJ_VideoPortrait = (3 << 24) | 15,// rewarded video ad vertical screen
    XWNativeAdCreativeType_CSJ_ImagePortrait = (3 << 24) | 16,
    XWNativeAdCreativeType_CSJ_SquareImage = (3 << 24) | 33,//SquareImage Currently it exists only in the oversea now. V3200 add
    XWNativeAdCreativeType_CSJ_SquareVideo = (3 << 24) | 50,//SquareVideo Currently it exists only in the oversea now. V3200 add
    XWNativeAdCreativeType_CSJ_UnionSplashVideo = (3 << 24) | 154, // Video splash, V3800 add
    XWNativeAdCreativeType_CSJ_UnionVerticalImage = (3 << 24) | 173, // vertical picture
    
    XWNativeAdCreativeType_KS_AdMaterialTypeVideo = (4 << 24) | 1,      // video
    XWNativeAdCreativeType_KS_AdMaterialTypeSingle = (4 << 24) | 2,      // single image
    XWNativeAdCreativeType_KS_AdMaterialTypeAtlas = (4 << 24) | 3,      // multiple image
    
    /// 原生自渲染-横版大图16：9
    XWNativeAdCreativeType_KLN_HorBigImage = (5 << 24) | 1001,
    /// 原生自渲染-横版视频16：9
    XWNativeAdCreativeType_KLN_HorVideo = (5 << 24) | 1002,
    
    XWNativeAdCreativeType_BD_NORMAL = (6 << 24) | 0, // 一般图文或图片广告
    XWNativeAdCreativeType_BD_VIDEO = (6 << 24) | 1, // 视频广告，需开发者增加播放器支持
    XWNativeAdCreativeType_BD_HTML = (6 << 24) | 2, // html模版广告
    XWNativeAdCreativeType_BD_GIF = (6 << 24) | 3 //GIF广告
};

@interface XWNativeAdDataObject : NSObject
{
//    @package
}
@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, copy, readonly) NSString *desc;
@property (nonatomic, copy, readonly) NSString *imageUrl;
@property (nonatomic, readonly) NSInteger imageWidth;
@property (nonatomic, readonly) NSInteger imageHeight;
@property (nonatomic, copy, readonly) NSString *iconUrl;
@property (nonatomic, copy, readonly) NSArray *imageUrls;
@property (nonatomic, readonly) XWNativeAdCreativeType creativeType;

@property (nonatomic, strong) XWVideoConfig *videoConfig;

@end

NS_ASSUME_NONNULL_END
