package sample

import kotlin.native.concurrent.*

actual class Sample {
    actual fun checkMe() = 42
}

actual object Platform {
    actual fun name(): String = "JVM"
}

