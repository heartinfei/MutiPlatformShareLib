package sample

import kotlin.math.abs
import kotlin.math.pow
import kotlin.math.sqrt

expect class Sample() {
    fun checkMe(): Int
}

expect object Platform {
    fun name(): String
}

fun hello(): String = "Hello from ${Platform.name()}"

/**
 * 计算距离
 */
fun distance(p1: KPoint, p2: KPoint): Double {
    val v1 = p1.x.pow(2) + p1.y.pow(2)
    val v2 = p2.x.pow(2) + p2.y.pow(2)
    return sqrt(abs(v1 - v2))
}

fun middle(p1: KPoint, p2: KPoint): KPoint = KPoint((p1.x + p2.x) / 2, (p2.y + p2.y) / 2)

data class KPoint(public val x: Double, public val y: Double)