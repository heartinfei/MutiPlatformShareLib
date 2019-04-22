package sample

actual class Sample {
    actual fun checkMe() = 64
}

actual object Platform {
    actual fun name(): String = "Arm64"
}