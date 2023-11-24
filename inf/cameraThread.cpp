//
// Created by x on 2023/9/26.
//

#include "cameraThread.h"
#include <QThread>

CheckCameraThread::CheckCameraThread() {
    connect(this, SIGNAL(finished()), this, SLOT(deleteLater()));
}

void CheckCameraThread::run() {
    qRegisterMetaType<JSON>("JSON"); //注册JSON类型
    QString info_msg = "摄像头检测中。。。";
    JSON emit_json;
    emit_json.info = info_msg;
    emit_json.code = succeed_code;
    emit_json.status = NULL;
    emit this->update_json(emit_json);
    this->sleep(time_to_sleep);
    info_msg = "连接摄像头成功！";
    emit_json.info = info_msg;
    emit_json.code = succeed_code;
//    emit_json.status = this->thread()->currentThread();
    emit_json.status = this->thread()->currentThread();
    emit this->update_json(emit_json);
}
