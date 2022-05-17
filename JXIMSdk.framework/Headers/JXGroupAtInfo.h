//
//  JXGroupAtInfo.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/12/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JXGroupAtInfo : NSObject<NSCoding>

/** \@人的扩展信息 */
@property(nonatomic, copy) NSString *ext;

/** 是否已读 （通知发送人和\@的人） */
@property(nonatomic, assign) BOOL isRead;

/** 是否收到 (通知所有人) */
@property(nonatomic, assign) BOOL isReceive;

@end

NS_ASSUME_NONNULL_END
