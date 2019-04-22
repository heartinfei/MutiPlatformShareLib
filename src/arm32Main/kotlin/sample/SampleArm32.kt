package sample

actual class Sample {
    actual fun checkMe() = 32
}

actual object Platform {
    actual fun name(): String = "Arm32"
}