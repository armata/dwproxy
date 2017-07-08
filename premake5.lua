workspace "dwproxy"
	configurations { "Debug", "Release" }

	symbols "On"
	characterset "Unicode"

	flags { "StaticRuntime", "No64BitChecks" }

	flags { "NoIncrementalLink", "NoEditAndContinue" }

	location "build/"

	-- architecture "x64"

    filter "configurations:Debug"
        defines "_DEBUG"

    filter "configurations:Release"
        defines "NDEBUG"
        optimize "Speed"

	project "dwproxy"
		language "C++"
		kind "SharedLib"

		defines "STEAM_API_EXPORTS"

		includedirs { "include/", "deplibs/steamworks/" }

		files
		{
			"include/**.h",
			"src/**.cpp"
		}