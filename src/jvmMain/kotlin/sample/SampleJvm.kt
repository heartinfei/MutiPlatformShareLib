package sample

import retrofit2.Call
import retrofit2.http.GET

actual class Sample {
    actual fun checkMe() = 42
}

actual object Platform {
    actual fun name(): String = "JVM"
}

interface Api {
    @GET("users/{user}/repos")
    fun getContent(): Call<String>
}

fun getBaidu() {

}