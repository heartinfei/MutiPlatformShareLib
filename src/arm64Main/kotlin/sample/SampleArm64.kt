package sample

import kotlin.native.concurrent.TransferMode
import kotlin.native.concurrent.Worker

actual class Sample {
    actual fun checkMe() = 64
}

actual object Platform {
    actual fun name(): String = "Arm64"
}

fun workerTest() {
    val w1 = Worker.start()
    val future = w1.execute(TransferMode.SAFE, { "S" }) {
        print("参数信息：$it")
        "Result"
    }
    future.consume {
        print("result:$it")
    }
}