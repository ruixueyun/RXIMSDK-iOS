//
//  JXIMMsgPubContent.h
//  JXIMSdk
//
//  Created by 陈汉 on 2021/9/13.
//

#import <Foundation/Foundation.h>
#import "JXIMMessage.h"
#import "JXIMMsgTextContent.h"
#import "JXIMMsgFaceContent.h"
#import "JXIMMsgImageContent.h"
#import "JXIMMsgAudioContent.h"
#import "JXIMMsgVideoContent.h"
#import "JXIMMsgFileContent.h"
#import "JXIMMsgLBSContent.h"
#import "JXIMMsgCustomContent.h"
#import "JXIMMsgReplyContent.h"
#import "JXIMMsgMergeTransmitContent.h"


NS_ASSUME_NONNULL_BEGIN

@interface JXIMMsgPubContent : NSObject

/** 消息对象类型 */
@property(nonatomic) JXIMMessageType contentType;
/** 文本消息对象 */
@property (nonatomic, strong) JXIMMsgTextContent *textContent;
/** 表情消息对象 */
@property (nonatomic, strong) JXIMMsgFaceContent *faceContent;
/** 图片消息对象 */
@property (nonatomic, strong) JXIMMsgImageContent *imageContent;
/** 语音消息对象 */
@property (nonatomic, strong) JXIMMsgAudioContent *audioContent;
/** 视频消息对象 */
@property (nonatomic, strong) JXIMMsgVideoContent *videoContent;
/** 文件消息对象 */
@property (nonatomic, strong) JXIMMsgFileContent *fileContent;
/** 定位消息对象 */
@property (nonatomic, strong) JXIMMsgLBSContent *lbsContent;
/** 回复消息对象 */
@property (nonatomic, strong) JXIMMsgReplyContent *replyContent;
/** 合并转发消息对象 */
@property (nonatomic, strong) JXIMMsgMergeTransmitContent *mTContent;
/** 自定义消息对象 */
@property (nonatomic, strong) JXIMMsgCustomContent *customContent;

@end

NS_ASSUME_NONNULL_END
