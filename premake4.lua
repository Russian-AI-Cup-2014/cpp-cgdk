local name = 'MyStrategy'

solution( name )
   configurations { "Debug", "Release" }
 
   -- A project defines one build target
   project( name )
      kind "ConsoleApp"
      language "C++"
      files { 
         "*.h", 
         "*.cpp",
         "model/*.cpp", 
         "model/*.h",
         "csimplesocket/*.cpp",
         "csimplesocket/*.h"
      }
 
      defines { "ONLINE_JUDGE" }

      configuration "Debug"
         defines { "DEBUG" }
         flags { "Symbols" }
 
      configuration "Release"
         defines { "NDEBUG" }
         flags { "Optimize" }    