package DatenLord

import spinal.core.Data

package object BCAM {

  object BCAMBuildType extends Enumeration {
    type BCAMBuildType = Value
    val REG, BRUTE, SEGMENT = Value

    def asString(buildType: BCAMBuildType) = {
      var ret = ""
      buildType match {
        case REG     => ret = "REG"
        case BRUTE   => ret = "BRUTE-FORCE"
        case SEGMENT => ret = "SEGMENT"
      }
      ret
    }
  }

  case class BCAMConfig(Cd: Int, Pw: Int, Sw: Int = 1)

}
