//
//  JXIMMsgFileContent.h
//  JXIMSdk
//
//  Created by 陈汉 on 2021/9/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JXIMMsgFileContent : NSObject

/**
 * 消息发送必须传
 */
@property (nonatomic, strong) NSData *fileData;

/**
 * 云端文件地址
 */
@property (nonatomic, copy) NSString *url;

/**
 * 本地文件路径
 */
@property (nonatomic, copy) NSString *path;

/**
 * 文件大小
 */
@property (nonatomic, assign) NSInteger fileSize;

/**
 * 文件名
 */
@property (nonatomic, copy) NSString *fileName;

@end

NS_ASSUME_NONNULL_END
