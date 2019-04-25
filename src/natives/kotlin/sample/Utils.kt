package sample

import kotlin.native.concurrent.TransferMode
import kotlin.native.concurrent.Worker
/**
 *
 * @author 王强 on 2019-04-25 249346528@qq.com
 */
fun workerTesst() {
    val w1 = Worker.start()
    val future = w1.execute(TransferMode.SAFE, { "S" }) {
        print("参数信息：$it")
        "Result"
    }
    future.consume {
        print("result:$it")
    }
}