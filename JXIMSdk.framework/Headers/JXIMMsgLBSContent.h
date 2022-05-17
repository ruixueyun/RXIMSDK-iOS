//
//  JXIMMsgLBSContent.h
//  JXIMSdk
//
//  Created by 陈汉 on 2021/9/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JXIMMsgLBSContent : NSObject

/**
 * 位置图片本地路径（发送方）
 */
@property(nonatomic, nonnull) NSString *picLocalPath;

/**
 * 上传本地路径（发送方）
 */
@property(nonatomic, nonnull) NSString *picUploadPath;

/**
 * 上传媒体类型（发送方）
 */
@property(nonatomic, nonnull) NSString *mimeType;

/**
 * 位置图片
 */
@property(nonatomic, nonnull) NSString *picUrl;

/**
 * 位置图片 media id
 */
@property(nonatomic, nonnull) NSString *picMediaId;

/**
 * 宽度
 */
@property(nonatomic) int32_t picWidth;

/**
 * 高度
 */
@property(nonatomic) int32_t picHeight;

/**
 * 纬度
 */
@property(nonatomic) double latitude;

/**
 * 经度
 */
@property(nonatomic) double longitude;

/**
 * 地理位置名称
 */
@property(nonatomic, nonnull) NSString *locationName;

@end

NS_ASSUME_NONNULL_END
