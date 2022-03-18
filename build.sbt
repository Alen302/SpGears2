version := "1.0"
scalaVersion := "2.11.12"
organization := "SEIT311"
name := "LicioLib"

val spinalVersion = "1.6.4"
val spinalCore = "com.github.spinalhdl" %% "spinalhdl-core" % spinalVersion
val spinalLib = "com.github.spinalhdl" %% "spinalhdl-lib" % spinalVersion
val spinalIdslPlugin = compilerPlugin("com.github.spinalhdl" %% "spinalhdl-idsl-plugin" % spinalVersion)
val scalatest = "org.scalatest" %% "scalatest" % "3.2.11" % "test"

libraryDependencies ++= Seq(spinalCore, spinalLib, spinalIdslPlugin, scalatest)


fork := true

