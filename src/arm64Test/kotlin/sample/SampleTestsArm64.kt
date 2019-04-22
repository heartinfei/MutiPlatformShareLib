package sample

import kotlin.test.Test
import kotlin.test.assertTrue

class SampleTestsArm64 {
    @Test
    fun testHello() {
        assertTrue("Arm64" in hello())
    }
}