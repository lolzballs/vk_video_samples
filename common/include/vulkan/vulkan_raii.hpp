// Copyright 2015-2022 The Khronos Group Inc.
//
// SPDX-License-Identifier: Apache-2.0 OR MIT
//

// This header is generated from the Khronos Vulkan XML API Registry.

#ifndef VULKAN_RAII_HPP
#define VULKAN_RAII_HPP

#include <memory>
#include <utility>  // std::exchange, std::forward
#include <vulkan/vulkan.hpp>

#if !defined( VULKAN_HPP_RAII_NAMESPACE )
#  define VULKAN_HPP_RAII_NAMESPACE raii
#endif

#if !defined( VULKAN_HPP_DISABLE_ENHANCED_MODE ) && !defined(VULKAN_HPP_NO_EXCEPTIONS)
namespace VULKAN_HPP_NAMESPACE
{
  namespace VULKAN_HPP_RAII_NAMESPACE
  {
    template <class T, class U = T>
    VULKAN_HPP_CONSTEXPR_14 VULKAN_HPP_INLINE T exchange( T & obj, U && newValue )
    {
#  if ( 14 <= VULKAN_HPP_CPP_VERSION )
      return std::exchange<T>( obj, std::forward<U>( newValue ) );
#  else
      T oldValue = std::move( obj );
      obj        = std::forward<U>( newValue );
      return oldValue;
#  endif
    }


    class ContextDispatcher : public DispatchLoaderBase
    {
    public:
      ContextDispatcher( PFN_vkGetInstanceProcAddr getProcAddr )
        : vkGetInstanceProcAddr( getProcAddr )
  //=== VK_VERSION_1_0 ===
, vkCreateInstance( PFN_vkCreateInstance( getProcAddr( NULL, "vkCreateInstance" ) ) ), vkEnumerateInstanceExtensionProperties( PFN_vkEnumerateInstanceExtensionProperties( getProcAddr( NULL, "vkEnumerateInstanceExtensionProperties" ) ) ), vkEnumerateInstanceLayerProperties( PFN_vkEnumerateInstanceLayerProperties( getProcAddr( NULL, "vkEnumerateInstanceLayerProperties" ) ) )
  //=== VK_VERSION_1_1 ===
, vkEnumerateInstanceVersion( PFN_vkEnumerateInstanceVersion( getProcAddr( NULL, "vkEnumerateInstanceVersion" ) ) )
      {}

    public:
      PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr = 0;

  //=== VK_VERSION_1_0 ===
      PFN_vkCreateInstance vkCreateInstance = 0;
      PFN_vkEnumerateInstanceExtensionProperties vkEnumerateInstanceExtensionProperties = 0;
      PFN_vkEnumerateInstanceLayerProperties vkEnumerateInstanceLayerProperties = 0;

  //=== VK_VERSION_1_1 ===
      PFN_vkEnumerateInstanceVersion vkEnumerateInstanceVersion = 0;

    };

    class InstanceDispatcher : public DispatchLoaderBase
    {
    public:
      InstanceDispatcher( PFN_vkGetInstanceProcAddr getProcAddr, VkInstance instance )
        : vkGetInstanceProcAddr( getProcAddr )
      {

  //=== VK_VERSION_1_0 ===
        vkDestroyInstance = PFN_vkDestroyInstance( vkGetInstanceProcAddr( instance, "vkDestroyInstance" ) );
        vkEnumeratePhysicalDevices = PFN_vkEnumeratePhysicalDevices( vkGetInstanceProcAddr( instance, "vkEnumeratePhysicalDevices" ) );
        vkGetPhysicalDeviceFeatures = PFN_vkGetPhysicalDeviceFeatures( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceFeatures" ) );
        vkGetPhysicalDeviceFormatProperties = PFN_vkGetPhysicalDeviceFormatProperties( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceFormatProperties" ) );
        vkGetPhysicalDeviceImageFormatProperties = PFN_vkGetPhysicalDeviceImageFormatProperties( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceImageFormatProperties" ) );
        vkGetPhysicalDeviceProperties = PFN_vkGetPhysicalDeviceProperties( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceProperties" ) );
        vkGetPhysicalDeviceQueueFamilyProperties = PFN_vkGetPhysicalDeviceQueueFamilyProperties( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceQueueFamilyProperties" ) );
        vkGetPhysicalDeviceMemoryProperties = PFN_vkGetPhysicalDeviceMemoryProperties( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceMemoryProperties" ) );
        vkCreateDevice = PFN_vkCreateDevice( vkGetInstanceProcAddr( instance, "vkCreateDevice" ) );
        vkEnumerateDeviceExtensionProperties = PFN_vkEnumerateDeviceExtensionProperties( vkGetInstanceProcAddr( instance, "vkEnumerateDeviceExtensionProperties" ) );
        vkEnumerateDeviceLayerProperties = PFN_vkEnumerateDeviceLayerProperties( vkGetInstanceProcAddr( instance, "vkEnumerateDeviceLayerProperties" ) );
        vkGetPhysicalDeviceSparseImageFormatProperties = PFN_vkGetPhysicalDeviceSparseImageFormatProperties( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceSparseImageFormatProperties" ) );

  //=== VK_VERSION_1_1 ===
        vkEnumeratePhysicalDeviceGroups = PFN_vkEnumeratePhysicalDeviceGroups( vkGetInstanceProcAddr( instance, "vkEnumeratePhysicalDeviceGroups" ) );
        vkGetPhysicalDeviceFeatures2 = PFN_vkGetPhysicalDeviceFeatures2( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceFeatures2" ) );
        vkGetPhysicalDeviceProperties2 = PFN_vkGetPhysicalDeviceProperties2( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceProperties2" ) );
        vkGetPhysicalDeviceFormatProperties2 = PFN_vkGetPhysicalDeviceFormatProperties2( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceFormatProperties2" ) );
        vkGetPhysicalDeviceImageFormatProperties2 = PFN_vkGetPhysicalDeviceImageFormatProperties2( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceImageFormatProperties2" ) );
        vkGetPhysicalDeviceQueueFamilyProperties2 = PFN_vkGetPhysicalDeviceQueueFamilyProperties2( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceQueueFamilyProperties2" ) );
        vkGetPhysicalDeviceMemoryProperties2 = PFN_vkGetPhysicalDeviceMemoryProperties2( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceMemoryProperties2" ) );
        vkGetPhysicalDeviceSparseImageFormatProperties2 = PFN_vkGetPhysicalDeviceSparseImageFormatProperties2( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceSparseImageFormatProperties2" ) );
        vkGetPhysicalDeviceExternalBufferProperties = PFN_vkGetPhysicalDeviceExternalBufferProperties( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceExternalBufferProperties" ) );
        vkGetPhysicalDeviceExternalFenceProperties = PFN_vkGetPhysicalDeviceExternalFenceProperties( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceExternalFenceProperties" ) );
        vkGetPhysicalDeviceExternalSemaphoreProperties = PFN_vkGetPhysicalDeviceExternalSemaphoreProperties( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceExternalSemaphoreProperties" ) );

  //=== VK_VERSION_1_3 ===
        vkGetPhysicalDeviceToolProperties = PFN_vkGetPhysicalDeviceToolProperties( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceToolProperties" ) );

  //=== VK_EXT_acquire_drm_display ===
        vkAcquireDrmDisplayEXT = PFN_vkAcquireDrmDisplayEXT( vkGetInstanceProcAddr( instance, "vkAcquireDrmDisplayEXT" ) );
        vkGetDrmDisplayEXT = PFN_vkGetDrmDisplayEXT( vkGetInstanceProcAddr( instance, "vkGetDrmDisplayEXT" ) );

#if defined( VK_USE_PLATFORM_XLIB_XRANDR_EXT )
  //=== VK_EXT_acquire_xlib_display ===
        vkAcquireXlibDisplayEXT = PFN_vkAcquireXlibDisplayEXT( vkGetInstanceProcAddr( instance, "vkAcquireXlibDisplayEXT" ) );
        vkGetRandROutputDisplayEXT = PFN_vkGetRandROutputDisplayEXT( vkGetInstanceProcAddr( instance, "vkGetRandROutputDisplayEXT" ) );
#endif /*VK_USE_PLATFORM_XLIB_XRANDR_EXT*/

  //=== VK_EXT_calibrated_timestamps ===
        vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT" ) );

  //=== VK_EXT_debug_report ===
        vkCreateDebugReportCallbackEXT = PFN_vkCreateDebugReportCallbackEXT( vkGetInstanceProcAddr( instance, "vkCreateDebugReportCallbackEXT" ) );
        vkDestroyDebugReportCallbackEXT = PFN_vkDestroyDebugReportCallbackEXT( vkGetInstanceProcAddr( instance, "vkDestroyDebugReportCallbackEXT" ) );
        vkDebugReportMessageEXT = PFN_vkDebugReportMessageEXT( vkGetInstanceProcAddr( instance, "vkDebugReportMessageEXT" ) );

  //=== VK_EXT_debug_utils ===
        vkCreateDebugUtilsMessengerEXT = PFN_vkCreateDebugUtilsMessengerEXT( vkGetInstanceProcAddr( instance, "vkCreateDebugUtilsMessengerEXT" ) );
        vkDestroyDebugUtilsMessengerEXT = PFN_vkDestroyDebugUtilsMessengerEXT( vkGetInstanceProcAddr( instance, "vkDestroyDebugUtilsMessengerEXT" ) );
        vkSubmitDebugUtilsMessageEXT = PFN_vkSubmitDebugUtilsMessageEXT( vkGetInstanceProcAddr( instance, "vkSubmitDebugUtilsMessageEXT" ) );

  //=== VK_EXT_direct_mode_display ===
        vkReleaseDisplayEXT = PFN_vkReleaseDisplayEXT( vkGetInstanceProcAddr( instance, "vkReleaseDisplayEXT" ) );

#if defined( VK_USE_PLATFORM_DIRECTFB_EXT )
  //=== VK_EXT_directfb_surface ===
        vkCreateDirectFBSurfaceEXT = PFN_vkCreateDirectFBSurfaceEXT( vkGetInstanceProcAddr( instance, "vkCreateDirectFBSurfaceEXT" ) );
        vkGetPhysicalDeviceDirectFBPresentationSupportEXT = PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT" ) );
#endif /*VK_USE_PLATFORM_DIRECTFB_EXT*/

  //=== VK_EXT_display_surface_counter ===
        vkGetPhysicalDeviceSurfaceCapabilities2EXT = PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceSurfaceCapabilities2EXT" ) );

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_EXT_full_screen_exclusive ===
        vkGetPhysicalDeviceSurfacePresentModes2EXT = PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceSurfacePresentModes2EXT" ) );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_EXT_headless_surface ===
        vkCreateHeadlessSurfaceEXT = PFN_vkCreateHeadlessSurfaceEXT( vkGetInstanceProcAddr( instance, "vkCreateHeadlessSurfaceEXT" ) );

#if defined( VK_USE_PLATFORM_METAL_EXT )
  //=== VK_EXT_metal_surface ===
        vkCreateMetalSurfaceEXT = PFN_vkCreateMetalSurfaceEXT( vkGetInstanceProcAddr( instance, "vkCreateMetalSurfaceEXT" ) );
#endif /*VK_USE_PLATFORM_METAL_EXT*/

  //=== VK_EXT_sample_locations ===
        vkGetPhysicalDeviceMultisamplePropertiesEXT = PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceMultisamplePropertiesEXT" ) );

  //=== VK_EXT_tooling_info ===
        vkGetPhysicalDeviceToolPropertiesEXT = PFN_vkGetPhysicalDeviceToolPropertiesEXT( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceToolPropertiesEXT" ) );
        if ( !vkGetPhysicalDeviceToolProperties ) vkGetPhysicalDeviceToolProperties = vkGetPhysicalDeviceToolPropertiesEXT;

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_imagepipe_surface ===
        vkCreateImagePipeSurfaceFUCHSIA = PFN_vkCreateImagePipeSurfaceFUCHSIA( vkGetInstanceProcAddr( instance, "vkCreateImagePipeSurfaceFUCHSIA" ) );
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_GGP )
  //=== VK_GGP_stream_descriptor_surface ===
        vkCreateStreamDescriptorSurfaceGGP = PFN_vkCreateStreamDescriptorSurfaceGGP( vkGetInstanceProcAddr( instance, "vkCreateStreamDescriptorSurfaceGGP" ) );
#endif /*VK_USE_PLATFORM_GGP*/

#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  //=== VK_KHR_android_surface ===
        vkCreateAndroidSurfaceKHR = PFN_vkCreateAndroidSurfaceKHR( vkGetInstanceProcAddr( instance, "vkCreateAndroidSurfaceKHR" ) );
#endif /*VK_USE_PLATFORM_ANDROID_KHR*/

  //=== VK_KHR_device_group ===
        vkGetPhysicalDevicePresentRectanglesKHR = PFN_vkGetPhysicalDevicePresentRectanglesKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDevicePresentRectanglesKHR" ) );

  //=== VK_KHR_device_group_creation ===
        vkEnumeratePhysicalDeviceGroupsKHR = PFN_vkEnumeratePhysicalDeviceGroupsKHR( vkGetInstanceProcAddr( instance, "vkEnumeratePhysicalDeviceGroupsKHR" ) );
        if ( !vkEnumeratePhysicalDeviceGroups ) vkEnumeratePhysicalDeviceGroups = vkEnumeratePhysicalDeviceGroupsKHR;

  //=== VK_KHR_display ===
        vkGetPhysicalDeviceDisplayPropertiesKHR = PFN_vkGetPhysicalDeviceDisplayPropertiesKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceDisplayPropertiesKHR" ) );
        vkGetPhysicalDeviceDisplayPlanePropertiesKHR = PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR" ) );
        vkGetDisplayPlaneSupportedDisplaysKHR = PFN_vkGetDisplayPlaneSupportedDisplaysKHR( vkGetInstanceProcAddr( instance, "vkGetDisplayPlaneSupportedDisplaysKHR" ) );
        vkGetDisplayModePropertiesKHR = PFN_vkGetDisplayModePropertiesKHR( vkGetInstanceProcAddr( instance, "vkGetDisplayModePropertiesKHR" ) );
        vkCreateDisplayModeKHR = PFN_vkCreateDisplayModeKHR( vkGetInstanceProcAddr( instance, "vkCreateDisplayModeKHR" ) );
        vkGetDisplayPlaneCapabilitiesKHR = PFN_vkGetDisplayPlaneCapabilitiesKHR( vkGetInstanceProcAddr( instance, "vkGetDisplayPlaneCapabilitiesKHR" ) );
        vkCreateDisplayPlaneSurfaceKHR = PFN_vkCreateDisplayPlaneSurfaceKHR( vkGetInstanceProcAddr( instance, "vkCreateDisplayPlaneSurfaceKHR" ) );

  //=== VK_KHR_external_fence_capabilities ===
        vkGetPhysicalDeviceExternalFencePropertiesKHR = PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceExternalFencePropertiesKHR" ) );
        if ( !vkGetPhysicalDeviceExternalFenceProperties ) vkGetPhysicalDeviceExternalFenceProperties = vkGetPhysicalDeviceExternalFencePropertiesKHR;

  //=== VK_KHR_external_memory_capabilities ===
        vkGetPhysicalDeviceExternalBufferPropertiesKHR = PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceExternalBufferPropertiesKHR" ) );
        if ( !vkGetPhysicalDeviceExternalBufferProperties ) vkGetPhysicalDeviceExternalBufferProperties = vkGetPhysicalDeviceExternalBufferPropertiesKHR;

  //=== VK_KHR_external_semaphore_capabilities ===
        vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR" ) );
        if ( !vkGetPhysicalDeviceExternalSemaphoreProperties ) vkGetPhysicalDeviceExternalSemaphoreProperties = vkGetPhysicalDeviceExternalSemaphorePropertiesKHR;

  //=== VK_KHR_fragment_shading_rate ===
        vkGetPhysicalDeviceFragmentShadingRatesKHR = PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceFragmentShadingRatesKHR" ) );

  //=== VK_KHR_get_display_properties2 ===
        vkGetPhysicalDeviceDisplayProperties2KHR = PFN_vkGetPhysicalDeviceDisplayProperties2KHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceDisplayProperties2KHR" ) );
        vkGetPhysicalDeviceDisplayPlaneProperties2KHR = PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR" ) );
        vkGetDisplayModeProperties2KHR = PFN_vkGetDisplayModeProperties2KHR( vkGetInstanceProcAddr( instance, "vkGetDisplayModeProperties2KHR" ) );
        vkGetDisplayPlaneCapabilities2KHR = PFN_vkGetDisplayPlaneCapabilities2KHR( vkGetInstanceProcAddr( instance, "vkGetDisplayPlaneCapabilities2KHR" ) );

  //=== VK_KHR_get_physical_device_properties2 ===
        vkGetPhysicalDeviceFeatures2KHR = PFN_vkGetPhysicalDeviceFeatures2KHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceFeatures2KHR" ) );
        if ( !vkGetPhysicalDeviceFeatures2 ) vkGetPhysicalDeviceFeatures2 = vkGetPhysicalDeviceFeatures2KHR;
        vkGetPhysicalDeviceProperties2KHR = PFN_vkGetPhysicalDeviceProperties2KHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceProperties2KHR" ) );
        if ( !vkGetPhysicalDeviceProperties2 ) vkGetPhysicalDeviceProperties2 = vkGetPhysicalDeviceProperties2KHR;
        vkGetPhysicalDeviceFormatProperties2KHR = PFN_vkGetPhysicalDeviceFormatProperties2KHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceFormatProperties2KHR" ) );
        if ( !vkGetPhysicalDeviceFormatProperties2 ) vkGetPhysicalDeviceFormatProperties2 = vkGetPhysicalDeviceFormatProperties2KHR;
        vkGetPhysicalDeviceImageFormatProperties2KHR = PFN_vkGetPhysicalDeviceImageFormatProperties2KHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceImageFormatProperties2KHR" ) );
        if ( !vkGetPhysicalDeviceImageFormatProperties2 ) vkGetPhysicalDeviceImageFormatProperties2 = vkGetPhysicalDeviceImageFormatProperties2KHR;
        vkGetPhysicalDeviceQueueFamilyProperties2KHR = PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceQueueFamilyProperties2KHR" ) );
        if ( !vkGetPhysicalDeviceQueueFamilyProperties2 ) vkGetPhysicalDeviceQueueFamilyProperties2 = vkGetPhysicalDeviceQueueFamilyProperties2KHR;
        vkGetPhysicalDeviceMemoryProperties2KHR = PFN_vkGetPhysicalDeviceMemoryProperties2KHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceMemoryProperties2KHR" ) );
        if ( !vkGetPhysicalDeviceMemoryProperties2 ) vkGetPhysicalDeviceMemoryProperties2 = vkGetPhysicalDeviceMemoryProperties2KHR;
        vkGetPhysicalDeviceSparseImageFormatProperties2KHR = PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR" ) );
        if ( !vkGetPhysicalDeviceSparseImageFormatProperties2 ) vkGetPhysicalDeviceSparseImageFormatProperties2 = vkGetPhysicalDeviceSparseImageFormatProperties2KHR;

  //=== VK_KHR_get_surface_capabilities2 ===
        vkGetPhysicalDeviceSurfaceCapabilities2KHR = PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceSurfaceCapabilities2KHR" ) );
        vkGetPhysicalDeviceSurfaceFormats2KHR = PFN_vkGetPhysicalDeviceSurfaceFormats2KHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceSurfaceFormats2KHR" ) );

  //=== VK_KHR_performance_query ===
        vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR( vkGetInstanceProcAddr( instance, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR" ) );
        vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR" ) );

  //=== VK_KHR_surface ===
        vkDestroySurfaceKHR = PFN_vkDestroySurfaceKHR( vkGetInstanceProcAddr( instance, "vkDestroySurfaceKHR" ) );
        vkGetPhysicalDeviceSurfaceSupportKHR = PFN_vkGetPhysicalDeviceSurfaceSupportKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceSurfaceSupportKHR" ) );
        vkGetPhysicalDeviceSurfaceCapabilitiesKHR = PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR" ) );
        vkGetPhysicalDeviceSurfaceFormatsKHR = PFN_vkGetPhysicalDeviceSurfaceFormatsKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceSurfaceFormatsKHR" ) );
        vkGetPhysicalDeviceSurfacePresentModesKHR = PFN_vkGetPhysicalDeviceSurfacePresentModesKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceSurfacePresentModesKHR" ) );

  //=== VK_KHR_video_queue ===
        vkGetPhysicalDeviceVideoCapabilitiesKHR = PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceVideoCapabilitiesKHR" ) );
        vkGetPhysicalDeviceVideoFormatPropertiesKHR = PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceVideoFormatPropertiesKHR" ) );

#if defined( VK_USE_PLATFORM_WAYLAND_KHR )
  //=== VK_KHR_wayland_surface ===
        vkCreateWaylandSurfaceKHR = PFN_vkCreateWaylandSurfaceKHR( vkGetInstanceProcAddr( instance, "vkCreateWaylandSurfaceKHR" ) );
        vkGetPhysicalDeviceWaylandPresentationSupportKHR = PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceWaylandPresentationSupportKHR" ) );
#endif /*VK_USE_PLATFORM_WAYLAND_KHR*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_win32_surface ===
        vkCreateWin32SurfaceKHR = PFN_vkCreateWin32SurfaceKHR( vkGetInstanceProcAddr( instance, "vkCreateWin32SurfaceKHR" ) );
        vkGetPhysicalDeviceWin32PresentationSupportKHR = PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceWin32PresentationSupportKHR" ) );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

#if defined( VK_USE_PLATFORM_XCB_KHR )
  //=== VK_KHR_xcb_surface ===
        vkCreateXcbSurfaceKHR = PFN_vkCreateXcbSurfaceKHR( vkGetInstanceProcAddr( instance, "vkCreateXcbSurfaceKHR" ) );
        vkGetPhysicalDeviceXcbPresentationSupportKHR = PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceXcbPresentationSupportKHR" ) );
#endif /*VK_USE_PLATFORM_XCB_KHR*/

#if defined( VK_USE_PLATFORM_XLIB_KHR )
  //=== VK_KHR_xlib_surface ===
        vkCreateXlibSurfaceKHR = PFN_vkCreateXlibSurfaceKHR( vkGetInstanceProcAddr( instance, "vkCreateXlibSurfaceKHR" ) );
        vkGetPhysicalDeviceXlibPresentationSupportKHR = PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceXlibPresentationSupportKHR" ) );
#endif /*VK_USE_PLATFORM_XLIB_KHR*/

#if defined( VK_USE_PLATFORM_IOS_MVK )
  //=== VK_MVK_ios_surface ===
        vkCreateIOSSurfaceMVK = PFN_vkCreateIOSSurfaceMVK( vkGetInstanceProcAddr( instance, "vkCreateIOSSurfaceMVK" ) );
#endif /*VK_USE_PLATFORM_IOS_MVK*/

#if defined( VK_USE_PLATFORM_MACOS_MVK )
  //=== VK_MVK_macos_surface ===
        vkCreateMacOSSurfaceMVK = PFN_vkCreateMacOSSurfaceMVK( vkGetInstanceProcAddr( instance, "vkCreateMacOSSurfaceMVK" ) );
#endif /*VK_USE_PLATFORM_MACOS_MVK*/

#if defined( VK_USE_PLATFORM_VI_NN )
  //=== VK_NN_vi_surface ===
        vkCreateViSurfaceNN = PFN_vkCreateViSurfaceNN( vkGetInstanceProcAddr( instance, "vkCreateViSurfaceNN" ) );
#endif /*VK_USE_PLATFORM_VI_NN*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_NV_acquire_winrt_display ===
        vkAcquireWinrtDisplayNV = PFN_vkAcquireWinrtDisplayNV( vkGetInstanceProcAddr( instance, "vkAcquireWinrtDisplayNV" ) );
        vkGetWinrtDisplayNV = PFN_vkGetWinrtDisplayNV( vkGetInstanceProcAddr( instance, "vkGetWinrtDisplayNV" ) );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_NV_cooperative_matrix ===
        vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV" ) );

  //=== VK_NV_coverage_reduction_mode ===
        vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV" ) );

  //=== VK_NV_external_memory_capabilities ===
        vkGetPhysicalDeviceExternalImageFormatPropertiesNV = PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV" ) );

  //=== VK_NV_optical_flow ===
        vkGetPhysicalDeviceOpticalFlowImageFormatsNV = PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceOpticalFlowImageFormatsNV" ) );

#if defined( VK_USE_PLATFORM_SCREEN_QNX )
  //=== VK_QNX_screen_surface ===
        vkCreateScreenSurfaceQNX = PFN_vkCreateScreenSurfaceQNX( vkGetInstanceProcAddr( instance, "vkCreateScreenSurfaceQNX" ) );
        vkGetPhysicalDeviceScreenPresentationSupportQNX = PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX( vkGetInstanceProcAddr( instance, "vkGetPhysicalDeviceScreenPresentationSupportQNX" ) );
#endif /*VK_USE_PLATFORM_SCREEN_QNX*/

        vkGetDeviceProcAddr =
          PFN_vkGetDeviceProcAddr( vkGetInstanceProcAddr( instance, "vkGetDeviceProcAddr" ) );
      }

    public:

  //=== VK_VERSION_1_0 ===
      PFN_vkDestroyInstance vkDestroyInstance = 0;
      PFN_vkEnumeratePhysicalDevices vkEnumeratePhysicalDevices = 0;
      PFN_vkGetPhysicalDeviceFeatures vkGetPhysicalDeviceFeatures = 0;
      PFN_vkGetPhysicalDeviceFormatProperties vkGetPhysicalDeviceFormatProperties = 0;
      PFN_vkGetPhysicalDeviceImageFormatProperties vkGetPhysicalDeviceImageFormatProperties = 0;
      PFN_vkGetPhysicalDeviceProperties vkGetPhysicalDeviceProperties = 0;
      PFN_vkGetPhysicalDeviceQueueFamilyProperties vkGetPhysicalDeviceQueueFamilyProperties = 0;
      PFN_vkGetPhysicalDeviceMemoryProperties vkGetPhysicalDeviceMemoryProperties = 0;
      PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr = 0;
      PFN_vkCreateDevice vkCreateDevice = 0;
      PFN_vkEnumerateDeviceExtensionProperties vkEnumerateDeviceExtensionProperties = 0;
      PFN_vkEnumerateDeviceLayerProperties vkEnumerateDeviceLayerProperties = 0;
      PFN_vkGetPhysicalDeviceSparseImageFormatProperties vkGetPhysicalDeviceSparseImageFormatProperties = 0;

  //=== VK_VERSION_1_1 ===
      PFN_vkEnumeratePhysicalDeviceGroups vkEnumeratePhysicalDeviceGroups = 0;
      PFN_vkGetPhysicalDeviceFeatures2 vkGetPhysicalDeviceFeatures2 = 0;
      PFN_vkGetPhysicalDeviceProperties2 vkGetPhysicalDeviceProperties2 = 0;
      PFN_vkGetPhysicalDeviceFormatProperties2 vkGetPhysicalDeviceFormatProperties2 = 0;
      PFN_vkGetPhysicalDeviceImageFormatProperties2 vkGetPhysicalDeviceImageFormatProperties2 = 0;
      PFN_vkGetPhysicalDeviceQueueFamilyProperties2 vkGetPhysicalDeviceQueueFamilyProperties2 = 0;
      PFN_vkGetPhysicalDeviceMemoryProperties2 vkGetPhysicalDeviceMemoryProperties2 = 0;
      PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 vkGetPhysicalDeviceSparseImageFormatProperties2 = 0;
      PFN_vkGetPhysicalDeviceExternalBufferProperties vkGetPhysicalDeviceExternalBufferProperties = 0;
      PFN_vkGetPhysicalDeviceExternalFenceProperties vkGetPhysicalDeviceExternalFenceProperties = 0;
      PFN_vkGetPhysicalDeviceExternalSemaphoreProperties vkGetPhysicalDeviceExternalSemaphoreProperties = 0;

  //=== VK_VERSION_1_3 ===
      PFN_vkGetPhysicalDeviceToolProperties vkGetPhysicalDeviceToolProperties = 0;

  //=== VK_EXT_acquire_drm_display ===
      PFN_vkAcquireDrmDisplayEXT vkAcquireDrmDisplayEXT = 0;
      PFN_vkGetDrmDisplayEXT vkGetDrmDisplayEXT = 0;

#if defined( VK_USE_PLATFORM_XLIB_XRANDR_EXT )
  //=== VK_EXT_acquire_xlib_display ===
      PFN_vkAcquireXlibDisplayEXT vkAcquireXlibDisplayEXT = 0;
      PFN_vkGetRandROutputDisplayEXT vkGetRandROutputDisplayEXT = 0;
#else
      PFN_dummy vkAcquireXlibDisplayEXT_placeholder = 0;
      PFN_dummy vkGetRandROutputDisplayEXT_placeholder = 0;
#endif /*VK_USE_PLATFORM_XLIB_XRANDR_EXT*/

  //=== VK_EXT_calibrated_timestamps ===
      PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = 0;

  //=== VK_EXT_debug_report ===
      PFN_vkCreateDebugReportCallbackEXT vkCreateDebugReportCallbackEXT = 0;
      PFN_vkDestroyDebugReportCallbackEXT vkDestroyDebugReportCallbackEXT = 0;
      PFN_vkDebugReportMessageEXT vkDebugReportMessageEXT = 0;

  //=== VK_EXT_debug_utils ===
      PFN_vkCreateDebugUtilsMessengerEXT vkCreateDebugUtilsMessengerEXT = 0;
      PFN_vkDestroyDebugUtilsMessengerEXT vkDestroyDebugUtilsMessengerEXT = 0;
      PFN_vkSubmitDebugUtilsMessageEXT vkSubmitDebugUtilsMessageEXT = 0;

  //=== VK_EXT_direct_mode_display ===
      PFN_vkReleaseDisplayEXT vkReleaseDisplayEXT = 0;

#if defined( VK_USE_PLATFORM_DIRECTFB_EXT )
  //=== VK_EXT_directfb_surface ===
      PFN_vkCreateDirectFBSurfaceEXT vkCreateDirectFBSurfaceEXT = 0;
      PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT vkGetPhysicalDeviceDirectFBPresentationSupportEXT = 0;
#else
      PFN_dummy vkCreateDirectFBSurfaceEXT_placeholder = 0;
      PFN_dummy vkGetPhysicalDeviceDirectFBPresentationSupportEXT_placeholder = 0;
#endif /*VK_USE_PLATFORM_DIRECTFB_EXT*/

  //=== VK_EXT_display_surface_counter ===
      PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT vkGetPhysicalDeviceSurfaceCapabilities2EXT = 0;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_EXT_full_screen_exclusive ===
      PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT vkGetPhysicalDeviceSurfacePresentModes2EXT = 0;
#else
      PFN_dummy vkGetPhysicalDeviceSurfacePresentModes2EXT_placeholder = 0;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_EXT_headless_surface ===
      PFN_vkCreateHeadlessSurfaceEXT vkCreateHeadlessSurfaceEXT = 0;

#if defined( VK_USE_PLATFORM_METAL_EXT )
  //=== VK_EXT_metal_surface ===
      PFN_vkCreateMetalSurfaceEXT vkCreateMetalSurfaceEXT = 0;
#else
      PFN_dummy vkCreateMetalSurfaceEXT_placeholder = 0;
#endif /*VK_USE_PLATFORM_METAL_EXT*/

  //=== VK_EXT_sample_locations ===
      PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT vkGetPhysicalDeviceMultisamplePropertiesEXT = 0;

  //=== VK_EXT_tooling_info ===
      PFN_vkGetPhysicalDeviceToolPropertiesEXT vkGetPhysicalDeviceToolPropertiesEXT = 0;

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_imagepipe_surface ===
      PFN_vkCreateImagePipeSurfaceFUCHSIA vkCreateImagePipeSurfaceFUCHSIA = 0;
#else
      PFN_dummy vkCreateImagePipeSurfaceFUCHSIA_placeholder = 0;
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_GGP )
  //=== VK_GGP_stream_descriptor_surface ===
      PFN_vkCreateStreamDescriptorSurfaceGGP vkCreateStreamDescriptorSurfaceGGP = 0;
#else
      PFN_dummy vkCreateStreamDescriptorSurfaceGGP_placeholder = 0;
#endif /*VK_USE_PLATFORM_GGP*/

#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  //=== VK_KHR_android_surface ===
      PFN_vkCreateAndroidSurfaceKHR vkCreateAndroidSurfaceKHR = 0;
#else
      PFN_dummy vkCreateAndroidSurfaceKHR_placeholder = 0;
#endif /*VK_USE_PLATFORM_ANDROID_KHR*/

  //=== VK_KHR_device_group ===
      PFN_vkGetPhysicalDevicePresentRectanglesKHR vkGetPhysicalDevicePresentRectanglesKHR = 0;

  //=== VK_KHR_device_group_creation ===
      PFN_vkEnumeratePhysicalDeviceGroupsKHR vkEnumeratePhysicalDeviceGroupsKHR = 0;

  //=== VK_KHR_display ===
      PFN_vkGetPhysicalDeviceDisplayPropertiesKHR vkGetPhysicalDeviceDisplayPropertiesKHR = 0;
      PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR vkGetPhysicalDeviceDisplayPlanePropertiesKHR = 0;
      PFN_vkGetDisplayPlaneSupportedDisplaysKHR vkGetDisplayPlaneSupportedDisplaysKHR = 0;
      PFN_vkGetDisplayModePropertiesKHR vkGetDisplayModePropertiesKHR = 0;
      PFN_vkCreateDisplayModeKHR vkCreateDisplayModeKHR = 0;
      PFN_vkGetDisplayPlaneCapabilitiesKHR vkGetDisplayPlaneCapabilitiesKHR = 0;
      PFN_vkCreateDisplayPlaneSurfaceKHR vkCreateDisplayPlaneSurfaceKHR = 0;

  //=== VK_KHR_external_fence_capabilities ===
      PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR vkGetPhysicalDeviceExternalFencePropertiesKHR = 0;

  //=== VK_KHR_external_memory_capabilities ===
      PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR vkGetPhysicalDeviceExternalBufferPropertiesKHR = 0;

  //=== VK_KHR_external_semaphore_capabilities ===
      PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = 0;

  //=== VK_KHR_fragment_shading_rate ===
      PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR vkGetPhysicalDeviceFragmentShadingRatesKHR = 0;

  //=== VK_KHR_get_display_properties2 ===
      PFN_vkGetPhysicalDeviceDisplayProperties2KHR vkGetPhysicalDeviceDisplayProperties2KHR = 0;
      PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR vkGetPhysicalDeviceDisplayPlaneProperties2KHR = 0;
      PFN_vkGetDisplayModeProperties2KHR vkGetDisplayModeProperties2KHR = 0;
      PFN_vkGetDisplayPlaneCapabilities2KHR vkGetDisplayPlaneCapabilities2KHR = 0;

  //=== VK_KHR_get_physical_device_properties2 ===
      PFN_vkGetPhysicalDeviceFeatures2KHR vkGetPhysicalDeviceFeatures2KHR = 0;
      PFN_vkGetPhysicalDeviceProperties2KHR vkGetPhysicalDeviceProperties2KHR = 0;
      PFN_vkGetPhysicalDeviceFormatProperties2KHR vkGetPhysicalDeviceFormatProperties2KHR = 0;
      PFN_vkGetPhysicalDeviceImageFormatProperties2KHR vkGetPhysicalDeviceImageFormatProperties2KHR = 0;
      PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR vkGetPhysicalDeviceQueueFamilyProperties2KHR = 0;
      PFN_vkGetPhysicalDeviceMemoryProperties2KHR vkGetPhysicalDeviceMemoryProperties2KHR = 0;
      PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR vkGetPhysicalDeviceSparseImageFormatProperties2KHR = 0;

  //=== VK_KHR_get_surface_capabilities2 ===
      PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR vkGetPhysicalDeviceSurfaceCapabilities2KHR = 0;
      PFN_vkGetPhysicalDeviceSurfaceFormats2KHR vkGetPhysicalDeviceSurfaceFormats2KHR = 0;

  //=== VK_KHR_performance_query ===
      PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = 0;
      PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = 0;

  //=== VK_KHR_surface ===
      PFN_vkDestroySurfaceKHR vkDestroySurfaceKHR = 0;
      PFN_vkGetPhysicalDeviceSurfaceSupportKHR vkGetPhysicalDeviceSurfaceSupportKHR = 0;
      PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR vkGetPhysicalDeviceSurfaceCapabilitiesKHR = 0;
      PFN_vkGetPhysicalDeviceSurfaceFormatsKHR vkGetPhysicalDeviceSurfaceFormatsKHR = 0;
      PFN_vkGetPhysicalDeviceSurfacePresentModesKHR vkGetPhysicalDeviceSurfacePresentModesKHR = 0;

  //=== VK_KHR_video_queue ===
      PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR vkGetPhysicalDeviceVideoCapabilitiesKHR = 0;
      PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR vkGetPhysicalDeviceVideoFormatPropertiesKHR = 0;

#if defined( VK_USE_PLATFORM_WAYLAND_KHR )
  //=== VK_KHR_wayland_surface ===
      PFN_vkCreateWaylandSurfaceKHR vkCreateWaylandSurfaceKHR = 0;
      PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR vkGetPhysicalDeviceWaylandPresentationSupportKHR = 0;
#else
      PFN_dummy vkCreateWaylandSurfaceKHR_placeholder = 0;
      PFN_dummy vkGetPhysicalDeviceWaylandPresentationSupportKHR_placeholder = 0;
#endif /*VK_USE_PLATFORM_WAYLAND_KHR*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_win32_surface ===
      PFN_vkCreateWin32SurfaceKHR vkCreateWin32SurfaceKHR = 0;
      PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR vkGetPhysicalDeviceWin32PresentationSupportKHR = 0;
#else
      PFN_dummy vkCreateWin32SurfaceKHR_placeholder = 0;
      PFN_dummy vkGetPhysicalDeviceWin32PresentationSupportKHR_placeholder = 0;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

#if defined( VK_USE_PLATFORM_XCB_KHR )
  //=== VK_KHR_xcb_surface ===
      PFN_vkCreateXcbSurfaceKHR vkCreateXcbSurfaceKHR = 0;
      PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR vkGetPhysicalDeviceXcbPresentationSupportKHR = 0;
#else
      PFN_dummy vkCreateXcbSurfaceKHR_placeholder = 0;
      PFN_dummy vkGetPhysicalDeviceXcbPresentationSupportKHR_placeholder = 0;
#endif /*VK_USE_PLATFORM_XCB_KHR*/

#if defined( VK_USE_PLATFORM_XLIB_KHR )
  //=== VK_KHR_xlib_surface ===
      PFN_vkCreateXlibSurfaceKHR vkCreateXlibSurfaceKHR = 0;
      PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR vkGetPhysicalDeviceXlibPresentationSupportKHR = 0;
#else
      PFN_dummy vkCreateXlibSurfaceKHR_placeholder = 0;
      PFN_dummy vkGetPhysicalDeviceXlibPresentationSupportKHR_placeholder = 0;
#endif /*VK_USE_PLATFORM_XLIB_KHR*/

#if defined( VK_USE_PLATFORM_IOS_MVK )
  //=== VK_MVK_ios_surface ===
      PFN_vkCreateIOSSurfaceMVK vkCreateIOSSurfaceMVK = 0;
#else
      PFN_dummy vkCreateIOSSurfaceMVK_placeholder = 0;
#endif /*VK_USE_PLATFORM_IOS_MVK*/

#if defined( VK_USE_PLATFORM_MACOS_MVK )
  //=== VK_MVK_macos_surface ===
      PFN_vkCreateMacOSSurfaceMVK vkCreateMacOSSurfaceMVK = 0;
#else
      PFN_dummy vkCreateMacOSSurfaceMVK_placeholder = 0;
#endif /*VK_USE_PLATFORM_MACOS_MVK*/

#if defined( VK_USE_PLATFORM_VI_NN )
  //=== VK_NN_vi_surface ===
      PFN_vkCreateViSurfaceNN vkCreateViSurfaceNN = 0;
#else
      PFN_dummy vkCreateViSurfaceNN_placeholder = 0;
#endif /*VK_USE_PLATFORM_VI_NN*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_NV_acquire_winrt_display ===
      PFN_vkAcquireWinrtDisplayNV vkAcquireWinrtDisplayNV = 0;
      PFN_vkGetWinrtDisplayNV vkGetWinrtDisplayNV = 0;
#else
      PFN_dummy vkAcquireWinrtDisplayNV_placeholder = 0;
      PFN_dummy vkGetWinrtDisplayNV_placeholder = 0;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_NV_cooperative_matrix ===
      PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = 0;

  //=== VK_NV_coverage_reduction_mode ===
      PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = 0;

  //=== VK_NV_external_memory_capabilities ===
      PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV vkGetPhysicalDeviceExternalImageFormatPropertiesNV = 0;

  //=== VK_NV_optical_flow ===
      PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV vkGetPhysicalDeviceOpticalFlowImageFormatsNV = 0;

#if defined( VK_USE_PLATFORM_SCREEN_QNX )
  //=== VK_QNX_screen_surface ===
      PFN_vkCreateScreenSurfaceQNX vkCreateScreenSurfaceQNX = 0;
      PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX vkGetPhysicalDeviceScreenPresentationSupportQNX = 0;
#else
      PFN_dummy vkCreateScreenSurfaceQNX_placeholder = 0;
      PFN_dummy vkGetPhysicalDeviceScreenPresentationSupportQNX_placeholder = 0;
#endif /*VK_USE_PLATFORM_SCREEN_QNX*/

      PFN_vkGetDeviceProcAddr vkGetDeviceProcAddr = 0;
    };

    class DeviceDispatcher : public DispatchLoaderBase
    {
    public:
      DeviceDispatcher( PFN_vkGetDeviceProcAddr getProcAddr, VkDevice device ) : vkGetDeviceProcAddr( getProcAddr )
      {

  //=== VK_VERSION_1_0 ===
        vkGetDeviceProcAddr = PFN_vkGetDeviceProcAddr( vkGetDeviceProcAddr( device, "vkGetDeviceProcAddr" ) );
        vkDestroyDevice = PFN_vkDestroyDevice( vkGetDeviceProcAddr( device, "vkDestroyDevice" ) );
        vkGetDeviceQueue = PFN_vkGetDeviceQueue( vkGetDeviceProcAddr( device, "vkGetDeviceQueue" ) );
        vkQueueSubmit = PFN_vkQueueSubmit( vkGetDeviceProcAddr( device, "vkQueueSubmit" ) );
        vkQueueWaitIdle = PFN_vkQueueWaitIdle( vkGetDeviceProcAddr( device, "vkQueueWaitIdle" ) );
        vkDeviceWaitIdle = PFN_vkDeviceWaitIdle( vkGetDeviceProcAddr( device, "vkDeviceWaitIdle" ) );
        vkAllocateMemory = PFN_vkAllocateMemory( vkGetDeviceProcAddr( device, "vkAllocateMemory" ) );
        vkFreeMemory = PFN_vkFreeMemory( vkGetDeviceProcAddr( device, "vkFreeMemory" ) );
        vkMapMemory = PFN_vkMapMemory( vkGetDeviceProcAddr( device, "vkMapMemory" ) );
        vkUnmapMemory = PFN_vkUnmapMemory( vkGetDeviceProcAddr( device, "vkUnmapMemory" ) );
        vkFlushMappedMemoryRanges = PFN_vkFlushMappedMemoryRanges( vkGetDeviceProcAddr( device, "vkFlushMappedMemoryRanges" ) );
        vkInvalidateMappedMemoryRanges = PFN_vkInvalidateMappedMemoryRanges( vkGetDeviceProcAddr( device, "vkInvalidateMappedMemoryRanges" ) );
        vkGetDeviceMemoryCommitment = PFN_vkGetDeviceMemoryCommitment( vkGetDeviceProcAddr( device, "vkGetDeviceMemoryCommitment" ) );
        vkBindBufferMemory = PFN_vkBindBufferMemory( vkGetDeviceProcAddr( device, "vkBindBufferMemory" ) );
        vkBindImageMemory = PFN_vkBindImageMemory( vkGetDeviceProcAddr( device, "vkBindImageMemory" ) );
        vkGetBufferMemoryRequirements = PFN_vkGetBufferMemoryRequirements( vkGetDeviceProcAddr( device, "vkGetBufferMemoryRequirements" ) );
        vkGetImageMemoryRequirements = PFN_vkGetImageMemoryRequirements( vkGetDeviceProcAddr( device, "vkGetImageMemoryRequirements" ) );
        vkGetImageSparseMemoryRequirements = PFN_vkGetImageSparseMemoryRequirements( vkGetDeviceProcAddr( device, "vkGetImageSparseMemoryRequirements" ) );
        vkQueueBindSparse = PFN_vkQueueBindSparse( vkGetDeviceProcAddr( device, "vkQueueBindSparse" ) );
        vkCreateFence = PFN_vkCreateFence( vkGetDeviceProcAddr( device, "vkCreateFence" ) );
        vkDestroyFence = PFN_vkDestroyFence( vkGetDeviceProcAddr( device, "vkDestroyFence" ) );
        vkResetFences = PFN_vkResetFences( vkGetDeviceProcAddr( device, "vkResetFences" ) );
        vkGetFenceStatus = PFN_vkGetFenceStatus( vkGetDeviceProcAddr( device, "vkGetFenceStatus" ) );
        vkWaitForFences = PFN_vkWaitForFences( vkGetDeviceProcAddr( device, "vkWaitForFences" ) );
        vkCreateSemaphore = PFN_vkCreateSemaphore( vkGetDeviceProcAddr( device, "vkCreateSemaphore" ) );
        vkDestroySemaphore = PFN_vkDestroySemaphore( vkGetDeviceProcAddr( device, "vkDestroySemaphore" ) );
        vkCreateEvent = PFN_vkCreateEvent( vkGetDeviceProcAddr( device, "vkCreateEvent" ) );
        vkDestroyEvent = PFN_vkDestroyEvent( vkGetDeviceProcAddr( device, "vkDestroyEvent" ) );
        vkGetEventStatus = PFN_vkGetEventStatus( vkGetDeviceProcAddr( device, "vkGetEventStatus" ) );
        vkSetEvent = PFN_vkSetEvent( vkGetDeviceProcAddr( device, "vkSetEvent" ) );
        vkResetEvent = PFN_vkResetEvent( vkGetDeviceProcAddr( device, "vkResetEvent" ) );
        vkCreateQueryPool = PFN_vkCreateQueryPool( vkGetDeviceProcAddr( device, "vkCreateQueryPool" ) );
        vkDestroyQueryPool = PFN_vkDestroyQueryPool( vkGetDeviceProcAddr( device, "vkDestroyQueryPool" ) );
        vkGetQueryPoolResults = PFN_vkGetQueryPoolResults( vkGetDeviceProcAddr( device, "vkGetQueryPoolResults" ) );
        vkCreateBuffer = PFN_vkCreateBuffer( vkGetDeviceProcAddr( device, "vkCreateBuffer" ) );
        vkDestroyBuffer = PFN_vkDestroyBuffer( vkGetDeviceProcAddr( device, "vkDestroyBuffer" ) );
        vkCreateBufferView = PFN_vkCreateBufferView( vkGetDeviceProcAddr( device, "vkCreateBufferView" ) );
        vkDestroyBufferView = PFN_vkDestroyBufferView( vkGetDeviceProcAddr( device, "vkDestroyBufferView" ) );
        vkCreateImage = PFN_vkCreateImage( vkGetDeviceProcAddr( device, "vkCreateImage" ) );
        vkDestroyImage = PFN_vkDestroyImage( vkGetDeviceProcAddr( device, "vkDestroyImage" ) );
        vkGetImageSubresourceLayout = PFN_vkGetImageSubresourceLayout( vkGetDeviceProcAddr( device, "vkGetImageSubresourceLayout" ) );
        vkCreateImageView = PFN_vkCreateImageView( vkGetDeviceProcAddr( device, "vkCreateImageView" ) );
        vkDestroyImageView = PFN_vkDestroyImageView( vkGetDeviceProcAddr( device, "vkDestroyImageView" ) );
        vkCreateShaderModule = PFN_vkCreateShaderModule( vkGetDeviceProcAddr( device, "vkCreateShaderModule" ) );
        vkDestroyShaderModule = PFN_vkDestroyShaderModule( vkGetDeviceProcAddr( device, "vkDestroyShaderModule" ) );
        vkCreatePipelineCache = PFN_vkCreatePipelineCache( vkGetDeviceProcAddr( device, "vkCreatePipelineCache" ) );
        vkDestroyPipelineCache = PFN_vkDestroyPipelineCache( vkGetDeviceProcAddr( device, "vkDestroyPipelineCache" ) );
        vkGetPipelineCacheData = PFN_vkGetPipelineCacheData( vkGetDeviceProcAddr( device, "vkGetPipelineCacheData" ) );
        vkMergePipelineCaches = PFN_vkMergePipelineCaches( vkGetDeviceProcAddr( device, "vkMergePipelineCaches" ) );
        vkCreateGraphicsPipelines = PFN_vkCreateGraphicsPipelines( vkGetDeviceProcAddr( device, "vkCreateGraphicsPipelines" ) );
        vkCreateComputePipelines = PFN_vkCreateComputePipelines( vkGetDeviceProcAddr( device, "vkCreateComputePipelines" ) );
        vkDestroyPipeline = PFN_vkDestroyPipeline( vkGetDeviceProcAddr( device, "vkDestroyPipeline" ) );
        vkCreatePipelineLayout = PFN_vkCreatePipelineLayout( vkGetDeviceProcAddr( device, "vkCreatePipelineLayout" ) );
        vkDestroyPipelineLayout = PFN_vkDestroyPipelineLayout( vkGetDeviceProcAddr( device, "vkDestroyPipelineLayout" ) );
        vkCreateSampler = PFN_vkCreateSampler( vkGetDeviceProcAddr( device, "vkCreateSampler" ) );
        vkDestroySampler = PFN_vkDestroySampler( vkGetDeviceProcAddr( device, "vkDestroySampler" ) );
        vkCreateDescriptorSetLayout = PFN_vkCreateDescriptorSetLayout( vkGetDeviceProcAddr( device, "vkCreateDescriptorSetLayout" ) );
        vkDestroyDescriptorSetLayout = PFN_vkDestroyDescriptorSetLayout( vkGetDeviceProcAddr( device, "vkDestroyDescriptorSetLayout" ) );
        vkCreateDescriptorPool = PFN_vkCreateDescriptorPool( vkGetDeviceProcAddr( device, "vkCreateDescriptorPool" ) );
        vkDestroyDescriptorPool = PFN_vkDestroyDescriptorPool( vkGetDeviceProcAddr( device, "vkDestroyDescriptorPool" ) );
        vkResetDescriptorPool = PFN_vkResetDescriptorPool( vkGetDeviceProcAddr( device, "vkResetDescriptorPool" ) );
        vkAllocateDescriptorSets = PFN_vkAllocateDescriptorSets( vkGetDeviceProcAddr( device, "vkAllocateDescriptorSets" ) );
        vkFreeDescriptorSets = PFN_vkFreeDescriptorSets( vkGetDeviceProcAddr( device, "vkFreeDescriptorSets" ) );
        vkUpdateDescriptorSets = PFN_vkUpdateDescriptorSets( vkGetDeviceProcAddr( device, "vkUpdateDescriptorSets" ) );
        vkCreateFramebuffer = PFN_vkCreateFramebuffer( vkGetDeviceProcAddr( device, "vkCreateFramebuffer" ) );
        vkDestroyFramebuffer = PFN_vkDestroyFramebuffer( vkGetDeviceProcAddr( device, "vkDestroyFramebuffer" ) );
        vkCreateRenderPass = PFN_vkCreateRenderPass( vkGetDeviceProcAddr( device, "vkCreateRenderPass" ) );
        vkDestroyRenderPass = PFN_vkDestroyRenderPass( vkGetDeviceProcAddr( device, "vkDestroyRenderPass" ) );
        vkGetRenderAreaGranularity = PFN_vkGetRenderAreaGranularity( vkGetDeviceProcAddr( device, "vkGetRenderAreaGranularity" ) );
        vkCreateCommandPool = PFN_vkCreateCommandPool( vkGetDeviceProcAddr( device, "vkCreateCommandPool" ) );
        vkDestroyCommandPool = PFN_vkDestroyCommandPool( vkGetDeviceProcAddr( device, "vkDestroyCommandPool" ) );
        vkResetCommandPool = PFN_vkResetCommandPool( vkGetDeviceProcAddr( device, "vkResetCommandPool" ) );
        vkAllocateCommandBuffers = PFN_vkAllocateCommandBuffers( vkGetDeviceProcAddr( device, "vkAllocateCommandBuffers" ) );
        vkFreeCommandBuffers = PFN_vkFreeCommandBuffers( vkGetDeviceProcAddr( device, "vkFreeCommandBuffers" ) );
        vkBeginCommandBuffer = PFN_vkBeginCommandBuffer( vkGetDeviceProcAddr( device, "vkBeginCommandBuffer" ) );
        vkEndCommandBuffer = PFN_vkEndCommandBuffer( vkGetDeviceProcAddr( device, "vkEndCommandBuffer" ) );
        vkResetCommandBuffer = PFN_vkResetCommandBuffer( vkGetDeviceProcAddr( device, "vkResetCommandBuffer" ) );
        vkCmdBindPipeline = PFN_vkCmdBindPipeline( vkGetDeviceProcAddr( device, "vkCmdBindPipeline" ) );
        vkCmdSetViewport = PFN_vkCmdSetViewport( vkGetDeviceProcAddr( device, "vkCmdSetViewport" ) );
        vkCmdSetScissor = PFN_vkCmdSetScissor( vkGetDeviceProcAddr( device, "vkCmdSetScissor" ) );
        vkCmdSetLineWidth = PFN_vkCmdSetLineWidth( vkGetDeviceProcAddr( device, "vkCmdSetLineWidth" ) );
        vkCmdSetDepthBias = PFN_vkCmdSetDepthBias( vkGetDeviceProcAddr( device, "vkCmdSetDepthBias" ) );
        vkCmdSetBlendConstants = PFN_vkCmdSetBlendConstants( vkGetDeviceProcAddr( device, "vkCmdSetBlendConstants" ) );
        vkCmdSetDepthBounds = PFN_vkCmdSetDepthBounds( vkGetDeviceProcAddr( device, "vkCmdSetDepthBounds" ) );
        vkCmdSetStencilCompareMask = PFN_vkCmdSetStencilCompareMask( vkGetDeviceProcAddr( device, "vkCmdSetStencilCompareMask" ) );
        vkCmdSetStencilWriteMask = PFN_vkCmdSetStencilWriteMask( vkGetDeviceProcAddr( device, "vkCmdSetStencilWriteMask" ) );
        vkCmdSetStencilReference = PFN_vkCmdSetStencilReference( vkGetDeviceProcAddr( device, "vkCmdSetStencilReference" ) );
        vkCmdBindDescriptorSets = PFN_vkCmdBindDescriptorSets( vkGetDeviceProcAddr( device, "vkCmdBindDescriptorSets" ) );
        vkCmdBindIndexBuffer = PFN_vkCmdBindIndexBuffer( vkGetDeviceProcAddr( device, "vkCmdBindIndexBuffer" ) );
        vkCmdBindVertexBuffers = PFN_vkCmdBindVertexBuffers( vkGetDeviceProcAddr( device, "vkCmdBindVertexBuffers" ) );
        vkCmdDraw = PFN_vkCmdDraw( vkGetDeviceProcAddr( device, "vkCmdDraw" ) );
        vkCmdDrawIndexed = PFN_vkCmdDrawIndexed( vkGetDeviceProcAddr( device, "vkCmdDrawIndexed" ) );
        vkCmdDrawIndirect = PFN_vkCmdDrawIndirect( vkGetDeviceProcAddr( device, "vkCmdDrawIndirect" ) );
        vkCmdDrawIndexedIndirect = PFN_vkCmdDrawIndexedIndirect( vkGetDeviceProcAddr( device, "vkCmdDrawIndexedIndirect" ) );
        vkCmdDispatch = PFN_vkCmdDispatch( vkGetDeviceProcAddr( device, "vkCmdDispatch" ) );
        vkCmdDispatchIndirect = PFN_vkCmdDispatchIndirect( vkGetDeviceProcAddr( device, "vkCmdDispatchIndirect" ) );
        vkCmdCopyBuffer = PFN_vkCmdCopyBuffer( vkGetDeviceProcAddr( device, "vkCmdCopyBuffer" ) );
        vkCmdCopyImage = PFN_vkCmdCopyImage( vkGetDeviceProcAddr( device, "vkCmdCopyImage" ) );
        vkCmdBlitImage = PFN_vkCmdBlitImage( vkGetDeviceProcAddr( device, "vkCmdBlitImage" ) );
        vkCmdCopyBufferToImage = PFN_vkCmdCopyBufferToImage( vkGetDeviceProcAddr( device, "vkCmdCopyBufferToImage" ) );
        vkCmdCopyImageToBuffer = PFN_vkCmdCopyImageToBuffer( vkGetDeviceProcAddr( device, "vkCmdCopyImageToBuffer" ) );
        vkCmdUpdateBuffer = PFN_vkCmdUpdateBuffer( vkGetDeviceProcAddr( device, "vkCmdUpdateBuffer" ) );
        vkCmdFillBuffer = PFN_vkCmdFillBuffer( vkGetDeviceProcAddr( device, "vkCmdFillBuffer" ) );
        vkCmdClearColorImage = PFN_vkCmdClearColorImage( vkGetDeviceProcAddr( device, "vkCmdClearColorImage" ) );
        vkCmdClearDepthStencilImage = PFN_vkCmdClearDepthStencilImage( vkGetDeviceProcAddr( device, "vkCmdClearDepthStencilImage" ) );
        vkCmdClearAttachments = PFN_vkCmdClearAttachments( vkGetDeviceProcAddr( device, "vkCmdClearAttachments" ) );
        vkCmdResolveImage = PFN_vkCmdResolveImage( vkGetDeviceProcAddr( device, "vkCmdResolveImage" ) );
        vkCmdSetEvent = PFN_vkCmdSetEvent( vkGetDeviceProcAddr( device, "vkCmdSetEvent" ) );
        vkCmdResetEvent = PFN_vkCmdResetEvent( vkGetDeviceProcAddr( device, "vkCmdResetEvent" ) );
        vkCmdWaitEvents = PFN_vkCmdWaitEvents( vkGetDeviceProcAddr( device, "vkCmdWaitEvents" ) );
        vkCmdPipelineBarrier = PFN_vkCmdPipelineBarrier( vkGetDeviceProcAddr( device, "vkCmdPipelineBarrier" ) );
        vkCmdBeginQuery = PFN_vkCmdBeginQuery( vkGetDeviceProcAddr( device, "vkCmdBeginQuery" ) );
        vkCmdEndQuery = PFN_vkCmdEndQuery( vkGetDeviceProcAddr( device, "vkCmdEndQuery" ) );
        vkCmdResetQueryPool = PFN_vkCmdResetQueryPool( vkGetDeviceProcAddr( device, "vkCmdResetQueryPool" ) );
        vkCmdWriteTimestamp = PFN_vkCmdWriteTimestamp( vkGetDeviceProcAddr( device, "vkCmdWriteTimestamp" ) );
        vkCmdCopyQueryPoolResults = PFN_vkCmdCopyQueryPoolResults( vkGetDeviceProcAddr( device, "vkCmdCopyQueryPoolResults" ) );
        vkCmdPushConstants = PFN_vkCmdPushConstants( vkGetDeviceProcAddr( device, "vkCmdPushConstants" ) );
        vkCmdBeginRenderPass = PFN_vkCmdBeginRenderPass( vkGetDeviceProcAddr( device, "vkCmdBeginRenderPass" ) );
        vkCmdNextSubpass = PFN_vkCmdNextSubpass( vkGetDeviceProcAddr( device, "vkCmdNextSubpass" ) );
        vkCmdEndRenderPass = PFN_vkCmdEndRenderPass( vkGetDeviceProcAddr( device, "vkCmdEndRenderPass" ) );
        vkCmdExecuteCommands = PFN_vkCmdExecuteCommands( vkGetDeviceProcAddr( device, "vkCmdExecuteCommands" ) );

  //=== VK_VERSION_1_1 ===
        vkBindBufferMemory2 = PFN_vkBindBufferMemory2( vkGetDeviceProcAddr( device, "vkBindBufferMemory2" ) );
        vkBindImageMemory2 = PFN_vkBindImageMemory2( vkGetDeviceProcAddr( device, "vkBindImageMemory2" ) );
        vkGetDeviceGroupPeerMemoryFeatures = PFN_vkGetDeviceGroupPeerMemoryFeatures( vkGetDeviceProcAddr( device, "vkGetDeviceGroupPeerMemoryFeatures" ) );
        vkCmdSetDeviceMask = PFN_vkCmdSetDeviceMask( vkGetDeviceProcAddr( device, "vkCmdSetDeviceMask" ) );
        vkCmdDispatchBase = PFN_vkCmdDispatchBase( vkGetDeviceProcAddr( device, "vkCmdDispatchBase" ) );
        vkGetImageMemoryRequirements2 = PFN_vkGetImageMemoryRequirements2( vkGetDeviceProcAddr( device, "vkGetImageMemoryRequirements2" ) );
        vkGetBufferMemoryRequirements2 = PFN_vkGetBufferMemoryRequirements2( vkGetDeviceProcAddr( device, "vkGetBufferMemoryRequirements2" ) );
        vkGetImageSparseMemoryRequirements2 = PFN_vkGetImageSparseMemoryRequirements2( vkGetDeviceProcAddr( device, "vkGetImageSparseMemoryRequirements2" ) );
        vkTrimCommandPool = PFN_vkTrimCommandPool( vkGetDeviceProcAddr( device, "vkTrimCommandPool" ) );
        vkGetDeviceQueue2 = PFN_vkGetDeviceQueue2( vkGetDeviceProcAddr( device, "vkGetDeviceQueue2" ) );
        vkCreateSamplerYcbcrConversion = PFN_vkCreateSamplerYcbcrConversion( vkGetDeviceProcAddr( device, "vkCreateSamplerYcbcrConversion" ) );
        vkDestroySamplerYcbcrConversion = PFN_vkDestroySamplerYcbcrConversion( vkGetDeviceProcAddr( device, "vkDestroySamplerYcbcrConversion" ) );
        vkCreateDescriptorUpdateTemplate = PFN_vkCreateDescriptorUpdateTemplate( vkGetDeviceProcAddr( device, "vkCreateDescriptorUpdateTemplate" ) );
        vkDestroyDescriptorUpdateTemplate = PFN_vkDestroyDescriptorUpdateTemplate( vkGetDeviceProcAddr( device, "vkDestroyDescriptorUpdateTemplate" ) );
        vkUpdateDescriptorSetWithTemplate = PFN_vkUpdateDescriptorSetWithTemplate( vkGetDeviceProcAddr( device, "vkUpdateDescriptorSetWithTemplate" ) );
        vkGetDescriptorSetLayoutSupport = PFN_vkGetDescriptorSetLayoutSupport( vkGetDeviceProcAddr( device, "vkGetDescriptorSetLayoutSupport" ) );

  //=== VK_VERSION_1_2 ===
        vkCmdDrawIndirectCount = PFN_vkCmdDrawIndirectCount( vkGetDeviceProcAddr( device, "vkCmdDrawIndirectCount" ) );
        vkCmdDrawIndexedIndirectCount = PFN_vkCmdDrawIndexedIndirectCount( vkGetDeviceProcAddr( device, "vkCmdDrawIndexedIndirectCount" ) );
        vkCreateRenderPass2 = PFN_vkCreateRenderPass2( vkGetDeviceProcAddr( device, "vkCreateRenderPass2" ) );
        vkCmdBeginRenderPass2 = PFN_vkCmdBeginRenderPass2( vkGetDeviceProcAddr( device, "vkCmdBeginRenderPass2" ) );
        vkCmdNextSubpass2 = PFN_vkCmdNextSubpass2( vkGetDeviceProcAddr( device, "vkCmdNextSubpass2" ) );
        vkCmdEndRenderPass2 = PFN_vkCmdEndRenderPass2( vkGetDeviceProcAddr( device, "vkCmdEndRenderPass2" ) );
        vkResetQueryPool = PFN_vkResetQueryPool( vkGetDeviceProcAddr( device, "vkResetQueryPool" ) );
        vkGetSemaphoreCounterValue = PFN_vkGetSemaphoreCounterValue( vkGetDeviceProcAddr( device, "vkGetSemaphoreCounterValue" ) );
        vkWaitSemaphores = PFN_vkWaitSemaphores( vkGetDeviceProcAddr( device, "vkWaitSemaphores" ) );
        vkSignalSemaphore = PFN_vkSignalSemaphore( vkGetDeviceProcAddr( device, "vkSignalSemaphore" ) );
        vkGetBufferDeviceAddress = PFN_vkGetBufferDeviceAddress( vkGetDeviceProcAddr( device, "vkGetBufferDeviceAddress" ) );
        vkGetBufferOpaqueCaptureAddress = PFN_vkGetBufferOpaqueCaptureAddress( vkGetDeviceProcAddr( device, "vkGetBufferOpaqueCaptureAddress" ) );
        vkGetDeviceMemoryOpaqueCaptureAddress = PFN_vkGetDeviceMemoryOpaqueCaptureAddress( vkGetDeviceProcAddr( device, "vkGetDeviceMemoryOpaqueCaptureAddress" ) );

  //=== VK_VERSION_1_3 ===
        vkCreatePrivateDataSlot = PFN_vkCreatePrivateDataSlot( vkGetDeviceProcAddr( device, "vkCreatePrivateDataSlot" ) );
        vkDestroyPrivateDataSlot = PFN_vkDestroyPrivateDataSlot( vkGetDeviceProcAddr( device, "vkDestroyPrivateDataSlot" ) );
        vkSetPrivateData = PFN_vkSetPrivateData( vkGetDeviceProcAddr( device, "vkSetPrivateData" ) );
        vkGetPrivateData = PFN_vkGetPrivateData( vkGetDeviceProcAddr( device, "vkGetPrivateData" ) );
        vkCmdSetEvent2 = PFN_vkCmdSetEvent2( vkGetDeviceProcAddr( device, "vkCmdSetEvent2" ) );
        vkCmdResetEvent2 = PFN_vkCmdResetEvent2( vkGetDeviceProcAddr( device, "vkCmdResetEvent2" ) );
        vkCmdWaitEvents2 = PFN_vkCmdWaitEvents2( vkGetDeviceProcAddr( device, "vkCmdWaitEvents2" ) );
        vkCmdPipelineBarrier2 = PFN_vkCmdPipelineBarrier2( vkGetDeviceProcAddr( device, "vkCmdPipelineBarrier2" ) );
        vkCmdWriteTimestamp2 = PFN_vkCmdWriteTimestamp2( vkGetDeviceProcAddr( device, "vkCmdWriteTimestamp2" ) );
        vkQueueSubmit2 = PFN_vkQueueSubmit2( vkGetDeviceProcAddr( device, "vkQueueSubmit2" ) );
        vkCmdCopyBuffer2 = PFN_vkCmdCopyBuffer2( vkGetDeviceProcAddr( device, "vkCmdCopyBuffer2" ) );
        vkCmdCopyImage2 = PFN_vkCmdCopyImage2( vkGetDeviceProcAddr( device, "vkCmdCopyImage2" ) );
        vkCmdCopyBufferToImage2 = PFN_vkCmdCopyBufferToImage2( vkGetDeviceProcAddr( device, "vkCmdCopyBufferToImage2" ) );
        vkCmdCopyImageToBuffer2 = PFN_vkCmdCopyImageToBuffer2( vkGetDeviceProcAddr( device, "vkCmdCopyImageToBuffer2" ) );
        vkCmdBlitImage2 = PFN_vkCmdBlitImage2( vkGetDeviceProcAddr( device, "vkCmdBlitImage2" ) );
        vkCmdResolveImage2 = PFN_vkCmdResolveImage2( vkGetDeviceProcAddr( device, "vkCmdResolveImage2" ) );
        vkCmdBeginRendering = PFN_vkCmdBeginRendering( vkGetDeviceProcAddr( device, "vkCmdBeginRendering" ) );
        vkCmdEndRendering = PFN_vkCmdEndRendering( vkGetDeviceProcAddr( device, "vkCmdEndRendering" ) );
        vkCmdSetCullMode = PFN_vkCmdSetCullMode( vkGetDeviceProcAddr( device, "vkCmdSetCullMode" ) );
        vkCmdSetFrontFace = PFN_vkCmdSetFrontFace( vkGetDeviceProcAddr( device, "vkCmdSetFrontFace" ) );
        vkCmdSetPrimitiveTopology = PFN_vkCmdSetPrimitiveTopology( vkGetDeviceProcAddr( device, "vkCmdSetPrimitiveTopology" ) );
        vkCmdSetViewportWithCount = PFN_vkCmdSetViewportWithCount( vkGetDeviceProcAddr( device, "vkCmdSetViewportWithCount" ) );
        vkCmdSetScissorWithCount = PFN_vkCmdSetScissorWithCount( vkGetDeviceProcAddr( device, "vkCmdSetScissorWithCount" ) );
        vkCmdBindVertexBuffers2 = PFN_vkCmdBindVertexBuffers2( vkGetDeviceProcAddr( device, "vkCmdBindVertexBuffers2" ) );
        vkCmdSetDepthTestEnable = PFN_vkCmdSetDepthTestEnable( vkGetDeviceProcAddr( device, "vkCmdSetDepthTestEnable" ) );
        vkCmdSetDepthWriteEnable = PFN_vkCmdSetDepthWriteEnable( vkGetDeviceProcAddr( device, "vkCmdSetDepthWriteEnable" ) );
        vkCmdSetDepthCompareOp = PFN_vkCmdSetDepthCompareOp( vkGetDeviceProcAddr( device, "vkCmdSetDepthCompareOp" ) );
        vkCmdSetDepthBoundsTestEnable = PFN_vkCmdSetDepthBoundsTestEnable( vkGetDeviceProcAddr( device, "vkCmdSetDepthBoundsTestEnable" ) );
        vkCmdSetStencilTestEnable = PFN_vkCmdSetStencilTestEnable( vkGetDeviceProcAddr( device, "vkCmdSetStencilTestEnable" ) );
        vkCmdSetStencilOp = PFN_vkCmdSetStencilOp( vkGetDeviceProcAddr( device, "vkCmdSetStencilOp" ) );
        vkCmdSetRasterizerDiscardEnable = PFN_vkCmdSetRasterizerDiscardEnable( vkGetDeviceProcAddr( device, "vkCmdSetRasterizerDiscardEnable" ) );
        vkCmdSetDepthBiasEnable = PFN_vkCmdSetDepthBiasEnable( vkGetDeviceProcAddr( device, "vkCmdSetDepthBiasEnable" ) );
        vkCmdSetPrimitiveRestartEnable = PFN_vkCmdSetPrimitiveRestartEnable( vkGetDeviceProcAddr( device, "vkCmdSetPrimitiveRestartEnable" ) );
        vkGetDeviceBufferMemoryRequirements = PFN_vkGetDeviceBufferMemoryRequirements( vkGetDeviceProcAddr( device, "vkGetDeviceBufferMemoryRequirements" ) );
        vkGetDeviceImageMemoryRequirements = PFN_vkGetDeviceImageMemoryRequirements( vkGetDeviceProcAddr( device, "vkGetDeviceImageMemoryRequirements" ) );
        vkGetDeviceImageSparseMemoryRequirements = PFN_vkGetDeviceImageSparseMemoryRequirements( vkGetDeviceProcAddr( device, "vkGetDeviceImageSparseMemoryRequirements" ) );

  //=== VK_AMD_buffer_marker ===
        vkCmdWriteBufferMarkerAMD = PFN_vkCmdWriteBufferMarkerAMD( vkGetDeviceProcAddr( device, "vkCmdWriteBufferMarkerAMD" ) );

  //=== VK_AMD_display_native_hdr ===
        vkSetLocalDimmingAMD = PFN_vkSetLocalDimmingAMD( vkGetDeviceProcAddr( device, "vkSetLocalDimmingAMD" ) );

  //=== VK_AMD_draw_indirect_count ===
        vkCmdDrawIndirectCountAMD = PFN_vkCmdDrawIndirectCountAMD( vkGetDeviceProcAddr( device, "vkCmdDrawIndirectCountAMD" ) );
        if ( !vkCmdDrawIndirectCount ) vkCmdDrawIndirectCount = vkCmdDrawIndirectCountAMD;
        vkCmdDrawIndexedIndirectCountAMD = PFN_vkCmdDrawIndexedIndirectCountAMD( vkGetDeviceProcAddr( device, "vkCmdDrawIndexedIndirectCountAMD" ) );
        if ( !vkCmdDrawIndexedIndirectCount ) vkCmdDrawIndexedIndirectCount = vkCmdDrawIndexedIndirectCountAMD;

  //=== VK_AMD_shader_info ===
        vkGetShaderInfoAMD = PFN_vkGetShaderInfoAMD( vkGetDeviceProcAddr( device, "vkGetShaderInfoAMD" ) );

#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  //=== VK_ANDROID_external_memory_android_hardware_buffer ===
        vkGetAndroidHardwareBufferPropertiesANDROID = PFN_vkGetAndroidHardwareBufferPropertiesANDROID( vkGetDeviceProcAddr( device, "vkGetAndroidHardwareBufferPropertiesANDROID" ) );
        vkGetMemoryAndroidHardwareBufferANDROID = PFN_vkGetMemoryAndroidHardwareBufferANDROID( vkGetDeviceProcAddr( device, "vkGetMemoryAndroidHardwareBufferANDROID" ) );
#endif /*VK_USE_PLATFORM_ANDROID_KHR*/

  //=== VK_EXT_buffer_device_address ===
        vkGetBufferDeviceAddressEXT = PFN_vkGetBufferDeviceAddressEXT( vkGetDeviceProcAddr( device, "vkGetBufferDeviceAddressEXT" ) );
        if ( !vkGetBufferDeviceAddress ) vkGetBufferDeviceAddress = vkGetBufferDeviceAddressEXT;

  //=== VK_EXT_calibrated_timestamps ===
        vkGetCalibratedTimestampsEXT = PFN_vkGetCalibratedTimestampsEXT( vkGetDeviceProcAddr( device, "vkGetCalibratedTimestampsEXT" ) );

  //=== VK_EXT_color_write_enable ===
        vkCmdSetColorWriteEnableEXT = PFN_vkCmdSetColorWriteEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetColorWriteEnableEXT" ) );

  //=== VK_EXT_conditional_rendering ===
        vkCmdBeginConditionalRenderingEXT = PFN_vkCmdBeginConditionalRenderingEXT( vkGetDeviceProcAddr( device, "vkCmdBeginConditionalRenderingEXT" ) );
        vkCmdEndConditionalRenderingEXT = PFN_vkCmdEndConditionalRenderingEXT( vkGetDeviceProcAddr( device, "vkCmdEndConditionalRenderingEXT" ) );

  //=== VK_EXT_debug_marker ===
        vkDebugMarkerSetObjectTagEXT = PFN_vkDebugMarkerSetObjectTagEXT( vkGetDeviceProcAddr( device, "vkDebugMarkerSetObjectTagEXT" ) );
        vkDebugMarkerSetObjectNameEXT = PFN_vkDebugMarkerSetObjectNameEXT( vkGetDeviceProcAddr( device, "vkDebugMarkerSetObjectNameEXT" ) );
        vkCmdDebugMarkerBeginEXT = PFN_vkCmdDebugMarkerBeginEXT( vkGetDeviceProcAddr( device, "vkCmdDebugMarkerBeginEXT" ) );
        vkCmdDebugMarkerEndEXT = PFN_vkCmdDebugMarkerEndEXT( vkGetDeviceProcAddr( device, "vkCmdDebugMarkerEndEXT" ) );
        vkCmdDebugMarkerInsertEXT = PFN_vkCmdDebugMarkerInsertEXT( vkGetDeviceProcAddr( device, "vkCmdDebugMarkerInsertEXT" ) );

  //=== VK_EXT_debug_utils ===
        vkSetDebugUtilsObjectNameEXT = PFN_vkSetDebugUtilsObjectNameEXT( vkGetDeviceProcAddr( device, "vkSetDebugUtilsObjectNameEXT" ) );
        vkSetDebugUtilsObjectTagEXT = PFN_vkSetDebugUtilsObjectTagEXT( vkGetDeviceProcAddr( device, "vkSetDebugUtilsObjectTagEXT" ) );
        vkQueueBeginDebugUtilsLabelEXT = PFN_vkQueueBeginDebugUtilsLabelEXT( vkGetDeviceProcAddr( device, "vkQueueBeginDebugUtilsLabelEXT" ) );
        vkQueueEndDebugUtilsLabelEXT = PFN_vkQueueEndDebugUtilsLabelEXT( vkGetDeviceProcAddr( device, "vkQueueEndDebugUtilsLabelEXT" ) );
        vkQueueInsertDebugUtilsLabelEXT = PFN_vkQueueInsertDebugUtilsLabelEXT( vkGetDeviceProcAddr( device, "vkQueueInsertDebugUtilsLabelEXT" ) );
        vkCmdBeginDebugUtilsLabelEXT = PFN_vkCmdBeginDebugUtilsLabelEXT( vkGetDeviceProcAddr( device, "vkCmdBeginDebugUtilsLabelEXT" ) );
        vkCmdEndDebugUtilsLabelEXT = PFN_vkCmdEndDebugUtilsLabelEXT( vkGetDeviceProcAddr( device, "vkCmdEndDebugUtilsLabelEXT" ) );
        vkCmdInsertDebugUtilsLabelEXT = PFN_vkCmdInsertDebugUtilsLabelEXT( vkGetDeviceProcAddr( device, "vkCmdInsertDebugUtilsLabelEXT" ) );

  //=== VK_EXT_descriptor_buffer ===
        vkGetDescriptorSetLayoutSizeEXT = PFN_vkGetDescriptorSetLayoutSizeEXT( vkGetDeviceProcAddr( device, "vkGetDescriptorSetLayoutSizeEXT" ) );
        vkGetDescriptorSetLayoutBindingOffsetEXT = PFN_vkGetDescriptorSetLayoutBindingOffsetEXT( vkGetDeviceProcAddr( device, "vkGetDescriptorSetLayoutBindingOffsetEXT" ) );
        vkGetDescriptorEXT = PFN_vkGetDescriptorEXT( vkGetDeviceProcAddr( device, "vkGetDescriptorEXT" ) );
        vkCmdBindDescriptorBuffersEXT = PFN_vkCmdBindDescriptorBuffersEXT( vkGetDeviceProcAddr( device, "vkCmdBindDescriptorBuffersEXT" ) );
        vkCmdSetDescriptorBufferOffsetsEXT = PFN_vkCmdSetDescriptorBufferOffsetsEXT( vkGetDeviceProcAddr( device, "vkCmdSetDescriptorBufferOffsetsEXT" ) );
        vkCmdBindDescriptorBufferEmbeddedSamplersEXT = PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT( vkGetDeviceProcAddr( device, "vkCmdBindDescriptorBufferEmbeddedSamplersEXT" ) );
        vkGetBufferOpaqueCaptureDescriptorDataEXT = PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT( vkGetDeviceProcAddr( device, "vkGetBufferOpaqueCaptureDescriptorDataEXT" ) );
        vkGetImageOpaqueCaptureDescriptorDataEXT = PFN_vkGetImageOpaqueCaptureDescriptorDataEXT( vkGetDeviceProcAddr( device, "vkGetImageOpaqueCaptureDescriptorDataEXT" ) );
        vkGetImageViewOpaqueCaptureDescriptorDataEXT = PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT( vkGetDeviceProcAddr( device, "vkGetImageViewOpaqueCaptureDescriptorDataEXT" ) );
        vkGetSamplerOpaqueCaptureDescriptorDataEXT = PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT( vkGetDeviceProcAddr( device, "vkGetSamplerOpaqueCaptureDescriptorDataEXT" ) );
        vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT = PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT( vkGetDeviceProcAddr( device, "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT" ) );

  //=== VK_EXT_device_fault ===
        vkGetDeviceFaultInfoEXT = PFN_vkGetDeviceFaultInfoEXT( vkGetDeviceProcAddr( device, "vkGetDeviceFaultInfoEXT" ) );

  //=== VK_EXT_discard_rectangles ===
        vkCmdSetDiscardRectangleEXT = PFN_vkCmdSetDiscardRectangleEXT( vkGetDeviceProcAddr( device, "vkCmdSetDiscardRectangleEXT" ) );

  //=== VK_EXT_display_control ===
        vkDisplayPowerControlEXT = PFN_vkDisplayPowerControlEXT( vkGetDeviceProcAddr( device, "vkDisplayPowerControlEXT" ) );
        vkRegisterDeviceEventEXT = PFN_vkRegisterDeviceEventEXT( vkGetDeviceProcAddr( device, "vkRegisterDeviceEventEXT" ) );
        vkRegisterDisplayEventEXT = PFN_vkRegisterDisplayEventEXT( vkGetDeviceProcAddr( device, "vkRegisterDisplayEventEXT" ) );
        vkGetSwapchainCounterEXT = PFN_vkGetSwapchainCounterEXT( vkGetDeviceProcAddr( device, "vkGetSwapchainCounterEXT" ) );

  //=== VK_EXT_extended_dynamic_state ===
        vkCmdSetCullModeEXT = PFN_vkCmdSetCullModeEXT( vkGetDeviceProcAddr( device, "vkCmdSetCullModeEXT" ) );
        if ( !vkCmdSetCullMode ) vkCmdSetCullMode = vkCmdSetCullModeEXT;
        vkCmdSetFrontFaceEXT = PFN_vkCmdSetFrontFaceEXT( vkGetDeviceProcAddr( device, "vkCmdSetFrontFaceEXT" ) );
        if ( !vkCmdSetFrontFace ) vkCmdSetFrontFace = vkCmdSetFrontFaceEXT;
        vkCmdSetPrimitiveTopologyEXT = PFN_vkCmdSetPrimitiveTopologyEXT( vkGetDeviceProcAddr( device, "vkCmdSetPrimitiveTopologyEXT" ) );
        if ( !vkCmdSetPrimitiveTopology ) vkCmdSetPrimitiveTopology = vkCmdSetPrimitiveTopologyEXT;
        vkCmdSetViewportWithCountEXT = PFN_vkCmdSetViewportWithCountEXT( vkGetDeviceProcAddr( device, "vkCmdSetViewportWithCountEXT" ) );
        if ( !vkCmdSetViewportWithCount ) vkCmdSetViewportWithCount = vkCmdSetViewportWithCountEXT;
        vkCmdSetScissorWithCountEXT = PFN_vkCmdSetScissorWithCountEXT( vkGetDeviceProcAddr( device, "vkCmdSetScissorWithCountEXT" ) );
        if ( !vkCmdSetScissorWithCount ) vkCmdSetScissorWithCount = vkCmdSetScissorWithCountEXT;
        vkCmdBindVertexBuffers2EXT = PFN_vkCmdBindVertexBuffers2EXT( vkGetDeviceProcAddr( device, "vkCmdBindVertexBuffers2EXT" ) );
        if ( !vkCmdBindVertexBuffers2 ) vkCmdBindVertexBuffers2 = vkCmdBindVertexBuffers2EXT;
        vkCmdSetDepthTestEnableEXT = PFN_vkCmdSetDepthTestEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetDepthTestEnableEXT" ) );
        if ( !vkCmdSetDepthTestEnable ) vkCmdSetDepthTestEnable = vkCmdSetDepthTestEnableEXT;
        vkCmdSetDepthWriteEnableEXT = PFN_vkCmdSetDepthWriteEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetDepthWriteEnableEXT" ) );
        if ( !vkCmdSetDepthWriteEnable ) vkCmdSetDepthWriteEnable = vkCmdSetDepthWriteEnableEXT;
        vkCmdSetDepthCompareOpEXT = PFN_vkCmdSetDepthCompareOpEXT( vkGetDeviceProcAddr( device, "vkCmdSetDepthCompareOpEXT" ) );
        if ( !vkCmdSetDepthCompareOp ) vkCmdSetDepthCompareOp = vkCmdSetDepthCompareOpEXT;
        vkCmdSetDepthBoundsTestEnableEXT = PFN_vkCmdSetDepthBoundsTestEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetDepthBoundsTestEnableEXT" ) );
        if ( !vkCmdSetDepthBoundsTestEnable ) vkCmdSetDepthBoundsTestEnable = vkCmdSetDepthBoundsTestEnableEXT;
        vkCmdSetStencilTestEnableEXT = PFN_vkCmdSetStencilTestEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetStencilTestEnableEXT" ) );
        if ( !vkCmdSetStencilTestEnable ) vkCmdSetStencilTestEnable = vkCmdSetStencilTestEnableEXT;
        vkCmdSetStencilOpEXT = PFN_vkCmdSetStencilOpEXT( vkGetDeviceProcAddr( device, "vkCmdSetStencilOpEXT" ) );
        if ( !vkCmdSetStencilOp ) vkCmdSetStencilOp = vkCmdSetStencilOpEXT;

  //=== VK_EXT_extended_dynamic_state2 ===
        vkCmdSetPatchControlPointsEXT = PFN_vkCmdSetPatchControlPointsEXT( vkGetDeviceProcAddr( device, "vkCmdSetPatchControlPointsEXT" ) );
        vkCmdSetRasterizerDiscardEnableEXT = PFN_vkCmdSetRasterizerDiscardEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetRasterizerDiscardEnableEXT" ) );
        if ( !vkCmdSetRasterizerDiscardEnable ) vkCmdSetRasterizerDiscardEnable = vkCmdSetRasterizerDiscardEnableEXT;
        vkCmdSetDepthBiasEnableEXT = PFN_vkCmdSetDepthBiasEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetDepthBiasEnableEXT" ) );
        if ( !vkCmdSetDepthBiasEnable ) vkCmdSetDepthBiasEnable = vkCmdSetDepthBiasEnableEXT;
        vkCmdSetLogicOpEXT = PFN_vkCmdSetLogicOpEXT( vkGetDeviceProcAddr( device, "vkCmdSetLogicOpEXT" ) );
        vkCmdSetPrimitiveRestartEnableEXT = PFN_vkCmdSetPrimitiveRestartEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetPrimitiveRestartEnableEXT" ) );
        if ( !vkCmdSetPrimitiveRestartEnable ) vkCmdSetPrimitiveRestartEnable = vkCmdSetPrimitiveRestartEnableEXT;

  //=== VK_EXT_extended_dynamic_state3 ===
        vkCmdSetTessellationDomainOriginEXT = PFN_vkCmdSetTessellationDomainOriginEXT( vkGetDeviceProcAddr( device, "vkCmdSetTessellationDomainOriginEXT" ) );
        vkCmdSetDepthClampEnableEXT = PFN_vkCmdSetDepthClampEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetDepthClampEnableEXT" ) );
        vkCmdSetPolygonModeEXT = PFN_vkCmdSetPolygonModeEXT( vkGetDeviceProcAddr( device, "vkCmdSetPolygonModeEXT" ) );
        vkCmdSetRasterizationSamplesEXT = PFN_vkCmdSetRasterizationSamplesEXT( vkGetDeviceProcAddr( device, "vkCmdSetRasterizationSamplesEXT" ) );
        vkCmdSetSampleMaskEXT = PFN_vkCmdSetSampleMaskEXT( vkGetDeviceProcAddr( device, "vkCmdSetSampleMaskEXT" ) );
        vkCmdSetAlphaToCoverageEnableEXT = PFN_vkCmdSetAlphaToCoverageEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetAlphaToCoverageEnableEXT" ) );
        vkCmdSetAlphaToOneEnableEXT = PFN_vkCmdSetAlphaToOneEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetAlphaToOneEnableEXT" ) );
        vkCmdSetLogicOpEnableEXT = PFN_vkCmdSetLogicOpEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetLogicOpEnableEXT" ) );
        vkCmdSetColorBlendEnableEXT = PFN_vkCmdSetColorBlendEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetColorBlendEnableEXT" ) );
        vkCmdSetColorBlendEquationEXT = PFN_vkCmdSetColorBlendEquationEXT( vkGetDeviceProcAddr( device, "vkCmdSetColorBlendEquationEXT" ) );
        vkCmdSetColorWriteMaskEXT = PFN_vkCmdSetColorWriteMaskEXT( vkGetDeviceProcAddr( device, "vkCmdSetColorWriteMaskEXT" ) );
        vkCmdSetRasterizationStreamEXT = PFN_vkCmdSetRasterizationStreamEXT( vkGetDeviceProcAddr( device, "vkCmdSetRasterizationStreamEXT" ) );
        vkCmdSetConservativeRasterizationModeEXT = PFN_vkCmdSetConservativeRasterizationModeEXT( vkGetDeviceProcAddr( device, "vkCmdSetConservativeRasterizationModeEXT" ) );
        vkCmdSetExtraPrimitiveOverestimationSizeEXT = PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT( vkGetDeviceProcAddr( device, "vkCmdSetExtraPrimitiveOverestimationSizeEXT" ) );
        vkCmdSetDepthClipEnableEXT = PFN_vkCmdSetDepthClipEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetDepthClipEnableEXT" ) );
        vkCmdSetSampleLocationsEnableEXT = PFN_vkCmdSetSampleLocationsEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetSampleLocationsEnableEXT" ) );
        vkCmdSetColorBlendAdvancedEXT = PFN_vkCmdSetColorBlendAdvancedEXT( vkGetDeviceProcAddr( device, "vkCmdSetColorBlendAdvancedEXT" ) );
        vkCmdSetProvokingVertexModeEXT = PFN_vkCmdSetProvokingVertexModeEXT( vkGetDeviceProcAddr( device, "vkCmdSetProvokingVertexModeEXT" ) );
        vkCmdSetLineRasterizationModeEXT = PFN_vkCmdSetLineRasterizationModeEXT( vkGetDeviceProcAddr( device, "vkCmdSetLineRasterizationModeEXT" ) );
        vkCmdSetLineStippleEnableEXT = PFN_vkCmdSetLineStippleEnableEXT( vkGetDeviceProcAddr( device, "vkCmdSetLineStippleEnableEXT" ) );
        vkCmdSetDepthClipNegativeOneToOneEXT = PFN_vkCmdSetDepthClipNegativeOneToOneEXT( vkGetDeviceProcAddr( device, "vkCmdSetDepthClipNegativeOneToOneEXT" ) );
        vkCmdSetViewportWScalingEnableNV = PFN_vkCmdSetViewportWScalingEnableNV( vkGetDeviceProcAddr( device, "vkCmdSetViewportWScalingEnableNV" ) );
        vkCmdSetViewportSwizzleNV = PFN_vkCmdSetViewportSwizzleNV( vkGetDeviceProcAddr( device, "vkCmdSetViewportSwizzleNV" ) );
        vkCmdSetCoverageToColorEnableNV = PFN_vkCmdSetCoverageToColorEnableNV( vkGetDeviceProcAddr( device, "vkCmdSetCoverageToColorEnableNV" ) );
        vkCmdSetCoverageToColorLocationNV = PFN_vkCmdSetCoverageToColorLocationNV( vkGetDeviceProcAddr( device, "vkCmdSetCoverageToColorLocationNV" ) );
        vkCmdSetCoverageModulationModeNV = PFN_vkCmdSetCoverageModulationModeNV( vkGetDeviceProcAddr( device, "vkCmdSetCoverageModulationModeNV" ) );
        vkCmdSetCoverageModulationTableEnableNV = PFN_vkCmdSetCoverageModulationTableEnableNV( vkGetDeviceProcAddr( device, "vkCmdSetCoverageModulationTableEnableNV" ) );
        vkCmdSetCoverageModulationTableNV = PFN_vkCmdSetCoverageModulationTableNV( vkGetDeviceProcAddr( device, "vkCmdSetCoverageModulationTableNV" ) );
        vkCmdSetShadingRateImageEnableNV = PFN_vkCmdSetShadingRateImageEnableNV( vkGetDeviceProcAddr( device, "vkCmdSetShadingRateImageEnableNV" ) );
        vkCmdSetRepresentativeFragmentTestEnableNV = PFN_vkCmdSetRepresentativeFragmentTestEnableNV( vkGetDeviceProcAddr( device, "vkCmdSetRepresentativeFragmentTestEnableNV" ) );
        vkCmdSetCoverageReductionModeNV = PFN_vkCmdSetCoverageReductionModeNV( vkGetDeviceProcAddr( device, "vkCmdSetCoverageReductionModeNV" ) );

  //=== VK_EXT_external_memory_host ===
        vkGetMemoryHostPointerPropertiesEXT = PFN_vkGetMemoryHostPointerPropertiesEXT( vkGetDeviceProcAddr( device, "vkGetMemoryHostPointerPropertiesEXT" ) );

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_EXT_full_screen_exclusive ===
        vkAcquireFullScreenExclusiveModeEXT = PFN_vkAcquireFullScreenExclusiveModeEXT( vkGetDeviceProcAddr( device, "vkAcquireFullScreenExclusiveModeEXT" ) );
        vkReleaseFullScreenExclusiveModeEXT = PFN_vkReleaseFullScreenExclusiveModeEXT( vkGetDeviceProcAddr( device, "vkReleaseFullScreenExclusiveModeEXT" ) );
        vkGetDeviceGroupSurfacePresentModes2EXT = PFN_vkGetDeviceGroupSurfacePresentModes2EXT( vkGetDeviceProcAddr( device, "vkGetDeviceGroupSurfacePresentModes2EXT" ) );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_EXT_hdr_metadata ===
        vkSetHdrMetadataEXT = PFN_vkSetHdrMetadataEXT( vkGetDeviceProcAddr( device, "vkSetHdrMetadataEXT" ) );

  //=== VK_EXT_host_query_reset ===
        vkResetQueryPoolEXT = PFN_vkResetQueryPoolEXT( vkGetDeviceProcAddr( device, "vkResetQueryPoolEXT" ) );
        if ( !vkResetQueryPool ) vkResetQueryPool = vkResetQueryPoolEXT;

  //=== VK_EXT_image_compression_control ===
        vkGetImageSubresourceLayout2EXT = PFN_vkGetImageSubresourceLayout2EXT( vkGetDeviceProcAddr( device, "vkGetImageSubresourceLayout2EXT" ) );

  //=== VK_EXT_image_drm_format_modifier ===
        vkGetImageDrmFormatModifierPropertiesEXT = PFN_vkGetImageDrmFormatModifierPropertiesEXT( vkGetDeviceProcAddr( device, "vkGetImageDrmFormatModifierPropertiesEXT" ) );

  //=== VK_EXT_line_rasterization ===
        vkCmdSetLineStippleEXT = PFN_vkCmdSetLineStippleEXT( vkGetDeviceProcAddr( device, "vkCmdSetLineStippleEXT" ) );

  //=== VK_EXT_mesh_shader ===
        vkCmdDrawMeshTasksEXT = PFN_vkCmdDrawMeshTasksEXT( vkGetDeviceProcAddr( device, "vkCmdDrawMeshTasksEXT" ) );
        vkCmdDrawMeshTasksIndirectEXT = PFN_vkCmdDrawMeshTasksIndirectEXT( vkGetDeviceProcAddr( device, "vkCmdDrawMeshTasksIndirectEXT" ) );
        vkCmdDrawMeshTasksIndirectCountEXT = PFN_vkCmdDrawMeshTasksIndirectCountEXT( vkGetDeviceProcAddr( device, "vkCmdDrawMeshTasksIndirectCountEXT" ) );

#if defined( VK_USE_PLATFORM_METAL_EXT )
  //=== VK_EXT_metal_objects ===
        vkExportMetalObjectsEXT = PFN_vkExportMetalObjectsEXT( vkGetDeviceProcAddr( device, "vkExportMetalObjectsEXT" ) );
#endif /*VK_USE_PLATFORM_METAL_EXT*/

  //=== VK_EXT_multi_draw ===
        vkCmdDrawMultiEXT = PFN_vkCmdDrawMultiEXT( vkGetDeviceProcAddr( device, "vkCmdDrawMultiEXT" ) );
        vkCmdDrawMultiIndexedEXT = PFN_vkCmdDrawMultiIndexedEXT( vkGetDeviceProcAddr( device, "vkCmdDrawMultiIndexedEXT" ) );

  //=== VK_EXT_opacity_micromap ===
        vkCreateMicromapEXT = PFN_vkCreateMicromapEXT( vkGetDeviceProcAddr( device, "vkCreateMicromapEXT" ) );
        vkDestroyMicromapEXT = PFN_vkDestroyMicromapEXT( vkGetDeviceProcAddr( device, "vkDestroyMicromapEXT" ) );
        vkCmdBuildMicromapsEXT = PFN_vkCmdBuildMicromapsEXT( vkGetDeviceProcAddr( device, "vkCmdBuildMicromapsEXT" ) );
        vkBuildMicromapsEXT = PFN_vkBuildMicromapsEXT( vkGetDeviceProcAddr( device, "vkBuildMicromapsEXT" ) );
        vkCopyMicromapEXT = PFN_vkCopyMicromapEXT( vkGetDeviceProcAddr( device, "vkCopyMicromapEXT" ) );
        vkCopyMicromapToMemoryEXT = PFN_vkCopyMicromapToMemoryEXT( vkGetDeviceProcAddr( device, "vkCopyMicromapToMemoryEXT" ) );
        vkCopyMemoryToMicromapEXT = PFN_vkCopyMemoryToMicromapEXT( vkGetDeviceProcAddr( device, "vkCopyMemoryToMicromapEXT" ) );
        vkWriteMicromapsPropertiesEXT = PFN_vkWriteMicromapsPropertiesEXT( vkGetDeviceProcAddr( device, "vkWriteMicromapsPropertiesEXT" ) );
        vkCmdCopyMicromapEXT = PFN_vkCmdCopyMicromapEXT( vkGetDeviceProcAddr( device, "vkCmdCopyMicromapEXT" ) );
        vkCmdCopyMicromapToMemoryEXT = PFN_vkCmdCopyMicromapToMemoryEXT( vkGetDeviceProcAddr( device, "vkCmdCopyMicromapToMemoryEXT" ) );
        vkCmdCopyMemoryToMicromapEXT = PFN_vkCmdCopyMemoryToMicromapEXT( vkGetDeviceProcAddr( device, "vkCmdCopyMemoryToMicromapEXT" ) );
        vkCmdWriteMicromapsPropertiesEXT = PFN_vkCmdWriteMicromapsPropertiesEXT( vkGetDeviceProcAddr( device, "vkCmdWriteMicromapsPropertiesEXT" ) );
        vkGetDeviceMicromapCompatibilityEXT = PFN_vkGetDeviceMicromapCompatibilityEXT( vkGetDeviceProcAddr( device, "vkGetDeviceMicromapCompatibilityEXT" ) );
        vkGetMicromapBuildSizesEXT = PFN_vkGetMicromapBuildSizesEXT( vkGetDeviceProcAddr( device, "vkGetMicromapBuildSizesEXT" ) );

  //=== VK_EXT_pageable_device_local_memory ===
        vkSetDeviceMemoryPriorityEXT = PFN_vkSetDeviceMemoryPriorityEXT( vkGetDeviceProcAddr( device, "vkSetDeviceMemoryPriorityEXT" ) );

  //=== VK_EXT_pipeline_properties ===
        vkGetPipelinePropertiesEXT = PFN_vkGetPipelinePropertiesEXT( vkGetDeviceProcAddr( device, "vkGetPipelinePropertiesEXT" ) );

  //=== VK_EXT_private_data ===
        vkCreatePrivateDataSlotEXT = PFN_vkCreatePrivateDataSlotEXT( vkGetDeviceProcAddr( device, "vkCreatePrivateDataSlotEXT" ) );
        if ( !vkCreatePrivateDataSlot ) vkCreatePrivateDataSlot = vkCreatePrivateDataSlotEXT;
        vkDestroyPrivateDataSlotEXT = PFN_vkDestroyPrivateDataSlotEXT( vkGetDeviceProcAddr( device, "vkDestroyPrivateDataSlotEXT" ) );
        if ( !vkDestroyPrivateDataSlot ) vkDestroyPrivateDataSlot = vkDestroyPrivateDataSlotEXT;
        vkSetPrivateDataEXT = PFN_vkSetPrivateDataEXT( vkGetDeviceProcAddr( device, "vkSetPrivateDataEXT" ) );
        if ( !vkSetPrivateData ) vkSetPrivateData = vkSetPrivateDataEXT;
        vkGetPrivateDataEXT = PFN_vkGetPrivateDataEXT( vkGetDeviceProcAddr( device, "vkGetPrivateDataEXT" ) );
        if ( !vkGetPrivateData ) vkGetPrivateData = vkGetPrivateDataEXT;

  //=== VK_EXT_sample_locations ===
        vkCmdSetSampleLocationsEXT = PFN_vkCmdSetSampleLocationsEXT( vkGetDeviceProcAddr( device, "vkCmdSetSampleLocationsEXT" ) );

  //=== VK_EXT_shader_module_identifier ===
        vkGetShaderModuleIdentifierEXT = PFN_vkGetShaderModuleIdentifierEXT( vkGetDeviceProcAddr( device, "vkGetShaderModuleIdentifierEXT" ) );
        vkGetShaderModuleCreateInfoIdentifierEXT = PFN_vkGetShaderModuleCreateInfoIdentifierEXT( vkGetDeviceProcAddr( device, "vkGetShaderModuleCreateInfoIdentifierEXT" ) );

  //=== VK_EXT_swapchain_maintenance1 ===
        vkReleaseSwapchainImagesEXT = PFN_vkReleaseSwapchainImagesEXT( vkGetDeviceProcAddr( device, "vkReleaseSwapchainImagesEXT" ) );

  //=== VK_EXT_transform_feedback ===
        vkCmdBindTransformFeedbackBuffersEXT = PFN_vkCmdBindTransformFeedbackBuffersEXT( vkGetDeviceProcAddr( device, "vkCmdBindTransformFeedbackBuffersEXT" ) );
        vkCmdBeginTransformFeedbackEXT = PFN_vkCmdBeginTransformFeedbackEXT( vkGetDeviceProcAddr( device, "vkCmdBeginTransformFeedbackEXT" ) );
        vkCmdEndTransformFeedbackEXT = PFN_vkCmdEndTransformFeedbackEXT( vkGetDeviceProcAddr( device, "vkCmdEndTransformFeedbackEXT" ) );
        vkCmdBeginQueryIndexedEXT = PFN_vkCmdBeginQueryIndexedEXT( vkGetDeviceProcAddr( device, "vkCmdBeginQueryIndexedEXT" ) );
        vkCmdEndQueryIndexedEXT = PFN_vkCmdEndQueryIndexedEXT( vkGetDeviceProcAddr( device, "vkCmdEndQueryIndexedEXT" ) );
        vkCmdDrawIndirectByteCountEXT = PFN_vkCmdDrawIndirectByteCountEXT( vkGetDeviceProcAddr( device, "vkCmdDrawIndirectByteCountEXT" ) );

  //=== VK_EXT_validation_cache ===
        vkCreateValidationCacheEXT = PFN_vkCreateValidationCacheEXT( vkGetDeviceProcAddr( device, "vkCreateValidationCacheEXT" ) );
        vkDestroyValidationCacheEXT = PFN_vkDestroyValidationCacheEXT( vkGetDeviceProcAddr( device, "vkDestroyValidationCacheEXT" ) );
        vkMergeValidationCachesEXT = PFN_vkMergeValidationCachesEXT( vkGetDeviceProcAddr( device, "vkMergeValidationCachesEXT" ) );
        vkGetValidationCacheDataEXT = PFN_vkGetValidationCacheDataEXT( vkGetDeviceProcAddr( device, "vkGetValidationCacheDataEXT" ) );

  //=== VK_EXT_vertex_input_dynamic_state ===
        vkCmdSetVertexInputEXT = PFN_vkCmdSetVertexInputEXT( vkGetDeviceProcAddr( device, "vkCmdSetVertexInputEXT" ) );

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_buffer_collection ===
        vkCreateBufferCollectionFUCHSIA = PFN_vkCreateBufferCollectionFUCHSIA( vkGetDeviceProcAddr( device, "vkCreateBufferCollectionFUCHSIA" ) );
        vkSetBufferCollectionImageConstraintsFUCHSIA = PFN_vkSetBufferCollectionImageConstraintsFUCHSIA( vkGetDeviceProcAddr( device, "vkSetBufferCollectionImageConstraintsFUCHSIA" ) );
        vkSetBufferCollectionBufferConstraintsFUCHSIA = PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA( vkGetDeviceProcAddr( device, "vkSetBufferCollectionBufferConstraintsFUCHSIA" ) );
        vkDestroyBufferCollectionFUCHSIA = PFN_vkDestroyBufferCollectionFUCHSIA( vkGetDeviceProcAddr( device, "vkDestroyBufferCollectionFUCHSIA" ) );
        vkGetBufferCollectionPropertiesFUCHSIA = PFN_vkGetBufferCollectionPropertiesFUCHSIA( vkGetDeviceProcAddr( device, "vkGetBufferCollectionPropertiesFUCHSIA" ) );
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_external_memory ===
        vkGetMemoryZirconHandleFUCHSIA = PFN_vkGetMemoryZirconHandleFUCHSIA( vkGetDeviceProcAddr( device, "vkGetMemoryZirconHandleFUCHSIA" ) );
        vkGetMemoryZirconHandlePropertiesFUCHSIA = PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA( vkGetDeviceProcAddr( device, "vkGetMemoryZirconHandlePropertiesFUCHSIA" ) );
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_external_semaphore ===
        vkImportSemaphoreZirconHandleFUCHSIA = PFN_vkImportSemaphoreZirconHandleFUCHSIA( vkGetDeviceProcAddr( device, "vkImportSemaphoreZirconHandleFUCHSIA" ) );
        vkGetSemaphoreZirconHandleFUCHSIA = PFN_vkGetSemaphoreZirconHandleFUCHSIA( vkGetDeviceProcAddr( device, "vkGetSemaphoreZirconHandleFUCHSIA" ) );
#endif /*VK_USE_PLATFORM_FUCHSIA*/

  //=== VK_GOOGLE_display_timing ===
        vkGetRefreshCycleDurationGOOGLE = PFN_vkGetRefreshCycleDurationGOOGLE( vkGetDeviceProcAddr( device, "vkGetRefreshCycleDurationGOOGLE" ) );
        vkGetPastPresentationTimingGOOGLE = PFN_vkGetPastPresentationTimingGOOGLE( vkGetDeviceProcAddr( device, "vkGetPastPresentationTimingGOOGLE" ) );

  //=== VK_HUAWEI_invocation_mask ===
        vkCmdBindInvocationMaskHUAWEI = PFN_vkCmdBindInvocationMaskHUAWEI( vkGetDeviceProcAddr( device, "vkCmdBindInvocationMaskHUAWEI" ) );

  //=== VK_HUAWEI_subpass_shading ===
        vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI( vkGetDeviceProcAddr( device, "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI" ) );
        vkCmdSubpassShadingHUAWEI = PFN_vkCmdSubpassShadingHUAWEI( vkGetDeviceProcAddr( device, "vkCmdSubpassShadingHUAWEI" ) );

  //=== VK_INTEL_performance_query ===
        vkInitializePerformanceApiINTEL = PFN_vkInitializePerformanceApiINTEL( vkGetDeviceProcAddr( device, "vkInitializePerformanceApiINTEL" ) );
        vkUninitializePerformanceApiINTEL = PFN_vkUninitializePerformanceApiINTEL( vkGetDeviceProcAddr( device, "vkUninitializePerformanceApiINTEL" ) );
        vkCmdSetPerformanceMarkerINTEL = PFN_vkCmdSetPerformanceMarkerINTEL( vkGetDeviceProcAddr( device, "vkCmdSetPerformanceMarkerINTEL" ) );
        vkCmdSetPerformanceStreamMarkerINTEL = PFN_vkCmdSetPerformanceStreamMarkerINTEL( vkGetDeviceProcAddr( device, "vkCmdSetPerformanceStreamMarkerINTEL" ) );
        vkCmdSetPerformanceOverrideINTEL = PFN_vkCmdSetPerformanceOverrideINTEL( vkGetDeviceProcAddr( device, "vkCmdSetPerformanceOverrideINTEL" ) );
        vkAcquirePerformanceConfigurationINTEL = PFN_vkAcquirePerformanceConfigurationINTEL( vkGetDeviceProcAddr( device, "vkAcquirePerformanceConfigurationINTEL" ) );
        vkReleasePerformanceConfigurationINTEL = PFN_vkReleasePerformanceConfigurationINTEL( vkGetDeviceProcAddr( device, "vkReleasePerformanceConfigurationINTEL" ) );
        vkQueueSetPerformanceConfigurationINTEL = PFN_vkQueueSetPerformanceConfigurationINTEL( vkGetDeviceProcAddr( device, "vkQueueSetPerformanceConfigurationINTEL" ) );
        vkGetPerformanceParameterINTEL = PFN_vkGetPerformanceParameterINTEL( vkGetDeviceProcAddr( device, "vkGetPerformanceParameterINTEL" ) );

  //=== VK_KHR_acceleration_structure ===
        vkCreateAccelerationStructureKHR = PFN_vkCreateAccelerationStructureKHR( vkGetDeviceProcAddr( device, "vkCreateAccelerationStructureKHR" ) );
        vkDestroyAccelerationStructureKHR = PFN_vkDestroyAccelerationStructureKHR( vkGetDeviceProcAddr( device, "vkDestroyAccelerationStructureKHR" ) );
        vkCmdBuildAccelerationStructuresKHR = PFN_vkCmdBuildAccelerationStructuresKHR( vkGetDeviceProcAddr( device, "vkCmdBuildAccelerationStructuresKHR" ) );
        vkCmdBuildAccelerationStructuresIndirectKHR = PFN_vkCmdBuildAccelerationStructuresIndirectKHR( vkGetDeviceProcAddr( device, "vkCmdBuildAccelerationStructuresIndirectKHR" ) );
        vkBuildAccelerationStructuresKHR = PFN_vkBuildAccelerationStructuresKHR( vkGetDeviceProcAddr( device, "vkBuildAccelerationStructuresKHR" ) );
        vkCopyAccelerationStructureKHR = PFN_vkCopyAccelerationStructureKHR( vkGetDeviceProcAddr( device, "vkCopyAccelerationStructureKHR" ) );
        vkCopyAccelerationStructureToMemoryKHR = PFN_vkCopyAccelerationStructureToMemoryKHR( vkGetDeviceProcAddr( device, "vkCopyAccelerationStructureToMemoryKHR" ) );
        vkCopyMemoryToAccelerationStructureKHR = PFN_vkCopyMemoryToAccelerationStructureKHR( vkGetDeviceProcAddr( device, "vkCopyMemoryToAccelerationStructureKHR" ) );
        vkWriteAccelerationStructuresPropertiesKHR = PFN_vkWriteAccelerationStructuresPropertiesKHR( vkGetDeviceProcAddr( device, "vkWriteAccelerationStructuresPropertiesKHR" ) );
        vkCmdCopyAccelerationStructureKHR = PFN_vkCmdCopyAccelerationStructureKHR( vkGetDeviceProcAddr( device, "vkCmdCopyAccelerationStructureKHR" ) );
        vkCmdCopyAccelerationStructureToMemoryKHR = PFN_vkCmdCopyAccelerationStructureToMemoryKHR( vkGetDeviceProcAddr( device, "vkCmdCopyAccelerationStructureToMemoryKHR" ) );
        vkCmdCopyMemoryToAccelerationStructureKHR = PFN_vkCmdCopyMemoryToAccelerationStructureKHR( vkGetDeviceProcAddr( device, "vkCmdCopyMemoryToAccelerationStructureKHR" ) );
        vkGetAccelerationStructureDeviceAddressKHR = PFN_vkGetAccelerationStructureDeviceAddressKHR( vkGetDeviceProcAddr( device, "vkGetAccelerationStructureDeviceAddressKHR" ) );
        vkCmdWriteAccelerationStructuresPropertiesKHR = PFN_vkCmdWriteAccelerationStructuresPropertiesKHR( vkGetDeviceProcAddr( device, "vkCmdWriteAccelerationStructuresPropertiesKHR" ) );
        vkGetDeviceAccelerationStructureCompatibilityKHR = PFN_vkGetDeviceAccelerationStructureCompatibilityKHR( vkGetDeviceProcAddr( device, "vkGetDeviceAccelerationStructureCompatibilityKHR" ) );
        vkGetAccelerationStructureBuildSizesKHR = PFN_vkGetAccelerationStructureBuildSizesKHR( vkGetDeviceProcAddr( device, "vkGetAccelerationStructureBuildSizesKHR" ) );

  //=== VK_KHR_bind_memory2 ===
        vkBindBufferMemory2KHR = PFN_vkBindBufferMemory2KHR( vkGetDeviceProcAddr( device, "vkBindBufferMemory2KHR" ) );
        if ( !vkBindBufferMemory2 ) vkBindBufferMemory2 = vkBindBufferMemory2KHR;
        vkBindImageMemory2KHR = PFN_vkBindImageMemory2KHR( vkGetDeviceProcAddr( device, "vkBindImageMemory2KHR" ) );
        if ( !vkBindImageMemory2 ) vkBindImageMemory2 = vkBindImageMemory2KHR;

  //=== VK_KHR_buffer_device_address ===
        vkGetBufferDeviceAddressKHR = PFN_vkGetBufferDeviceAddressKHR( vkGetDeviceProcAddr( device, "vkGetBufferDeviceAddressKHR" ) );
        if ( !vkGetBufferDeviceAddress ) vkGetBufferDeviceAddress = vkGetBufferDeviceAddressKHR;
        vkGetBufferOpaqueCaptureAddressKHR = PFN_vkGetBufferOpaqueCaptureAddressKHR( vkGetDeviceProcAddr( device, "vkGetBufferOpaqueCaptureAddressKHR" ) );
        if ( !vkGetBufferOpaqueCaptureAddress ) vkGetBufferOpaqueCaptureAddress = vkGetBufferOpaqueCaptureAddressKHR;
        vkGetDeviceMemoryOpaqueCaptureAddressKHR = PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR( vkGetDeviceProcAddr( device, "vkGetDeviceMemoryOpaqueCaptureAddressKHR" ) );
        if ( !vkGetDeviceMemoryOpaqueCaptureAddress ) vkGetDeviceMemoryOpaqueCaptureAddress = vkGetDeviceMemoryOpaqueCaptureAddressKHR;

  //=== VK_KHR_copy_commands2 ===
        vkCmdCopyBuffer2KHR = PFN_vkCmdCopyBuffer2KHR( vkGetDeviceProcAddr( device, "vkCmdCopyBuffer2KHR" ) );
        if ( !vkCmdCopyBuffer2 ) vkCmdCopyBuffer2 = vkCmdCopyBuffer2KHR;
        vkCmdCopyImage2KHR = PFN_vkCmdCopyImage2KHR( vkGetDeviceProcAddr( device, "vkCmdCopyImage2KHR" ) );
        if ( !vkCmdCopyImage2 ) vkCmdCopyImage2 = vkCmdCopyImage2KHR;
        vkCmdCopyBufferToImage2KHR = PFN_vkCmdCopyBufferToImage2KHR( vkGetDeviceProcAddr( device, "vkCmdCopyBufferToImage2KHR" ) );
        if ( !vkCmdCopyBufferToImage2 ) vkCmdCopyBufferToImage2 = vkCmdCopyBufferToImage2KHR;
        vkCmdCopyImageToBuffer2KHR = PFN_vkCmdCopyImageToBuffer2KHR( vkGetDeviceProcAddr( device, "vkCmdCopyImageToBuffer2KHR" ) );
        if ( !vkCmdCopyImageToBuffer2 ) vkCmdCopyImageToBuffer2 = vkCmdCopyImageToBuffer2KHR;
        vkCmdBlitImage2KHR = PFN_vkCmdBlitImage2KHR( vkGetDeviceProcAddr( device, "vkCmdBlitImage2KHR" ) );
        if ( !vkCmdBlitImage2 ) vkCmdBlitImage2 = vkCmdBlitImage2KHR;
        vkCmdResolveImage2KHR = PFN_vkCmdResolveImage2KHR( vkGetDeviceProcAddr( device, "vkCmdResolveImage2KHR" ) );
        if ( !vkCmdResolveImage2 ) vkCmdResolveImage2 = vkCmdResolveImage2KHR;

  //=== VK_KHR_create_renderpass2 ===
        vkCreateRenderPass2KHR = PFN_vkCreateRenderPass2KHR( vkGetDeviceProcAddr( device, "vkCreateRenderPass2KHR" ) );
        if ( !vkCreateRenderPass2 ) vkCreateRenderPass2 = vkCreateRenderPass2KHR;
        vkCmdBeginRenderPass2KHR = PFN_vkCmdBeginRenderPass2KHR( vkGetDeviceProcAddr( device, "vkCmdBeginRenderPass2KHR" ) );
        if ( !vkCmdBeginRenderPass2 ) vkCmdBeginRenderPass2 = vkCmdBeginRenderPass2KHR;
        vkCmdNextSubpass2KHR = PFN_vkCmdNextSubpass2KHR( vkGetDeviceProcAddr( device, "vkCmdNextSubpass2KHR" ) );
        if ( !vkCmdNextSubpass2 ) vkCmdNextSubpass2 = vkCmdNextSubpass2KHR;
        vkCmdEndRenderPass2KHR = PFN_vkCmdEndRenderPass2KHR( vkGetDeviceProcAddr( device, "vkCmdEndRenderPass2KHR" ) );
        if ( !vkCmdEndRenderPass2 ) vkCmdEndRenderPass2 = vkCmdEndRenderPass2KHR;

  //=== VK_KHR_deferred_host_operations ===
        vkCreateDeferredOperationKHR = PFN_vkCreateDeferredOperationKHR( vkGetDeviceProcAddr( device, "vkCreateDeferredOperationKHR" ) );
        vkDestroyDeferredOperationKHR = PFN_vkDestroyDeferredOperationKHR( vkGetDeviceProcAddr( device, "vkDestroyDeferredOperationKHR" ) );
        vkGetDeferredOperationMaxConcurrencyKHR = PFN_vkGetDeferredOperationMaxConcurrencyKHR( vkGetDeviceProcAddr( device, "vkGetDeferredOperationMaxConcurrencyKHR" ) );
        vkGetDeferredOperationResultKHR = PFN_vkGetDeferredOperationResultKHR( vkGetDeviceProcAddr( device, "vkGetDeferredOperationResultKHR" ) );
        vkDeferredOperationJoinKHR = PFN_vkDeferredOperationJoinKHR( vkGetDeviceProcAddr( device, "vkDeferredOperationJoinKHR" ) );

  //=== VK_KHR_descriptor_update_template ===
        vkCreateDescriptorUpdateTemplateKHR = PFN_vkCreateDescriptorUpdateTemplateKHR( vkGetDeviceProcAddr( device, "vkCreateDescriptorUpdateTemplateKHR" ) );
        if ( !vkCreateDescriptorUpdateTemplate ) vkCreateDescriptorUpdateTemplate = vkCreateDescriptorUpdateTemplateKHR;
        vkDestroyDescriptorUpdateTemplateKHR = PFN_vkDestroyDescriptorUpdateTemplateKHR( vkGetDeviceProcAddr( device, "vkDestroyDescriptorUpdateTemplateKHR" ) );
        if ( !vkDestroyDescriptorUpdateTemplate ) vkDestroyDescriptorUpdateTemplate = vkDestroyDescriptorUpdateTemplateKHR;
        vkUpdateDescriptorSetWithTemplateKHR = PFN_vkUpdateDescriptorSetWithTemplateKHR( vkGetDeviceProcAddr( device, "vkUpdateDescriptorSetWithTemplateKHR" ) );
        if ( !vkUpdateDescriptorSetWithTemplate ) vkUpdateDescriptorSetWithTemplate = vkUpdateDescriptorSetWithTemplateKHR;
        vkCmdPushDescriptorSetWithTemplateKHR = PFN_vkCmdPushDescriptorSetWithTemplateKHR( vkGetDeviceProcAddr( device, "vkCmdPushDescriptorSetWithTemplateKHR" ) );

  //=== VK_KHR_device_group ===
        vkGetDeviceGroupPeerMemoryFeaturesKHR = PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR( vkGetDeviceProcAddr( device, "vkGetDeviceGroupPeerMemoryFeaturesKHR" ) );
        if ( !vkGetDeviceGroupPeerMemoryFeatures ) vkGetDeviceGroupPeerMemoryFeatures = vkGetDeviceGroupPeerMemoryFeaturesKHR;
        vkCmdSetDeviceMaskKHR = PFN_vkCmdSetDeviceMaskKHR( vkGetDeviceProcAddr( device, "vkCmdSetDeviceMaskKHR" ) );
        if ( !vkCmdSetDeviceMask ) vkCmdSetDeviceMask = vkCmdSetDeviceMaskKHR;
        vkCmdDispatchBaseKHR = PFN_vkCmdDispatchBaseKHR( vkGetDeviceProcAddr( device, "vkCmdDispatchBaseKHR" ) );
        if ( !vkCmdDispatchBase ) vkCmdDispatchBase = vkCmdDispatchBaseKHR;
        vkGetDeviceGroupPresentCapabilitiesKHR = PFN_vkGetDeviceGroupPresentCapabilitiesKHR( vkGetDeviceProcAddr( device, "vkGetDeviceGroupPresentCapabilitiesKHR" ) );
        vkGetDeviceGroupSurfacePresentModesKHR = PFN_vkGetDeviceGroupSurfacePresentModesKHR( vkGetDeviceProcAddr( device, "vkGetDeviceGroupSurfacePresentModesKHR" ) );
        vkAcquireNextImage2KHR = PFN_vkAcquireNextImage2KHR( vkGetDeviceProcAddr( device, "vkAcquireNextImage2KHR" ) );

  //=== VK_KHR_display_swapchain ===
        vkCreateSharedSwapchainsKHR = PFN_vkCreateSharedSwapchainsKHR( vkGetDeviceProcAddr( device, "vkCreateSharedSwapchainsKHR" ) );

  //=== VK_KHR_draw_indirect_count ===
        vkCmdDrawIndirectCountKHR = PFN_vkCmdDrawIndirectCountKHR( vkGetDeviceProcAddr( device, "vkCmdDrawIndirectCountKHR" ) );
        if ( !vkCmdDrawIndirectCount ) vkCmdDrawIndirectCount = vkCmdDrawIndirectCountKHR;
        vkCmdDrawIndexedIndirectCountKHR = PFN_vkCmdDrawIndexedIndirectCountKHR( vkGetDeviceProcAddr( device, "vkCmdDrawIndexedIndirectCountKHR" ) );
        if ( !vkCmdDrawIndexedIndirectCount ) vkCmdDrawIndexedIndirectCount = vkCmdDrawIndexedIndirectCountKHR;

  //=== VK_KHR_dynamic_rendering ===
        vkCmdBeginRenderingKHR = PFN_vkCmdBeginRenderingKHR( vkGetDeviceProcAddr( device, "vkCmdBeginRenderingKHR" ) );
        if ( !vkCmdBeginRendering ) vkCmdBeginRendering = vkCmdBeginRenderingKHR;
        vkCmdEndRenderingKHR = PFN_vkCmdEndRenderingKHR( vkGetDeviceProcAddr( device, "vkCmdEndRenderingKHR" ) );
        if ( !vkCmdEndRendering ) vkCmdEndRendering = vkCmdEndRenderingKHR;

  //=== VK_KHR_external_fence_fd ===
        vkImportFenceFdKHR = PFN_vkImportFenceFdKHR( vkGetDeviceProcAddr( device, "vkImportFenceFdKHR" ) );
        vkGetFenceFdKHR = PFN_vkGetFenceFdKHR( vkGetDeviceProcAddr( device, "vkGetFenceFdKHR" ) );

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_fence_win32 ===
        vkImportFenceWin32HandleKHR = PFN_vkImportFenceWin32HandleKHR( vkGetDeviceProcAddr( device, "vkImportFenceWin32HandleKHR" ) );
        vkGetFenceWin32HandleKHR = PFN_vkGetFenceWin32HandleKHR( vkGetDeviceProcAddr( device, "vkGetFenceWin32HandleKHR" ) );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_external_memory_fd ===
        vkGetMemoryFdKHR = PFN_vkGetMemoryFdKHR( vkGetDeviceProcAddr( device, "vkGetMemoryFdKHR" ) );
        vkGetMemoryFdPropertiesKHR = PFN_vkGetMemoryFdPropertiesKHR( vkGetDeviceProcAddr( device, "vkGetMemoryFdPropertiesKHR" ) );

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_memory_win32 ===
        vkGetMemoryWin32HandleKHR = PFN_vkGetMemoryWin32HandleKHR( vkGetDeviceProcAddr( device, "vkGetMemoryWin32HandleKHR" ) );
        vkGetMemoryWin32HandlePropertiesKHR = PFN_vkGetMemoryWin32HandlePropertiesKHR( vkGetDeviceProcAddr( device, "vkGetMemoryWin32HandlePropertiesKHR" ) );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_external_semaphore_fd ===
        vkImportSemaphoreFdKHR = PFN_vkImportSemaphoreFdKHR( vkGetDeviceProcAddr( device, "vkImportSemaphoreFdKHR" ) );
        vkGetSemaphoreFdKHR = PFN_vkGetSemaphoreFdKHR( vkGetDeviceProcAddr( device, "vkGetSemaphoreFdKHR" ) );

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_semaphore_win32 ===
        vkImportSemaphoreWin32HandleKHR = PFN_vkImportSemaphoreWin32HandleKHR( vkGetDeviceProcAddr( device, "vkImportSemaphoreWin32HandleKHR" ) );
        vkGetSemaphoreWin32HandleKHR = PFN_vkGetSemaphoreWin32HandleKHR( vkGetDeviceProcAddr( device, "vkGetSemaphoreWin32HandleKHR" ) );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_fragment_shading_rate ===
        vkCmdSetFragmentShadingRateKHR = PFN_vkCmdSetFragmentShadingRateKHR( vkGetDeviceProcAddr( device, "vkCmdSetFragmentShadingRateKHR" ) );

  //=== VK_KHR_get_memory_requirements2 ===
        vkGetImageMemoryRequirements2KHR = PFN_vkGetImageMemoryRequirements2KHR( vkGetDeviceProcAddr( device, "vkGetImageMemoryRequirements2KHR" ) );
        if ( !vkGetImageMemoryRequirements2 ) vkGetImageMemoryRequirements2 = vkGetImageMemoryRequirements2KHR;
        vkGetBufferMemoryRequirements2KHR = PFN_vkGetBufferMemoryRequirements2KHR( vkGetDeviceProcAddr( device, "vkGetBufferMemoryRequirements2KHR" ) );
        if ( !vkGetBufferMemoryRequirements2 ) vkGetBufferMemoryRequirements2 = vkGetBufferMemoryRequirements2KHR;
        vkGetImageSparseMemoryRequirements2KHR = PFN_vkGetImageSparseMemoryRequirements2KHR( vkGetDeviceProcAddr( device, "vkGetImageSparseMemoryRequirements2KHR" ) );
        if ( !vkGetImageSparseMemoryRequirements2 ) vkGetImageSparseMemoryRequirements2 = vkGetImageSparseMemoryRequirements2KHR;

  //=== VK_KHR_maintenance1 ===
        vkTrimCommandPoolKHR = PFN_vkTrimCommandPoolKHR( vkGetDeviceProcAddr( device, "vkTrimCommandPoolKHR" ) );
        if ( !vkTrimCommandPool ) vkTrimCommandPool = vkTrimCommandPoolKHR;

  //=== VK_KHR_maintenance3 ===
        vkGetDescriptorSetLayoutSupportKHR = PFN_vkGetDescriptorSetLayoutSupportKHR( vkGetDeviceProcAddr( device, "vkGetDescriptorSetLayoutSupportKHR" ) );
        if ( !vkGetDescriptorSetLayoutSupport ) vkGetDescriptorSetLayoutSupport = vkGetDescriptorSetLayoutSupportKHR;

  //=== VK_KHR_maintenance4 ===
        vkGetDeviceBufferMemoryRequirementsKHR = PFN_vkGetDeviceBufferMemoryRequirementsKHR( vkGetDeviceProcAddr( device, "vkGetDeviceBufferMemoryRequirementsKHR" ) );
        if ( !vkGetDeviceBufferMemoryRequirements ) vkGetDeviceBufferMemoryRequirements = vkGetDeviceBufferMemoryRequirementsKHR;
        vkGetDeviceImageMemoryRequirementsKHR = PFN_vkGetDeviceImageMemoryRequirementsKHR( vkGetDeviceProcAddr( device, "vkGetDeviceImageMemoryRequirementsKHR" ) );
        if ( !vkGetDeviceImageMemoryRequirements ) vkGetDeviceImageMemoryRequirements = vkGetDeviceImageMemoryRequirementsKHR;
        vkGetDeviceImageSparseMemoryRequirementsKHR = PFN_vkGetDeviceImageSparseMemoryRequirementsKHR( vkGetDeviceProcAddr( device, "vkGetDeviceImageSparseMemoryRequirementsKHR" ) );
        if ( !vkGetDeviceImageSparseMemoryRequirements ) vkGetDeviceImageSparseMemoryRequirements = vkGetDeviceImageSparseMemoryRequirementsKHR;

  //=== VK_KHR_performance_query ===
        vkAcquireProfilingLockKHR = PFN_vkAcquireProfilingLockKHR( vkGetDeviceProcAddr( device, "vkAcquireProfilingLockKHR" ) );
        vkReleaseProfilingLockKHR = PFN_vkReleaseProfilingLockKHR( vkGetDeviceProcAddr( device, "vkReleaseProfilingLockKHR" ) );

  //=== VK_KHR_pipeline_executable_properties ===
        vkGetPipelineExecutablePropertiesKHR = PFN_vkGetPipelineExecutablePropertiesKHR( vkGetDeviceProcAddr( device, "vkGetPipelineExecutablePropertiesKHR" ) );
        vkGetPipelineExecutableStatisticsKHR = PFN_vkGetPipelineExecutableStatisticsKHR( vkGetDeviceProcAddr( device, "vkGetPipelineExecutableStatisticsKHR" ) );
        vkGetPipelineExecutableInternalRepresentationsKHR = PFN_vkGetPipelineExecutableInternalRepresentationsKHR( vkGetDeviceProcAddr( device, "vkGetPipelineExecutableInternalRepresentationsKHR" ) );

  //=== VK_KHR_present_wait ===
        vkWaitForPresentKHR = PFN_vkWaitForPresentKHR( vkGetDeviceProcAddr( device, "vkWaitForPresentKHR" ) );

  //=== VK_KHR_push_descriptor ===
        vkCmdPushDescriptorSetKHR = PFN_vkCmdPushDescriptorSetKHR( vkGetDeviceProcAddr( device, "vkCmdPushDescriptorSetKHR" ) );

  //=== VK_KHR_ray_tracing_maintenance1 ===
        vkCmdTraceRaysIndirect2KHR = PFN_vkCmdTraceRaysIndirect2KHR( vkGetDeviceProcAddr( device, "vkCmdTraceRaysIndirect2KHR" ) );

  //=== VK_KHR_ray_tracing_pipeline ===
        vkCmdTraceRaysKHR = PFN_vkCmdTraceRaysKHR( vkGetDeviceProcAddr( device, "vkCmdTraceRaysKHR" ) );
        vkCreateRayTracingPipelinesKHR = PFN_vkCreateRayTracingPipelinesKHR( vkGetDeviceProcAddr( device, "vkCreateRayTracingPipelinesKHR" ) );
        vkGetRayTracingShaderGroupHandlesKHR = PFN_vkGetRayTracingShaderGroupHandlesKHR( vkGetDeviceProcAddr( device, "vkGetRayTracingShaderGroupHandlesKHR" ) );
        vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR( vkGetDeviceProcAddr( device, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR" ) );
        vkCmdTraceRaysIndirectKHR = PFN_vkCmdTraceRaysIndirectKHR( vkGetDeviceProcAddr( device, "vkCmdTraceRaysIndirectKHR" ) );
        vkGetRayTracingShaderGroupStackSizeKHR = PFN_vkGetRayTracingShaderGroupStackSizeKHR( vkGetDeviceProcAddr( device, "vkGetRayTracingShaderGroupStackSizeKHR" ) );
        vkCmdSetRayTracingPipelineStackSizeKHR = PFN_vkCmdSetRayTracingPipelineStackSizeKHR( vkGetDeviceProcAddr( device, "vkCmdSetRayTracingPipelineStackSizeKHR" ) );

  //=== VK_KHR_sampler_ycbcr_conversion ===
        vkCreateSamplerYcbcrConversionKHR = PFN_vkCreateSamplerYcbcrConversionKHR( vkGetDeviceProcAddr( device, "vkCreateSamplerYcbcrConversionKHR" ) );
        if ( !vkCreateSamplerYcbcrConversion ) vkCreateSamplerYcbcrConversion = vkCreateSamplerYcbcrConversionKHR;
        vkDestroySamplerYcbcrConversionKHR = PFN_vkDestroySamplerYcbcrConversionKHR( vkGetDeviceProcAddr( device, "vkDestroySamplerYcbcrConversionKHR" ) );
        if ( !vkDestroySamplerYcbcrConversion ) vkDestroySamplerYcbcrConversion = vkDestroySamplerYcbcrConversionKHR;

  //=== VK_KHR_shared_presentable_image ===
        vkGetSwapchainStatusKHR = PFN_vkGetSwapchainStatusKHR( vkGetDeviceProcAddr( device, "vkGetSwapchainStatusKHR" ) );

  //=== VK_KHR_swapchain ===
        vkCreateSwapchainKHR = PFN_vkCreateSwapchainKHR( vkGetDeviceProcAddr( device, "vkCreateSwapchainKHR" ) );
        vkDestroySwapchainKHR = PFN_vkDestroySwapchainKHR( vkGetDeviceProcAddr( device, "vkDestroySwapchainKHR" ) );
        vkGetSwapchainImagesKHR = PFN_vkGetSwapchainImagesKHR( vkGetDeviceProcAddr( device, "vkGetSwapchainImagesKHR" ) );
        vkAcquireNextImageKHR = PFN_vkAcquireNextImageKHR( vkGetDeviceProcAddr( device, "vkAcquireNextImageKHR" ) );
        vkQueuePresentKHR = PFN_vkQueuePresentKHR( vkGetDeviceProcAddr( device, "vkQueuePresentKHR" ) );

  //=== VK_KHR_synchronization2 ===
        vkCmdSetEvent2KHR = PFN_vkCmdSetEvent2KHR( vkGetDeviceProcAddr( device, "vkCmdSetEvent2KHR" ) );
        if ( !vkCmdSetEvent2 ) vkCmdSetEvent2 = vkCmdSetEvent2KHR;
        vkCmdResetEvent2KHR = PFN_vkCmdResetEvent2KHR( vkGetDeviceProcAddr( device, "vkCmdResetEvent2KHR" ) );
        if ( !vkCmdResetEvent2 ) vkCmdResetEvent2 = vkCmdResetEvent2KHR;
        vkCmdWaitEvents2KHR = PFN_vkCmdWaitEvents2KHR( vkGetDeviceProcAddr( device, "vkCmdWaitEvents2KHR" ) );
        if ( !vkCmdWaitEvents2 ) vkCmdWaitEvents2 = vkCmdWaitEvents2KHR;
        vkCmdPipelineBarrier2KHR = PFN_vkCmdPipelineBarrier2KHR( vkGetDeviceProcAddr( device, "vkCmdPipelineBarrier2KHR" ) );
        if ( !vkCmdPipelineBarrier2 ) vkCmdPipelineBarrier2 = vkCmdPipelineBarrier2KHR;
        vkCmdWriteTimestamp2KHR = PFN_vkCmdWriteTimestamp2KHR( vkGetDeviceProcAddr( device, "vkCmdWriteTimestamp2KHR" ) );
        if ( !vkCmdWriteTimestamp2 ) vkCmdWriteTimestamp2 = vkCmdWriteTimestamp2KHR;
        vkQueueSubmit2KHR = PFN_vkQueueSubmit2KHR( vkGetDeviceProcAddr( device, "vkQueueSubmit2KHR" ) );
        if ( !vkQueueSubmit2 ) vkQueueSubmit2 = vkQueueSubmit2KHR;
        vkCmdWriteBufferMarker2AMD = PFN_vkCmdWriteBufferMarker2AMD( vkGetDeviceProcAddr( device, "vkCmdWriteBufferMarker2AMD" ) );
        vkGetQueueCheckpointData2NV = PFN_vkGetQueueCheckpointData2NV( vkGetDeviceProcAddr( device, "vkGetQueueCheckpointData2NV" ) );

  //=== VK_KHR_timeline_semaphore ===
        vkGetSemaphoreCounterValueKHR = PFN_vkGetSemaphoreCounterValueKHR( vkGetDeviceProcAddr( device, "vkGetSemaphoreCounterValueKHR" ) );
        if ( !vkGetSemaphoreCounterValue ) vkGetSemaphoreCounterValue = vkGetSemaphoreCounterValueKHR;
        vkWaitSemaphoresKHR = PFN_vkWaitSemaphoresKHR( vkGetDeviceProcAddr( device, "vkWaitSemaphoresKHR" ) );
        if ( !vkWaitSemaphores ) vkWaitSemaphores = vkWaitSemaphoresKHR;
        vkSignalSemaphoreKHR = PFN_vkSignalSemaphoreKHR( vkGetDeviceProcAddr( device, "vkSignalSemaphoreKHR" ) );
        if ( !vkSignalSemaphore ) vkSignalSemaphore = vkSignalSemaphoreKHR;

  //=== VK_KHR_video_decode_queue ===
        vkCmdDecodeVideoKHR = PFN_vkCmdDecodeVideoKHR( vkGetDeviceProcAddr( device, "vkCmdDecodeVideoKHR" ) );

#if defined( VK_ENABLE_BETA_EXTENSIONS )
  //=== VK_KHR_video_encode_queue ===
        vkCmdEncodeVideoKHR = PFN_vkCmdEncodeVideoKHR( vkGetDeviceProcAddr( device, "vkCmdEncodeVideoKHR" ) );
#endif /*VK_ENABLE_BETA_EXTENSIONS*/

  //=== VK_KHR_video_queue ===
        vkCreateVideoSessionKHR = PFN_vkCreateVideoSessionKHR( vkGetDeviceProcAddr( device, "vkCreateVideoSessionKHR" ) );
        vkDestroyVideoSessionKHR = PFN_vkDestroyVideoSessionKHR( vkGetDeviceProcAddr( device, "vkDestroyVideoSessionKHR" ) );
        vkGetVideoSessionMemoryRequirementsKHR = PFN_vkGetVideoSessionMemoryRequirementsKHR( vkGetDeviceProcAddr( device, "vkGetVideoSessionMemoryRequirementsKHR" ) );
        vkBindVideoSessionMemoryKHR = PFN_vkBindVideoSessionMemoryKHR( vkGetDeviceProcAddr( device, "vkBindVideoSessionMemoryKHR" ) );
        vkCreateVideoSessionParametersKHR = PFN_vkCreateVideoSessionParametersKHR( vkGetDeviceProcAddr( device, "vkCreateVideoSessionParametersKHR" ) );
        vkUpdateVideoSessionParametersKHR = PFN_vkUpdateVideoSessionParametersKHR( vkGetDeviceProcAddr( device, "vkUpdateVideoSessionParametersKHR" ) );
        vkDestroyVideoSessionParametersKHR = PFN_vkDestroyVideoSessionParametersKHR( vkGetDeviceProcAddr( device, "vkDestroyVideoSessionParametersKHR" ) );
        vkCmdBeginVideoCodingKHR = PFN_vkCmdBeginVideoCodingKHR( vkGetDeviceProcAddr( device, "vkCmdBeginVideoCodingKHR" ) );
        vkCmdEndVideoCodingKHR = PFN_vkCmdEndVideoCodingKHR( vkGetDeviceProcAddr( device, "vkCmdEndVideoCodingKHR" ) );
        vkCmdControlVideoCodingKHR = PFN_vkCmdControlVideoCodingKHR( vkGetDeviceProcAddr( device, "vkCmdControlVideoCodingKHR" ) );

  //=== VK_NVX_binary_import ===
        vkCreateCuModuleNVX = PFN_vkCreateCuModuleNVX( vkGetDeviceProcAddr( device, "vkCreateCuModuleNVX" ) );
        vkCreateCuFunctionNVX = PFN_vkCreateCuFunctionNVX( vkGetDeviceProcAddr( device, "vkCreateCuFunctionNVX" ) );
        vkDestroyCuModuleNVX = PFN_vkDestroyCuModuleNVX( vkGetDeviceProcAddr( device, "vkDestroyCuModuleNVX" ) );
        vkDestroyCuFunctionNVX = PFN_vkDestroyCuFunctionNVX( vkGetDeviceProcAddr( device, "vkDestroyCuFunctionNVX" ) );
        vkCmdCuLaunchKernelNVX = PFN_vkCmdCuLaunchKernelNVX( vkGetDeviceProcAddr( device, "vkCmdCuLaunchKernelNVX" ) );

  //=== VK_NVX_image_view_handle ===
        vkGetImageViewHandleNVX = PFN_vkGetImageViewHandleNVX( vkGetDeviceProcAddr( device, "vkGetImageViewHandleNVX" ) );
        vkGetImageViewAddressNVX = PFN_vkGetImageViewAddressNVX( vkGetDeviceProcAddr( device, "vkGetImageViewAddressNVX" ) );

  //=== VK_NV_clip_space_w_scaling ===
        vkCmdSetViewportWScalingNV = PFN_vkCmdSetViewportWScalingNV( vkGetDeviceProcAddr( device, "vkCmdSetViewportWScalingNV" ) );

  //=== VK_NV_copy_memory_indirect ===
        vkCmdCopyMemoryIndirectNV = PFN_vkCmdCopyMemoryIndirectNV( vkGetDeviceProcAddr( device, "vkCmdCopyMemoryIndirectNV" ) );
        vkCmdCopyMemoryToImageIndirectNV = PFN_vkCmdCopyMemoryToImageIndirectNV( vkGetDeviceProcAddr( device, "vkCmdCopyMemoryToImageIndirectNV" ) );

  //=== VK_NV_device_diagnostic_checkpoints ===
        vkCmdSetCheckpointNV = PFN_vkCmdSetCheckpointNV( vkGetDeviceProcAddr( device, "vkCmdSetCheckpointNV" ) );
        vkGetQueueCheckpointDataNV = PFN_vkGetQueueCheckpointDataNV( vkGetDeviceProcAddr( device, "vkGetQueueCheckpointDataNV" ) );

  //=== VK_NV_device_generated_commands ===
        vkGetGeneratedCommandsMemoryRequirementsNV = PFN_vkGetGeneratedCommandsMemoryRequirementsNV( vkGetDeviceProcAddr( device, "vkGetGeneratedCommandsMemoryRequirementsNV" ) );
        vkCmdPreprocessGeneratedCommandsNV = PFN_vkCmdPreprocessGeneratedCommandsNV( vkGetDeviceProcAddr( device, "vkCmdPreprocessGeneratedCommandsNV" ) );
        vkCmdExecuteGeneratedCommandsNV = PFN_vkCmdExecuteGeneratedCommandsNV( vkGetDeviceProcAddr( device, "vkCmdExecuteGeneratedCommandsNV" ) );
        vkCmdBindPipelineShaderGroupNV = PFN_vkCmdBindPipelineShaderGroupNV( vkGetDeviceProcAddr( device, "vkCmdBindPipelineShaderGroupNV" ) );
        vkCreateIndirectCommandsLayoutNV = PFN_vkCreateIndirectCommandsLayoutNV( vkGetDeviceProcAddr( device, "vkCreateIndirectCommandsLayoutNV" ) );
        vkDestroyIndirectCommandsLayoutNV = PFN_vkDestroyIndirectCommandsLayoutNV( vkGetDeviceProcAddr( device, "vkDestroyIndirectCommandsLayoutNV" ) );

  //=== VK_NV_external_memory_rdma ===
        vkGetMemoryRemoteAddressNV = PFN_vkGetMemoryRemoteAddressNV( vkGetDeviceProcAddr( device, "vkGetMemoryRemoteAddressNV" ) );

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_NV_external_memory_win32 ===
        vkGetMemoryWin32HandleNV = PFN_vkGetMemoryWin32HandleNV( vkGetDeviceProcAddr( device, "vkGetMemoryWin32HandleNV" ) );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_NV_fragment_shading_rate_enums ===
        vkCmdSetFragmentShadingRateEnumNV = PFN_vkCmdSetFragmentShadingRateEnumNV( vkGetDeviceProcAddr( device, "vkCmdSetFragmentShadingRateEnumNV" ) );

  //=== VK_NV_memory_decompression ===
        vkCmdDecompressMemoryNV = PFN_vkCmdDecompressMemoryNV( vkGetDeviceProcAddr( device, "vkCmdDecompressMemoryNV" ) );
        vkCmdDecompressMemoryIndirectCountNV = PFN_vkCmdDecompressMemoryIndirectCountNV( vkGetDeviceProcAddr( device, "vkCmdDecompressMemoryIndirectCountNV" ) );

  //=== VK_NV_mesh_shader ===
        vkCmdDrawMeshTasksNV = PFN_vkCmdDrawMeshTasksNV( vkGetDeviceProcAddr( device, "vkCmdDrawMeshTasksNV" ) );
        vkCmdDrawMeshTasksIndirectNV = PFN_vkCmdDrawMeshTasksIndirectNV( vkGetDeviceProcAddr( device, "vkCmdDrawMeshTasksIndirectNV" ) );
        vkCmdDrawMeshTasksIndirectCountNV = PFN_vkCmdDrawMeshTasksIndirectCountNV( vkGetDeviceProcAddr( device, "vkCmdDrawMeshTasksIndirectCountNV" ) );

  //=== VK_NV_optical_flow ===
        vkCreateOpticalFlowSessionNV = PFN_vkCreateOpticalFlowSessionNV( vkGetDeviceProcAddr( device, "vkCreateOpticalFlowSessionNV" ) );
        vkDestroyOpticalFlowSessionNV = PFN_vkDestroyOpticalFlowSessionNV( vkGetDeviceProcAddr( device, "vkDestroyOpticalFlowSessionNV" ) );
        vkBindOpticalFlowSessionImageNV = PFN_vkBindOpticalFlowSessionImageNV( vkGetDeviceProcAddr( device, "vkBindOpticalFlowSessionImageNV" ) );
        vkCmdOpticalFlowExecuteNV = PFN_vkCmdOpticalFlowExecuteNV( vkGetDeviceProcAddr( device, "vkCmdOpticalFlowExecuteNV" ) );

  //=== VK_NV_ray_tracing ===
        vkCreateAccelerationStructureNV = PFN_vkCreateAccelerationStructureNV( vkGetDeviceProcAddr( device, "vkCreateAccelerationStructureNV" ) );
        vkDestroyAccelerationStructureNV = PFN_vkDestroyAccelerationStructureNV( vkGetDeviceProcAddr( device, "vkDestroyAccelerationStructureNV" ) );
        vkGetAccelerationStructureMemoryRequirementsNV = PFN_vkGetAccelerationStructureMemoryRequirementsNV( vkGetDeviceProcAddr( device, "vkGetAccelerationStructureMemoryRequirementsNV" ) );
        vkBindAccelerationStructureMemoryNV = PFN_vkBindAccelerationStructureMemoryNV( vkGetDeviceProcAddr( device, "vkBindAccelerationStructureMemoryNV" ) );
        vkCmdBuildAccelerationStructureNV = PFN_vkCmdBuildAccelerationStructureNV( vkGetDeviceProcAddr( device, "vkCmdBuildAccelerationStructureNV" ) );
        vkCmdCopyAccelerationStructureNV = PFN_vkCmdCopyAccelerationStructureNV( vkGetDeviceProcAddr( device, "vkCmdCopyAccelerationStructureNV" ) );
        vkCmdTraceRaysNV = PFN_vkCmdTraceRaysNV( vkGetDeviceProcAddr( device, "vkCmdTraceRaysNV" ) );
        vkCreateRayTracingPipelinesNV = PFN_vkCreateRayTracingPipelinesNV( vkGetDeviceProcAddr( device, "vkCreateRayTracingPipelinesNV" ) );
        vkGetRayTracingShaderGroupHandlesNV = PFN_vkGetRayTracingShaderGroupHandlesNV( vkGetDeviceProcAddr( device, "vkGetRayTracingShaderGroupHandlesNV" ) );
        if ( !vkGetRayTracingShaderGroupHandlesKHR ) vkGetRayTracingShaderGroupHandlesKHR = vkGetRayTracingShaderGroupHandlesNV;
        vkGetAccelerationStructureHandleNV = PFN_vkGetAccelerationStructureHandleNV( vkGetDeviceProcAddr( device, "vkGetAccelerationStructureHandleNV" ) );
        vkCmdWriteAccelerationStructuresPropertiesNV = PFN_vkCmdWriteAccelerationStructuresPropertiesNV( vkGetDeviceProcAddr( device, "vkCmdWriteAccelerationStructuresPropertiesNV" ) );
        vkCompileDeferredNV = PFN_vkCompileDeferredNV( vkGetDeviceProcAddr( device, "vkCompileDeferredNV" ) );

  //=== VK_NV_scissor_exclusive ===
        vkCmdSetExclusiveScissorNV = PFN_vkCmdSetExclusiveScissorNV( vkGetDeviceProcAddr( device, "vkCmdSetExclusiveScissorNV" ) );

  //=== VK_NV_shading_rate_image ===
        vkCmdBindShadingRateImageNV = PFN_vkCmdBindShadingRateImageNV( vkGetDeviceProcAddr( device, "vkCmdBindShadingRateImageNV" ) );
        vkCmdSetViewportShadingRatePaletteNV = PFN_vkCmdSetViewportShadingRatePaletteNV( vkGetDeviceProcAddr( device, "vkCmdSetViewportShadingRatePaletteNV" ) );
        vkCmdSetCoarseSampleOrderNV = PFN_vkCmdSetCoarseSampleOrderNV( vkGetDeviceProcAddr( device, "vkCmdSetCoarseSampleOrderNV" ) );

  //=== VK_QCOM_tile_properties ===
        vkGetFramebufferTilePropertiesQCOM = PFN_vkGetFramebufferTilePropertiesQCOM( vkGetDeviceProcAddr( device, "vkGetFramebufferTilePropertiesQCOM" ) );
        vkGetDynamicRenderingTilePropertiesQCOM = PFN_vkGetDynamicRenderingTilePropertiesQCOM( vkGetDeviceProcAddr( device, "vkGetDynamicRenderingTilePropertiesQCOM" ) );

  //=== VK_VALVE_descriptor_set_host_mapping ===
        vkGetDescriptorSetLayoutHostMappingInfoVALVE = PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE( vkGetDeviceProcAddr( device, "vkGetDescriptorSetLayoutHostMappingInfoVALVE" ) );
        vkGetDescriptorSetHostMappingVALVE = PFN_vkGetDescriptorSetHostMappingVALVE( vkGetDeviceProcAddr( device, "vkGetDescriptorSetHostMappingVALVE" ) );

      }

    public:

  //=== VK_VERSION_1_0 ===
      PFN_vkGetDeviceProcAddr vkGetDeviceProcAddr = 0;
      PFN_vkDestroyDevice vkDestroyDevice = 0;
      PFN_vkGetDeviceQueue vkGetDeviceQueue = 0;
      PFN_vkQueueSubmit vkQueueSubmit = 0;
      PFN_vkQueueWaitIdle vkQueueWaitIdle = 0;
      PFN_vkDeviceWaitIdle vkDeviceWaitIdle = 0;
      PFN_vkAllocateMemory vkAllocateMemory = 0;
      PFN_vkFreeMemory vkFreeMemory = 0;
      PFN_vkMapMemory vkMapMemory = 0;
      PFN_vkUnmapMemory vkUnmapMemory = 0;
      PFN_vkFlushMappedMemoryRanges vkFlushMappedMemoryRanges = 0;
      PFN_vkInvalidateMappedMemoryRanges vkInvalidateMappedMemoryRanges = 0;
      PFN_vkGetDeviceMemoryCommitment vkGetDeviceMemoryCommitment = 0;
      PFN_vkBindBufferMemory vkBindBufferMemory = 0;
      PFN_vkBindImageMemory vkBindImageMemory = 0;
      PFN_vkGetBufferMemoryRequirements vkGetBufferMemoryRequirements = 0;
      PFN_vkGetImageMemoryRequirements vkGetImageMemoryRequirements = 0;
      PFN_vkGetImageSparseMemoryRequirements vkGetImageSparseMemoryRequirements = 0;
      PFN_vkQueueBindSparse vkQueueBindSparse = 0;
      PFN_vkCreateFence vkCreateFence = 0;
      PFN_vkDestroyFence vkDestroyFence = 0;
      PFN_vkResetFences vkResetFences = 0;
      PFN_vkGetFenceStatus vkGetFenceStatus = 0;
      PFN_vkWaitForFences vkWaitForFences = 0;
      PFN_vkCreateSemaphore vkCreateSemaphore = 0;
      PFN_vkDestroySemaphore vkDestroySemaphore = 0;
      PFN_vkCreateEvent vkCreateEvent = 0;
      PFN_vkDestroyEvent vkDestroyEvent = 0;
      PFN_vkGetEventStatus vkGetEventStatus = 0;
      PFN_vkSetEvent vkSetEvent = 0;
      PFN_vkResetEvent vkResetEvent = 0;
      PFN_vkCreateQueryPool vkCreateQueryPool = 0;
      PFN_vkDestroyQueryPool vkDestroyQueryPool = 0;
      PFN_vkGetQueryPoolResults vkGetQueryPoolResults = 0;
      PFN_vkCreateBuffer vkCreateBuffer = 0;
      PFN_vkDestroyBuffer vkDestroyBuffer = 0;
      PFN_vkCreateBufferView vkCreateBufferView = 0;
      PFN_vkDestroyBufferView vkDestroyBufferView = 0;
      PFN_vkCreateImage vkCreateImage = 0;
      PFN_vkDestroyImage vkDestroyImage = 0;
      PFN_vkGetImageSubresourceLayout vkGetImageSubresourceLayout = 0;
      PFN_vkCreateImageView vkCreateImageView = 0;
      PFN_vkDestroyImageView vkDestroyImageView = 0;
      PFN_vkCreateShaderModule vkCreateShaderModule = 0;
      PFN_vkDestroyShaderModule vkDestroyShaderModule = 0;
      PFN_vkCreatePipelineCache vkCreatePipelineCache = 0;
      PFN_vkDestroyPipelineCache vkDestroyPipelineCache = 0;
      PFN_vkGetPipelineCacheData vkGetPipelineCacheData = 0;
      PFN_vkMergePipelineCaches vkMergePipelineCaches = 0;
      PFN_vkCreateGraphicsPipelines vkCreateGraphicsPipelines = 0;
      PFN_vkCreateComputePipelines vkCreateComputePipelines = 0;
      PFN_vkDestroyPipeline vkDestroyPipeline = 0;
      PFN_vkCreatePipelineLayout vkCreatePipelineLayout = 0;
      PFN_vkDestroyPipelineLayout vkDestroyPipelineLayout = 0;
      PFN_vkCreateSampler vkCreateSampler = 0;
      PFN_vkDestroySampler vkDestroySampler = 0;
      PFN_vkCreateDescriptorSetLayout vkCreateDescriptorSetLayout = 0;
      PFN_vkDestroyDescriptorSetLayout vkDestroyDescriptorSetLayout = 0;
      PFN_vkCreateDescriptorPool vkCreateDescriptorPool = 0;
      PFN_vkDestroyDescriptorPool vkDestroyDescriptorPool = 0;
      PFN_vkResetDescriptorPool vkResetDescriptorPool = 0;
      PFN_vkAllocateDescriptorSets vkAllocateDescriptorSets = 0;
      PFN_vkFreeDescriptorSets vkFreeDescriptorSets = 0;
      PFN_vkUpdateDescriptorSets vkUpdateDescriptorSets = 0;
      PFN_vkCreateFramebuffer vkCreateFramebuffer = 0;
      PFN_vkDestroyFramebuffer vkDestroyFramebuffer = 0;
      PFN_vkCreateRenderPass vkCreateRenderPass = 0;
      PFN_vkDestroyRenderPass vkDestroyRenderPass = 0;
      PFN_vkGetRenderAreaGranularity vkGetRenderAreaGranularity = 0;
      PFN_vkCreateCommandPool vkCreateCommandPool = 0;
      PFN_vkDestroyCommandPool vkDestroyCommandPool = 0;
      PFN_vkResetCommandPool vkResetCommandPool = 0;
      PFN_vkAllocateCommandBuffers vkAllocateCommandBuffers = 0;
      PFN_vkFreeCommandBuffers vkFreeCommandBuffers = 0;
      PFN_vkBeginCommandBuffer vkBeginCommandBuffer = 0;
      PFN_vkEndCommandBuffer vkEndCommandBuffer = 0;
      PFN_vkResetCommandBuffer vkResetCommandBuffer = 0;
      PFN_vkCmdBindPipeline vkCmdBindPipeline = 0;
      PFN_vkCmdSetViewport vkCmdSetViewport = 0;
      PFN_vkCmdSetScissor vkCmdSetScissor = 0;
      PFN_vkCmdSetLineWidth vkCmdSetLineWidth = 0;
      PFN_vkCmdSetDepthBias vkCmdSetDepthBias = 0;
      PFN_vkCmdSetBlendConstants vkCmdSetBlendConstants = 0;
      PFN_vkCmdSetDepthBounds vkCmdSetDepthBounds = 0;
      PFN_vkCmdSetStencilCompareMask vkCmdSetStencilCompareMask = 0;
      PFN_vkCmdSetStencilWriteMask vkCmdSetStencilWriteMask = 0;
      PFN_vkCmdSetStencilReference vkCmdSetStencilReference = 0;
      PFN_vkCmdBindDescriptorSets vkCmdBindDescriptorSets = 0;
      PFN_vkCmdBindIndexBuffer vkCmdBindIndexBuffer = 0;
      PFN_vkCmdBindVertexBuffers vkCmdBindVertexBuffers = 0;
      PFN_vkCmdDraw vkCmdDraw = 0;
      PFN_vkCmdDrawIndexed vkCmdDrawIndexed = 0;
      PFN_vkCmdDrawIndirect vkCmdDrawIndirect = 0;
      PFN_vkCmdDrawIndexedIndirect vkCmdDrawIndexedIndirect = 0;
      PFN_vkCmdDispatch vkCmdDispatch = 0;
      PFN_vkCmdDispatchIndirect vkCmdDispatchIndirect = 0;
      PFN_vkCmdCopyBuffer vkCmdCopyBuffer = 0;
      PFN_vkCmdCopyImage vkCmdCopyImage = 0;
      PFN_vkCmdBlitImage vkCmdBlitImage = 0;
      PFN_vkCmdCopyBufferToImage vkCmdCopyBufferToImage = 0;
      PFN_vkCmdCopyImageToBuffer vkCmdCopyImageToBuffer = 0;
      PFN_vkCmdUpdateBuffer vkCmdUpdateBuffer = 0;
      PFN_vkCmdFillBuffer vkCmdFillBuffer = 0;
      PFN_vkCmdClearColorImage vkCmdClearColorImage = 0;
      PFN_vkCmdClearDepthStencilImage vkCmdClearDepthStencilImage = 0;
      PFN_vkCmdClearAttachments vkCmdClearAttachments = 0;
      PFN_vkCmdResolveImage vkCmdResolveImage = 0;
      PFN_vkCmdSetEvent vkCmdSetEvent = 0;
      PFN_vkCmdResetEvent vkCmdResetEvent = 0;
      PFN_vkCmdWaitEvents vkCmdWaitEvents = 0;
      PFN_vkCmdPipelineBarrier vkCmdPipelineBarrier = 0;
      PFN_vkCmdBeginQuery vkCmdBeginQuery = 0;
      PFN_vkCmdEndQuery vkCmdEndQuery = 0;
      PFN_vkCmdResetQueryPool vkCmdResetQueryPool = 0;
      PFN_vkCmdWriteTimestamp vkCmdWriteTimestamp = 0;
      PFN_vkCmdCopyQueryPoolResults vkCmdCopyQueryPoolResults = 0;
      PFN_vkCmdPushConstants vkCmdPushConstants = 0;
      PFN_vkCmdBeginRenderPass vkCmdBeginRenderPass = 0;
      PFN_vkCmdNextSubpass vkCmdNextSubpass = 0;
      PFN_vkCmdEndRenderPass vkCmdEndRenderPass = 0;
      PFN_vkCmdExecuteCommands vkCmdExecuteCommands = 0;

  //=== VK_VERSION_1_1 ===
      PFN_vkBindBufferMemory2 vkBindBufferMemory2 = 0;
      PFN_vkBindImageMemory2 vkBindImageMemory2 = 0;
      PFN_vkGetDeviceGroupPeerMemoryFeatures vkGetDeviceGroupPeerMemoryFeatures = 0;
      PFN_vkCmdSetDeviceMask vkCmdSetDeviceMask = 0;
      PFN_vkCmdDispatchBase vkCmdDispatchBase = 0;
      PFN_vkGetImageMemoryRequirements2 vkGetImageMemoryRequirements2 = 0;
      PFN_vkGetBufferMemoryRequirements2 vkGetBufferMemoryRequirements2 = 0;
      PFN_vkGetImageSparseMemoryRequirements2 vkGetImageSparseMemoryRequirements2 = 0;
      PFN_vkTrimCommandPool vkTrimCommandPool = 0;
      PFN_vkGetDeviceQueue2 vkGetDeviceQueue2 = 0;
      PFN_vkCreateSamplerYcbcrConversion vkCreateSamplerYcbcrConversion = 0;
      PFN_vkDestroySamplerYcbcrConversion vkDestroySamplerYcbcrConversion = 0;
      PFN_vkCreateDescriptorUpdateTemplate vkCreateDescriptorUpdateTemplate = 0;
      PFN_vkDestroyDescriptorUpdateTemplate vkDestroyDescriptorUpdateTemplate = 0;
      PFN_vkUpdateDescriptorSetWithTemplate vkUpdateDescriptorSetWithTemplate = 0;
      PFN_vkGetDescriptorSetLayoutSupport vkGetDescriptorSetLayoutSupport = 0;

  //=== VK_VERSION_1_2 ===
      PFN_vkCmdDrawIndirectCount vkCmdDrawIndirectCount = 0;
      PFN_vkCmdDrawIndexedIndirectCount vkCmdDrawIndexedIndirectCount = 0;
      PFN_vkCreateRenderPass2 vkCreateRenderPass2 = 0;
      PFN_vkCmdBeginRenderPass2 vkCmdBeginRenderPass2 = 0;
      PFN_vkCmdNextSubpass2 vkCmdNextSubpass2 = 0;
      PFN_vkCmdEndRenderPass2 vkCmdEndRenderPass2 = 0;
      PFN_vkResetQueryPool vkResetQueryPool = 0;
      PFN_vkGetSemaphoreCounterValue vkGetSemaphoreCounterValue = 0;
      PFN_vkWaitSemaphores vkWaitSemaphores = 0;
      PFN_vkSignalSemaphore vkSignalSemaphore = 0;
      PFN_vkGetBufferDeviceAddress vkGetBufferDeviceAddress = 0;
      PFN_vkGetBufferOpaqueCaptureAddress vkGetBufferOpaqueCaptureAddress = 0;
      PFN_vkGetDeviceMemoryOpaqueCaptureAddress vkGetDeviceMemoryOpaqueCaptureAddress = 0;

  //=== VK_VERSION_1_3 ===
      PFN_vkCreatePrivateDataSlot vkCreatePrivateDataSlot = 0;
      PFN_vkDestroyPrivateDataSlot vkDestroyPrivateDataSlot = 0;
      PFN_vkSetPrivateData vkSetPrivateData = 0;
      PFN_vkGetPrivateData vkGetPrivateData = 0;
      PFN_vkCmdSetEvent2 vkCmdSetEvent2 = 0;
      PFN_vkCmdResetEvent2 vkCmdResetEvent2 = 0;
      PFN_vkCmdWaitEvents2 vkCmdWaitEvents2 = 0;
      PFN_vkCmdPipelineBarrier2 vkCmdPipelineBarrier2 = 0;
      PFN_vkCmdWriteTimestamp2 vkCmdWriteTimestamp2 = 0;
      PFN_vkQueueSubmit2 vkQueueSubmit2 = 0;
      PFN_vkCmdCopyBuffer2 vkCmdCopyBuffer2 = 0;
      PFN_vkCmdCopyImage2 vkCmdCopyImage2 = 0;
      PFN_vkCmdCopyBufferToImage2 vkCmdCopyBufferToImage2 = 0;
      PFN_vkCmdCopyImageToBuffer2 vkCmdCopyImageToBuffer2 = 0;
      PFN_vkCmdBlitImage2 vkCmdBlitImage2 = 0;
      PFN_vkCmdResolveImage2 vkCmdResolveImage2 = 0;
      PFN_vkCmdBeginRendering vkCmdBeginRendering = 0;
      PFN_vkCmdEndRendering vkCmdEndRendering = 0;
      PFN_vkCmdSetCullMode vkCmdSetCullMode = 0;
      PFN_vkCmdSetFrontFace vkCmdSetFrontFace = 0;
      PFN_vkCmdSetPrimitiveTopology vkCmdSetPrimitiveTopology = 0;
      PFN_vkCmdSetViewportWithCount vkCmdSetViewportWithCount = 0;
      PFN_vkCmdSetScissorWithCount vkCmdSetScissorWithCount = 0;
      PFN_vkCmdBindVertexBuffers2 vkCmdBindVertexBuffers2 = 0;
      PFN_vkCmdSetDepthTestEnable vkCmdSetDepthTestEnable = 0;
      PFN_vkCmdSetDepthWriteEnable vkCmdSetDepthWriteEnable = 0;
      PFN_vkCmdSetDepthCompareOp vkCmdSetDepthCompareOp = 0;
      PFN_vkCmdSetDepthBoundsTestEnable vkCmdSetDepthBoundsTestEnable = 0;
      PFN_vkCmdSetStencilTestEnable vkCmdSetStencilTestEnable = 0;
      PFN_vkCmdSetStencilOp vkCmdSetStencilOp = 0;
      PFN_vkCmdSetRasterizerDiscardEnable vkCmdSetRasterizerDiscardEnable = 0;
      PFN_vkCmdSetDepthBiasEnable vkCmdSetDepthBiasEnable = 0;
      PFN_vkCmdSetPrimitiveRestartEnable vkCmdSetPrimitiveRestartEnable = 0;
      PFN_vkGetDeviceBufferMemoryRequirements vkGetDeviceBufferMemoryRequirements = 0;
      PFN_vkGetDeviceImageMemoryRequirements vkGetDeviceImageMemoryRequirements = 0;
      PFN_vkGetDeviceImageSparseMemoryRequirements vkGetDeviceImageSparseMemoryRequirements = 0;

  //=== VK_AMD_buffer_marker ===
      PFN_vkCmdWriteBufferMarkerAMD vkCmdWriteBufferMarkerAMD = 0;

  //=== VK_AMD_display_native_hdr ===
      PFN_vkSetLocalDimmingAMD vkSetLocalDimmingAMD = 0;

  //=== VK_AMD_draw_indirect_count ===
      PFN_vkCmdDrawIndirectCountAMD vkCmdDrawIndirectCountAMD = 0;
      PFN_vkCmdDrawIndexedIndirectCountAMD vkCmdDrawIndexedIndirectCountAMD = 0;

  //=== VK_AMD_shader_info ===
      PFN_vkGetShaderInfoAMD vkGetShaderInfoAMD = 0;

#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  //=== VK_ANDROID_external_memory_android_hardware_buffer ===
      PFN_vkGetAndroidHardwareBufferPropertiesANDROID vkGetAndroidHardwareBufferPropertiesANDROID = 0;
      PFN_vkGetMemoryAndroidHardwareBufferANDROID vkGetMemoryAndroidHardwareBufferANDROID = 0;
#else
      PFN_dummy vkGetAndroidHardwareBufferPropertiesANDROID_placeholder = 0;
      PFN_dummy vkGetMemoryAndroidHardwareBufferANDROID_placeholder = 0;
#endif /*VK_USE_PLATFORM_ANDROID_KHR*/

  //=== VK_EXT_buffer_device_address ===
      PFN_vkGetBufferDeviceAddressEXT vkGetBufferDeviceAddressEXT = 0;

  //=== VK_EXT_calibrated_timestamps ===
      PFN_vkGetCalibratedTimestampsEXT vkGetCalibratedTimestampsEXT = 0;

  //=== VK_EXT_color_write_enable ===
      PFN_vkCmdSetColorWriteEnableEXT vkCmdSetColorWriteEnableEXT = 0;

  //=== VK_EXT_conditional_rendering ===
      PFN_vkCmdBeginConditionalRenderingEXT vkCmdBeginConditionalRenderingEXT = 0;
      PFN_vkCmdEndConditionalRenderingEXT vkCmdEndConditionalRenderingEXT = 0;

  //=== VK_EXT_debug_marker ===
      PFN_vkDebugMarkerSetObjectTagEXT vkDebugMarkerSetObjectTagEXT = 0;
      PFN_vkDebugMarkerSetObjectNameEXT vkDebugMarkerSetObjectNameEXT = 0;
      PFN_vkCmdDebugMarkerBeginEXT vkCmdDebugMarkerBeginEXT = 0;
      PFN_vkCmdDebugMarkerEndEXT vkCmdDebugMarkerEndEXT = 0;
      PFN_vkCmdDebugMarkerInsertEXT vkCmdDebugMarkerInsertEXT = 0;

  //=== VK_EXT_debug_utils ===
      PFN_vkSetDebugUtilsObjectNameEXT vkSetDebugUtilsObjectNameEXT = 0;
      PFN_vkSetDebugUtilsObjectTagEXT vkSetDebugUtilsObjectTagEXT = 0;
      PFN_vkQueueBeginDebugUtilsLabelEXT vkQueueBeginDebugUtilsLabelEXT = 0;
      PFN_vkQueueEndDebugUtilsLabelEXT vkQueueEndDebugUtilsLabelEXT = 0;
      PFN_vkQueueInsertDebugUtilsLabelEXT vkQueueInsertDebugUtilsLabelEXT = 0;
      PFN_vkCmdBeginDebugUtilsLabelEXT vkCmdBeginDebugUtilsLabelEXT = 0;
      PFN_vkCmdEndDebugUtilsLabelEXT vkCmdEndDebugUtilsLabelEXT = 0;
      PFN_vkCmdInsertDebugUtilsLabelEXT vkCmdInsertDebugUtilsLabelEXT = 0;

  //=== VK_EXT_descriptor_buffer ===
      PFN_vkGetDescriptorSetLayoutSizeEXT vkGetDescriptorSetLayoutSizeEXT = 0;
      PFN_vkGetDescriptorSetLayoutBindingOffsetEXT vkGetDescriptorSetLayoutBindingOffsetEXT = 0;
      PFN_vkGetDescriptorEXT vkGetDescriptorEXT = 0;
      PFN_vkCmdBindDescriptorBuffersEXT vkCmdBindDescriptorBuffersEXT = 0;
      PFN_vkCmdSetDescriptorBufferOffsetsEXT vkCmdSetDescriptorBufferOffsetsEXT = 0;
      PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT vkCmdBindDescriptorBufferEmbeddedSamplersEXT = 0;
      PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT vkGetBufferOpaqueCaptureDescriptorDataEXT = 0;
      PFN_vkGetImageOpaqueCaptureDescriptorDataEXT vkGetImageOpaqueCaptureDescriptorDataEXT = 0;
      PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT vkGetImageViewOpaqueCaptureDescriptorDataEXT = 0;
      PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT vkGetSamplerOpaqueCaptureDescriptorDataEXT = 0;
      PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT = 0;

  //=== VK_EXT_device_fault ===
      PFN_vkGetDeviceFaultInfoEXT vkGetDeviceFaultInfoEXT = 0;

  //=== VK_EXT_discard_rectangles ===
      PFN_vkCmdSetDiscardRectangleEXT vkCmdSetDiscardRectangleEXT = 0;

  //=== VK_EXT_display_control ===
      PFN_vkDisplayPowerControlEXT vkDisplayPowerControlEXT = 0;
      PFN_vkRegisterDeviceEventEXT vkRegisterDeviceEventEXT = 0;
      PFN_vkRegisterDisplayEventEXT vkRegisterDisplayEventEXT = 0;
      PFN_vkGetSwapchainCounterEXT vkGetSwapchainCounterEXT = 0;

  //=== VK_EXT_extended_dynamic_state ===
      PFN_vkCmdSetCullModeEXT vkCmdSetCullModeEXT = 0;
      PFN_vkCmdSetFrontFaceEXT vkCmdSetFrontFaceEXT = 0;
      PFN_vkCmdSetPrimitiveTopologyEXT vkCmdSetPrimitiveTopologyEXT = 0;
      PFN_vkCmdSetViewportWithCountEXT vkCmdSetViewportWithCountEXT = 0;
      PFN_vkCmdSetScissorWithCountEXT vkCmdSetScissorWithCountEXT = 0;
      PFN_vkCmdBindVertexBuffers2EXT vkCmdBindVertexBuffers2EXT = 0;
      PFN_vkCmdSetDepthTestEnableEXT vkCmdSetDepthTestEnableEXT = 0;
      PFN_vkCmdSetDepthWriteEnableEXT vkCmdSetDepthWriteEnableEXT = 0;
      PFN_vkCmdSetDepthCompareOpEXT vkCmdSetDepthCompareOpEXT = 0;
      PFN_vkCmdSetDepthBoundsTestEnableEXT vkCmdSetDepthBoundsTestEnableEXT = 0;
      PFN_vkCmdSetStencilTestEnableEXT vkCmdSetStencilTestEnableEXT = 0;
      PFN_vkCmdSetStencilOpEXT vkCmdSetStencilOpEXT = 0;

  //=== VK_EXT_extended_dynamic_state2 ===
      PFN_vkCmdSetPatchControlPointsEXT vkCmdSetPatchControlPointsEXT = 0;
      PFN_vkCmdSetRasterizerDiscardEnableEXT vkCmdSetRasterizerDiscardEnableEXT = 0;
      PFN_vkCmdSetDepthBiasEnableEXT vkCmdSetDepthBiasEnableEXT = 0;
      PFN_vkCmdSetLogicOpEXT vkCmdSetLogicOpEXT = 0;
      PFN_vkCmdSetPrimitiveRestartEnableEXT vkCmdSetPrimitiveRestartEnableEXT = 0;

  //=== VK_EXT_extended_dynamic_state3 ===
      PFN_vkCmdSetTessellationDomainOriginEXT vkCmdSetTessellationDomainOriginEXT = 0;
      PFN_vkCmdSetDepthClampEnableEXT vkCmdSetDepthClampEnableEXT = 0;
      PFN_vkCmdSetPolygonModeEXT vkCmdSetPolygonModeEXT = 0;
      PFN_vkCmdSetRasterizationSamplesEXT vkCmdSetRasterizationSamplesEXT = 0;
      PFN_vkCmdSetSampleMaskEXT vkCmdSetSampleMaskEXT = 0;
      PFN_vkCmdSetAlphaToCoverageEnableEXT vkCmdSetAlphaToCoverageEnableEXT = 0;
      PFN_vkCmdSetAlphaToOneEnableEXT vkCmdSetAlphaToOneEnableEXT = 0;
      PFN_vkCmdSetLogicOpEnableEXT vkCmdSetLogicOpEnableEXT = 0;
      PFN_vkCmdSetColorBlendEnableEXT vkCmdSetColorBlendEnableEXT = 0;
      PFN_vkCmdSetColorBlendEquationEXT vkCmdSetColorBlendEquationEXT = 0;
      PFN_vkCmdSetColorWriteMaskEXT vkCmdSetColorWriteMaskEXT = 0;
      PFN_vkCmdSetRasterizationStreamEXT vkCmdSetRasterizationStreamEXT = 0;
      PFN_vkCmdSetConservativeRasterizationModeEXT vkCmdSetConservativeRasterizationModeEXT = 0;
      PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT vkCmdSetExtraPrimitiveOverestimationSizeEXT = 0;
      PFN_vkCmdSetDepthClipEnableEXT vkCmdSetDepthClipEnableEXT = 0;
      PFN_vkCmdSetSampleLocationsEnableEXT vkCmdSetSampleLocationsEnableEXT = 0;
      PFN_vkCmdSetColorBlendAdvancedEXT vkCmdSetColorBlendAdvancedEXT = 0;
      PFN_vkCmdSetProvokingVertexModeEXT vkCmdSetProvokingVertexModeEXT = 0;
      PFN_vkCmdSetLineRasterizationModeEXT vkCmdSetLineRasterizationModeEXT = 0;
      PFN_vkCmdSetLineStippleEnableEXT vkCmdSetLineStippleEnableEXT = 0;
      PFN_vkCmdSetDepthClipNegativeOneToOneEXT vkCmdSetDepthClipNegativeOneToOneEXT = 0;
      PFN_vkCmdSetViewportWScalingEnableNV vkCmdSetViewportWScalingEnableNV = 0;
      PFN_vkCmdSetViewportSwizzleNV vkCmdSetViewportSwizzleNV = 0;
      PFN_vkCmdSetCoverageToColorEnableNV vkCmdSetCoverageToColorEnableNV = 0;
      PFN_vkCmdSetCoverageToColorLocationNV vkCmdSetCoverageToColorLocationNV = 0;
      PFN_vkCmdSetCoverageModulationModeNV vkCmdSetCoverageModulationModeNV = 0;
      PFN_vkCmdSetCoverageModulationTableEnableNV vkCmdSetCoverageModulationTableEnableNV = 0;
      PFN_vkCmdSetCoverageModulationTableNV vkCmdSetCoverageModulationTableNV = 0;
      PFN_vkCmdSetShadingRateImageEnableNV vkCmdSetShadingRateImageEnableNV = 0;
      PFN_vkCmdSetRepresentativeFragmentTestEnableNV vkCmdSetRepresentativeFragmentTestEnableNV = 0;
      PFN_vkCmdSetCoverageReductionModeNV vkCmdSetCoverageReductionModeNV = 0;

  //=== VK_EXT_external_memory_host ===
      PFN_vkGetMemoryHostPointerPropertiesEXT vkGetMemoryHostPointerPropertiesEXT = 0;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_EXT_full_screen_exclusive ===
      PFN_vkAcquireFullScreenExclusiveModeEXT vkAcquireFullScreenExclusiveModeEXT = 0;
      PFN_vkReleaseFullScreenExclusiveModeEXT vkReleaseFullScreenExclusiveModeEXT = 0;
      PFN_vkGetDeviceGroupSurfacePresentModes2EXT vkGetDeviceGroupSurfacePresentModes2EXT = 0;
#else
      PFN_dummy vkAcquireFullScreenExclusiveModeEXT_placeholder = 0;
      PFN_dummy vkReleaseFullScreenExclusiveModeEXT_placeholder = 0;
      PFN_dummy vkGetDeviceGroupSurfacePresentModes2EXT_placeholder = 0;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_EXT_hdr_metadata ===
      PFN_vkSetHdrMetadataEXT vkSetHdrMetadataEXT = 0;

  //=== VK_EXT_host_query_reset ===
      PFN_vkResetQueryPoolEXT vkResetQueryPoolEXT = 0;

  //=== VK_EXT_image_compression_control ===
      PFN_vkGetImageSubresourceLayout2EXT vkGetImageSubresourceLayout2EXT = 0;

  //=== VK_EXT_image_drm_format_modifier ===
      PFN_vkGetImageDrmFormatModifierPropertiesEXT vkGetImageDrmFormatModifierPropertiesEXT = 0;

  //=== VK_EXT_line_rasterization ===
      PFN_vkCmdSetLineStippleEXT vkCmdSetLineStippleEXT = 0;

  //=== VK_EXT_mesh_shader ===
      PFN_vkCmdDrawMeshTasksEXT vkCmdDrawMeshTasksEXT = 0;
      PFN_vkCmdDrawMeshTasksIndirectEXT vkCmdDrawMeshTasksIndirectEXT = 0;
      PFN_vkCmdDrawMeshTasksIndirectCountEXT vkCmdDrawMeshTasksIndirectCountEXT = 0;

#if defined( VK_USE_PLATFORM_METAL_EXT )
  //=== VK_EXT_metal_objects ===
      PFN_vkExportMetalObjectsEXT vkExportMetalObjectsEXT = 0;
#else
      PFN_dummy vkExportMetalObjectsEXT_placeholder = 0;
#endif /*VK_USE_PLATFORM_METAL_EXT*/

  //=== VK_EXT_multi_draw ===
      PFN_vkCmdDrawMultiEXT vkCmdDrawMultiEXT = 0;
      PFN_vkCmdDrawMultiIndexedEXT vkCmdDrawMultiIndexedEXT = 0;

  //=== VK_EXT_opacity_micromap ===
      PFN_vkCreateMicromapEXT vkCreateMicromapEXT = 0;
      PFN_vkDestroyMicromapEXT vkDestroyMicromapEXT = 0;
      PFN_vkCmdBuildMicromapsEXT vkCmdBuildMicromapsEXT = 0;
      PFN_vkBuildMicromapsEXT vkBuildMicromapsEXT = 0;
      PFN_vkCopyMicromapEXT vkCopyMicromapEXT = 0;
      PFN_vkCopyMicromapToMemoryEXT vkCopyMicromapToMemoryEXT = 0;
      PFN_vkCopyMemoryToMicromapEXT vkCopyMemoryToMicromapEXT = 0;
      PFN_vkWriteMicromapsPropertiesEXT vkWriteMicromapsPropertiesEXT = 0;
      PFN_vkCmdCopyMicromapEXT vkCmdCopyMicromapEXT = 0;
      PFN_vkCmdCopyMicromapToMemoryEXT vkCmdCopyMicromapToMemoryEXT = 0;
      PFN_vkCmdCopyMemoryToMicromapEXT vkCmdCopyMemoryToMicromapEXT = 0;
      PFN_vkCmdWriteMicromapsPropertiesEXT vkCmdWriteMicromapsPropertiesEXT = 0;
      PFN_vkGetDeviceMicromapCompatibilityEXT vkGetDeviceMicromapCompatibilityEXT = 0;
      PFN_vkGetMicromapBuildSizesEXT vkGetMicromapBuildSizesEXT = 0;

  //=== VK_EXT_pageable_device_local_memory ===
      PFN_vkSetDeviceMemoryPriorityEXT vkSetDeviceMemoryPriorityEXT = 0;

  //=== VK_EXT_pipeline_properties ===
      PFN_vkGetPipelinePropertiesEXT vkGetPipelinePropertiesEXT = 0;

  //=== VK_EXT_private_data ===
      PFN_vkCreatePrivateDataSlotEXT vkCreatePrivateDataSlotEXT = 0;
      PFN_vkDestroyPrivateDataSlotEXT vkDestroyPrivateDataSlotEXT = 0;
      PFN_vkSetPrivateDataEXT vkSetPrivateDataEXT = 0;
      PFN_vkGetPrivateDataEXT vkGetPrivateDataEXT = 0;

  //=== VK_EXT_sample_locations ===
      PFN_vkCmdSetSampleLocationsEXT vkCmdSetSampleLocationsEXT = 0;

  //=== VK_EXT_shader_module_identifier ===
      PFN_vkGetShaderModuleIdentifierEXT vkGetShaderModuleIdentifierEXT = 0;
      PFN_vkGetShaderModuleCreateInfoIdentifierEXT vkGetShaderModuleCreateInfoIdentifierEXT = 0;

  //=== VK_EXT_swapchain_maintenance1 ===
      PFN_vkReleaseSwapchainImagesEXT vkReleaseSwapchainImagesEXT = 0;

  //=== VK_EXT_transform_feedback ===
      PFN_vkCmdBindTransformFeedbackBuffersEXT vkCmdBindTransformFeedbackBuffersEXT = 0;
      PFN_vkCmdBeginTransformFeedbackEXT vkCmdBeginTransformFeedbackEXT = 0;
      PFN_vkCmdEndTransformFeedbackEXT vkCmdEndTransformFeedbackEXT = 0;
      PFN_vkCmdBeginQueryIndexedEXT vkCmdBeginQueryIndexedEXT = 0;
      PFN_vkCmdEndQueryIndexedEXT vkCmdEndQueryIndexedEXT = 0;
      PFN_vkCmdDrawIndirectByteCountEXT vkCmdDrawIndirectByteCountEXT = 0;

  //=== VK_EXT_validation_cache ===
      PFN_vkCreateValidationCacheEXT vkCreateValidationCacheEXT = 0;
      PFN_vkDestroyValidationCacheEXT vkDestroyValidationCacheEXT = 0;
      PFN_vkMergeValidationCachesEXT vkMergeValidationCachesEXT = 0;
      PFN_vkGetValidationCacheDataEXT vkGetValidationCacheDataEXT = 0;

  //=== VK_EXT_vertex_input_dynamic_state ===
      PFN_vkCmdSetVertexInputEXT vkCmdSetVertexInputEXT = 0;

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_buffer_collection ===
      PFN_vkCreateBufferCollectionFUCHSIA vkCreateBufferCollectionFUCHSIA = 0;
      PFN_vkSetBufferCollectionImageConstraintsFUCHSIA vkSetBufferCollectionImageConstraintsFUCHSIA = 0;
      PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA vkSetBufferCollectionBufferConstraintsFUCHSIA = 0;
      PFN_vkDestroyBufferCollectionFUCHSIA vkDestroyBufferCollectionFUCHSIA = 0;
      PFN_vkGetBufferCollectionPropertiesFUCHSIA vkGetBufferCollectionPropertiesFUCHSIA = 0;
#else
      PFN_dummy vkCreateBufferCollectionFUCHSIA_placeholder = 0;
      PFN_dummy vkSetBufferCollectionImageConstraintsFUCHSIA_placeholder = 0;
      PFN_dummy vkSetBufferCollectionBufferConstraintsFUCHSIA_placeholder = 0;
      PFN_dummy vkDestroyBufferCollectionFUCHSIA_placeholder = 0;
      PFN_dummy vkGetBufferCollectionPropertiesFUCHSIA_placeholder = 0;
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_external_memory ===
      PFN_vkGetMemoryZirconHandleFUCHSIA vkGetMemoryZirconHandleFUCHSIA = 0;
      PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA vkGetMemoryZirconHandlePropertiesFUCHSIA = 0;
#else
      PFN_dummy vkGetMemoryZirconHandleFUCHSIA_placeholder = 0;
      PFN_dummy vkGetMemoryZirconHandlePropertiesFUCHSIA_placeholder = 0;
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_external_semaphore ===
      PFN_vkImportSemaphoreZirconHandleFUCHSIA vkImportSemaphoreZirconHandleFUCHSIA = 0;
      PFN_vkGetSemaphoreZirconHandleFUCHSIA vkGetSemaphoreZirconHandleFUCHSIA = 0;
#else
      PFN_dummy vkImportSemaphoreZirconHandleFUCHSIA_placeholder = 0;
      PFN_dummy vkGetSemaphoreZirconHandleFUCHSIA_placeholder = 0;
#endif /*VK_USE_PLATFORM_FUCHSIA*/

  //=== VK_GOOGLE_display_timing ===
      PFN_vkGetRefreshCycleDurationGOOGLE vkGetRefreshCycleDurationGOOGLE = 0;
      PFN_vkGetPastPresentationTimingGOOGLE vkGetPastPresentationTimingGOOGLE = 0;

  //=== VK_HUAWEI_invocation_mask ===
      PFN_vkCmdBindInvocationMaskHUAWEI vkCmdBindInvocationMaskHUAWEI = 0;

  //=== VK_HUAWEI_subpass_shading ===
      PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = 0;
      PFN_vkCmdSubpassShadingHUAWEI vkCmdSubpassShadingHUAWEI = 0;

  //=== VK_INTEL_performance_query ===
      PFN_vkInitializePerformanceApiINTEL vkInitializePerformanceApiINTEL = 0;
      PFN_vkUninitializePerformanceApiINTEL vkUninitializePerformanceApiINTEL = 0;
      PFN_vkCmdSetPerformanceMarkerINTEL vkCmdSetPerformanceMarkerINTEL = 0;
      PFN_vkCmdSetPerformanceStreamMarkerINTEL vkCmdSetPerformanceStreamMarkerINTEL = 0;
      PFN_vkCmdSetPerformanceOverrideINTEL vkCmdSetPerformanceOverrideINTEL = 0;
      PFN_vkAcquirePerformanceConfigurationINTEL vkAcquirePerformanceConfigurationINTEL = 0;
      PFN_vkReleasePerformanceConfigurationINTEL vkReleasePerformanceConfigurationINTEL = 0;
      PFN_vkQueueSetPerformanceConfigurationINTEL vkQueueSetPerformanceConfigurationINTEL = 0;
      PFN_vkGetPerformanceParameterINTEL vkGetPerformanceParameterINTEL = 0;

  //=== VK_KHR_acceleration_structure ===
      PFN_vkCreateAccelerationStructureKHR vkCreateAccelerationStructureKHR = 0;
      PFN_vkDestroyAccelerationStructureKHR vkDestroyAccelerationStructureKHR = 0;
      PFN_vkCmdBuildAccelerationStructuresKHR vkCmdBuildAccelerationStructuresKHR = 0;
      PFN_vkCmdBuildAccelerationStructuresIndirectKHR vkCmdBuildAccelerationStructuresIndirectKHR = 0;
      PFN_vkBuildAccelerationStructuresKHR vkBuildAccelerationStructuresKHR = 0;
      PFN_vkCopyAccelerationStructureKHR vkCopyAccelerationStructureKHR = 0;
      PFN_vkCopyAccelerationStructureToMemoryKHR vkCopyAccelerationStructureToMemoryKHR = 0;
      PFN_vkCopyMemoryToAccelerationStructureKHR vkCopyMemoryToAccelerationStructureKHR = 0;
      PFN_vkWriteAccelerationStructuresPropertiesKHR vkWriteAccelerationStructuresPropertiesKHR = 0;
      PFN_vkCmdCopyAccelerationStructureKHR vkCmdCopyAccelerationStructureKHR = 0;
      PFN_vkCmdCopyAccelerationStructureToMemoryKHR vkCmdCopyAccelerationStructureToMemoryKHR = 0;
      PFN_vkCmdCopyMemoryToAccelerationStructureKHR vkCmdCopyMemoryToAccelerationStructureKHR = 0;
      PFN_vkGetAccelerationStructureDeviceAddressKHR vkGetAccelerationStructureDeviceAddressKHR = 0;
      PFN_vkCmdWriteAccelerationStructuresPropertiesKHR vkCmdWriteAccelerationStructuresPropertiesKHR = 0;
      PFN_vkGetDeviceAccelerationStructureCompatibilityKHR vkGetDeviceAccelerationStructureCompatibilityKHR = 0;
      PFN_vkGetAccelerationStructureBuildSizesKHR vkGetAccelerationStructureBuildSizesKHR = 0;

  //=== VK_KHR_bind_memory2 ===
      PFN_vkBindBufferMemory2KHR vkBindBufferMemory2KHR = 0;
      PFN_vkBindImageMemory2KHR vkBindImageMemory2KHR = 0;

  //=== VK_KHR_buffer_device_address ===
      PFN_vkGetBufferDeviceAddressKHR vkGetBufferDeviceAddressKHR = 0;
      PFN_vkGetBufferOpaqueCaptureAddressKHR vkGetBufferOpaqueCaptureAddressKHR = 0;
      PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR vkGetDeviceMemoryOpaqueCaptureAddressKHR = 0;

  //=== VK_KHR_copy_commands2 ===
      PFN_vkCmdCopyBuffer2KHR vkCmdCopyBuffer2KHR = 0;
      PFN_vkCmdCopyImage2KHR vkCmdCopyImage2KHR = 0;
      PFN_vkCmdCopyBufferToImage2KHR vkCmdCopyBufferToImage2KHR = 0;
      PFN_vkCmdCopyImageToBuffer2KHR vkCmdCopyImageToBuffer2KHR = 0;
      PFN_vkCmdBlitImage2KHR vkCmdBlitImage2KHR = 0;
      PFN_vkCmdResolveImage2KHR vkCmdResolveImage2KHR = 0;

  //=== VK_KHR_create_renderpass2 ===
      PFN_vkCreateRenderPass2KHR vkCreateRenderPass2KHR = 0;
      PFN_vkCmdBeginRenderPass2KHR vkCmdBeginRenderPass2KHR = 0;
      PFN_vkCmdNextSubpass2KHR vkCmdNextSubpass2KHR = 0;
      PFN_vkCmdEndRenderPass2KHR vkCmdEndRenderPass2KHR = 0;

  //=== VK_KHR_deferred_host_operations ===
      PFN_vkCreateDeferredOperationKHR vkCreateDeferredOperationKHR = 0;
      PFN_vkDestroyDeferredOperationKHR vkDestroyDeferredOperationKHR = 0;
      PFN_vkGetDeferredOperationMaxConcurrencyKHR vkGetDeferredOperationMaxConcurrencyKHR = 0;
      PFN_vkGetDeferredOperationResultKHR vkGetDeferredOperationResultKHR = 0;
      PFN_vkDeferredOperationJoinKHR vkDeferredOperationJoinKHR = 0;

  //=== VK_KHR_descriptor_update_template ===
      PFN_vkCreateDescriptorUpdateTemplateKHR vkCreateDescriptorUpdateTemplateKHR = 0;
      PFN_vkDestroyDescriptorUpdateTemplateKHR vkDestroyDescriptorUpdateTemplateKHR = 0;
      PFN_vkUpdateDescriptorSetWithTemplateKHR vkUpdateDescriptorSetWithTemplateKHR = 0;
      PFN_vkCmdPushDescriptorSetWithTemplateKHR vkCmdPushDescriptorSetWithTemplateKHR = 0;

  //=== VK_KHR_device_group ===
      PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR vkGetDeviceGroupPeerMemoryFeaturesKHR = 0;
      PFN_vkCmdSetDeviceMaskKHR vkCmdSetDeviceMaskKHR = 0;
      PFN_vkCmdDispatchBaseKHR vkCmdDispatchBaseKHR = 0;
      PFN_vkGetDeviceGroupPresentCapabilitiesKHR vkGetDeviceGroupPresentCapabilitiesKHR = 0;
      PFN_vkGetDeviceGroupSurfacePresentModesKHR vkGetDeviceGroupSurfacePresentModesKHR = 0;
      PFN_vkAcquireNextImage2KHR vkAcquireNextImage2KHR = 0;

  //=== VK_KHR_display_swapchain ===
      PFN_vkCreateSharedSwapchainsKHR vkCreateSharedSwapchainsKHR = 0;

  //=== VK_KHR_draw_indirect_count ===
      PFN_vkCmdDrawIndirectCountKHR vkCmdDrawIndirectCountKHR = 0;
      PFN_vkCmdDrawIndexedIndirectCountKHR vkCmdDrawIndexedIndirectCountKHR = 0;

  //=== VK_KHR_dynamic_rendering ===
      PFN_vkCmdBeginRenderingKHR vkCmdBeginRenderingKHR = 0;
      PFN_vkCmdEndRenderingKHR vkCmdEndRenderingKHR = 0;

  //=== VK_KHR_external_fence_fd ===
      PFN_vkImportFenceFdKHR vkImportFenceFdKHR = 0;
      PFN_vkGetFenceFdKHR vkGetFenceFdKHR = 0;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_fence_win32 ===
      PFN_vkImportFenceWin32HandleKHR vkImportFenceWin32HandleKHR = 0;
      PFN_vkGetFenceWin32HandleKHR vkGetFenceWin32HandleKHR = 0;
#else
      PFN_dummy vkImportFenceWin32HandleKHR_placeholder = 0;
      PFN_dummy vkGetFenceWin32HandleKHR_placeholder = 0;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_external_memory_fd ===
      PFN_vkGetMemoryFdKHR vkGetMemoryFdKHR = 0;
      PFN_vkGetMemoryFdPropertiesKHR vkGetMemoryFdPropertiesKHR = 0;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_memory_win32 ===
      PFN_vkGetMemoryWin32HandleKHR vkGetMemoryWin32HandleKHR = 0;
      PFN_vkGetMemoryWin32HandlePropertiesKHR vkGetMemoryWin32HandlePropertiesKHR = 0;
#else
      PFN_dummy vkGetMemoryWin32HandleKHR_placeholder = 0;
      PFN_dummy vkGetMemoryWin32HandlePropertiesKHR_placeholder = 0;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_external_semaphore_fd ===
      PFN_vkImportSemaphoreFdKHR vkImportSemaphoreFdKHR = 0;
      PFN_vkGetSemaphoreFdKHR vkGetSemaphoreFdKHR = 0;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_semaphore_win32 ===
      PFN_vkImportSemaphoreWin32HandleKHR vkImportSemaphoreWin32HandleKHR = 0;
      PFN_vkGetSemaphoreWin32HandleKHR vkGetSemaphoreWin32HandleKHR = 0;
#else
      PFN_dummy vkImportSemaphoreWin32HandleKHR_placeholder = 0;
      PFN_dummy vkGetSemaphoreWin32HandleKHR_placeholder = 0;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_fragment_shading_rate ===
      PFN_vkCmdSetFragmentShadingRateKHR vkCmdSetFragmentShadingRateKHR = 0;

  //=== VK_KHR_get_memory_requirements2 ===
      PFN_vkGetImageMemoryRequirements2KHR vkGetImageMemoryRequirements2KHR = 0;
      PFN_vkGetBufferMemoryRequirements2KHR vkGetBufferMemoryRequirements2KHR = 0;
      PFN_vkGetImageSparseMemoryRequirements2KHR vkGetImageSparseMemoryRequirements2KHR = 0;

  //=== VK_KHR_maintenance1 ===
      PFN_vkTrimCommandPoolKHR vkTrimCommandPoolKHR = 0;

  //=== VK_KHR_maintenance3 ===
      PFN_vkGetDescriptorSetLayoutSupportKHR vkGetDescriptorSetLayoutSupportKHR = 0;

  //=== VK_KHR_maintenance4 ===
      PFN_vkGetDeviceBufferMemoryRequirementsKHR vkGetDeviceBufferMemoryRequirementsKHR = 0;
      PFN_vkGetDeviceImageMemoryRequirementsKHR vkGetDeviceImageMemoryRequirementsKHR = 0;
      PFN_vkGetDeviceImageSparseMemoryRequirementsKHR vkGetDeviceImageSparseMemoryRequirementsKHR = 0;

  //=== VK_KHR_performance_query ===
      PFN_vkAcquireProfilingLockKHR vkAcquireProfilingLockKHR = 0;
      PFN_vkReleaseProfilingLockKHR vkReleaseProfilingLockKHR = 0;

  //=== VK_KHR_pipeline_executable_properties ===
      PFN_vkGetPipelineExecutablePropertiesKHR vkGetPipelineExecutablePropertiesKHR = 0;
      PFN_vkGetPipelineExecutableStatisticsKHR vkGetPipelineExecutableStatisticsKHR = 0;
      PFN_vkGetPipelineExecutableInternalRepresentationsKHR vkGetPipelineExecutableInternalRepresentationsKHR = 0;

  //=== VK_KHR_present_wait ===
      PFN_vkWaitForPresentKHR vkWaitForPresentKHR = 0;

  //=== VK_KHR_push_descriptor ===
      PFN_vkCmdPushDescriptorSetKHR vkCmdPushDescriptorSetKHR = 0;

  //=== VK_KHR_ray_tracing_maintenance1 ===
      PFN_vkCmdTraceRaysIndirect2KHR vkCmdTraceRaysIndirect2KHR = 0;

  //=== VK_KHR_ray_tracing_pipeline ===
      PFN_vkCmdTraceRaysKHR vkCmdTraceRaysKHR = 0;
      PFN_vkCreateRayTracingPipelinesKHR vkCreateRayTracingPipelinesKHR = 0;
      PFN_vkGetRayTracingShaderGroupHandlesKHR vkGetRayTracingShaderGroupHandlesKHR = 0;
      PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = 0;
      PFN_vkCmdTraceRaysIndirectKHR vkCmdTraceRaysIndirectKHR = 0;
      PFN_vkGetRayTracingShaderGroupStackSizeKHR vkGetRayTracingShaderGroupStackSizeKHR = 0;
      PFN_vkCmdSetRayTracingPipelineStackSizeKHR vkCmdSetRayTracingPipelineStackSizeKHR = 0;

  //=== VK_KHR_sampler_ycbcr_conversion ===
      PFN_vkCreateSamplerYcbcrConversionKHR vkCreateSamplerYcbcrConversionKHR = 0;
      PFN_vkDestroySamplerYcbcrConversionKHR vkDestroySamplerYcbcrConversionKHR = 0;

  //=== VK_KHR_shared_presentable_image ===
      PFN_vkGetSwapchainStatusKHR vkGetSwapchainStatusKHR = 0;

  //=== VK_KHR_swapchain ===
      PFN_vkCreateSwapchainKHR vkCreateSwapchainKHR = 0;
      PFN_vkDestroySwapchainKHR vkDestroySwapchainKHR = 0;
      PFN_vkGetSwapchainImagesKHR vkGetSwapchainImagesKHR = 0;
      PFN_vkAcquireNextImageKHR vkAcquireNextImageKHR = 0;
      PFN_vkQueuePresentKHR vkQueuePresentKHR = 0;

  //=== VK_KHR_synchronization2 ===
      PFN_vkCmdSetEvent2KHR vkCmdSetEvent2KHR = 0;
      PFN_vkCmdResetEvent2KHR vkCmdResetEvent2KHR = 0;
      PFN_vkCmdWaitEvents2KHR vkCmdWaitEvents2KHR = 0;
      PFN_vkCmdPipelineBarrier2KHR vkCmdPipelineBarrier2KHR = 0;
      PFN_vkCmdWriteTimestamp2KHR vkCmdWriteTimestamp2KHR = 0;
      PFN_vkQueueSubmit2KHR vkQueueSubmit2KHR = 0;
      PFN_vkCmdWriteBufferMarker2AMD vkCmdWriteBufferMarker2AMD = 0;
      PFN_vkGetQueueCheckpointData2NV vkGetQueueCheckpointData2NV = 0;

  //=== VK_KHR_timeline_semaphore ===
      PFN_vkGetSemaphoreCounterValueKHR vkGetSemaphoreCounterValueKHR = 0;
      PFN_vkWaitSemaphoresKHR vkWaitSemaphoresKHR = 0;
      PFN_vkSignalSemaphoreKHR vkSignalSemaphoreKHR = 0;

  //=== VK_KHR_video_decode_queue ===
      PFN_vkCmdDecodeVideoKHR vkCmdDecodeVideoKHR = 0;

#if defined( VK_ENABLE_BETA_EXTENSIONS )
  //=== VK_KHR_video_encode_queue ===
      PFN_vkCmdEncodeVideoKHR vkCmdEncodeVideoKHR = 0;
#else
      PFN_dummy vkCmdEncodeVideoKHR_placeholder = 0;
#endif /*VK_ENABLE_BETA_EXTENSIONS*/

  //=== VK_KHR_video_queue ===
      PFN_vkCreateVideoSessionKHR vkCreateVideoSessionKHR = 0;
      PFN_vkDestroyVideoSessionKHR vkDestroyVideoSessionKHR = 0;
      PFN_vkGetVideoSessionMemoryRequirementsKHR vkGetVideoSessionMemoryRequirementsKHR = 0;
      PFN_vkBindVideoSessionMemoryKHR vkBindVideoSessionMemoryKHR = 0;
      PFN_vkCreateVideoSessionParametersKHR vkCreateVideoSessionParametersKHR = 0;
      PFN_vkUpdateVideoSessionParametersKHR vkUpdateVideoSessionParametersKHR = 0;
      PFN_vkDestroyVideoSessionParametersKHR vkDestroyVideoSessionParametersKHR = 0;
      PFN_vkCmdBeginVideoCodingKHR vkCmdBeginVideoCodingKHR = 0;
      PFN_vkCmdEndVideoCodingKHR vkCmdEndVideoCodingKHR = 0;
      PFN_vkCmdControlVideoCodingKHR vkCmdControlVideoCodingKHR = 0;

  //=== VK_NVX_binary_import ===
      PFN_vkCreateCuModuleNVX vkCreateCuModuleNVX = 0;
      PFN_vkCreateCuFunctionNVX vkCreateCuFunctionNVX = 0;
      PFN_vkDestroyCuModuleNVX vkDestroyCuModuleNVX = 0;
      PFN_vkDestroyCuFunctionNVX vkDestroyCuFunctionNVX = 0;
      PFN_vkCmdCuLaunchKernelNVX vkCmdCuLaunchKernelNVX = 0;

  //=== VK_NVX_image_view_handle ===
      PFN_vkGetImageViewHandleNVX vkGetImageViewHandleNVX = 0;
      PFN_vkGetImageViewAddressNVX vkGetImageViewAddressNVX = 0;

  //=== VK_NV_clip_space_w_scaling ===
      PFN_vkCmdSetViewportWScalingNV vkCmdSetViewportWScalingNV = 0;

  //=== VK_NV_copy_memory_indirect ===
      PFN_vkCmdCopyMemoryIndirectNV vkCmdCopyMemoryIndirectNV = 0;
      PFN_vkCmdCopyMemoryToImageIndirectNV vkCmdCopyMemoryToImageIndirectNV = 0;

  //=== VK_NV_device_diagnostic_checkpoints ===
      PFN_vkCmdSetCheckpointNV vkCmdSetCheckpointNV = 0;
      PFN_vkGetQueueCheckpointDataNV vkGetQueueCheckpointDataNV = 0;

  //=== VK_NV_device_generated_commands ===
      PFN_vkGetGeneratedCommandsMemoryRequirementsNV vkGetGeneratedCommandsMemoryRequirementsNV = 0;
      PFN_vkCmdPreprocessGeneratedCommandsNV vkCmdPreprocessGeneratedCommandsNV = 0;
      PFN_vkCmdExecuteGeneratedCommandsNV vkCmdExecuteGeneratedCommandsNV = 0;
      PFN_vkCmdBindPipelineShaderGroupNV vkCmdBindPipelineShaderGroupNV = 0;
      PFN_vkCreateIndirectCommandsLayoutNV vkCreateIndirectCommandsLayoutNV = 0;
      PFN_vkDestroyIndirectCommandsLayoutNV vkDestroyIndirectCommandsLayoutNV = 0;

  //=== VK_NV_external_memory_rdma ===
      PFN_vkGetMemoryRemoteAddressNV vkGetMemoryRemoteAddressNV = 0;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_NV_external_memory_win32 ===
      PFN_vkGetMemoryWin32HandleNV vkGetMemoryWin32HandleNV = 0;
#else
      PFN_dummy vkGetMemoryWin32HandleNV_placeholder = 0;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_NV_fragment_shading_rate_enums ===
      PFN_vkCmdSetFragmentShadingRateEnumNV vkCmdSetFragmentShadingRateEnumNV = 0;

  //=== VK_NV_memory_decompression ===
      PFN_vkCmdDecompressMemoryNV vkCmdDecompressMemoryNV = 0;
      PFN_vkCmdDecompressMemoryIndirectCountNV vkCmdDecompressMemoryIndirectCountNV = 0;

  //=== VK_NV_mesh_shader ===
      PFN_vkCmdDrawMeshTasksNV vkCmdDrawMeshTasksNV = 0;
      PFN_vkCmdDrawMeshTasksIndirectNV vkCmdDrawMeshTasksIndirectNV = 0;
      PFN_vkCmdDrawMeshTasksIndirectCountNV vkCmdDrawMeshTasksIndirectCountNV = 0;

  //=== VK_NV_optical_flow ===
      PFN_vkCreateOpticalFlowSessionNV vkCreateOpticalFlowSessionNV = 0;
      PFN_vkDestroyOpticalFlowSessionNV vkDestroyOpticalFlowSessionNV = 0;
      PFN_vkBindOpticalFlowSessionImageNV vkBindOpticalFlowSessionImageNV = 0;
      PFN_vkCmdOpticalFlowExecuteNV vkCmdOpticalFlowExecuteNV = 0;

  //=== VK_NV_ray_tracing ===
      PFN_vkCreateAccelerationStructureNV vkCreateAccelerationStructureNV = 0;
      PFN_vkDestroyAccelerationStructureNV vkDestroyAccelerationStructureNV = 0;
      PFN_vkGetAccelerationStructureMemoryRequirementsNV vkGetAccelerationStructureMemoryRequirementsNV = 0;
      PFN_vkBindAccelerationStructureMemoryNV vkBindAccelerationStructureMemoryNV = 0;
      PFN_vkCmdBuildAccelerationStructureNV vkCmdBuildAccelerationStructureNV = 0;
      PFN_vkCmdCopyAccelerationStructureNV vkCmdCopyAccelerationStructureNV = 0;
      PFN_vkCmdTraceRaysNV vkCmdTraceRaysNV = 0;
      PFN_vkCreateRayTracingPipelinesNV vkCreateRayTracingPipelinesNV = 0;
      PFN_vkGetRayTracingShaderGroupHandlesNV vkGetRayTracingShaderGroupHandlesNV = 0;
      PFN_vkGetAccelerationStructureHandleNV vkGetAccelerationStructureHandleNV = 0;
      PFN_vkCmdWriteAccelerationStructuresPropertiesNV vkCmdWriteAccelerationStructuresPropertiesNV = 0;
      PFN_vkCompileDeferredNV vkCompileDeferredNV = 0;

  //=== VK_NV_scissor_exclusive ===
      PFN_vkCmdSetExclusiveScissorNV vkCmdSetExclusiveScissorNV = 0;

  //=== VK_NV_shading_rate_image ===
      PFN_vkCmdBindShadingRateImageNV vkCmdBindShadingRateImageNV = 0;
      PFN_vkCmdSetViewportShadingRatePaletteNV vkCmdSetViewportShadingRatePaletteNV = 0;
      PFN_vkCmdSetCoarseSampleOrderNV vkCmdSetCoarseSampleOrderNV = 0;

  //=== VK_QCOM_tile_properties ===
      PFN_vkGetFramebufferTilePropertiesQCOM vkGetFramebufferTilePropertiesQCOM = 0;
      PFN_vkGetDynamicRenderingTilePropertiesQCOM vkGetDynamicRenderingTilePropertiesQCOM = 0;

  //=== VK_VALVE_descriptor_set_host_mapping ===
      PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE vkGetDescriptorSetLayoutHostMappingInfoVALVE = 0;
      PFN_vkGetDescriptorSetHostMappingVALVE vkGetDescriptorSetHostMappingVALVE = 0;

    };


  //========================================
  //=== RAII HANDLE forward declarations ===
  //========================================


  //=== VK_VERSION_1_0 ===
  class Instance;
  class PhysicalDevice;
  class Device;
  class Queue;
  class DeviceMemory;
  class Fence;
  class Semaphore;
  class Event;
  class QueryPool;
  class Buffer;
  class BufferView;
  class Image;
  class ImageView;
  class ShaderModule;
  class PipelineCache;
  class Pipeline;
  class PipelineLayout;
  class Sampler;
  class DescriptorPool;
  class DescriptorSet;
  class DescriptorSetLayout;
  class Framebuffer;
  class RenderPass;
  class CommandPool;
  class CommandBuffer;

  //=== VK_VERSION_1_1 ===
  class SamplerYcbcrConversion;
  class DescriptorUpdateTemplate;

  //=== VK_VERSION_1_3 ===
  class PrivateDataSlot;

  //=== VK_KHR_surface ===
  class SurfaceKHR;

  //=== VK_KHR_swapchain ===
  class SwapchainKHR;

  //=== VK_KHR_display ===
  class DisplayKHR;
  class DisplayModeKHR;

  //=== VK_EXT_debug_report ===
  class DebugReportCallbackEXT;

  //=== VK_KHR_video_queue ===
  class VideoSessionKHR;
  class VideoSessionParametersKHR;

  //=== VK_NVX_binary_import ===
  class CuModuleNVX;
  class CuFunctionNVX;

  //=== VK_EXT_debug_utils ===
  class DebugUtilsMessengerEXT;

  //=== VK_KHR_acceleration_structure ===
  class AccelerationStructureKHR;

  //=== VK_EXT_validation_cache ===
  class ValidationCacheEXT;

  //=== VK_NV_ray_tracing ===
  class AccelerationStructureNV;

  //=== VK_INTEL_performance_query ===
  class PerformanceConfigurationINTEL;

  //=== VK_KHR_deferred_host_operations ===
  class DeferredOperationKHR;

  //=== VK_NV_device_generated_commands ===
  class IndirectCommandsLayoutNV;

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_buffer_collection ===
  class BufferCollectionFUCHSIA;
#endif /*VK_USE_PLATFORM_FUCHSIA*/

  //=== VK_EXT_opacity_micromap ===
  class MicromapEXT;

  //=== VK_NV_optical_flow ===
  class OpticalFlowSessionNV;


  //====================
  //=== RAII HANDLES ===
  //====================


    class Context
    {
    public:
#if VULKAN_HPP_ENABLE_DYNAMIC_LOADER_TOOL
      Context()
        : m_dispatcher( new VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::ContextDispatcher(
            m_dynamicLoader.getProcAddress<PFN_vkGetInstanceProcAddr>( "vkGetInstanceProcAddr" ) ) )
#else
      Context( PFN_vkGetInstanceProcAddr getInstanceProcAddr )
        : m_dispatcher( new VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::ContextDispatcher( getInstanceProcAddr ) )
#endif
      {}

      ~Context() = default;

      Context( Context const & ) = delete;
      Context( Context && rhs ) VULKAN_HPP_NOEXCEPT
#if VULKAN_HPP_ENABLE_DYNAMIC_LOADER_TOOL
        : m_dynamicLoader( std::move( rhs.m_dynamicLoader ) )
        , m_dispatcher( rhs.m_dispatcher.release() )
#else
        : m_dispatcher( rhs.m_dispatcher.release() )
#endif
      {}
      Context & operator=( Context const & ) = delete;
      Context & operator=( Context && rhs ) VULKAN_HPP_NOEXCEPT
      {
        if ( this != &rhs )
        {
#if VULKAN_HPP_ENABLE_DYNAMIC_LOADER_TOOL
          m_dynamicLoader = std::move( rhs.m_dynamicLoader );
#endif
          m_dispatcher.reset( rhs.m_dispatcher.release() );
        }
        return *this;
      }

      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::ContextDispatcher const * getDispatcher() const
      {
        VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
        return &*m_dispatcher;
      }

      void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Context & rhs )
      {
#if VULKAN_HPP_ENABLE_DYNAMIC_LOADER_TOOL
        std::swap( m_dynamicLoader, rhs.m_dynamicLoader );
#endif
        m_dispatcher.swap( rhs.m_dispatcher );
      }


  //=== VK_VERSION_1_0 ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Instance createInstance( VULKAN_HPP_NAMESPACE::InstanceCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::ExtensionProperties> enumerateInstanceExtensionProperties( Optional<const std::string> layerName VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::LayerProperties> enumerateInstanceLayerProperties(  ) const ;

  //=== VK_VERSION_1_1 ===


    VULKAN_HPP_NODISCARD  uint32_t enumerateInstanceVersion(  ) const ;


    private:
#if VULKAN_HPP_ENABLE_DYNAMIC_LOADER_TOOL
      VULKAN_HPP_NAMESPACE::DynamicLoader                                                 m_dynamicLoader;
#endif
      std::unique_ptr<VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::ContextDispatcher> m_dispatcher;
    };


  class Instance
  {
  public:
    using CType = VkInstance;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eInstance;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eInstance;

  public:

    Instance( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Context const & context, VULKAN_HPP_NAMESPACE::InstanceCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( context.getDispatcher()->vkCreateInstance( reinterpret_cast<const VkInstanceCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkInstance*>( &m_instance ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateInstance" );
      }
        m_dispatcher.reset( new VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher( context.getDispatcher()->vkGetInstanceProcAddr, static_cast<VkInstance>( m_instance ) ) );
    }

    Instance( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Context const & context, VkInstance instance, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) )
    {
        m_dispatcher.reset( new VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher( context.getDispatcher()->vkGetInstanceProcAddr, static_cast<VkInstance>( m_instance ) ) );}

    Instance( std::nullptr_t ) {}

    ~Instance()
    {
      clear();
    }

    Instance() = delete;
      Instance( Instance const & ) = delete;
    Instance( Instance && rhs ) VULKAN_HPP_NOEXCEPT
      : m_instance( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_instance, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( rhs.m_dispatcher.release() )
    {}
      Instance & operator=( Instance const & ) = delete;
    Instance & operator=( Instance && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_instance = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_instance, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher.reset( rhs.m_dispatcher.release() );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::Instance const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_instance;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_instance )
        {
          getDispatcher()->vkDestroyInstance( static_cast<VkInstance>( m_instance ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_instance = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::Instance release()
    {

      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_instance, nullptr );
    }



    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return &*m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_instance, rhs.m_instance );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===

  VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_RAII_NAMESPACE::PhysicalDevice> enumeratePhysicalDevices(  ) const;


    VULKAN_HPP_NODISCARD  PFN_vkVoidFunction getProcAddr( const std::string & name ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_VERSION_1_1 ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties> enumeratePhysicalDeviceGroups(  ) const ;

  //=== VK_KHR_display ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createDisplayPlaneSurfaceKHR( VULKAN_HPP_NAMESPACE::DisplaySurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

#if defined( VK_USE_PLATFORM_XLIB_KHR )
  //=== VK_KHR_xlib_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createXlibSurfaceKHR( VULKAN_HPP_NAMESPACE::XlibSurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;
#endif /*VK_USE_PLATFORM_XLIB_KHR*/

#if defined( VK_USE_PLATFORM_XCB_KHR )
  //=== VK_KHR_xcb_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createXcbSurfaceKHR( VULKAN_HPP_NAMESPACE::XcbSurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;
#endif /*VK_USE_PLATFORM_XCB_KHR*/

#if defined( VK_USE_PLATFORM_WAYLAND_KHR )
  //=== VK_KHR_wayland_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createWaylandSurfaceKHR( VULKAN_HPP_NAMESPACE::WaylandSurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;
#endif /*VK_USE_PLATFORM_WAYLAND_KHR*/

#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  //=== VK_KHR_android_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createAndroidSurfaceKHR( VULKAN_HPP_NAMESPACE::AndroidSurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;
#endif /*VK_USE_PLATFORM_ANDROID_KHR*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_win32_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createWin32SurfaceKHR( VULKAN_HPP_NAMESPACE::Win32SurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_EXT_debug_report ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::DebugReportCallbackEXT createDebugReportCallbackEXT( VULKAN_HPP_NAMESPACE::DebugReportCallbackCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


     void debugReportMessageEXT( VULKAN_HPP_NAMESPACE::DebugReportFlagsEXT flags, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT objectType_, uint64_t object, size_t location, int32_t messageCode, const std::string & layerPrefix, const std::string & message ) const  VULKAN_HPP_NOEXCEPT;

#if defined( VK_USE_PLATFORM_GGP )
  //=== VK_GGP_stream_descriptor_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createStreamDescriptorSurfaceGGP( VULKAN_HPP_NAMESPACE::StreamDescriptorSurfaceCreateInfoGGP const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;
#endif /*VK_USE_PLATFORM_GGP*/

#if defined( VK_USE_PLATFORM_VI_NN )
  //=== VK_NN_vi_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createViSurfaceNN( VULKAN_HPP_NAMESPACE::ViSurfaceCreateInfoNN const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;
#endif /*VK_USE_PLATFORM_VI_NN*/

  //=== VK_KHR_device_group_creation ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties> enumeratePhysicalDeviceGroupsKHR(  ) const ;

#if defined( VK_USE_PLATFORM_IOS_MVK )
  //=== VK_MVK_ios_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createIOSSurfaceMVK( VULKAN_HPP_NAMESPACE::IOSSurfaceCreateInfoMVK const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;
#endif /*VK_USE_PLATFORM_IOS_MVK*/

#if defined( VK_USE_PLATFORM_MACOS_MVK )
  //=== VK_MVK_macos_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createMacOSSurfaceMVK( VULKAN_HPP_NAMESPACE::MacOSSurfaceCreateInfoMVK const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;
#endif /*VK_USE_PLATFORM_MACOS_MVK*/

  //=== VK_EXT_debug_utils ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::DebugUtilsMessengerEXT createDebugUtilsMessengerEXT( VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


     void submitDebugUtilsMessageEXT( VULKAN_HPP_NAMESPACE::DebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VULKAN_HPP_NAMESPACE::DebugUtilsMessageTypeFlagsEXT messageTypes, const VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCallbackDataEXT & callbackData ) const  VULKAN_HPP_NOEXCEPT;

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_imagepipe_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createImagePipeSurfaceFUCHSIA( VULKAN_HPP_NAMESPACE::ImagePipeSurfaceCreateInfoFUCHSIA const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_METAL_EXT )
  //=== VK_EXT_metal_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createMetalSurfaceEXT( VULKAN_HPP_NAMESPACE::MetalSurfaceCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;
#endif /*VK_USE_PLATFORM_METAL_EXT*/

  //=== VK_EXT_headless_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createHeadlessSurfaceEXT( VULKAN_HPP_NAMESPACE::HeadlessSurfaceCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

#if defined( VK_USE_PLATFORM_DIRECTFB_EXT )
  //=== VK_EXT_directfb_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createDirectFBSurfaceEXT( VULKAN_HPP_NAMESPACE::DirectFBSurfaceCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;
#endif /*VK_USE_PLATFORM_DIRECTFB_EXT*/

#if defined( VK_USE_PLATFORM_SCREEN_QNX )
  //=== VK_QNX_screen_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR createScreenSurfaceQNX( VULKAN_HPP_NAMESPACE::ScreenSurfaceCreateInfoQNX const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;
#endif /*VK_USE_PLATFORM_SCREEN_QNX*/


  private:

    VULKAN_HPP_NAMESPACE::Instance m_instance = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      std::unique_ptr<VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher> m_dispatcher;
  };

  class PhysicalDevice
  {
  public:
    using CType = VkPhysicalDevice;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::ePhysicalDevice;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::ePhysicalDevice;

  public:

    PhysicalDevice( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VkPhysicalDevice physicalDevice )
      : m_physicalDevice( physicalDevice ), m_dispatcher( instance.getDispatcher() )
    {}

    PhysicalDevice( std::nullptr_t ) {}

    ~PhysicalDevice()
    {
      clear();
    }

    PhysicalDevice() = delete;
      PhysicalDevice( PhysicalDevice const & rhs ) : m_physicalDevice( rhs.m_physicalDevice ), m_dispatcher( rhs.m_dispatcher ) {}
    PhysicalDevice( PhysicalDevice && rhs ) VULKAN_HPP_NOEXCEPT
      : m_physicalDevice( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_physicalDevice, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      PhysicalDevice & operator=( PhysicalDevice const & rhs )
      {
        m_physicalDevice = rhs.m_physicalDevice;
        m_dispatcher    = rhs.m_dispatcher;
        return *this;
      }
    PhysicalDevice & operator=( PhysicalDevice && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {

          m_physicalDevice = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_physicalDevice, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::PhysicalDevice const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_physicalDevice;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {

        m_physicalDevice = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::PhysicalDevice release()
    {

        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_physicalDevice, nullptr );
    }



    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PhysicalDevice & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_physicalDevice, rhs.m_physicalDevice );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures getFeatures(  ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::FormatProperties getFormatProperties( VULKAN_HPP_NAMESPACE::Format format ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ImageFormatProperties getImageFormatProperties( VULKAN_HPP_NAMESPACE::Format format, VULKAN_HPP_NAMESPACE::ImageType type, VULKAN_HPP_NAMESPACE::ImageTiling tiling, VULKAN_HPP_NAMESPACE::ImageUsageFlags usage, VULKAN_HPP_NAMESPACE::ImageCreateFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties getProperties(  ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties> getQueueFamilyProperties(  ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties getMemoryProperties(  ) const  VULKAN_HPP_NOEXCEPT;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Device createDevice( VULKAN_HPP_NAMESPACE::DeviceCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::ExtensionProperties> enumerateDeviceExtensionProperties( Optional<const std::string> layerName VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::LayerProperties> enumerateDeviceLayerProperties(  ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties> getSparseImageFormatProperties( VULKAN_HPP_NAMESPACE::Format format, VULKAN_HPP_NAMESPACE::ImageType type, VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples, VULKAN_HPP_NAMESPACE::ImageUsageFlags usage, VULKAN_HPP_NAMESPACE::ImageTiling tiling ) const ;

  //=== VK_VERSION_1_1 ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures2 getFeatures2(  ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getFeatures2(  ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties2 getProperties2(  ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getProperties2(  ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::FormatProperties2 getFormatProperties2( VULKAN_HPP_NAMESPACE::Format format ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getFormatProperties2( VULKAN_HPP_NAMESPACE::Format format ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ImageFormatProperties2 getImageFormatProperties2( const VULKAN_HPP_NAMESPACE::PhysicalDeviceImageFormatInfo2 & imageFormatInfo ) const ;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getImageFormatProperties2( const VULKAN_HPP_NAMESPACE::PhysicalDeviceImageFormatInfo2 & imageFormatInfo ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2> getQueueFamilyProperties2(  ) const ;

    template <typename StructureChain>
    VULKAN_HPP_NODISCARD  std::vector<StructureChain> getQueueFamilyProperties2(  ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties2 getMemoryProperties2(  ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getMemoryProperties2(  ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2> getSparseImageFormatProperties2( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSparseImageFormatInfo2 & formatInfo ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ExternalBufferProperties getExternalBufferProperties( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalBufferInfo & externalBufferInfo ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ExternalFenceProperties getExternalFenceProperties( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalFenceInfo & externalFenceInfo ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ExternalSemaphoreProperties getExternalSemaphoreProperties( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalSemaphoreInfo & externalSemaphoreInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_VERSION_1_3 ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties> getToolProperties(  ) const ;

  //=== VK_KHR_surface ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Bool32 getSurfaceSupportKHR( uint32_t queueFamilyIndex, VULKAN_HPP_NAMESPACE::SurfaceKHR surface ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::SurfaceCapabilitiesKHR getSurfaceCapabilitiesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::SurfaceFormatKHR> getSurfaceFormatsKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::PresentModeKHR> getSurfacePresentModesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const ;

  //=== VK_KHR_swapchain ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::Rect2D> getPresentRectanglesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface ) const ;

  //=== VK_KHR_display ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::DisplayPropertiesKHR> getDisplayPropertiesKHR(  ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::DisplayPlanePropertiesKHR> getDisplayPlanePropertiesKHR(  ) const ;

  VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_RAII_NAMESPACE::DisplayKHR> getDisplayPlaneSupportedDisplaysKHR( uint32_t planeIndex ) const;

#if defined( VK_USE_PLATFORM_XLIB_KHR )
  //=== VK_KHR_xlib_surface ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Bool32 getXlibPresentationSupportKHR( uint32_t queueFamilyIndex, Display & dpy, VisualID visualID ) const  VULKAN_HPP_NOEXCEPT;
#endif /*VK_USE_PLATFORM_XLIB_KHR*/

#if defined( VK_USE_PLATFORM_XCB_KHR )
  //=== VK_KHR_xcb_surface ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Bool32 getXcbPresentationSupportKHR( uint32_t queueFamilyIndex, xcb_connection_t & connection, xcb_visualid_t visual_id ) const  VULKAN_HPP_NOEXCEPT;
#endif /*VK_USE_PLATFORM_XCB_KHR*/

#if defined( VK_USE_PLATFORM_WAYLAND_KHR )
  //=== VK_KHR_wayland_surface ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Bool32 getWaylandPresentationSupportKHR( uint32_t queueFamilyIndex, struct wl_display & display ) const  VULKAN_HPP_NOEXCEPT;
#endif /*VK_USE_PLATFORM_WAYLAND_KHR*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_win32_surface ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Bool32 getWin32PresentationSupportKHR( uint32_t queueFamilyIndex ) const  VULKAN_HPP_NOEXCEPT;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_video_queue ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::VideoCapabilitiesKHR getVideoCapabilitiesKHR( const VULKAN_HPP_NAMESPACE::VideoProfileInfoKHR & videoProfile ) const ;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getVideoCapabilitiesKHR( const VULKAN_HPP_NAMESPACE::VideoProfileInfoKHR & videoProfile ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::VideoFormatPropertiesKHR> getVideoFormatPropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceVideoFormatInfoKHR & videoFormatInfo ) const ;

  //=== VK_NV_external_memory_capabilities ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ExternalImageFormatPropertiesNV getExternalImageFormatPropertiesNV( VULKAN_HPP_NAMESPACE::Format format, VULKAN_HPP_NAMESPACE::ImageType type, VULKAN_HPP_NAMESPACE::ImageTiling tiling, VULKAN_HPP_NAMESPACE::ImageUsageFlags usage, VULKAN_HPP_NAMESPACE::ImageCreateFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT, VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV externalHandleType VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const ;

  //=== VK_KHR_get_physical_device_properties2 ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures2 getFeatures2KHR(  ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getFeatures2KHR(  ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties2 getProperties2KHR(  ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getProperties2KHR(  ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::FormatProperties2 getFormatProperties2KHR( VULKAN_HPP_NAMESPACE::Format format ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getFormatProperties2KHR( VULKAN_HPP_NAMESPACE::Format format ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ImageFormatProperties2 getImageFormatProperties2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceImageFormatInfo2 & imageFormatInfo ) const ;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getImageFormatProperties2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceImageFormatInfo2 & imageFormatInfo ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2> getQueueFamilyProperties2KHR(  ) const ;

    template <typename StructureChain>
    VULKAN_HPP_NODISCARD  std::vector<StructureChain> getQueueFamilyProperties2KHR(  ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties2 getMemoryProperties2KHR(  ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getMemoryProperties2KHR(  ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2> getSparseImageFormatProperties2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSparseImageFormatInfo2 & formatInfo ) const ;

  //=== VK_KHR_external_memory_capabilities ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ExternalBufferProperties getExternalBufferPropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalBufferInfo & externalBufferInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_external_semaphore_capabilities ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ExternalSemaphoreProperties getExternalSemaphorePropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalSemaphoreInfo & externalSemaphoreInfo ) const  VULKAN_HPP_NOEXCEPT;

#if defined( VK_USE_PLATFORM_XLIB_XRANDR_EXT )
  //=== VK_EXT_acquire_xlib_display ===


     void acquireXlibDisplayEXT( Display & dpy, VULKAN_HPP_NAMESPACE::DisplayKHR display ) const ;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::DisplayKHR getRandROutputDisplayEXT( Display & dpy, RROutput rrOutput ) const;
#endif /*VK_USE_PLATFORM_XLIB_XRANDR_EXT*/

  //=== VK_EXT_display_surface_counter ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::SurfaceCapabilities2EXT getSurfaceCapabilities2EXT( VULKAN_HPP_NAMESPACE::SurfaceKHR surface ) const ;

  //=== VK_KHR_external_fence_capabilities ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ExternalFenceProperties getExternalFencePropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalFenceInfo & externalFenceInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_performance_query ===


    VULKAN_HPP_NODISCARD  std::pair<std::vector<VULKAN_HPP_NAMESPACE::PerformanceCounterKHR>, std::vector<VULKAN_HPP_NAMESPACE::PerformanceCounterDescriptionKHR>> enumerateQueueFamilyPerformanceQueryCountersKHR( uint32_t queueFamilyIndex ) const ;


    VULKAN_HPP_NODISCARD  uint32_t getQueueFamilyPerformanceQueryPassesKHR( const VULKAN_HPP_NAMESPACE::QueryPoolPerformanceCreateInfoKHR & performanceQueryCreateInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_get_surface_capabilities2 ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::SurfaceCapabilities2KHR getSurfaceCapabilities2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo ) const ;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getSurfaceCapabilities2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::SurfaceFormat2KHR> getSurfaceFormats2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo ) const ;

    template <typename StructureChain>
    VULKAN_HPP_NODISCARD  std::vector<StructureChain> getSurfaceFormats2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo ) const ;

  //=== VK_KHR_get_display_properties2 ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::DisplayProperties2KHR> getDisplayProperties2KHR(  ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::DisplayPlaneProperties2KHR> getDisplayPlaneProperties2KHR(  ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DisplayPlaneCapabilities2KHR getDisplayPlaneCapabilities2KHR( const VULKAN_HPP_NAMESPACE::DisplayPlaneInfo2KHR & displayPlaneInfo ) const ;

  //=== VK_EXT_sample_locations ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MultisamplePropertiesEXT getMultisamplePropertiesEXT( VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_calibrated_timestamps ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::TimeDomainEXT> getCalibrateableTimeDomainsEXT(  ) const ;

  //=== VK_KHR_fragment_shading_rate ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceFragmentShadingRateKHR> getFragmentShadingRatesKHR(  ) const ;

  //=== VK_EXT_tooling_info ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties> getToolPropertiesEXT(  ) const ;

  //=== VK_NV_cooperative_matrix ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::CooperativeMatrixPropertiesNV> getCooperativeMatrixPropertiesNV(  ) const ;

  //=== VK_NV_coverage_reduction_mode ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::FramebufferMixedSamplesCombinationNV> getSupportedFramebufferMixedSamplesCombinationsNV(  ) const ;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_EXT_full_screen_exclusive ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::PresentModeKHR> getSurfacePresentModes2EXT( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo ) const ;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_EXT_acquire_drm_display ===


     void acquireDrmDisplayEXT( int32_t drmFd, VULKAN_HPP_NAMESPACE::DisplayKHR display ) const ;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::DisplayKHR getDrmDisplayEXT( int32_t drmFd, uint32_t connectorId ) const;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_NV_acquire_winrt_display ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::DisplayKHR getWinrtDisplayNV( uint32_t deviceRelativeId ) const;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

#if defined( VK_USE_PLATFORM_DIRECTFB_EXT )
  //=== VK_EXT_directfb_surface ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Bool32 getDirectFBPresentationSupportEXT( uint32_t queueFamilyIndex, IDirectFB & dfb ) const  VULKAN_HPP_NOEXCEPT;
#endif /*VK_USE_PLATFORM_DIRECTFB_EXT*/

#if defined( VK_USE_PLATFORM_SCREEN_QNX )
  //=== VK_QNX_screen_surface ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Bool32 getScreenPresentationSupportQNX( uint32_t queueFamilyIndex, struct _screen_window & window ) const  VULKAN_HPP_NOEXCEPT;
#endif /*VK_USE_PLATFORM_SCREEN_QNX*/

  //=== VK_NV_optical_flow ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::OpticalFlowImageFormatPropertiesNV> getOpticalFlowImageFormatsNV( const VULKAN_HPP_NAMESPACE::OpticalFlowImageFormatInfoNV & opticalFlowImageFormatInfo ) const ;


  private:

    VULKAN_HPP_NAMESPACE::PhysicalDevice m_physicalDevice = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * m_dispatcher = nullptr;
  };

  class PhysicalDevices : public std::vector<VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PhysicalDevice>
  {
  public:

    PhysicalDevices( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance )
    {
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * dispatcher = instance.getDispatcher();
      std::vector<VkPhysicalDevice> physicalDevices;
      uint32_t physicalDeviceCount;
      VULKAN_HPP_NAMESPACE::Result result;
      do
      {
        result = static_cast<VULKAN_HPP_NAMESPACE::Result>( dispatcher->vkEnumeratePhysicalDevices( static_cast<VkInstance>( *instance ), &physicalDeviceCount, nullptr ) );
        if ( ( result == VULKAN_HPP_NAMESPACE::Result::eSuccess ) && physicalDeviceCount )
        {
          physicalDevices.resize( physicalDeviceCount );
          result = static_cast<VULKAN_HPP_NAMESPACE::Result>( dispatcher->vkEnumeratePhysicalDevices( static_cast<VkInstance>( *instance ), &physicalDeviceCount, physicalDevices.data() ) );
        }
      } while ( result == VULKAN_HPP_NAMESPACE::Result::eIncomplete );
      if ( result == VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        VULKAN_HPP_ASSERT( physicalDeviceCount <= physicalDevices.size() );
        this->reserve( physicalDeviceCount );
        for ( auto const & physicalDevice : physicalDevices )
        {
          this->emplace_back( instance, physicalDevice );
        }
      }
      else
      {
        throwResultException( result, "vkEnumeratePhysicalDevices" );
      }
    }

    PhysicalDevices( std::nullptr_t ) {}

    PhysicalDevices() = delete;
    PhysicalDevices( PhysicalDevices const & ) = delete;
    PhysicalDevices( PhysicalDevices && rhs ) = default;
    PhysicalDevices & operator=( PhysicalDevices const & ) = delete;
    PhysicalDevices & operator=( PhysicalDevices && rhs ) = default;
  };


  class Device
  {
  public:
    using CType = VkDevice;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDevice;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDevice;

  public:

    Device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PhysicalDevice const & physicalDevice, VULKAN_HPP_NAMESPACE::DeviceCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( physicalDevice.getDispatcher()->vkCreateDevice( static_cast<VkPhysicalDevice>( *physicalDevice ), reinterpret_cast<const VkDeviceCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkDevice*>( &m_device ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateDevice" );
      }
        m_dispatcher.reset( new VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher( physicalDevice.getDispatcher()->vkGetDeviceProcAddr, static_cast<VkDevice>( m_device ) ) );
    }

    Device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PhysicalDevice const & physicalDevice, VkDevice device, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) )
    {
        m_dispatcher.reset( new VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher( physicalDevice.getDispatcher()->vkGetDeviceProcAddr, static_cast<VkDevice>( m_device ) ) );}

    Device( std::nullptr_t ) {}

    ~Device()
    {
      clear();
    }

    Device() = delete;
      Device( Device const & ) = delete;
    Device( Device && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( rhs.m_dispatcher.release() )
    {}
      Device & operator=( Device const & ) = delete;
    Device & operator=( Device && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher.reset( rhs.m_dispatcher.release() );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::Device const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_device;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_device )
        {
          getDispatcher()->vkDestroyDevice( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::Device release()
    {

      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_device, nullptr );
    }



    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return &*m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===


    VULKAN_HPP_NODISCARD  PFN_vkVoidFunction getProcAddr( const std::string & name ) const  VULKAN_HPP_NOEXCEPT;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Queue getQueue( uint32_t queueFamilyIndex, uint32_t queueIndex ) const;


     void waitIdle(  ) const ;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::DeviceMemory allocateMemory( VULKAN_HPP_NAMESPACE::MemoryAllocateInfo const & allocateInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


     void flushMappedMemoryRanges( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MappedMemoryRange> const & memoryRanges ) const ;


     void invalidateMappedMemoryRanges( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MappedMemoryRange> const & memoryRanges ) const ;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Fence createFence( VULKAN_HPP_NAMESPACE::FenceCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


     void resetFences( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Fence> const & fences ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result waitForFences( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Fence> const & fences, VULKAN_HPP_NAMESPACE::Bool32 waitAll, uint64_t timeout ) const ;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Semaphore createSemaphore( VULKAN_HPP_NAMESPACE::SemaphoreCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Event createEvent( VULKAN_HPP_NAMESPACE::EventCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::QueryPool createQueryPool( VULKAN_HPP_NAMESPACE::QueryPoolCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Buffer createBuffer( VULKAN_HPP_NAMESPACE::BufferCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::BufferView createBufferView( VULKAN_HPP_NAMESPACE::BufferViewCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Image createImage( VULKAN_HPP_NAMESPACE::ImageCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::ImageView createImageView( VULKAN_HPP_NAMESPACE::ImageViewCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::ShaderModule createShaderModule( VULKAN_HPP_NAMESPACE::ShaderModuleCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::PipelineCache createPipelineCache( VULKAN_HPP_NAMESPACE::PipelineCacheCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_RAII_NAMESPACE::Pipeline> createGraphicsPipelines( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::GraphicsPipelineCreateInfo> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Pipeline createGraphicsPipeline( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::GraphicsPipelineCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_RAII_NAMESPACE::Pipeline> createComputePipelines( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::ComputePipelineCreateInfo> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Pipeline createComputePipeline( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ComputePipelineCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::PipelineLayout createPipelineLayout( VULKAN_HPP_NAMESPACE::PipelineLayoutCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Sampler createSampler( VULKAN_HPP_NAMESPACE::SamplerCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::DescriptorSetLayout createDescriptorSetLayout( VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::DescriptorPool createDescriptorPool( VULKAN_HPP_NAMESPACE::DescriptorPoolCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_RAII_NAMESPACE::DescriptorSet> allocateDescriptorSets( VULKAN_HPP_NAMESPACE::DescriptorSetAllocateInfo const & allocateInfo ) const;


     void updateDescriptorSets( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::WriteDescriptorSet> const & descriptorWrites, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::CopyDescriptorSet> const & descriptorCopies ) const  VULKAN_HPP_NOEXCEPT;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Framebuffer createFramebuffer( VULKAN_HPP_NAMESPACE::FramebufferCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::RenderPass createRenderPass( VULKAN_HPP_NAMESPACE::RenderPassCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::CommandPool createCommandPool( VULKAN_HPP_NAMESPACE::CommandPoolCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_RAII_NAMESPACE::CommandBuffer> allocateCommandBuffers( VULKAN_HPP_NAMESPACE::CommandBufferAllocateInfo const & allocateInfo ) const;

  //=== VK_VERSION_1_1 ===


     void bindBufferMemory2( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BindBufferMemoryInfo> const & bindInfos ) const ;


     void bindImageMemory2( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BindImageMemoryInfo> const & bindInfos ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::PeerMemoryFeatureFlags getGroupPeerMemoryFeatures( uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryRequirements2 getImageMemoryRequirements2( const VULKAN_HPP_NAMESPACE::ImageMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getImageMemoryRequirements2( const VULKAN_HPP_NAMESPACE::ImageMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryRequirements2 getBufferMemoryRequirements2( const VULKAN_HPP_NAMESPACE::BufferMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getBufferMemoryRequirements2( const VULKAN_HPP_NAMESPACE::BufferMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2> getImageSparseMemoryRequirements2( const VULKAN_HPP_NAMESPACE::ImageSparseMemoryRequirementsInfo2 & info ) const ;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Queue getQueue2( VULKAN_HPP_NAMESPACE::DeviceQueueInfo2 const & queueInfo ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SamplerYcbcrConversion createSamplerYcbcrConversion( VULKAN_HPP_NAMESPACE::SamplerYcbcrConversionCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::DescriptorUpdateTemplate createDescriptorUpdateTemplate( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplateCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DescriptorSetLayoutSupport getDescriptorSetLayoutSupport( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo & createInfo ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getDescriptorSetLayoutSupport( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo & createInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_VERSION_1_2 ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::RenderPass createRenderPass2( VULKAN_HPP_NAMESPACE::RenderPassCreateInfo2 const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result waitSemaphores( const VULKAN_HPP_NAMESPACE::SemaphoreWaitInfo & waitInfo, uint64_t timeout ) const ;


     void signalSemaphore( const VULKAN_HPP_NAMESPACE::SemaphoreSignalInfo & signalInfo ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DeviceAddress getBufferAddress( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  uint64_t getBufferOpaqueCaptureAddress( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  uint64_t getMemoryOpaqueCaptureAddress( const VULKAN_HPP_NAMESPACE::DeviceMemoryOpaqueCaptureAddressInfo & info ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_VERSION_1_3 ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::PrivateDataSlot createPrivateDataSlot( VULKAN_HPP_NAMESPACE::PrivateDataSlotCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


     void setPrivateData( VULKAN_HPP_NAMESPACE::ObjectType objectType_, uint64_t objectHandle, VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot, uint64_t data ) const ;


    VULKAN_HPP_NODISCARD  uint64_t getPrivateData( VULKAN_HPP_NAMESPACE::ObjectType objectType_, uint64_t objectHandle, VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryRequirements2 getBufferMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceBufferMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getBufferMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceBufferMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryRequirements2 getImageMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getImageMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2> getImageSparseMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info ) const ;

  //=== VK_KHR_swapchain ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SwapchainKHR createSwapchainKHR( VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DeviceGroupPresentCapabilitiesKHR getGroupPresentCapabilitiesKHR(  ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DeviceGroupPresentModeFlagsKHR getGroupSurfacePresentModesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface ) const ;


    VULKAN_HPP_NODISCARD  std::pair<VULKAN_HPP_NAMESPACE::Result, uint32_t> acquireNextImage2KHR( const VULKAN_HPP_NAMESPACE::AcquireNextImageInfoKHR & acquireInfo ) const ;

  //=== VK_KHR_display_swapchain ===

  VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_RAII_NAMESPACE::SwapchainKHR> createSharedSwapchainsKHR( VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SwapchainKHR createSharedSwapchainKHR( VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  //=== VK_EXT_debug_marker ===


     void debugMarkerSetObjectTagEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerObjectTagInfoEXT & tagInfo ) const ;


     void debugMarkerSetObjectNameEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerObjectNameInfoEXT & nameInfo ) const ;

  //=== VK_KHR_video_queue ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::VideoSessionKHR createVideoSessionKHR( VULKAN_HPP_NAMESPACE::VideoSessionCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::VideoSessionParametersKHR createVideoSessionParametersKHR( VULKAN_HPP_NAMESPACE::VideoSessionParametersCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  //=== VK_NVX_binary_import ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::CuModuleNVX createCuModuleNVX( VULKAN_HPP_NAMESPACE::CuModuleCreateInfoNVX const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::CuFunctionNVX createCuFunctionNVX( VULKAN_HPP_NAMESPACE::CuFunctionCreateInfoNVX const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  //=== VK_NVX_image_view_handle ===


    VULKAN_HPP_NODISCARD  uint32_t getImageViewHandleNVX( const VULKAN_HPP_NAMESPACE::ImageViewHandleInfoNVX & info ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_device_group ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::PeerMemoryFeatureFlags getGroupPeerMemoryFeaturesKHR( uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex ) const  VULKAN_HPP_NOEXCEPT;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_memory_win32 ===


    VULKAN_HPP_NODISCARD  HANDLE getMemoryWin32HandleKHR( const VULKAN_HPP_NAMESPACE::MemoryGetWin32HandleInfoKHR & getWin32HandleInfo ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryWin32HandlePropertiesKHR getMemoryWin32HandlePropertiesKHR( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType, HANDLE handle ) const ;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_external_memory_fd ===


    VULKAN_HPP_NODISCARD  int getMemoryFdKHR( const VULKAN_HPP_NAMESPACE::MemoryGetFdInfoKHR & getFdInfo ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryFdPropertiesKHR getMemoryFdPropertiesKHR( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType, int fd ) const ;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_semaphore_win32 ===


     void importSemaphoreWin32HandleKHR( const VULKAN_HPP_NAMESPACE::ImportSemaphoreWin32HandleInfoKHR & importSemaphoreWin32HandleInfo ) const ;


    VULKAN_HPP_NODISCARD  HANDLE getSemaphoreWin32HandleKHR( const VULKAN_HPP_NAMESPACE::SemaphoreGetWin32HandleInfoKHR & getWin32HandleInfo ) const ;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_external_semaphore_fd ===


     void importSemaphoreFdKHR( const VULKAN_HPP_NAMESPACE::ImportSemaphoreFdInfoKHR & importSemaphoreFdInfo ) const ;


    VULKAN_HPP_NODISCARD  int getSemaphoreFdKHR( const VULKAN_HPP_NAMESPACE::SemaphoreGetFdInfoKHR & getFdInfo ) const ;

  //=== VK_KHR_descriptor_update_template ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::DescriptorUpdateTemplate createDescriptorUpdateTemplateKHR( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplateCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


     void destroyDescriptorUpdateTemplateKHR( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT, Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_display_control ===


     void displayPowerControlEXT( VULKAN_HPP_NAMESPACE::DisplayKHR display, const VULKAN_HPP_NAMESPACE::DisplayPowerInfoEXT & displayPowerInfo ) const ;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Fence registerEventEXT( VULKAN_HPP_NAMESPACE::DeviceEventInfoEXT const & deviceEventInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Fence registerDisplayEventEXT( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DisplayKHR const & display, VULKAN_HPP_NAMESPACE::DisplayEventInfoEXT const & displayEventInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  //=== VK_EXT_hdr_metadata ===


     void setHdrMetadataEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::SwapchainKHR> const & swapchains, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::HdrMetadataEXT> const & metadata ) const ;

  //=== VK_KHR_create_renderpass2 ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::RenderPass createRenderPass2KHR( VULKAN_HPP_NAMESPACE::RenderPassCreateInfo2 const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_fence_win32 ===


     void importFenceWin32HandleKHR( const VULKAN_HPP_NAMESPACE::ImportFenceWin32HandleInfoKHR & importFenceWin32HandleInfo ) const ;


    VULKAN_HPP_NODISCARD  HANDLE getFenceWin32HandleKHR( const VULKAN_HPP_NAMESPACE::FenceGetWin32HandleInfoKHR & getWin32HandleInfo ) const ;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_external_fence_fd ===


     void importFenceFdKHR( const VULKAN_HPP_NAMESPACE::ImportFenceFdInfoKHR & importFenceFdInfo ) const ;


    VULKAN_HPP_NODISCARD  int getFenceFdKHR( const VULKAN_HPP_NAMESPACE::FenceGetFdInfoKHR & getFdInfo ) const ;

  //=== VK_KHR_performance_query ===


     void acquireProfilingLockKHR( const VULKAN_HPP_NAMESPACE::AcquireProfilingLockInfoKHR & info ) const ;


     void releaseProfilingLockKHR(  ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_debug_utils ===


     void setDebugUtilsObjectNameEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsObjectNameInfoEXT & nameInfo ) const ;


     void setDebugUtilsObjectTagEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsObjectTagInfoEXT & tagInfo ) const ;

#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  //=== VK_ANDROID_external_memory_android_hardware_buffer ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::AndroidHardwareBufferPropertiesANDROID getAndroidHardwareBufferPropertiesANDROID( const struct AHardwareBuffer & buffer ) const ;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getAndroidHardwareBufferPropertiesANDROID( const struct AHardwareBuffer & buffer ) const ;


    VULKAN_HPP_NODISCARD  struct AHardwareBuffer * getMemoryAndroidHardwareBufferANDROID( const VULKAN_HPP_NAMESPACE::MemoryGetAndroidHardwareBufferInfoANDROID & info ) const ;
#endif /*VK_USE_PLATFORM_ANDROID_KHR*/

  //=== VK_KHR_get_memory_requirements2 ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryRequirements2 getImageMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::ImageMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getImageMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::ImageMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryRequirements2 getBufferMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::BufferMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getBufferMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::BufferMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2> getImageSparseMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::ImageSparseMemoryRequirementsInfo2 & info ) const ;

  //=== VK_KHR_acceleration_structure ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::AccelerationStructureKHR createAccelerationStructureKHR( VULKAN_HPP_NAMESPACE::AccelerationStructureCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result buildAccelerationStructuresKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR> const & infos, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildRangeInfoKHR * const> const & pBuildRangeInfos ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result copyAccelerationStructureKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureInfoKHR & info ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result copyAccelerationStructureToMemoryKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureToMemoryInfoKHR & info ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result copyMemoryToAccelerationStructureKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, const VULKAN_HPP_NAMESPACE::CopyMemoryToAccelerationStructureInfoKHR & info ) const ;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  std::vector<DataType> writeAccelerationStructuresPropertiesKHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureKHR> const & accelerationStructures, VULKAN_HPP_NAMESPACE::QueryType queryType, size_t dataSize, size_t stride ) const ;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  DataType writeAccelerationStructuresPropertyKHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureKHR> const & accelerationStructures, VULKAN_HPP_NAMESPACE::QueryType queryType, size_t stride ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DeviceAddress getAccelerationStructureAddressKHR( const VULKAN_HPP_NAMESPACE::AccelerationStructureDeviceAddressInfoKHR & info ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::AccelerationStructureCompatibilityKHR getAccelerationStructureCompatibilityKHR( const VULKAN_HPP_NAMESPACE::AccelerationStructureVersionInfoKHR & versionInfo ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::AccelerationStructureBuildSizesInfoKHR getAccelerationStructureBuildSizesKHR( VULKAN_HPP_NAMESPACE::AccelerationStructureBuildTypeKHR buildType, const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR & buildInfo, VULKAN_HPP_NAMESPACE::ArrayProxy<const uint32_t> const & maxPrimitiveCounts VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT ) const ;

  //=== VK_KHR_sampler_ycbcr_conversion ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::SamplerYcbcrConversion createSamplerYcbcrConversionKHR( VULKAN_HPP_NAMESPACE::SamplerYcbcrConversionCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


     void destroySamplerYcbcrConversionKHR( VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion ycbcrConversion VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT, Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_bind_memory2 ===


     void bindBufferMemory2KHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BindBufferMemoryInfo> const & bindInfos ) const ;


     void bindImageMemory2KHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BindImageMemoryInfo> const & bindInfos ) const ;

  //=== VK_EXT_validation_cache ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::ValidationCacheEXT createValidationCacheEXT( VULKAN_HPP_NAMESPACE::ValidationCacheCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  //=== VK_NV_ray_tracing ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::AccelerationStructureNV createAccelerationStructureNV( VULKAN_HPP_NAMESPACE::AccelerationStructureCreateInfoNV const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryRequirements2KHR getAccelerationStructureMemoryRequirementsNV( const VULKAN_HPP_NAMESPACE::AccelerationStructureMemoryRequirementsInfoNV & info ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getAccelerationStructureMemoryRequirementsNV( const VULKAN_HPP_NAMESPACE::AccelerationStructureMemoryRequirementsInfoNV & info ) const  VULKAN_HPP_NOEXCEPT;


     void bindAccelerationStructureMemoryNV( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BindAccelerationStructureMemoryInfoNV> const & bindInfos ) const ;

  VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_RAII_NAMESPACE::Pipeline> createRayTracingPipelinesNV( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoNV> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Pipeline createRayTracingPipelineNV( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoNV const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  //=== VK_KHR_maintenance3 ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DescriptorSetLayoutSupport getDescriptorSetLayoutSupportKHR( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo & createInfo ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getDescriptorSetLayoutSupportKHR( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo & createInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_external_memory_host ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryHostPointerPropertiesEXT getMemoryHostPointerPropertiesEXT( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType, const void * pHostPointer ) const ;

  //=== VK_EXT_calibrated_timestamps ===


    VULKAN_HPP_NODISCARD  std::pair<std::vector<uint64_t>, uint64_t> getCalibratedTimestampsEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::CalibratedTimestampInfoEXT> const & timestampInfos ) const ;


    VULKAN_HPP_NODISCARD  std::pair<uint64_t, uint64_t> getCalibratedTimestampEXT( const VULKAN_HPP_NAMESPACE::CalibratedTimestampInfoEXT & timestampInfo ) const ;

  //=== VK_KHR_timeline_semaphore ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result waitSemaphoresKHR( const VULKAN_HPP_NAMESPACE::SemaphoreWaitInfo & waitInfo, uint64_t timeout ) const ;


     void signalSemaphoreKHR( const VULKAN_HPP_NAMESPACE::SemaphoreSignalInfo & signalInfo ) const ;

  //=== VK_INTEL_performance_query ===


     void initializePerformanceApiINTEL( const VULKAN_HPP_NAMESPACE::InitializePerformanceApiInfoINTEL & initializeInfo ) const ;


     void uninitializePerformanceApiINTEL(  ) const  VULKAN_HPP_NOEXCEPT;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::PerformanceConfigurationINTEL acquirePerformanceConfigurationINTEL( VULKAN_HPP_NAMESPACE::PerformanceConfigurationAcquireInfoINTEL const & acquireInfo ) const;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::PerformanceValueINTEL getPerformanceParameterINTEL( VULKAN_HPP_NAMESPACE::PerformanceParameterTypeINTEL parameter ) const ;

  //=== VK_EXT_buffer_device_address ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DeviceAddress getBufferAddressEXT( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info ) const  VULKAN_HPP_NOEXCEPT;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_EXT_full_screen_exclusive ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DeviceGroupPresentModeFlagsKHR getGroupSurfacePresentModes2EXT( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo ) const ;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_buffer_device_address ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DeviceAddress getBufferAddressKHR( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  uint64_t getBufferOpaqueCaptureAddressKHR( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  uint64_t getMemoryOpaqueCaptureAddressKHR( const VULKAN_HPP_NAMESPACE::DeviceMemoryOpaqueCaptureAddressInfo & info ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_deferred_host_operations ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::DeferredOperationKHR createDeferredOperationKHR( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  //=== VK_KHR_pipeline_executable_properties ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutablePropertiesKHR> getPipelineExecutablePropertiesKHR( const VULKAN_HPP_NAMESPACE::PipelineInfoKHR & pipelineInfo ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutableStatisticKHR> getPipelineExecutableStatisticsKHR( const VULKAN_HPP_NAMESPACE::PipelineExecutableInfoKHR & executableInfo ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutableInternalRepresentationKHR> getPipelineExecutableInternalRepresentationsKHR( const VULKAN_HPP_NAMESPACE::PipelineExecutableInfoKHR & executableInfo ) const ;

  //=== VK_EXT_swapchain_maintenance1 ===


     void releaseSwapchainImagesEXT( const VULKAN_HPP_NAMESPACE::ReleaseSwapchainImagesInfoEXT & releaseInfo ) const ;

  //=== VK_NV_device_generated_commands ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryRequirements2 getGeneratedCommandsMemoryRequirementsNV( const VULKAN_HPP_NAMESPACE::GeneratedCommandsMemoryRequirementsInfoNV & info ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getGeneratedCommandsMemoryRequirementsNV( const VULKAN_HPP_NAMESPACE::GeneratedCommandsMemoryRequirementsInfoNV & info ) const  VULKAN_HPP_NOEXCEPT;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::IndirectCommandsLayoutNV createIndirectCommandsLayoutNV( VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutCreateInfoNV const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  //=== VK_EXT_private_data ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::PrivateDataSlot createPrivateDataSlotEXT( VULKAN_HPP_NAMESPACE::PrivateDataSlotCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


     void destroyPrivateDataSlotEXT( VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT, Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;


     void setPrivateDataEXT( VULKAN_HPP_NAMESPACE::ObjectType objectType_, uint64_t objectHandle, VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot, uint64_t data ) const ;


    VULKAN_HPP_NODISCARD  uint64_t getPrivateDataEXT( VULKAN_HPP_NAMESPACE::ObjectType objectType_, uint64_t objectHandle, VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot ) const  VULKAN_HPP_NOEXCEPT;

#if defined( VK_USE_PLATFORM_METAL_EXT )
  //=== VK_EXT_metal_objects ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ExportMetalObjectsInfoEXT exportMetalObjectsEXT(  ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> exportMetalObjectsEXT(  ) const  VULKAN_HPP_NOEXCEPT;
#endif /*VK_USE_PLATFORM_METAL_EXT*/

  //=== VK_EXT_descriptor_buffer ===

    template <typename DescriptorType>
    VULKAN_HPP_NODISCARD  DescriptorType getDescriptorEXT( const VULKAN_HPP_NAMESPACE::DescriptorGetInfoEXT & descriptorInfo ) const  VULKAN_HPP_NOEXCEPT;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  DataType getBufferOpaqueCaptureDescriptorDataEXT( const VULKAN_HPP_NAMESPACE::BufferCaptureDescriptorDataInfoEXT & info ) const ;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  DataType getImageOpaqueCaptureDescriptorDataEXT( const VULKAN_HPP_NAMESPACE::ImageCaptureDescriptorDataInfoEXT & info ) const ;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  DataType getImageViewOpaqueCaptureDescriptorDataEXT( const VULKAN_HPP_NAMESPACE::ImageViewCaptureDescriptorDataInfoEXT & info ) const ;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  DataType getSamplerOpaqueCaptureDescriptorDataEXT( const VULKAN_HPP_NAMESPACE::SamplerCaptureDescriptorDataInfoEXT & info ) const ;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  DataType getAccelerationStructureOpaqueCaptureDescriptorDataEXT( const VULKAN_HPP_NAMESPACE::AccelerationStructureCaptureDescriptorDataInfoEXT & info ) const ;

  //=== VK_EXT_device_fault ===


    VULKAN_HPP_NODISCARD  std::pair<VULKAN_HPP_NAMESPACE::Result, std::pair<VULKAN_HPP_NAMESPACE::DeviceFaultCountsEXT, VULKAN_HPP_NAMESPACE::DeviceFaultInfoEXT>> getFaultInfoEXT(  ) const ;

  //=== VK_KHR_ray_tracing_pipeline ===

  VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_RAII_NAMESPACE::Pipeline> createRayTracingPipelinesKHR( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeferredOperationKHR> const & deferredOperation, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoKHR> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::Pipeline createRayTracingPipelineKHR( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeferredOperationKHR> const & deferredOperation, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_external_memory ===


    VULKAN_HPP_NODISCARD  zx_handle_t getMemoryZirconHandleFUCHSIA( const VULKAN_HPP_NAMESPACE::MemoryGetZirconHandleInfoFUCHSIA & getZirconHandleInfo ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryZirconHandlePropertiesFUCHSIA getMemoryZirconHandlePropertiesFUCHSIA( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle ) const ;
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_external_semaphore ===


     void importSemaphoreZirconHandleFUCHSIA( const VULKAN_HPP_NAMESPACE::ImportSemaphoreZirconHandleInfoFUCHSIA & importSemaphoreZirconHandleInfo ) const ;


    VULKAN_HPP_NODISCARD  zx_handle_t getSemaphoreZirconHandleFUCHSIA( const VULKAN_HPP_NAMESPACE::SemaphoreGetZirconHandleInfoFUCHSIA & getZirconHandleInfo ) const ;
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_buffer_collection ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::BufferCollectionFUCHSIA createBufferCollectionFUCHSIA( VULKAN_HPP_NAMESPACE::BufferCollectionCreateInfoFUCHSIA const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;
#endif /*VK_USE_PLATFORM_FUCHSIA*/

  //=== VK_NV_external_memory_rdma ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::RemoteAddressNV getMemoryRemoteAddressNV( const VULKAN_HPP_NAMESPACE::MemoryGetRemoteAddressInfoNV & memoryGetRemoteAddressInfo ) const ;

  //=== VK_EXT_pipeline_properties ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::BaseOutStructure getPipelinePropertiesEXT( const VULKAN_HPP_NAMESPACE::PipelineInfoEXT & pipelineInfo ) const ;

  //=== VK_EXT_opacity_micromap ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::MicromapEXT createMicromapEXT( VULKAN_HPP_NAMESPACE::MicromapCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result buildMicromapsEXT( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MicromapBuildInfoEXT> const & infos ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result copyMicromapEXT( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, const VULKAN_HPP_NAMESPACE::CopyMicromapInfoEXT & info ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result copyMicromapToMemoryEXT( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, const VULKAN_HPP_NAMESPACE::CopyMicromapToMemoryInfoEXT & info ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result copyMemoryToMicromapEXT( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, const VULKAN_HPP_NAMESPACE::CopyMemoryToMicromapInfoEXT & info ) const ;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  std::vector<DataType> writeMicromapsPropertiesEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MicromapEXT> const & micromaps, VULKAN_HPP_NAMESPACE::QueryType queryType, size_t dataSize, size_t stride ) const ;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  DataType writeMicromapsPropertyEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MicromapEXT> const & micromaps, VULKAN_HPP_NAMESPACE::QueryType queryType, size_t stride ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::AccelerationStructureCompatibilityKHR getMicromapCompatibilityEXT( const VULKAN_HPP_NAMESPACE::MicromapVersionInfoEXT & versionInfo ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MicromapBuildSizesInfoEXT getMicromapBuildSizesEXT( VULKAN_HPP_NAMESPACE::AccelerationStructureBuildTypeKHR buildType, const VULKAN_HPP_NAMESPACE::MicromapBuildInfoEXT & buildInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_maintenance4 ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryRequirements2 getBufferMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceBufferMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getBufferMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceBufferMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryRequirements2 getImageMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getImageMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2> getImageSparseMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info ) const ;

  //=== VK_VALVE_descriptor_set_host_mapping ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DescriptorSetLayoutHostMappingInfoVALVE getDescriptorSetLayoutHostMappingInfoVALVE( const VULKAN_HPP_NAMESPACE::DescriptorSetBindingReferenceVALVE & bindingReference ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_shader_module_identifier ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ShaderModuleIdentifierEXT getShaderModuleCreateInfoIdentifierEXT( const VULKAN_HPP_NAMESPACE::ShaderModuleCreateInfo & createInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_NV_optical_flow ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::OpticalFlowSessionNV createOpticalFlowSessionNV( VULKAN_HPP_NAMESPACE::OpticalFlowSessionCreateInfoNV const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  //=== VK_QCOM_tile_properties ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::TilePropertiesQCOM getDynamicRenderingTilePropertiesQCOM( const VULKAN_HPP_NAMESPACE::RenderingInfo & renderingInfo ) const  VULKAN_HPP_NOEXCEPT;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      std::unique_ptr<VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher> m_dispatcher;
  };

  class AccelerationStructureKHR
  {
  public:
    using CType = VkAccelerationStructureKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eAccelerationStructureKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eAccelerationStructureKHR;

  public:

    AccelerationStructureKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::AccelerationStructureCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateAccelerationStructureKHR( static_cast<VkDevice>( *device ), reinterpret_cast<const VkAccelerationStructureCreateInfoKHR *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkAccelerationStructureKHR*>( &m_accelerationStructure ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateAccelerationStructureKHR" );
      }
    }

    AccelerationStructureKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkAccelerationStructureKHR accelerationStructure, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_accelerationStructure( accelerationStructure ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    AccelerationStructureKHR( std::nullptr_t ) {}

    ~AccelerationStructureKHR()
    {
      clear();
    }

    AccelerationStructureKHR() = delete;
      AccelerationStructureKHR( AccelerationStructureKHR const & ) = delete;
    AccelerationStructureKHR( AccelerationStructureKHR && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_accelerationStructure( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_accelerationStructure, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      AccelerationStructureKHR & operator=( AccelerationStructureKHR const & ) = delete;
    AccelerationStructureKHR & operator=( AccelerationStructureKHR && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_accelerationStructure = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_accelerationStructure, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::AccelerationStructureKHR const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_accelerationStructure;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_accelerationStructure )
        {
          getDispatcher()->vkDestroyAccelerationStructureKHR( static_cast<VkDevice>( m_device ), static_cast<VkAccelerationStructureKHR>( m_accelerationStructure ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_accelerationStructure = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::AccelerationStructureKHR release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_accelerationStructure, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::AccelerationStructureKHR & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_accelerationStructure, rhs.m_accelerationStructure );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::AccelerationStructureKHR m_accelerationStructure = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class AccelerationStructureNV
  {
  public:
    using CType = VkAccelerationStructureNV;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eAccelerationStructureNV;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eAccelerationStructureNV;

  public:

    AccelerationStructureNV( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::AccelerationStructureCreateInfoNV const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateAccelerationStructureNV( static_cast<VkDevice>( *device ), reinterpret_cast<const VkAccelerationStructureCreateInfoNV *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkAccelerationStructureNV*>( &m_accelerationStructure ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateAccelerationStructureNV" );
      }
    }

    AccelerationStructureNV( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkAccelerationStructureNV accelerationStructure, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_accelerationStructure( accelerationStructure ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    AccelerationStructureNV( std::nullptr_t ) {}

    ~AccelerationStructureNV()
    {
      clear();
    }

    AccelerationStructureNV() = delete;
      AccelerationStructureNV( AccelerationStructureNV const & ) = delete;
    AccelerationStructureNV( AccelerationStructureNV && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_accelerationStructure( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_accelerationStructure, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      AccelerationStructureNV & operator=( AccelerationStructureNV const & ) = delete;
    AccelerationStructureNV & operator=( AccelerationStructureNV && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_accelerationStructure = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_accelerationStructure, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::AccelerationStructureNV const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_accelerationStructure;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_accelerationStructure )
        {
          getDispatcher()->vkDestroyAccelerationStructureNV( static_cast<VkDevice>( m_device ), static_cast<VkAccelerationStructureNV>( m_accelerationStructure ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_accelerationStructure = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::AccelerationStructureNV release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_accelerationStructure, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::AccelerationStructureNV & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_accelerationStructure, rhs.m_accelerationStructure );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_NV_ray_tracing ===

    template <typename DataType>
    VULKAN_HPP_NODISCARD  std::vector<DataType> getHandle( size_t dataSize ) const ;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  DataType getHandle(  ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::AccelerationStructureNV m_accelerationStructure = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class Buffer
  {
  public:
    using CType = VkBuffer;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eBuffer;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eBuffer;

  public:

    Buffer( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::BufferCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateBuffer( static_cast<VkDevice>( *device ), reinterpret_cast<const VkBufferCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkBuffer*>( &m_buffer ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateBuffer" );
      }
    }

    Buffer( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkBuffer buffer, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_buffer( buffer ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    Buffer( std::nullptr_t ) {}

    ~Buffer()
    {
      clear();
    }

    Buffer() = delete;
      Buffer( Buffer const & ) = delete;
    Buffer( Buffer && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_buffer( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_buffer, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      Buffer & operator=( Buffer const & ) = delete;
    Buffer & operator=( Buffer && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_buffer = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_buffer, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::Buffer const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_buffer;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_buffer )
        {
          getDispatcher()->vkDestroyBuffer( static_cast<VkDevice>( m_device ), static_cast<VkBuffer>( m_buffer ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_buffer = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::Buffer release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_buffer, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Buffer & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_buffer, rhs.m_buffer );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===


     void bindMemory( VULKAN_HPP_NAMESPACE::DeviceMemory memory, VULKAN_HPP_NAMESPACE::DeviceSize memoryOffset ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryRequirements getMemoryRequirements(  ) const  VULKAN_HPP_NOEXCEPT;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::Buffer m_buffer = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

#if defined( VK_USE_PLATFORM_FUCHSIA )
  class BufferCollectionFUCHSIA
  {
  public:
    using CType = VkBufferCollectionFUCHSIA;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eBufferCollectionFUCHSIA;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eBufferCollectionFUCHSIA;

  public:

    BufferCollectionFUCHSIA( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::BufferCollectionCreateInfoFUCHSIA const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateBufferCollectionFUCHSIA( static_cast<VkDevice>( *device ), reinterpret_cast<const VkBufferCollectionCreateInfoFUCHSIA *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkBufferCollectionFUCHSIA*>( &m_collection ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateBufferCollectionFUCHSIA" );
      }
    }

    BufferCollectionFUCHSIA( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkBufferCollectionFUCHSIA collection, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_collection( collection ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    BufferCollectionFUCHSIA( std::nullptr_t ) {}

    ~BufferCollectionFUCHSIA()
    {
      clear();
    }

    BufferCollectionFUCHSIA() = delete;
      BufferCollectionFUCHSIA( BufferCollectionFUCHSIA const & ) = delete;
    BufferCollectionFUCHSIA( BufferCollectionFUCHSIA && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_collection( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_collection, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      BufferCollectionFUCHSIA & operator=( BufferCollectionFUCHSIA const & ) = delete;
    BufferCollectionFUCHSIA & operator=( BufferCollectionFUCHSIA && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_collection = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_collection, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_collection;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_collection )
        {
          getDispatcher()->vkDestroyBufferCollectionFUCHSIA( static_cast<VkDevice>( m_device ), static_cast<VkBufferCollectionFUCHSIA>( m_collection ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_collection = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_collection, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::BufferCollectionFUCHSIA & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_collection, rhs.m_collection );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_FUCHSIA_buffer_collection ===


     void setImageConstraints( const VULKAN_HPP_NAMESPACE::ImageConstraintsInfoFUCHSIA & imageConstraintsInfo ) const ;


     void setBufferConstraints( const VULKAN_HPP_NAMESPACE::BufferConstraintsInfoFUCHSIA & bufferConstraintsInfo ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::BufferCollectionPropertiesFUCHSIA getProperties(  ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA m_collection = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };
#endif /*VK_USE_PLATFORM_FUCHSIA*/

  class BufferView
  {
  public:
    using CType = VkBufferView;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eBufferView;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eBufferView;

  public:

    BufferView( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::BufferViewCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateBufferView( static_cast<VkDevice>( *device ), reinterpret_cast<const VkBufferViewCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkBufferView*>( &m_bufferView ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateBufferView" );
      }
    }

    BufferView( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkBufferView bufferView, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_bufferView( bufferView ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    BufferView( std::nullptr_t ) {}

    ~BufferView()
    {
      clear();
    }

    BufferView() = delete;
      BufferView( BufferView const & ) = delete;
    BufferView( BufferView && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_bufferView( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_bufferView, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      BufferView & operator=( BufferView const & ) = delete;
    BufferView & operator=( BufferView && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_bufferView = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_bufferView, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::BufferView const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_bufferView;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_bufferView )
        {
          getDispatcher()->vkDestroyBufferView( static_cast<VkDevice>( m_device ), static_cast<VkBufferView>( m_bufferView ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_bufferView = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::BufferView release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_bufferView, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::BufferView & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_bufferView, rhs.m_bufferView );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::BufferView m_bufferView = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class CommandPool
  {
  public:
    using CType = VkCommandPool;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eCommandPool;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eCommandPool;

  public:

    CommandPool( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::CommandPoolCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateCommandPool( static_cast<VkDevice>( *device ), reinterpret_cast<const VkCommandPoolCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkCommandPool*>( &m_commandPool ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateCommandPool" );
      }
    }

    CommandPool( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkCommandPool commandPool, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_commandPool( commandPool ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    CommandPool( std::nullptr_t ) {}

    ~CommandPool()
    {
      clear();
    }

    CommandPool() = delete;
      CommandPool( CommandPool const & ) = delete;
    CommandPool( CommandPool && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_commandPool( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_commandPool, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      CommandPool & operator=( CommandPool const & ) = delete;
    CommandPool & operator=( CommandPool && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_commandPool = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_commandPool, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::CommandPool const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_commandPool;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_commandPool )
        {
          getDispatcher()->vkDestroyCommandPool( static_cast<VkDevice>( m_device ), static_cast<VkCommandPool>( m_commandPool ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_commandPool = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::CommandPool release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_commandPool, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::CommandPool & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_commandPool, rhs.m_commandPool );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===


     void reset( VULKAN_HPP_NAMESPACE::CommandPoolResetFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const ;

  //=== VK_VERSION_1_1 ===


     void trim( VULKAN_HPP_NAMESPACE::CommandPoolTrimFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_maintenance1 ===


     void trimKHR( VULKAN_HPP_NAMESPACE::CommandPoolTrimFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::CommandPool m_commandPool = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class CommandBuffer
  {
  public:
    using CType = VkCommandBuffer;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eCommandBuffer;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eCommandBuffer;

  public:

    CommandBuffer( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkCommandBuffer commandBuffer, VkCommandPool commandPool )
      : m_device( *device ), m_commandPool( commandPool ), m_commandBuffer( commandBuffer ), m_dispatcher( device.getDispatcher() )
    {}

    CommandBuffer( std::nullptr_t ) {}

    ~CommandBuffer()
    {
      clear();
    }

    CommandBuffer() = delete;
      CommandBuffer( CommandBuffer const & ) = delete;
    CommandBuffer( CommandBuffer && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_commandPool( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_commandPool, {} ) ), m_commandBuffer( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_commandBuffer, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      CommandBuffer & operator=( CommandBuffer const & ) = delete;
    CommandBuffer & operator=( CommandBuffer && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_commandPool = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_commandPool, {} );
          m_commandBuffer = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_commandBuffer, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::CommandBuffer const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_commandBuffer;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_commandBuffer )
        {
          getDispatcher()->vkFreeCommandBuffers( static_cast<VkDevice>( m_device ), static_cast<VkCommandPool>( m_commandPool ), 1, reinterpret_cast<VkCommandBuffer const *>( &m_commandBuffer ) );
        }
      m_device = nullptr;
      m_commandPool = nullptr;
      m_commandBuffer = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::CommandBuffer release()
    {

      m_device = nullptr;
      m_commandPool = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_commandBuffer, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::CommandBuffer & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_commandPool, rhs.m_commandPool );
      std::swap( m_commandBuffer, rhs.m_commandBuffer );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===


     void begin( const VULKAN_HPP_NAMESPACE::CommandBufferBeginInfo & beginInfo ) const ;


     void end(  ) const ;


     void reset( VULKAN_HPP_NAMESPACE::CommandBufferResetFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const ;


     void bindPipeline( VULKAN_HPP_NAMESPACE::PipelineBindPoint pipelineBindPoint, VULKAN_HPP_NAMESPACE::Pipeline pipeline ) const  VULKAN_HPP_NOEXCEPT;


     void setViewport( uint32_t firstViewport, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Viewport> const & viewports ) const  VULKAN_HPP_NOEXCEPT;


     void setScissor( uint32_t firstScissor, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & scissors ) const  VULKAN_HPP_NOEXCEPT;


     void setLineWidth( float lineWidth ) const  VULKAN_HPP_NOEXCEPT;


     void setDepthBias( float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor ) const  VULKAN_HPP_NOEXCEPT;


     void setBlendConstants( const float blendConstants[4] ) const  VULKAN_HPP_NOEXCEPT;


     void setDepthBounds( float minDepthBounds, float maxDepthBounds ) const  VULKAN_HPP_NOEXCEPT;


     void setStencilCompareMask( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask, uint32_t compareMask ) const  VULKAN_HPP_NOEXCEPT;


     void setStencilWriteMask( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask, uint32_t writeMask ) const  VULKAN_HPP_NOEXCEPT;


     void setStencilReference( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask, uint32_t reference ) const  VULKAN_HPP_NOEXCEPT;


     void bindDescriptorSets( VULKAN_HPP_NAMESPACE::PipelineBindPoint pipelineBindPoint, VULKAN_HPP_NAMESPACE::PipelineLayout layout, uint32_t firstSet, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DescriptorSet> const & descriptorSets, VULKAN_HPP_NAMESPACE::ArrayProxy<const uint32_t> const & dynamicOffsets ) const  VULKAN_HPP_NOEXCEPT;


     void bindIndexBuffer( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::IndexType indexType ) const  VULKAN_HPP_NOEXCEPT;


     void bindVertexBuffers( uint32_t firstBinding, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const & buffers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & offsets ) const ;


     void draw( uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance ) const  VULKAN_HPP_NOEXCEPT;


     void drawIndexed( uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance ) const  VULKAN_HPP_NOEXCEPT;


     void drawIndirect( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, uint32_t drawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT;


     void drawIndexedIndirect( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, uint32_t drawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT;


     void dispatch( uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ ) const  VULKAN_HPP_NOEXCEPT;


     void dispatchIndirect( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset ) const  VULKAN_HPP_NOEXCEPT;


     void copyBuffer( VULKAN_HPP_NAMESPACE::Buffer srcBuffer, VULKAN_HPP_NAMESPACE::Buffer dstBuffer, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferCopy> const & regions ) const  VULKAN_HPP_NOEXCEPT;


     void copyImage( VULKAN_HPP_NAMESPACE::Image srcImage, VULKAN_HPP_NAMESPACE::ImageLayout srcImageLayout, VULKAN_HPP_NAMESPACE::Image dstImage, VULKAN_HPP_NAMESPACE::ImageLayout dstImageLayout, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageCopy> const & regions ) const  VULKAN_HPP_NOEXCEPT;


     void blitImage( VULKAN_HPP_NAMESPACE::Image srcImage, VULKAN_HPP_NAMESPACE::ImageLayout srcImageLayout, VULKAN_HPP_NAMESPACE::Image dstImage, VULKAN_HPP_NAMESPACE::ImageLayout dstImageLayout, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageBlit> const & regions, VULKAN_HPP_NAMESPACE::Filter filter ) const  VULKAN_HPP_NOEXCEPT;


     void copyBufferToImage( VULKAN_HPP_NAMESPACE::Buffer srcBuffer, VULKAN_HPP_NAMESPACE::Image dstImage, VULKAN_HPP_NAMESPACE::ImageLayout dstImageLayout, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferImageCopy> const & regions ) const  VULKAN_HPP_NOEXCEPT;


     void copyImageToBuffer( VULKAN_HPP_NAMESPACE::Image srcImage, VULKAN_HPP_NAMESPACE::ImageLayout srcImageLayout, VULKAN_HPP_NAMESPACE::Buffer dstBuffer, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferImageCopy> const & regions ) const  VULKAN_HPP_NOEXCEPT;

    template <typename DataType>
     void updateBuffer( VULKAN_HPP_NAMESPACE::Buffer dstBuffer, VULKAN_HPP_NAMESPACE::DeviceSize dstOffset, VULKAN_HPP_NAMESPACE::ArrayProxy<const DataType> const & data ) const  VULKAN_HPP_NOEXCEPT;


     void fillBuffer( VULKAN_HPP_NAMESPACE::Buffer dstBuffer, VULKAN_HPP_NAMESPACE::DeviceSize dstOffset, VULKAN_HPP_NAMESPACE::DeviceSize size, uint32_t data ) const  VULKAN_HPP_NOEXCEPT;


     void clearColorImage( VULKAN_HPP_NAMESPACE::Image image, VULKAN_HPP_NAMESPACE::ImageLayout imageLayout, const VULKAN_HPP_NAMESPACE::ClearColorValue & color, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageSubresourceRange> const & ranges ) const  VULKAN_HPP_NOEXCEPT;


     void clearDepthStencilImage( VULKAN_HPP_NAMESPACE::Image image, VULKAN_HPP_NAMESPACE::ImageLayout imageLayout, const VULKAN_HPP_NAMESPACE::ClearDepthStencilValue & depthStencil, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageSubresourceRange> const & ranges ) const  VULKAN_HPP_NOEXCEPT;


     void clearAttachments( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ClearAttachment> const & attachments, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ClearRect> const & rects ) const  VULKAN_HPP_NOEXCEPT;


     void resolveImage( VULKAN_HPP_NAMESPACE::Image srcImage, VULKAN_HPP_NAMESPACE::ImageLayout srcImageLayout, VULKAN_HPP_NAMESPACE::Image dstImage, VULKAN_HPP_NAMESPACE::ImageLayout dstImageLayout, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageResolve> const & regions ) const  VULKAN_HPP_NOEXCEPT;


     void setEvent( VULKAN_HPP_NAMESPACE::Event event, VULKAN_HPP_NAMESPACE::PipelineStageFlags stageMask VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;


     void resetEvent( VULKAN_HPP_NAMESPACE::Event event, VULKAN_HPP_NAMESPACE::PipelineStageFlags stageMask VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;


     void waitEvents( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Event> const & events, VULKAN_HPP_NAMESPACE::PipelineStageFlags srcStageMask, VULKAN_HPP_NAMESPACE::PipelineStageFlags dstStageMask, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MemoryBarrier> const & memoryBarriers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferMemoryBarrier> const & bufferMemoryBarriers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageMemoryBarrier> const & imageMemoryBarriers ) const  VULKAN_HPP_NOEXCEPT;


     void pipelineBarrier( VULKAN_HPP_NAMESPACE::PipelineStageFlags srcStageMask, VULKAN_HPP_NAMESPACE::PipelineStageFlags dstStageMask, VULKAN_HPP_NAMESPACE::DependencyFlags dependencyFlags, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MemoryBarrier> const & memoryBarriers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferMemoryBarrier> const & bufferMemoryBarriers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageMemoryBarrier> const & imageMemoryBarriers ) const  VULKAN_HPP_NOEXCEPT;


     void beginQuery( VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t query, VULKAN_HPP_NAMESPACE::QueryControlFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;


     void endQuery( VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t query ) const  VULKAN_HPP_NOEXCEPT;


     void resetQueryPool( VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t firstQuery, uint32_t queryCount ) const  VULKAN_HPP_NOEXCEPT;


     void writeTimestamp( VULKAN_HPP_NAMESPACE::PipelineStageFlagBits pipelineStage, VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t query ) const  VULKAN_HPP_NOEXCEPT;


     void copyQueryPoolResults( VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VULKAN_HPP_NAMESPACE::Buffer dstBuffer, VULKAN_HPP_NAMESPACE::DeviceSize dstOffset, VULKAN_HPP_NAMESPACE::DeviceSize stride, VULKAN_HPP_NAMESPACE::QueryResultFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;

    template <typename ValuesType>
     void pushConstants( VULKAN_HPP_NAMESPACE::PipelineLayout layout, VULKAN_HPP_NAMESPACE::ShaderStageFlags stageFlags, uint32_t offset, VULKAN_HPP_NAMESPACE::ArrayProxy<const ValuesType> const & values ) const  VULKAN_HPP_NOEXCEPT;


     void beginRenderPass( const VULKAN_HPP_NAMESPACE::RenderPassBeginInfo & renderPassBegin, VULKAN_HPP_NAMESPACE::SubpassContents contents ) const  VULKAN_HPP_NOEXCEPT;


     void nextSubpass( VULKAN_HPP_NAMESPACE::SubpassContents contents ) const  VULKAN_HPP_NOEXCEPT;


     void endRenderPass(  ) const  VULKAN_HPP_NOEXCEPT;


     void executeCommands( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::CommandBuffer> const & commandBuffers ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_VERSION_1_1 ===


     void setDeviceMask( uint32_t deviceMask ) const  VULKAN_HPP_NOEXCEPT;


     void dispatchBase( uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_VERSION_1_2 ===


     void drawIndirectCount( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT;


     void drawIndexedIndirectCount( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT;


     void beginRenderPass2( const VULKAN_HPP_NAMESPACE::RenderPassBeginInfo & renderPassBegin, const VULKAN_HPP_NAMESPACE::SubpassBeginInfo & subpassBeginInfo ) const  VULKAN_HPP_NOEXCEPT;


     void nextSubpass2( const VULKAN_HPP_NAMESPACE::SubpassBeginInfo & subpassBeginInfo, const VULKAN_HPP_NAMESPACE::SubpassEndInfo & subpassEndInfo ) const  VULKAN_HPP_NOEXCEPT;


     void endRenderPass2( const VULKAN_HPP_NAMESPACE::SubpassEndInfo & subpassEndInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_VERSION_1_3 ===


     void setEvent2( VULKAN_HPP_NAMESPACE::Event event, const VULKAN_HPP_NAMESPACE::DependencyInfo & dependencyInfo ) const  VULKAN_HPP_NOEXCEPT;


     void resetEvent2( VULKAN_HPP_NAMESPACE::Event event, VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stageMask VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;


     void waitEvents2( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Event> const & events, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DependencyInfo> const & dependencyInfos ) const ;


     void pipelineBarrier2( const VULKAN_HPP_NAMESPACE::DependencyInfo & dependencyInfo ) const  VULKAN_HPP_NOEXCEPT;


     void writeTimestamp2( VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stage, VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t query ) const  VULKAN_HPP_NOEXCEPT;


     void copyBuffer2( const VULKAN_HPP_NAMESPACE::CopyBufferInfo2 & copyBufferInfo ) const  VULKAN_HPP_NOEXCEPT;


     void copyImage2( const VULKAN_HPP_NAMESPACE::CopyImageInfo2 & copyImageInfo ) const  VULKAN_HPP_NOEXCEPT;


     void copyBufferToImage2( const VULKAN_HPP_NAMESPACE::CopyBufferToImageInfo2 & copyBufferToImageInfo ) const  VULKAN_HPP_NOEXCEPT;


     void copyImageToBuffer2( const VULKAN_HPP_NAMESPACE::CopyImageToBufferInfo2 & copyImageToBufferInfo ) const  VULKAN_HPP_NOEXCEPT;


     void blitImage2( const VULKAN_HPP_NAMESPACE::BlitImageInfo2 & blitImageInfo ) const  VULKAN_HPP_NOEXCEPT;


     void resolveImage2( const VULKAN_HPP_NAMESPACE::ResolveImageInfo2 & resolveImageInfo ) const  VULKAN_HPP_NOEXCEPT;


     void beginRendering( const VULKAN_HPP_NAMESPACE::RenderingInfo & renderingInfo ) const  VULKAN_HPP_NOEXCEPT;


     void endRendering(  ) const  VULKAN_HPP_NOEXCEPT;


     void setCullMode( VULKAN_HPP_NAMESPACE::CullModeFlags cullMode VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;


     void setFrontFace( VULKAN_HPP_NAMESPACE::FrontFace frontFace ) const  VULKAN_HPP_NOEXCEPT;


     void setPrimitiveTopology( VULKAN_HPP_NAMESPACE::PrimitiveTopology primitiveTopology ) const  VULKAN_HPP_NOEXCEPT;


     void setViewportWithCount( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Viewport> const & viewports ) const  VULKAN_HPP_NOEXCEPT;


     void setScissorWithCount( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & scissors ) const  VULKAN_HPP_NOEXCEPT;


     void bindVertexBuffers2( uint32_t firstBinding, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const & buffers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & offsets, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & sizes VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & strides VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT ) const ;


     void setDepthTestEnable( VULKAN_HPP_NAMESPACE::Bool32 depthTestEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setDepthWriteEnable( VULKAN_HPP_NAMESPACE::Bool32 depthWriteEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setDepthCompareOp( VULKAN_HPP_NAMESPACE::CompareOp depthCompareOp ) const  VULKAN_HPP_NOEXCEPT;


     void setDepthBoundsTestEnable( VULKAN_HPP_NAMESPACE::Bool32 depthBoundsTestEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setStencilTestEnable( VULKAN_HPP_NAMESPACE::Bool32 stencilTestEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setStencilOp( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask, VULKAN_HPP_NAMESPACE::StencilOp failOp, VULKAN_HPP_NAMESPACE::StencilOp passOp, VULKAN_HPP_NAMESPACE::StencilOp depthFailOp, VULKAN_HPP_NAMESPACE::CompareOp compareOp ) const  VULKAN_HPP_NOEXCEPT;


     void setRasterizerDiscardEnable( VULKAN_HPP_NAMESPACE::Bool32 rasterizerDiscardEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setDepthBiasEnable( VULKAN_HPP_NAMESPACE::Bool32 depthBiasEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setPrimitiveRestartEnable( VULKAN_HPP_NAMESPACE::Bool32 primitiveRestartEnable ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_debug_marker ===


     void debugMarkerBeginEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerMarkerInfoEXT & markerInfo ) const  VULKAN_HPP_NOEXCEPT;


     void debugMarkerEndEXT(  ) const  VULKAN_HPP_NOEXCEPT;


     void debugMarkerInsertEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerMarkerInfoEXT & markerInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_video_queue ===


     void beginVideoCodingKHR( const VULKAN_HPP_NAMESPACE::VideoBeginCodingInfoKHR & beginInfo ) const  VULKAN_HPP_NOEXCEPT;


     void endVideoCodingKHR( const VULKAN_HPP_NAMESPACE::VideoEndCodingInfoKHR & endCodingInfo ) const  VULKAN_HPP_NOEXCEPT;


     void controlVideoCodingKHR( const VULKAN_HPP_NAMESPACE::VideoCodingControlInfoKHR & codingControlInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_video_decode_queue ===


     void decodeVideoKHR( const VULKAN_HPP_NAMESPACE::VideoDecodeInfoKHR & decodeInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_transform_feedback ===


     void bindTransformFeedbackBuffersEXT( uint32_t firstBinding, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const & buffers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & offsets, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & sizes VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT ) const ;


     void beginTransformFeedbackEXT( uint32_t firstCounterBuffer, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const & counterBuffers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & counterBufferOffsets VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT ) const ;


     void endTransformFeedbackEXT( uint32_t firstCounterBuffer, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const & counterBuffers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & counterBufferOffsets VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT ) const ;


     void beginQueryIndexedEXT( VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t query, VULKAN_HPP_NAMESPACE::QueryControlFlags flags, uint32_t index ) const  VULKAN_HPP_NOEXCEPT;


     void endQueryIndexedEXT( VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t query, uint32_t index ) const  VULKAN_HPP_NOEXCEPT;


     void drawIndirectByteCountEXT( uint32_t instanceCount, uint32_t firstInstance, VULKAN_HPP_NAMESPACE::Buffer counterBuffer, VULKAN_HPP_NAMESPACE::DeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_NVX_binary_import ===


     void cuLaunchKernelNVX( const VULKAN_HPP_NAMESPACE::CuLaunchInfoNVX & launchInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_AMD_draw_indirect_count ===


     void drawIndirectCountAMD( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT;


     void drawIndexedIndirectCountAMD( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_dynamic_rendering ===


     void beginRenderingKHR( const VULKAN_HPP_NAMESPACE::RenderingInfo & renderingInfo ) const  VULKAN_HPP_NOEXCEPT;


     void endRenderingKHR(  ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_device_group ===


     void setDeviceMaskKHR( uint32_t deviceMask ) const  VULKAN_HPP_NOEXCEPT;


     void dispatchBaseKHR( uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_push_descriptor ===


     void pushDescriptorSetKHR( VULKAN_HPP_NAMESPACE::PipelineBindPoint pipelineBindPoint, VULKAN_HPP_NAMESPACE::PipelineLayout layout, uint32_t set, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::WriteDescriptorSet> const & descriptorWrites ) const  VULKAN_HPP_NOEXCEPT;

    template <typename DataType>
     void pushDescriptorSetWithTemplateKHR( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate, VULKAN_HPP_NAMESPACE::PipelineLayout layout, uint32_t set, DataType const & data ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_conditional_rendering ===


     void beginConditionalRenderingEXT( const VULKAN_HPP_NAMESPACE::ConditionalRenderingBeginInfoEXT & conditionalRenderingBegin ) const  VULKAN_HPP_NOEXCEPT;


     void endConditionalRenderingEXT(  ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_NV_clip_space_w_scaling ===


     void setViewportWScalingNV( uint32_t firstViewport, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ViewportWScalingNV> const & viewportWScalings ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_discard_rectangles ===


     void setDiscardRectangleEXT( uint32_t firstDiscardRectangle, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & discardRectangles ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_create_renderpass2 ===


     void beginRenderPass2KHR( const VULKAN_HPP_NAMESPACE::RenderPassBeginInfo & renderPassBegin, const VULKAN_HPP_NAMESPACE::SubpassBeginInfo & subpassBeginInfo ) const  VULKAN_HPP_NOEXCEPT;


     void nextSubpass2KHR( const VULKAN_HPP_NAMESPACE::SubpassBeginInfo & subpassBeginInfo, const VULKAN_HPP_NAMESPACE::SubpassEndInfo & subpassEndInfo ) const  VULKAN_HPP_NOEXCEPT;


     void endRenderPass2KHR( const VULKAN_HPP_NAMESPACE::SubpassEndInfo & subpassEndInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_debug_utils ===


     void beginDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT & labelInfo ) const  VULKAN_HPP_NOEXCEPT;


     void endDebugUtilsLabelEXT(  ) const  VULKAN_HPP_NOEXCEPT;


     void insertDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT & labelInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_sample_locations ===


     void setSampleLocationsEXT( const VULKAN_HPP_NAMESPACE::SampleLocationsInfoEXT & sampleLocationsInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_acceleration_structure ===


     void buildAccelerationStructuresKHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR> const & infos, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildRangeInfoKHR * const> const & pBuildRangeInfos ) const ;


     void buildAccelerationStructuresIndirectKHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR> const & infos, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceAddress> const & indirectDeviceAddresses, VULKAN_HPP_NAMESPACE::ArrayProxy<const uint32_t> const & indirectStrides, VULKAN_HPP_NAMESPACE::ArrayProxy<const uint32_t * const> const & pMaxPrimitiveCounts ) const ;


     void copyAccelerationStructureKHR( const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureInfoKHR & info ) const  VULKAN_HPP_NOEXCEPT;


     void copyAccelerationStructureToMemoryKHR( const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureToMemoryInfoKHR & info ) const  VULKAN_HPP_NOEXCEPT;


     void copyMemoryToAccelerationStructureKHR( const VULKAN_HPP_NAMESPACE::CopyMemoryToAccelerationStructureInfoKHR & info ) const  VULKAN_HPP_NOEXCEPT;


     void writeAccelerationStructuresPropertiesKHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureKHR> const & accelerationStructures, VULKAN_HPP_NAMESPACE::QueryType queryType, VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t firstQuery ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_NV_shading_rate_image ===


     void bindShadingRateImageNV( VULKAN_HPP_NAMESPACE::ImageView imageView, VULKAN_HPP_NAMESPACE::ImageLayout imageLayout ) const  VULKAN_HPP_NOEXCEPT;


     void setViewportShadingRatePaletteNV( uint32_t firstViewport, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ShadingRatePaletteNV> const & shadingRatePalettes ) const  VULKAN_HPP_NOEXCEPT;


     void setCoarseSampleOrderNV( VULKAN_HPP_NAMESPACE::CoarseSampleOrderTypeNV sampleOrderType, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::CoarseSampleOrderCustomNV> const & customSampleOrders ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_NV_ray_tracing ===


     void buildAccelerationStructureNV( const VULKAN_HPP_NAMESPACE::AccelerationStructureInfoNV & info, VULKAN_HPP_NAMESPACE::Buffer instanceData, VULKAN_HPP_NAMESPACE::DeviceSize instanceOffset, VULKAN_HPP_NAMESPACE::Bool32 update, VULKAN_HPP_NAMESPACE::AccelerationStructureNV dst, VULKAN_HPP_NAMESPACE::AccelerationStructureNV src, VULKAN_HPP_NAMESPACE::Buffer scratch, VULKAN_HPP_NAMESPACE::DeviceSize scratchOffset ) const  VULKAN_HPP_NOEXCEPT;


     void copyAccelerationStructureNV( VULKAN_HPP_NAMESPACE::AccelerationStructureNV dst, VULKAN_HPP_NAMESPACE::AccelerationStructureNV src, VULKAN_HPP_NAMESPACE::CopyAccelerationStructureModeKHR mode ) const  VULKAN_HPP_NOEXCEPT;


     void traceRaysNV( VULKAN_HPP_NAMESPACE::Buffer raygenShaderBindingTableBuffer, VULKAN_HPP_NAMESPACE::DeviceSize raygenShaderBindingOffset, VULKAN_HPP_NAMESPACE::Buffer missShaderBindingTableBuffer, VULKAN_HPP_NAMESPACE::DeviceSize missShaderBindingOffset, VULKAN_HPP_NAMESPACE::DeviceSize missShaderBindingStride, VULKAN_HPP_NAMESPACE::Buffer hitShaderBindingTableBuffer, VULKAN_HPP_NAMESPACE::DeviceSize hitShaderBindingOffset, VULKAN_HPP_NAMESPACE::DeviceSize hitShaderBindingStride, VULKAN_HPP_NAMESPACE::Buffer callableShaderBindingTableBuffer, VULKAN_HPP_NAMESPACE::DeviceSize callableShaderBindingOffset, VULKAN_HPP_NAMESPACE::DeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth ) const  VULKAN_HPP_NOEXCEPT;


     void writeAccelerationStructuresPropertiesNV( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureNV> const & accelerationStructures, VULKAN_HPP_NAMESPACE::QueryType queryType, VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t firstQuery ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_draw_indirect_count ===


     void drawIndirectCountKHR( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT;


     void drawIndexedIndirectCountKHR( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_AMD_buffer_marker ===


     void writeBufferMarkerAMD( VULKAN_HPP_NAMESPACE::PipelineStageFlagBits pipelineStage, VULKAN_HPP_NAMESPACE::Buffer dstBuffer, VULKAN_HPP_NAMESPACE::DeviceSize dstOffset, uint32_t marker ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_NV_mesh_shader ===


     void drawMeshTasksNV( uint32_t taskCount, uint32_t firstTask ) const  VULKAN_HPP_NOEXCEPT;


     void drawMeshTasksIndirectNV( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, uint32_t drawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT;


     void drawMeshTasksIndirectCountNV( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_NV_scissor_exclusive ===


     void setExclusiveScissorNV( uint32_t firstExclusiveScissor, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & exclusiveScissors ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_NV_device_diagnostic_checkpoints ===

    template <typename CheckpointMarkerType>
     void setCheckpointNV( CheckpointMarkerType const & checkpointMarker ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_INTEL_performance_query ===


     void setPerformanceMarkerINTEL( const VULKAN_HPP_NAMESPACE::PerformanceMarkerInfoINTEL & markerInfo ) const ;


     void setPerformanceStreamMarkerINTEL( const VULKAN_HPP_NAMESPACE::PerformanceStreamMarkerInfoINTEL & markerInfo ) const ;


     void setPerformanceOverrideINTEL( const VULKAN_HPP_NAMESPACE::PerformanceOverrideInfoINTEL & overrideInfo ) const ;

  //=== VK_KHR_fragment_shading_rate ===


     void setFragmentShadingRateKHR( const VULKAN_HPP_NAMESPACE::Extent2D & fragmentSize, const VULKAN_HPP_NAMESPACE::FragmentShadingRateCombinerOpKHR combinerOps[2] ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_line_rasterization ===


     void setLineStippleEXT( uint32_t lineStippleFactor, uint16_t lineStipplePattern ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_extended_dynamic_state ===


     void setCullModeEXT( VULKAN_HPP_NAMESPACE::CullModeFlags cullMode VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;


     void setFrontFaceEXT( VULKAN_HPP_NAMESPACE::FrontFace frontFace ) const  VULKAN_HPP_NOEXCEPT;


     void setPrimitiveTopologyEXT( VULKAN_HPP_NAMESPACE::PrimitiveTopology primitiveTopology ) const  VULKAN_HPP_NOEXCEPT;


     void setViewportWithCountEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Viewport> const & viewports ) const  VULKAN_HPP_NOEXCEPT;


     void setScissorWithCountEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & scissors ) const  VULKAN_HPP_NOEXCEPT;


     void bindVertexBuffers2EXT( uint32_t firstBinding, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const & buffers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & offsets, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & sizes VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & strides VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT ) const ;


     void setDepthTestEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthTestEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setDepthWriteEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthWriteEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setDepthCompareOpEXT( VULKAN_HPP_NAMESPACE::CompareOp depthCompareOp ) const  VULKAN_HPP_NOEXCEPT;


     void setDepthBoundsTestEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthBoundsTestEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setStencilTestEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 stencilTestEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setStencilOpEXT( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask, VULKAN_HPP_NAMESPACE::StencilOp failOp, VULKAN_HPP_NAMESPACE::StencilOp passOp, VULKAN_HPP_NAMESPACE::StencilOp depthFailOp, VULKAN_HPP_NAMESPACE::CompareOp compareOp ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_NV_device_generated_commands ===


     void preprocessGeneratedCommandsNV( const VULKAN_HPP_NAMESPACE::GeneratedCommandsInfoNV & generatedCommandsInfo ) const  VULKAN_HPP_NOEXCEPT;


     void executeGeneratedCommandsNV( VULKAN_HPP_NAMESPACE::Bool32 isPreprocessed, const VULKAN_HPP_NAMESPACE::GeneratedCommandsInfoNV & generatedCommandsInfo ) const  VULKAN_HPP_NOEXCEPT;


     void bindPipelineShaderGroupNV( VULKAN_HPP_NAMESPACE::PipelineBindPoint pipelineBindPoint, VULKAN_HPP_NAMESPACE::Pipeline pipeline, uint32_t groupIndex ) const  VULKAN_HPP_NOEXCEPT;

#if defined( VK_ENABLE_BETA_EXTENSIONS )
  //=== VK_KHR_video_encode_queue ===


     void encodeVideoKHR( const VULKAN_HPP_NAMESPACE::VideoEncodeInfoKHR & encodeInfo ) const  VULKAN_HPP_NOEXCEPT;
#endif /*VK_ENABLE_BETA_EXTENSIONS*/

  //=== VK_KHR_synchronization2 ===


     void setEvent2KHR( VULKAN_HPP_NAMESPACE::Event event, const VULKAN_HPP_NAMESPACE::DependencyInfo & dependencyInfo ) const  VULKAN_HPP_NOEXCEPT;


     void resetEvent2KHR( VULKAN_HPP_NAMESPACE::Event event, VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stageMask VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;


     void waitEvents2KHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Event> const & events, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DependencyInfo> const & dependencyInfos ) const ;


     void pipelineBarrier2KHR( const VULKAN_HPP_NAMESPACE::DependencyInfo & dependencyInfo ) const  VULKAN_HPP_NOEXCEPT;


     void writeTimestamp2KHR( VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stage, VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t query ) const  VULKAN_HPP_NOEXCEPT;


     void writeBufferMarker2AMD( VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stage, VULKAN_HPP_NAMESPACE::Buffer dstBuffer, VULKAN_HPP_NAMESPACE::DeviceSize dstOffset, uint32_t marker ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_descriptor_buffer ===


     void bindDescriptorBuffersEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DescriptorBufferBindingInfoEXT> const & bindingInfos ) const  VULKAN_HPP_NOEXCEPT;


     void setDescriptorBufferOffsetsEXT( VULKAN_HPP_NAMESPACE::PipelineBindPoint pipelineBindPoint, VULKAN_HPP_NAMESPACE::PipelineLayout layout, uint32_t firstSet, VULKAN_HPP_NAMESPACE::ArrayProxy<const uint32_t> const & bufferIndices, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & offsets ) const ;


     void bindDescriptorBufferEmbeddedSamplersEXT( VULKAN_HPP_NAMESPACE::PipelineBindPoint pipelineBindPoint, VULKAN_HPP_NAMESPACE::PipelineLayout layout, uint32_t set ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_NV_fragment_shading_rate_enums ===


     void setFragmentShadingRateEnumNV( VULKAN_HPP_NAMESPACE::FragmentShadingRateNV shadingRate, const VULKAN_HPP_NAMESPACE::FragmentShadingRateCombinerOpKHR combinerOps[2] ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_mesh_shader ===


     void drawMeshTasksEXT( uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ ) const  VULKAN_HPP_NOEXCEPT;


     void drawMeshTasksIndirectEXT( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, uint32_t drawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT;


     void drawMeshTasksIndirectCountEXT( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_copy_commands2 ===


     void copyBuffer2KHR( const VULKAN_HPP_NAMESPACE::CopyBufferInfo2 & copyBufferInfo ) const  VULKAN_HPP_NOEXCEPT;


     void copyImage2KHR( const VULKAN_HPP_NAMESPACE::CopyImageInfo2 & copyImageInfo ) const  VULKAN_HPP_NOEXCEPT;


     void copyBufferToImage2KHR( const VULKAN_HPP_NAMESPACE::CopyBufferToImageInfo2 & copyBufferToImageInfo ) const  VULKAN_HPP_NOEXCEPT;


     void copyImageToBuffer2KHR( const VULKAN_HPP_NAMESPACE::CopyImageToBufferInfo2 & copyImageToBufferInfo ) const  VULKAN_HPP_NOEXCEPT;


     void blitImage2KHR( const VULKAN_HPP_NAMESPACE::BlitImageInfo2 & blitImageInfo ) const  VULKAN_HPP_NOEXCEPT;


     void resolveImage2KHR( const VULKAN_HPP_NAMESPACE::ResolveImageInfo2 & resolveImageInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_ray_tracing_pipeline ===


     void traceRaysKHR( const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & raygenShaderBindingTable, const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & missShaderBindingTable, const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & hitShaderBindingTable, const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & callableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth ) const  VULKAN_HPP_NOEXCEPT;


     void traceRaysIndirectKHR( const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & raygenShaderBindingTable, const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & missShaderBindingTable, const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & hitShaderBindingTable, const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & callableShaderBindingTable, VULKAN_HPP_NAMESPACE::DeviceAddress indirectDeviceAddress ) const  VULKAN_HPP_NOEXCEPT;


     void setRayTracingPipelineStackSizeKHR( uint32_t pipelineStackSize ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_vertex_input_dynamic_state ===


     void setVertexInputEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::VertexInputBindingDescription2EXT> const & vertexBindingDescriptions, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::VertexInputAttributeDescription2EXT> const & vertexAttributeDescriptions ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_HUAWEI_subpass_shading ===


     void subpassShadingHUAWEI(  ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_HUAWEI_invocation_mask ===


     void bindInvocationMaskHUAWEI( VULKAN_HPP_NAMESPACE::ImageView imageView, VULKAN_HPP_NAMESPACE::ImageLayout imageLayout ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_extended_dynamic_state2 ===


     void setPatchControlPointsEXT( uint32_t patchControlPoints ) const  VULKAN_HPP_NOEXCEPT;


     void setRasterizerDiscardEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 rasterizerDiscardEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setDepthBiasEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthBiasEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setLogicOpEXT( VULKAN_HPP_NAMESPACE::LogicOp logicOp ) const  VULKAN_HPP_NOEXCEPT;


     void setPrimitiveRestartEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 primitiveRestartEnable ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_color_write_enable ===


     void setColorWriteEnableEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Bool32> const & colorWriteEnables ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_ray_tracing_maintenance1 ===


     void traceRaysIndirect2KHR( VULKAN_HPP_NAMESPACE::DeviceAddress indirectDeviceAddress ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_multi_draw ===


     void drawMultiEXT( VULKAN_HPP_NAMESPACE::StridedArrayProxy<const VULKAN_HPP_NAMESPACE::MultiDrawInfoEXT> const & vertexInfo, uint32_t instanceCount, uint32_t firstInstance ) const  VULKAN_HPP_NOEXCEPT;


     void drawMultiIndexedEXT( VULKAN_HPP_NAMESPACE::StridedArrayProxy<const VULKAN_HPP_NAMESPACE::MultiDrawIndexedInfoEXT> const & indexInfo, uint32_t instanceCount, uint32_t firstInstance, Optional<const int32_t> vertexOffset VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_opacity_micromap ===


     void buildMicromapsEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MicromapBuildInfoEXT> const & infos ) const  VULKAN_HPP_NOEXCEPT;


     void copyMicromapEXT( const VULKAN_HPP_NAMESPACE::CopyMicromapInfoEXT & info ) const  VULKAN_HPP_NOEXCEPT;


     void copyMicromapToMemoryEXT( const VULKAN_HPP_NAMESPACE::CopyMicromapToMemoryInfoEXT & info ) const  VULKAN_HPP_NOEXCEPT;


     void copyMemoryToMicromapEXT( const VULKAN_HPP_NAMESPACE::CopyMemoryToMicromapInfoEXT & info ) const  VULKAN_HPP_NOEXCEPT;


     void writeMicromapsPropertiesEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MicromapEXT> const & micromaps, VULKAN_HPP_NAMESPACE::QueryType queryType, VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t firstQuery ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_NV_copy_memory_indirect ===


     void copyMemoryIndirectNV( VULKAN_HPP_NAMESPACE::DeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT;


     void copyMemoryToImageIndirectNV( VULKAN_HPP_NAMESPACE::DeviceAddress copyBufferAddress, uint32_t stride, VULKAN_HPP_NAMESPACE::Image dstImage, VULKAN_HPP_NAMESPACE::ImageLayout dstImageLayout, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageSubresourceLayers> const & imageSubresources ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_NV_memory_decompression ===


     void decompressMemoryNV( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DecompressMemoryRegionNV> const & decompressMemoryRegions ) const  VULKAN_HPP_NOEXCEPT;


     void decompressMemoryIndirectCountNV( VULKAN_HPP_NAMESPACE::DeviceAddress indirectCommandsAddress, VULKAN_HPP_NAMESPACE::DeviceAddress indirectCommandsCountAddress, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_extended_dynamic_state3 ===


     void setTessellationDomainOriginEXT( VULKAN_HPP_NAMESPACE::TessellationDomainOrigin domainOrigin ) const  VULKAN_HPP_NOEXCEPT;


     void setDepthClampEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthClampEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setPolygonModeEXT( VULKAN_HPP_NAMESPACE::PolygonMode polygonMode ) const  VULKAN_HPP_NOEXCEPT;


     void setRasterizationSamplesEXT( VULKAN_HPP_NAMESPACE::SampleCountFlagBits rasterizationSamples ) const  VULKAN_HPP_NOEXCEPT;


     void setSampleMaskEXT( VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::SampleMask> const & sampleMask ) const  VULKAN_HPP_NOEXCEPT;


     void setAlphaToCoverageEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 alphaToCoverageEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setAlphaToOneEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 alphaToOneEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setLogicOpEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 logicOpEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setColorBlendEnableEXT( uint32_t firstAttachment, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Bool32> const & colorBlendEnables ) const  VULKAN_HPP_NOEXCEPT;


     void setColorBlendEquationEXT( uint32_t firstAttachment, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ColorBlendEquationEXT> const & colorBlendEquations ) const  VULKAN_HPP_NOEXCEPT;


     void setColorWriteMaskEXT( uint32_t firstAttachment, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ColorComponentFlags> const & colorWriteMasks ) const  VULKAN_HPP_NOEXCEPT;


     void setRasterizationStreamEXT( uint32_t rasterizationStream ) const  VULKAN_HPP_NOEXCEPT;


     void setConservativeRasterizationModeEXT( VULKAN_HPP_NAMESPACE::ConservativeRasterizationModeEXT conservativeRasterizationMode ) const  VULKAN_HPP_NOEXCEPT;


     void setExtraPrimitiveOverestimationSizeEXT( float extraPrimitiveOverestimationSize ) const  VULKAN_HPP_NOEXCEPT;


     void setDepthClipEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthClipEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setSampleLocationsEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 sampleLocationsEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setColorBlendAdvancedEXT( uint32_t firstAttachment, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ColorBlendAdvancedEXT> const & colorBlendAdvanced ) const  VULKAN_HPP_NOEXCEPT;


     void setProvokingVertexModeEXT( VULKAN_HPP_NAMESPACE::ProvokingVertexModeEXT provokingVertexMode ) const  VULKAN_HPP_NOEXCEPT;


     void setLineRasterizationModeEXT( VULKAN_HPP_NAMESPACE::LineRasterizationModeEXT lineRasterizationMode ) const  VULKAN_HPP_NOEXCEPT;


     void setLineStippleEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 stippledLineEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setDepthClipNegativeOneToOneEXT( VULKAN_HPP_NAMESPACE::Bool32 negativeOneToOne ) const  VULKAN_HPP_NOEXCEPT;


     void setViewportWScalingEnableNV( VULKAN_HPP_NAMESPACE::Bool32 viewportWScalingEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setViewportSwizzleNV( uint32_t firstViewport, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ViewportSwizzleNV> const & viewportSwizzles ) const  VULKAN_HPP_NOEXCEPT;


     void setCoverageToColorEnableNV( VULKAN_HPP_NAMESPACE::Bool32 coverageToColorEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setCoverageToColorLocationNV( uint32_t coverageToColorLocation ) const  VULKAN_HPP_NOEXCEPT;


     void setCoverageModulationModeNV( VULKAN_HPP_NAMESPACE::CoverageModulationModeNV coverageModulationMode ) const  VULKAN_HPP_NOEXCEPT;


     void setCoverageModulationTableEnableNV( VULKAN_HPP_NAMESPACE::Bool32 coverageModulationTableEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setCoverageModulationTableNV( VULKAN_HPP_NAMESPACE::ArrayProxy<const float> const & coverageModulationTable ) const  VULKAN_HPP_NOEXCEPT;


     void setShadingRateImageEnableNV( VULKAN_HPP_NAMESPACE::Bool32 shadingRateImageEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setRepresentativeFragmentTestEnableNV( VULKAN_HPP_NAMESPACE::Bool32 representativeFragmentTestEnable ) const  VULKAN_HPP_NOEXCEPT;


     void setCoverageReductionModeNV( VULKAN_HPP_NAMESPACE::CoverageReductionModeNV coverageReductionMode ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_NV_optical_flow ===


     void opticalFlowExecuteNV( VULKAN_HPP_NAMESPACE::OpticalFlowSessionNV session, const VULKAN_HPP_NAMESPACE::OpticalFlowExecuteInfoNV & executeInfo ) const  VULKAN_HPP_NOEXCEPT;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::CommandPool m_commandPool = {};
    VULKAN_HPP_NAMESPACE::CommandBuffer m_commandBuffer = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class CommandBuffers : public std::vector<VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::CommandBuffer>
  {
  public:

    CommandBuffers( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::CommandBufferAllocateInfo const & allocateInfo )
    {
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * dispatcher = device.getDispatcher();
      std::vector<VkCommandBuffer> commandBuffers( allocateInfo.commandBufferCount );
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( dispatcher->vkAllocateCommandBuffers( static_cast<VkDevice>( *device ), reinterpret_cast<const VkCommandBufferAllocateInfo *>( &allocateInfo ), commandBuffers.data() ) );
      if ( result == VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        this->reserve( allocateInfo.commandBufferCount );
        for ( auto const & commandBuffer : commandBuffers )
        {
          this->emplace_back( device, commandBuffer, static_cast<VkCommandPool>( allocateInfo.commandPool ) );
        }
      }
      else
      {
        throwResultException( result, "vkAllocateCommandBuffers" );
      }
    }

    CommandBuffers( std::nullptr_t ) {}

    CommandBuffers() = delete;
    CommandBuffers( CommandBuffers const & ) = delete;
    CommandBuffers( CommandBuffers && rhs ) = default;
    CommandBuffers & operator=( CommandBuffers const & ) = delete;
    CommandBuffers & operator=( CommandBuffers && rhs ) = default;
  };


  class CuFunctionNVX
  {
  public:
    using CType = VkCuFunctionNVX;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eCuFunctionNVX;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eCuFunctionNVX;

  public:

    CuFunctionNVX( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::CuFunctionCreateInfoNVX const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateCuFunctionNVX( static_cast<VkDevice>( *device ), reinterpret_cast<const VkCuFunctionCreateInfoNVX *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkCuFunctionNVX*>( &m_function ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateCuFunctionNVX" );
      }
    }

    CuFunctionNVX( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkCuFunctionNVX function, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_function( function ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    CuFunctionNVX( std::nullptr_t ) {}

    ~CuFunctionNVX()
    {
      clear();
    }

    CuFunctionNVX() = delete;
      CuFunctionNVX( CuFunctionNVX const & ) = delete;
    CuFunctionNVX( CuFunctionNVX && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_function( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_function, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      CuFunctionNVX & operator=( CuFunctionNVX const & ) = delete;
    CuFunctionNVX & operator=( CuFunctionNVX && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_function = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_function, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::CuFunctionNVX const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_function;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_function )
        {
          getDispatcher()->vkDestroyCuFunctionNVX( static_cast<VkDevice>( m_device ), static_cast<VkCuFunctionNVX>( m_function ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_function = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::CuFunctionNVX release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_function, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::CuFunctionNVX & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_function, rhs.m_function );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::CuFunctionNVX m_function = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class CuModuleNVX
  {
  public:
    using CType = VkCuModuleNVX;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eCuModuleNVX;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eCuModuleNVX;

  public:

    CuModuleNVX( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::CuModuleCreateInfoNVX const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateCuModuleNVX( static_cast<VkDevice>( *device ), reinterpret_cast<const VkCuModuleCreateInfoNVX *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkCuModuleNVX*>( &m_module ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateCuModuleNVX" );
      }
    }

    CuModuleNVX( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkCuModuleNVX module, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_module( module ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    CuModuleNVX( std::nullptr_t ) {}

    ~CuModuleNVX()
    {
      clear();
    }

    CuModuleNVX() = delete;
      CuModuleNVX( CuModuleNVX const & ) = delete;
    CuModuleNVX( CuModuleNVX && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_module( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_module, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      CuModuleNVX & operator=( CuModuleNVX const & ) = delete;
    CuModuleNVX & operator=( CuModuleNVX && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_module = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_module, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::CuModuleNVX const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_module;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_module )
        {
          getDispatcher()->vkDestroyCuModuleNVX( static_cast<VkDevice>( m_device ), static_cast<VkCuModuleNVX>( m_module ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_module = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::CuModuleNVX release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_module, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::CuModuleNVX & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_module, rhs.m_module );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::CuModuleNVX m_module = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class DebugReportCallbackEXT
  {
  public:
    using CType = VkDebugReportCallbackEXT;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDebugReportCallbackEXT;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDebugReportCallbackEXT;

  public:

    DebugReportCallbackEXT( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::DebugReportCallbackCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateDebugReportCallbackEXT( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkDebugReportCallbackCreateInfoEXT *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkDebugReportCallbackEXT*>( &m_callback ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateDebugReportCallbackEXT" );
      }
    }

    DebugReportCallbackEXT( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VkDebugReportCallbackEXT callback, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_callback( callback ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {}

    DebugReportCallbackEXT( std::nullptr_t ) {}

    ~DebugReportCallbackEXT()
    {
      clear();
    }

    DebugReportCallbackEXT() = delete;
      DebugReportCallbackEXT( DebugReportCallbackEXT const & ) = delete;
    DebugReportCallbackEXT( DebugReportCallbackEXT && rhs ) VULKAN_HPP_NOEXCEPT
      : m_instance( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_instance, {} ) ), m_callback( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_callback, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      DebugReportCallbackEXT & operator=( DebugReportCallbackEXT const & ) = delete;
    DebugReportCallbackEXT & operator=( DebugReportCallbackEXT && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_instance = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_instance, {} );
          m_callback = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_callback, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::DebugReportCallbackEXT const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_callback;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_callback )
        {
          getDispatcher()->vkDestroyDebugReportCallbackEXT( static_cast<VkInstance>( m_instance ), static_cast<VkDebugReportCallbackEXT>( m_callback ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_instance = nullptr;
      m_callback = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::DebugReportCallbackEXT release()
    {

      m_instance = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_callback, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Instance getInstance() const
    {
      return m_instance;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DebugReportCallbackEXT & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_instance, rhs.m_instance );
      std::swap( m_callback, rhs.m_callback );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Instance m_instance = {};
    VULKAN_HPP_NAMESPACE::DebugReportCallbackEXT m_callback = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * m_dispatcher = nullptr;
  };

  class DebugUtilsMessengerEXT
  {
  public:
    using CType = VkDebugUtilsMessengerEXT;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDebugUtilsMessengerEXT;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:

    DebugUtilsMessengerEXT( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateDebugUtilsMessengerEXT( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkDebugUtilsMessengerCreateInfoEXT *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkDebugUtilsMessengerEXT*>( &m_messenger ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateDebugUtilsMessengerEXT" );
      }
    }

    DebugUtilsMessengerEXT( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VkDebugUtilsMessengerEXT messenger, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_messenger( messenger ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {}

    DebugUtilsMessengerEXT( std::nullptr_t ) {}

    ~DebugUtilsMessengerEXT()
    {
      clear();
    }

    DebugUtilsMessengerEXT() = delete;
      DebugUtilsMessengerEXT( DebugUtilsMessengerEXT const & ) = delete;
    DebugUtilsMessengerEXT( DebugUtilsMessengerEXT && rhs ) VULKAN_HPP_NOEXCEPT
      : m_instance( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_instance, {} ) ), m_messenger( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_messenger, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      DebugUtilsMessengerEXT & operator=( DebugUtilsMessengerEXT const & ) = delete;
    DebugUtilsMessengerEXT & operator=( DebugUtilsMessengerEXT && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_instance = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_instance, {} );
          m_messenger = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_messenger, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::DebugUtilsMessengerEXT const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_messenger;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_messenger )
        {
          getDispatcher()->vkDestroyDebugUtilsMessengerEXT( static_cast<VkInstance>( m_instance ), static_cast<VkDebugUtilsMessengerEXT>( m_messenger ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_instance = nullptr;
      m_messenger = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::DebugUtilsMessengerEXT release()
    {

      m_instance = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_messenger, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Instance getInstance() const
    {
      return m_instance;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DebugUtilsMessengerEXT & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_instance, rhs.m_instance );
      std::swap( m_messenger, rhs.m_messenger );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Instance m_instance = {};
    VULKAN_HPP_NAMESPACE::DebugUtilsMessengerEXT m_messenger = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * m_dispatcher = nullptr;
  };

  class DeferredOperationKHR
  {
  public:
    using CType = VkDeferredOperationKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDeferredOperationKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:

    DeferredOperationKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateDeferredOperationKHR( static_cast<VkDevice>( *device ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkDeferredOperationKHR*>( &m_operation ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateDeferredOperationKHR" );
      }
    }

    DeferredOperationKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkDeferredOperationKHR operation, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_operation( operation ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    DeferredOperationKHR( std::nullptr_t ) {}

    ~DeferredOperationKHR()
    {
      clear();
    }

    DeferredOperationKHR() = delete;
      DeferredOperationKHR( DeferredOperationKHR const & ) = delete;
    DeferredOperationKHR( DeferredOperationKHR && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_operation( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_operation, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      DeferredOperationKHR & operator=( DeferredOperationKHR const & ) = delete;
    DeferredOperationKHR & operator=( DeferredOperationKHR && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_operation = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_operation, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::DeferredOperationKHR const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_operation;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_operation )
        {
          getDispatcher()->vkDestroyDeferredOperationKHR( static_cast<VkDevice>( m_device ), static_cast<VkDeferredOperationKHR>( m_operation ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_operation = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::DeferredOperationKHR release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_operation, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeferredOperationKHR & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_operation, rhs.m_operation );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_KHR_deferred_host_operations ===


    VULKAN_HPP_NODISCARD  uint32_t getMaxConcurrency(  ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result getResult(  ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result join(  ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::DeferredOperationKHR m_operation = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class DescriptorPool
  {
  public:
    using CType = VkDescriptorPool;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDescriptorPool;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDescriptorPool;

  public:

    DescriptorPool( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::DescriptorPoolCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateDescriptorPool( static_cast<VkDevice>( *device ), reinterpret_cast<const VkDescriptorPoolCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkDescriptorPool*>( &m_descriptorPool ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateDescriptorPool" );
      }
    }

    DescriptorPool( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkDescriptorPool descriptorPool, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_descriptorPool( descriptorPool ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    DescriptorPool( std::nullptr_t ) {}

    ~DescriptorPool()
    {
      clear();
    }

    DescriptorPool() = delete;
      DescriptorPool( DescriptorPool const & ) = delete;
    DescriptorPool( DescriptorPool && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_descriptorPool( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_descriptorPool, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      DescriptorPool & operator=( DescriptorPool const & ) = delete;
    DescriptorPool & operator=( DescriptorPool && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_descriptorPool = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_descriptorPool, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::DescriptorPool const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorPool;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_descriptorPool )
        {
          getDispatcher()->vkDestroyDescriptorPool( static_cast<VkDevice>( m_device ), static_cast<VkDescriptorPool>( m_descriptorPool ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_descriptorPool = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::DescriptorPool release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_descriptorPool, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DescriptorPool & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_descriptorPool, rhs.m_descriptorPool );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===


     void reset( VULKAN_HPP_NAMESPACE::DescriptorPoolResetFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const  VULKAN_HPP_NOEXCEPT;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::DescriptorPool m_descriptorPool = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class DescriptorSet
  {
  public:
    using CType = VkDescriptorSet;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDescriptorSet;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDescriptorSet;

  public:

    DescriptorSet( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkDescriptorSet descriptorSet, VkDescriptorPool descriptorPool )
      : m_device( *device ), m_descriptorPool( descriptorPool ), m_descriptorSet( descriptorSet ), m_dispatcher( device.getDispatcher() )
    {}

    DescriptorSet( std::nullptr_t ) {}

    ~DescriptorSet()
    {
      clear();
    }

    DescriptorSet() = delete;
      DescriptorSet( DescriptorSet const & ) = delete;
    DescriptorSet( DescriptorSet && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_descriptorPool( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_descriptorPool, {} ) ), m_descriptorSet( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_descriptorSet, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      DescriptorSet & operator=( DescriptorSet const & ) = delete;
    DescriptorSet & operator=( DescriptorSet && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_descriptorPool = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_descriptorPool, {} );
          m_descriptorSet = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_descriptorSet, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::DescriptorSet const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorSet;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_descriptorSet )
        {
          getDispatcher()->vkFreeDescriptorSets( static_cast<VkDevice>( m_device ), static_cast<VkDescriptorPool>( m_descriptorPool ), 1, reinterpret_cast<VkDescriptorSet const *>( &m_descriptorSet ) );
        }
      m_device = nullptr;
      m_descriptorPool = nullptr;
      m_descriptorSet = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::DescriptorSet release()
    {

      m_device = nullptr;
      m_descriptorPool = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_descriptorSet, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DescriptorSet & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_descriptorPool, rhs.m_descriptorPool );
      std::swap( m_descriptorSet, rhs.m_descriptorSet );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_1 ===

    template <typename DataType>
     void updateWithTemplate( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate, DataType const & data ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_descriptor_update_template ===

    template <typename DataType>
     void updateWithTemplateKHR( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate, DataType const & data ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_VALVE_descriptor_set_host_mapping ===


    VULKAN_HPP_NODISCARD  void * getHostMappingVALVE(  ) const  VULKAN_HPP_NOEXCEPT;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::DescriptorPool m_descriptorPool = {};
    VULKAN_HPP_NAMESPACE::DescriptorSet m_descriptorSet = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class DescriptorSets : public std::vector<VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DescriptorSet>
  {
  public:

    DescriptorSets( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::DescriptorSetAllocateInfo const & allocateInfo )
    {
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * dispatcher = device.getDispatcher();
      std::vector<VkDescriptorSet> descriptorSets( allocateInfo.descriptorSetCount );
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( dispatcher->vkAllocateDescriptorSets( static_cast<VkDevice>( *device ), reinterpret_cast<const VkDescriptorSetAllocateInfo *>( &allocateInfo ), descriptorSets.data() ) );
      if ( result == VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        this->reserve( allocateInfo.descriptorSetCount );
        for ( auto const & descriptorSet : descriptorSets )
        {
          this->emplace_back( device, descriptorSet, static_cast<VkDescriptorPool>( allocateInfo.descriptorPool ) );
        }
      }
      else
      {
        throwResultException( result, "vkAllocateDescriptorSets" );
      }
    }

    DescriptorSets( std::nullptr_t ) {}

    DescriptorSets() = delete;
    DescriptorSets( DescriptorSets const & ) = delete;
    DescriptorSets( DescriptorSets && rhs ) = default;
    DescriptorSets & operator=( DescriptorSets const & ) = delete;
    DescriptorSets & operator=( DescriptorSets && rhs ) = default;
  };


  class DescriptorSetLayout
  {
  public:
    using CType = VkDescriptorSetLayout;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDescriptorSetLayout;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDescriptorSetLayout;

  public:

    DescriptorSetLayout( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateDescriptorSetLayout( static_cast<VkDevice>( *device ), reinterpret_cast<const VkDescriptorSetLayoutCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkDescriptorSetLayout*>( &m_descriptorSetLayout ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateDescriptorSetLayout" );
      }
    }

    DescriptorSetLayout( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkDescriptorSetLayout descriptorSetLayout, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_descriptorSetLayout( descriptorSetLayout ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    DescriptorSetLayout( std::nullptr_t ) {}

    ~DescriptorSetLayout()
    {
      clear();
    }

    DescriptorSetLayout() = delete;
      DescriptorSetLayout( DescriptorSetLayout const & ) = delete;
    DescriptorSetLayout( DescriptorSetLayout && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_descriptorSetLayout( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_descriptorSetLayout, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      DescriptorSetLayout & operator=( DescriptorSetLayout const & ) = delete;
    DescriptorSetLayout & operator=( DescriptorSetLayout && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_descriptorSetLayout = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_descriptorSetLayout, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::DescriptorSetLayout const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorSetLayout;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_descriptorSetLayout )
        {
          getDispatcher()->vkDestroyDescriptorSetLayout( static_cast<VkDevice>( m_device ), static_cast<VkDescriptorSetLayout>( m_descriptorSetLayout ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_descriptorSetLayout = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::DescriptorSetLayout release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_descriptorSetLayout, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DescriptorSetLayout & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_descriptorSetLayout, rhs.m_descriptorSetLayout );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_EXT_descriptor_buffer ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DeviceSize getSizeEXT(  ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DeviceSize getBindingOffsetEXT( uint32_t binding ) const  VULKAN_HPP_NOEXCEPT;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::DescriptorSetLayout m_descriptorSetLayout = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class DescriptorUpdateTemplate
  {
  public:
    using CType = VkDescriptorUpdateTemplate;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDescriptorUpdateTemplate;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDescriptorUpdateTemplate;

  public:

    DescriptorUpdateTemplate( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplateCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateDescriptorUpdateTemplate( static_cast<VkDevice>( *device ), reinterpret_cast<const VkDescriptorUpdateTemplateCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkDescriptorUpdateTemplate*>( &m_descriptorUpdateTemplate ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateDescriptorUpdateTemplate" );
      }
    }

    DescriptorUpdateTemplate( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_descriptorUpdateTemplate( descriptorUpdateTemplate ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    DescriptorUpdateTemplate( std::nullptr_t ) {}

    ~DescriptorUpdateTemplate()
    {
      clear();
    }

    DescriptorUpdateTemplate() = delete;
      DescriptorUpdateTemplate( DescriptorUpdateTemplate const & ) = delete;
    DescriptorUpdateTemplate( DescriptorUpdateTemplate && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_descriptorUpdateTemplate( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_descriptorUpdateTemplate, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      DescriptorUpdateTemplate & operator=( DescriptorUpdateTemplate const & ) = delete;
    DescriptorUpdateTemplate & operator=( DescriptorUpdateTemplate && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_descriptorUpdateTemplate = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_descriptorUpdateTemplate, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorUpdateTemplate;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_descriptorUpdateTemplate )
        {
          getDispatcher()->vkDestroyDescriptorUpdateTemplate( static_cast<VkDevice>( m_device ), static_cast<VkDescriptorUpdateTemplate>( m_descriptorUpdateTemplate ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_descriptorUpdateTemplate = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_descriptorUpdateTemplate, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DescriptorUpdateTemplate & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_descriptorUpdateTemplate, rhs.m_descriptorUpdateTemplate );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate m_descriptorUpdateTemplate = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class DeviceMemory
  {
  public:
    using CType = VkDeviceMemory;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDeviceMemory;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDeviceMemory;

  public:

    DeviceMemory( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::MemoryAllocateInfo const & allocateInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkAllocateMemory( static_cast<VkDevice>( *device ), reinterpret_cast<const VkMemoryAllocateInfo *>( &allocateInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkDeviceMemory*>( &m_memory ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkAllocateMemory" );
      }
    }

    DeviceMemory( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkDeviceMemory memory, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_memory( memory ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    DeviceMemory( std::nullptr_t ) {}

    ~DeviceMemory()
    {
      clear();
    }

    DeviceMemory() = delete;
      DeviceMemory( DeviceMemory const & ) = delete;
    DeviceMemory( DeviceMemory && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_memory( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_memory, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      DeviceMemory & operator=( DeviceMemory const & ) = delete;
    DeviceMemory & operator=( DeviceMemory && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_memory = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_memory, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::DeviceMemory const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_memory;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_memory )
        {
          getDispatcher()->vkFreeMemory( static_cast<VkDevice>( m_device ), static_cast<VkDeviceMemory>( m_memory ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_memory = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::DeviceMemory release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_memory, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceMemory & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_memory, rhs.m_memory );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===


    VULKAN_HPP_NODISCARD  void * mapMemory( VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::DeviceSize size, VULKAN_HPP_NAMESPACE::MemoryMapFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const ;


     void unmapMemory(  ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DeviceSize getCommitment(  ) const  VULKAN_HPP_NOEXCEPT;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_NV_external_memory_win32 ===


    VULKAN_HPP_NODISCARD  HANDLE getMemoryWin32HandleNV( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV handleType ) const ;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_EXT_pageable_device_local_memory ===


     void setPriorityEXT( float priority ) const  VULKAN_HPP_NOEXCEPT;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::DeviceMemory m_memory = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class DisplayKHR
  {
  public:
    using CType = VkDisplayKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDisplayKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDisplayKHR;

  public:

    DisplayKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PhysicalDevice const & physicalDevice, int32_t drmFd, uint32_t connectorId )
      : m_physicalDevice( *physicalDevice ), m_dispatcher( physicalDevice.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( physicalDevice.getDispatcher()->vkGetDrmDisplayEXT( static_cast<VkPhysicalDevice>( *physicalDevice ), drmFd, connectorId, reinterpret_cast<VkDisplayKHR*>( &m_display ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkGetDrmDisplayEXT" );
      }
    }

#if defined( VK_USE_PLATFORM_XLIB_XRANDR_EXT )
    DisplayKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PhysicalDevice const & physicalDevice, Display & dpy, RROutput rrOutput )
      : m_physicalDevice( *physicalDevice ), m_dispatcher( physicalDevice.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( physicalDevice.getDispatcher()->vkGetRandROutputDisplayEXT( static_cast<VkPhysicalDevice>( *physicalDevice ), &dpy, rrOutput, reinterpret_cast<VkDisplayKHR*>( &m_display ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkGetRandROutputDisplayEXT" );
      }
    }
#endif /*VK_USE_PLATFORM_XLIB_XRANDR_EXT*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
    DisplayKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PhysicalDevice const & physicalDevice, uint32_t deviceRelativeId )
      : m_physicalDevice( *physicalDevice ), m_dispatcher( physicalDevice.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( physicalDevice.getDispatcher()->vkGetWinrtDisplayNV( static_cast<VkPhysicalDevice>( *physicalDevice ), deviceRelativeId, reinterpret_cast<VkDisplayKHR*>( &m_display ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkGetWinrtDisplayNV" );
      }
    }
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

    DisplayKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PhysicalDevice const & physicalDevice, VkDisplayKHR display )
      : m_physicalDevice( *physicalDevice ), m_display( display ), m_dispatcher( physicalDevice.getDispatcher() )
    {}

    DisplayKHR( std::nullptr_t ) {}

    ~DisplayKHR()
    {
      clear();
    }

    DisplayKHR() = delete;
      DisplayKHR( DisplayKHR const & ) = delete;
    DisplayKHR( DisplayKHR && rhs ) VULKAN_HPP_NOEXCEPT
      : m_physicalDevice( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_physicalDevice, {} ) ), m_display( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_display, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      DisplayKHR & operator=( DisplayKHR const & ) = delete;
    DisplayKHR & operator=( DisplayKHR && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_physicalDevice = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_physicalDevice, {} );
          m_display = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_display, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::DisplayKHR const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_display;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_display )
        {
          getDispatcher()->vkReleaseDisplayEXT( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkDisplayKHR>( m_display ) );
        }
      m_physicalDevice = nullptr;
      m_display = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::DisplayKHR release()
    {

      m_physicalDevice = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_display, nullptr );
    }


    VULKAN_HPP_NAMESPACE::PhysicalDevice getPhysicalDevice() const
    {
      return m_physicalDevice;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DisplayKHR & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_physicalDevice, rhs.m_physicalDevice );
      std::swap( m_display, rhs.m_display );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_KHR_display ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::DisplayModePropertiesKHR> getModeProperties(  ) const ;

  VULKAN_HPP_NODISCARD VULKAN_HPP_RAII_NAMESPACE::DisplayModeKHR createMode( VULKAN_HPP_NAMESPACE::DisplayModeCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr ) const;

  //=== VK_KHR_get_display_properties2 ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::DisplayModeProperties2KHR> getModeProperties2(  ) const ;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_NV_acquire_winrt_display ===


     void acquireWinrtNV(  ) const ;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/


  private:

    VULKAN_HPP_NAMESPACE::PhysicalDevice m_physicalDevice = {};
    VULKAN_HPP_NAMESPACE::DisplayKHR m_display = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * m_dispatcher = nullptr;
  };

  class DisplayKHRs : public std::vector<VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DisplayKHR>
  {
  public:

    DisplayKHRs( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PhysicalDevice const & physicalDevice, uint32_t planeIndex )
    {
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * dispatcher = physicalDevice.getDispatcher();
      std::vector<VkDisplayKHR> displays;
      uint32_t displayCount;
      VULKAN_HPP_NAMESPACE::Result result;
      do
      {
        result = static_cast<VULKAN_HPP_NAMESPACE::Result>( dispatcher->vkGetDisplayPlaneSupportedDisplaysKHR( static_cast<VkPhysicalDevice>( *physicalDevice ), planeIndex, &displayCount, nullptr ) );
        if ( ( result == VULKAN_HPP_NAMESPACE::Result::eSuccess ) && displayCount )
        {
          displays.resize( displayCount );
          result = static_cast<VULKAN_HPP_NAMESPACE::Result>( dispatcher->vkGetDisplayPlaneSupportedDisplaysKHR( static_cast<VkPhysicalDevice>( *physicalDevice ), planeIndex, &displayCount, displays.data() ) );
        }
      } while ( result == VULKAN_HPP_NAMESPACE::Result::eIncomplete );
      if ( result == VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        VULKAN_HPP_ASSERT( displayCount <= displays.size() );
        this->reserve( displayCount );
        for ( auto const & displayKHR : displays )
        {
          this->emplace_back( physicalDevice, displayKHR );
        }
      }
      else
      {
        throwResultException( result, "vkGetDisplayPlaneSupportedDisplaysKHR" );
      }
    }

    DisplayKHRs( std::nullptr_t ) {}

    DisplayKHRs() = delete;
    DisplayKHRs( DisplayKHRs const & ) = delete;
    DisplayKHRs( DisplayKHRs && rhs ) = default;
    DisplayKHRs & operator=( DisplayKHRs const & ) = delete;
    DisplayKHRs & operator=( DisplayKHRs && rhs ) = default;
  };


  class DisplayModeKHR
  {
  public:
    using CType = VkDisplayModeKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDisplayModeKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDisplayModeKHR;

  public:

    DisplayModeKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DisplayKHR const & display, VULKAN_HPP_NAMESPACE::DisplayModeCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_physicalDevice( display.getPhysicalDevice() ), m_dispatcher( display.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( display.getDispatcher()->vkCreateDisplayModeKHR( static_cast<VkPhysicalDevice>( display.getPhysicalDevice() ), static_cast<VkDisplayKHR>( *display ), reinterpret_cast<const VkDisplayModeCreateInfoKHR *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>(static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), reinterpret_cast<VkDisplayModeKHR*>( &m_displayModeKHR ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateDisplayModeKHR" );
      }
    }

    DisplayModeKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DisplayKHR const & display, VkDisplayModeKHR displayModeKHR )
      : m_physicalDevice( display.getPhysicalDevice() ), m_displayModeKHR( displayModeKHR ), m_dispatcher( display.getDispatcher() )
    {}

    DisplayModeKHR( std::nullptr_t ) {}

    ~DisplayModeKHR()
    {
      clear();
    }

    DisplayModeKHR() = delete;
      DisplayModeKHR( DisplayModeKHR const & rhs ) : m_displayModeKHR( rhs.m_displayModeKHR ), m_dispatcher( rhs.m_dispatcher ) {}
    DisplayModeKHR( DisplayModeKHR && rhs ) VULKAN_HPP_NOEXCEPT
      : m_physicalDevice( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_physicalDevice, {} ) ), m_displayModeKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_displayModeKHR, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      DisplayModeKHR & operator=( DisplayModeKHR const & rhs )
      {
        m_displayModeKHR = rhs.m_displayModeKHR;
        m_dispatcher    = rhs.m_dispatcher;
        return *this;
      }
    DisplayModeKHR & operator=( DisplayModeKHR && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {

          m_physicalDevice = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_physicalDevice, {} );
          m_displayModeKHR = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_displayModeKHR, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::DisplayModeKHR const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_displayModeKHR;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {

        m_physicalDevice = nullptr;
        m_displayModeKHR = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::DisplayModeKHR release()
    {

        m_physicalDevice = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_displayModeKHR, nullptr );
    }



    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DisplayModeKHR & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_physicalDevice, rhs.m_physicalDevice );
      std::swap( m_displayModeKHR, rhs.m_displayModeKHR );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_KHR_display ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DisplayPlaneCapabilitiesKHR getDisplayPlaneCapabilities( uint32_t planeIndex ) const ;


  private:

    VULKAN_HPP_NAMESPACE::PhysicalDevice m_physicalDevice = {};
    VULKAN_HPP_NAMESPACE::DisplayModeKHR m_displayModeKHR = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * m_dispatcher = nullptr;
  };

  class Event
  {
  public:
    using CType = VkEvent;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eEvent;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eEvent;

  public:

    Event( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::EventCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateEvent( static_cast<VkDevice>( *device ), reinterpret_cast<const VkEventCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkEvent*>( &m_event ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateEvent" );
      }
    }

    Event( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkEvent event, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_event( event ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    Event( std::nullptr_t ) {}

    ~Event()
    {
      clear();
    }

    Event() = delete;
      Event( Event const & ) = delete;
    Event( Event && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_event( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_event, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      Event & operator=( Event const & ) = delete;
    Event & operator=( Event && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_event = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_event, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::Event const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_event;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_event )
        {
          getDispatcher()->vkDestroyEvent( static_cast<VkDevice>( m_device ), static_cast<VkEvent>( m_event ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_event = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::Event release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_event, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Event & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_event, rhs.m_event );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result getStatus(  ) const ;


     void set(  ) const ;


     void reset(  ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::Event m_event = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class Fence
  {
  public:
    using CType = VkFence;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eFence;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eFence;

  public:

    Fence( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::FenceCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateFence( static_cast<VkDevice>( *device ), reinterpret_cast<const VkFenceCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkFence*>( &m_fence ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateFence" );
      }
    }

    Fence( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::DeviceEventInfoEXT const & deviceEventInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkRegisterDeviceEventEXT( static_cast<VkDevice>( *device ), reinterpret_cast<const VkDeviceEventInfoEXT *>( &deviceEventInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkFence*>( &m_fence ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkRegisterDeviceEventEXT" );
      }
    }

    Fence( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DisplayKHR const & display, VULKAN_HPP_NAMESPACE::DisplayEventInfoEXT const & displayEventInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkRegisterDisplayEventEXT( static_cast<VkDevice>( *device ), static_cast<VkDisplayKHR>( *display ), reinterpret_cast<const VkDisplayEventInfoEXT *>( &displayEventInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkFence*>( &m_fence ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkRegisterDisplayEventEXT" );
      }
    }

    Fence( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkFence fence, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_fence( fence ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    Fence( std::nullptr_t ) {}

    ~Fence()
    {
      clear();
    }

    Fence() = delete;
      Fence( Fence const & ) = delete;
    Fence( Fence && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_fence( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_fence, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      Fence & operator=( Fence const & ) = delete;
    Fence & operator=( Fence && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_fence = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_fence, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::Fence const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_fence;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_fence )
        {
          getDispatcher()->vkDestroyFence( static_cast<VkDevice>( m_device ), static_cast<VkFence>( m_fence ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_fence = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::Fence release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_fence, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Fence & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_fence, rhs.m_fence );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result getStatus(  ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::Fence m_fence = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class Framebuffer
  {
  public:
    using CType = VkFramebuffer;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eFramebuffer;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eFramebuffer;

  public:

    Framebuffer( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::FramebufferCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateFramebuffer( static_cast<VkDevice>( *device ), reinterpret_cast<const VkFramebufferCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkFramebuffer*>( &m_framebuffer ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateFramebuffer" );
      }
    }

    Framebuffer( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkFramebuffer framebuffer, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_framebuffer( framebuffer ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    Framebuffer( std::nullptr_t ) {}

    ~Framebuffer()
    {
      clear();
    }

    Framebuffer() = delete;
      Framebuffer( Framebuffer const & ) = delete;
    Framebuffer( Framebuffer && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_framebuffer( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_framebuffer, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      Framebuffer & operator=( Framebuffer const & ) = delete;
    Framebuffer & operator=( Framebuffer && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_framebuffer = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_framebuffer, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::Framebuffer const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_framebuffer;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_framebuffer )
        {
          getDispatcher()->vkDestroyFramebuffer( static_cast<VkDevice>( m_device ), static_cast<VkFramebuffer>( m_framebuffer ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_framebuffer = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::Framebuffer release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_framebuffer, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Framebuffer & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_framebuffer, rhs.m_framebuffer );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_QCOM_tile_properties ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::TilePropertiesQCOM> getTilePropertiesQCOM(  ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::Framebuffer m_framebuffer = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class Image
  {
  public:
    using CType = VkImage;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eImage;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eImage;

  public:

    Image( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::ImageCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateImage( static_cast<VkDevice>( *device ), reinterpret_cast<const VkImageCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkImage*>( &m_image ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateImage" );
      }
    }

    Image( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkImage image, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_image( image ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    Image( std::nullptr_t ) {}

    ~Image()
    {
      clear();
    }

    Image() = delete;
      Image( Image const & ) = delete;
    Image( Image && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_image( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_image, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      Image & operator=( Image const & ) = delete;
    Image & operator=( Image && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_image = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_image, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::Image const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_image;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_image )
        {
          getDispatcher()->vkDestroyImage( static_cast<VkDevice>( m_device ), static_cast<VkImage>( m_image ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_image = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::Image release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_image, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Image & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_image, rhs.m_image );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===


     void bindMemory( VULKAN_HPP_NAMESPACE::DeviceMemory memory, VULKAN_HPP_NAMESPACE::DeviceSize memoryOffset ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::MemoryRequirements getMemoryRequirements(  ) const  VULKAN_HPP_NOEXCEPT;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements> getSparseMemoryRequirements(  ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::SubresourceLayout getSubresourceLayout( const VULKAN_HPP_NAMESPACE::ImageSubresource & subresource ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_image_drm_format_modifier ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ImageDrmFormatModifierPropertiesEXT getDrmFormatModifierPropertiesEXT(  ) const ;

  //=== VK_EXT_image_compression_control ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::SubresourceLayout2EXT getSubresourceLayout2EXT( const VULKAN_HPP_NAMESPACE::ImageSubresource2EXT & subresource ) const  VULKAN_HPP_NOEXCEPT;

    template <typename X, typename Y, typename... Z>
    VULKAN_HPP_NODISCARD  StructureChain<X, Y, Z...> getSubresourceLayout2EXT( const VULKAN_HPP_NAMESPACE::ImageSubresource2EXT & subresource ) const  VULKAN_HPP_NOEXCEPT;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::Image m_image = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class ImageView
  {
  public:
    using CType = VkImageView;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eImageView;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eImageView;

  public:

    ImageView( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::ImageViewCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateImageView( static_cast<VkDevice>( *device ), reinterpret_cast<const VkImageViewCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkImageView*>( &m_imageView ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateImageView" );
      }
    }

    ImageView( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkImageView imageView, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_imageView( imageView ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    ImageView( std::nullptr_t ) {}

    ~ImageView()
    {
      clear();
    }

    ImageView() = delete;
      ImageView( ImageView const & ) = delete;
    ImageView( ImageView && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_imageView( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_imageView, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      ImageView & operator=( ImageView const & ) = delete;
    ImageView & operator=( ImageView && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_imageView = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_imageView, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::ImageView const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_imageView;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_imageView )
        {
          getDispatcher()->vkDestroyImageView( static_cast<VkDevice>( m_device ), static_cast<VkImageView>( m_imageView ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_imageView = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::ImageView release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_imageView, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::ImageView & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_imageView, rhs.m_imageView );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_NVX_image_view_handle ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ImageViewAddressPropertiesNVX getAddressNVX(  ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::ImageView m_imageView = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class IndirectCommandsLayoutNV
  {
  public:
    using CType = VkIndirectCommandsLayoutNV;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eIndirectCommandsLayoutNV;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:

    IndirectCommandsLayoutNV( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutCreateInfoNV const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateIndirectCommandsLayoutNV( static_cast<VkDevice>( *device ), reinterpret_cast<const VkIndirectCommandsLayoutCreateInfoNV *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkIndirectCommandsLayoutNV*>( &m_indirectCommandsLayout ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateIndirectCommandsLayoutNV" );
      }
    }

    IndirectCommandsLayoutNV( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkIndirectCommandsLayoutNV indirectCommandsLayout, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_indirectCommandsLayout( indirectCommandsLayout ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    IndirectCommandsLayoutNV( std::nullptr_t ) {}

    ~IndirectCommandsLayoutNV()
    {
      clear();
    }

    IndirectCommandsLayoutNV() = delete;
      IndirectCommandsLayoutNV( IndirectCommandsLayoutNV const & ) = delete;
    IndirectCommandsLayoutNV( IndirectCommandsLayoutNV && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_indirectCommandsLayout( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_indirectCommandsLayout, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      IndirectCommandsLayoutNV & operator=( IndirectCommandsLayoutNV const & ) = delete;
    IndirectCommandsLayoutNV & operator=( IndirectCommandsLayoutNV && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_indirectCommandsLayout = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_indirectCommandsLayout, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutNV const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_indirectCommandsLayout;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_indirectCommandsLayout )
        {
          getDispatcher()->vkDestroyIndirectCommandsLayoutNV( static_cast<VkDevice>( m_device ), static_cast<VkIndirectCommandsLayoutNV>( m_indirectCommandsLayout ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_indirectCommandsLayout = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutNV release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_indirectCommandsLayout, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::IndirectCommandsLayoutNV & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_indirectCommandsLayout, rhs.m_indirectCommandsLayout );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutNV m_indirectCommandsLayout = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class MicromapEXT
  {
  public:
    using CType = VkMicromapEXT;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eMicromapEXT;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:

    MicromapEXT( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::MicromapCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateMicromapEXT( static_cast<VkDevice>( *device ), reinterpret_cast<const VkMicromapCreateInfoEXT *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkMicromapEXT*>( &m_micromap ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateMicromapEXT" );
      }
    }

    MicromapEXT( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkMicromapEXT micromap, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_micromap( micromap ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    MicromapEXT( std::nullptr_t ) {}

    ~MicromapEXT()
    {
      clear();
    }

    MicromapEXT() = delete;
      MicromapEXT( MicromapEXT const & ) = delete;
    MicromapEXT( MicromapEXT && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_micromap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_micromap, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      MicromapEXT & operator=( MicromapEXT const & ) = delete;
    MicromapEXT & operator=( MicromapEXT && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_micromap = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_micromap, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::MicromapEXT const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_micromap;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_micromap )
        {
          getDispatcher()->vkDestroyMicromapEXT( static_cast<VkDevice>( m_device ), static_cast<VkMicromapEXT>( m_micromap ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_micromap = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::MicromapEXT release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_micromap, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::MicromapEXT & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_micromap, rhs.m_micromap );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::MicromapEXT m_micromap = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class OpticalFlowSessionNV
  {
  public:
    using CType = VkOpticalFlowSessionNV;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eOpticalFlowSessionNV;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:

    OpticalFlowSessionNV( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::OpticalFlowSessionCreateInfoNV const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateOpticalFlowSessionNV( static_cast<VkDevice>( *device ), reinterpret_cast<const VkOpticalFlowSessionCreateInfoNV *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkOpticalFlowSessionNV*>( &m_session ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateOpticalFlowSessionNV" );
      }
    }

    OpticalFlowSessionNV( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkOpticalFlowSessionNV session, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_session( session ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    OpticalFlowSessionNV( std::nullptr_t ) {}

    ~OpticalFlowSessionNV()
    {
      clear();
    }

    OpticalFlowSessionNV() = delete;
      OpticalFlowSessionNV( OpticalFlowSessionNV const & ) = delete;
    OpticalFlowSessionNV( OpticalFlowSessionNV && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_session( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_session, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      OpticalFlowSessionNV & operator=( OpticalFlowSessionNV const & ) = delete;
    OpticalFlowSessionNV & operator=( OpticalFlowSessionNV && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_session = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_session, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::OpticalFlowSessionNV const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_session;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_session )
        {
          getDispatcher()->vkDestroyOpticalFlowSessionNV( static_cast<VkDevice>( m_device ), static_cast<VkOpticalFlowSessionNV>( m_session ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_session = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::OpticalFlowSessionNV release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_session, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::OpticalFlowSessionNV & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_session, rhs.m_session );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_NV_optical_flow ===


     void bindImage( VULKAN_HPP_NAMESPACE::OpticalFlowSessionBindingPointNV bindingPoint, VULKAN_HPP_NAMESPACE::ImageView view, VULKAN_HPP_NAMESPACE::ImageLayout layout ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::OpticalFlowSessionNV m_session = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class PerformanceConfigurationINTEL
  {
  public:
    using CType = VkPerformanceConfigurationINTEL;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::ePerformanceConfigurationINTEL;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:

    PerformanceConfigurationINTEL( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::PerformanceConfigurationAcquireInfoINTEL const & acquireInfo )
      : m_device( *device ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkAcquirePerformanceConfigurationINTEL( static_cast<VkDevice>( *device ), reinterpret_cast<const VkPerformanceConfigurationAcquireInfoINTEL *>( &acquireInfo ), reinterpret_cast<VkPerformanceConfigurationINTEL*>( &m_configuration ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkAcquirePerformanceConfigurationINTEL" );
      }
    }

    PerformanceConfigurationINTEL( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkPerformanceConfigurationINTEL configuration )
      : m_device( *device ), m_configuration( configuration ), m_dispatcher( device.getDispatcher() )
    {}

    PerformanceConfigurationINTEL( std::nullptr_t ) {}

    ~PerformanceConfigurationINTEL()
    {
      clear();
    }

    PerformanceConfigurationINTEL() = delete;
      PerformanceConfigurationINTEL( PerformanceConfigurationINTEL const & ) = delete;
    PerformanceConfigurationINTEL( PerformanceConfigurationINTEL && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_configuration( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_configuration, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      PerformanceConfigurationINTEL & operator=( PerformanceConfigurationINTEL const & ) = delete;
    PerformanceConfigurationINTEL & operator=( PerformanceConfigurationINTEL && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_configuration = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_configuration, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_configuration;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_configuration )
        {
          getDispatcher()->vkReleasePerformanceConfigurationINTEL( static_cast<VkDevice>( m_device ), static_cast<VkPerformanceConfigurationINTEL>( m_configuration ) );
        }
      m_device = nullptr;
      m_configuration = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL release()
    {

      m_device = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_configuration, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PerformanceConfigurationINTEL & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_configuration, rhs.m_configuration );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL m_configuration = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class PipelineCache
  {
  public:
    using CType = VkPipelineCache;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::ePipelineCache;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::ePipelineCache;

  public:

    PipelineCache( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::PipelineCacheCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreatePipelineCache( static_cast<VkDevice>( *device ), reinterpret_cast<const VkPipelineCacheCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkPipelineCache*>( &m_pipelineCache ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreatePipelineCache" );
      }
    }

    PipelineCache( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkPipelineCache pipelineCache, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_pipelineCache( pipelineCache ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    PipelineCache( std::nullptr_t ) {}

    ~PipelineCache()
    {
      clear();
    }

    PipelineCache() = delete;
      PipelineCache( PipelineCache const & ) = delete;
    PipelineCache( PipelineCache && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_pipelineCache( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_pipelineCache, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      PipelineCache & operator=( PipelineCache const & ) = delete;
    PipelineCache & operator=( PipelineCache && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_pipelineCache = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_pipelineCache, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::PipelineCache const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_pipelineCache;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_pipelineCache )
        {
          getDispatcher()->vkDestroyPipelineCache( static_cast<VkDevice>( m_device ), static_cast<VkPipelineCache>( m_pipelineCache ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_pipelineCache = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::PipelineCache release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_pipelineCache, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_pipelineCache, rhs.m_pipelineCache );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===


    VULKAN_HPP_NODISCARD  std::vector<uint8_t> getData(  ) const ;


     void merge( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::PipelineCache> const & srcCaches ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::PipelineCache m_pipelineCache = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class Pipeline
  {
  public:
    using CType = VkPipeline;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::ePipeline;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::ePipeline;

  public:

    Pipeline( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ComputePipelineCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      m_constructorSuccessCode = static_cast<VULKAN_HPP_NAMESPACE::Result>( getDispatcher()->vkCreateComputePipelines( static_cast<VkDevice>( *device ), pipelineCache ? static_cast<VkPipelineCache>( **pipelineCache ) : 0, 1, reinterpret_cast<const VkComputePipelineCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkPipeline*>( &m_pipeline ) ) );
      if ( ( m_constructorSuccessCode != VULKAN_HPP_NAMESPACE::Result::eSuccess )&& ( m_constructorSuccessCode != VULKAN_HPP_NAMESPACE::Result::ePipelineCompileRequiredEXT ) )
      {
        throwResultException( m_constructorSuccessCode, "vkCreateComputePipelines" );
      }
    }

    Pipeline( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::GraphicsPipelineCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      m_constructorSuccessCode = static_cast<VULKAN_HPP_NAMESPACE::Result>( getDispatcher()->vkCreateGraphicsPipelines( static_cast<VkDevice>( *device ), pipelineCache ? static_cast<VkPipelineCache>( **pipelineCache ) : 0, 1, reinterpret_cast<const VkGraphicsPipelineCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkPipeline*>( &m_pipeline ) ) );
      if ( ( m_constructorSuccessCode != VULKAN_HPP_NAMESPACE::Result::eSuccess )&& ( m_constructorSuccessCode != VULKAN_HPP_NAMESPACE::Result::ePipelineCompileRequiredEXT ) )
      {
        throwResultException( m_constructorSuccessCode, "vkCreateGraphicsPipelines" );
      }
    }

    Pipeline( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeferredOperationKHR> const & deferredOperation, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      m_constructorSuccessCode = static_cast<VULKAN_HPP_NAMESPACE::Result>( getDispatcher()->vkCreateRayTracingPipelinesKHR( static_cast<VkDevice>( *device ), deferredOperation ? static_cast<VkDeferredOperationKHR>( **deferredOperation ) : 0, pipelineCache ? static_cast<VkPipelineCache>( **pipelineCache ) : 0, 1, reinterpret_cast<const VkRayTracingPipelineCreateInfoKHR *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkPipeline*>( &m_pipeline ) ) );
      if ( ( m_constructorSuccessCode != VULKAN_HPP_NAMESPACE::Result::eSuccess )&& ( m_constructorSuccessCode != VULKAN_HPP_NAMESPACE::Result::eOperationDeferredKHR )&& ( m_constructorSuccessCode != VULKAN_HPP_NAMESPACE::Result::eOperationNotDeferredKHR )&& ( m_constructorSuccessCode != VULKAN_HPP_NAMESPACE::Result::ePipelineCompileRequiredEXT ) )
      {
        throwResultException( m_constructorSuccessCode, "vkCreateRayTracingPipelinesKHR" );
      }
    }

    Pipeline( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoNV const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      m_constructorSuccessCode = static_cast<VULKAN_HPP_NAMESPACE::Result>( getDispatcher()->vkCreateRayTracingPipelinesNV( static_cast<VkDevice>( *device ), pipelineCache ? static_cast<VkPipelineCache>( **pipelineCache ) : 0, 1, reinterpret_cast<const VkRayTracingPipelineCreateInfoNV *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkPipeline*>( &m_pipeline ) ) );
      if ( ( m_constructorSuccessCode != VULKAN_HPP_NAMESPACE::Result::eSuccess )&& ( m_constructorSuccessCode != VULKAN_HPP_NAMESPACE::Result::ePipelineCompileRequiredEXT ) )
      {
        throwResultException( m_constructorSuccessCode, "vkCreateRayTracingPipelinesNV" );
      }
    }

    Pipeline( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkPipeline pipeline, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr, VULKAN_HPP_NAMESPACE::Result successCode = VULKAN_HPP_NAMESPACE::Result::eSuccess )
      : m_device( *device ), m_pipeline( pipeline ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_constructorSuccessCode( successCode ), m_dispatcher( device.getDispatcher() )
    {}

    Pipeline( std::nullptr_t ) {}

    ~Pipeline()
    {
      clear();
    }

    Pipeline() = delete;
      Pipeline( Pipeline const & ) = delete;
    Pipeline( Pipeline && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_pipeline( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_pipeline, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_constructorSuccessCode( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_constructorSuccessCode, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      Pipeline & operator=( Pipeline const & ) = delete;
    Pipeline & operator=( Pipeline && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_pipeline = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_pipeline, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
          m_constructorSuccessCode = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_constructorSuccessCode, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::Pipeline const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_pipeline;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_pipeline )
        {
          getDispatcher()->vkDestroyPipeline( static_cast<VkDevice>( m_device ), static_cast<VkPipeline>( m_pipeline ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_pipeline = nullptr;
      m_allocator = nullptr;
        m_constructorSuccessCode = VULKAN_HPP_NAMESPACE::Result::eErrorUnknown;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::Pipeline release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_constructorSuccessCode = VULKAN_HPP_NAMESPACE::Result::eErrorUnknown;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_pipeline, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Result getConstructorSuccessCode() const
    {
      return m_constructorSuccessCode;
    }

    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Pipeline & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_pipeline, rhs.m_pipeline );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_constructorSuccessCode, rhs.m_constructorSuccessCode );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_AMD_shader_info ===


    VULKAN_HPP_NODISCARD  std::vector<uint8_t> getShaderInfoAMD( VULKAN_HPP_NAMESPACE::ShaderStageFlagBits shaderStage, VULKAN_HPP_NAMESPACE::ShaderInfoTypeAMD infoType ) const ;

  //=== VK_NV_ray_tracing ===

    template <typename DataType>
    VULKAN_HPP_NODISCARD  std::vector<DataType> getRayTracingShaderGroupHandlesNV( uint32_t firstGroup, uint32_t groupCount, size_t dataSize ) const ;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  DataType getRayTracingShaderGroupHandleNV( uint32_t firstGroup, uint32_t groupCount ) const ;


     void compileDeferredNV( uint32_t shader ) const ;

  //=== VK_KHR_ray_tracing_pipeline ===

    template <typename DataType>
    VULKAN_HPP_NODISCARD  std::vector<DataType> getRayTracingShaderGroupHandlesKHR( uint32_t firstGroup, uint32_t groupCount, size_t dataSize ) const ;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  DataType getRayTracingShaderGroupHandleKHR( uint32_t firstGroup, uint32_t groupCount ) const ;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  std::vector<DataType> getRayTracingCaptureReplayShaderGroupHandlesKHR( uint32_t firstGroup, uint32_t groupCount, size_t dataSize ) const ;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  DataType getRayTracingCaptureReplayShaderGroupHandleKHR( uint32_t firstGroup, uint32_t groupCount ) const ;


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::DeviceSize getRayTracingShaderGroupStackSizeKHR( uint32_t group, VULKAN_HPP_NAMESPACE::ShaderGroupShaderKHR groupShader ) const  VULKAN_HPP_NOEXCEPT;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::Pipeline m_pipeline = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
    VULKAN_HPP_NAMESPACE::Result m_constructorSuccessCode = VULKAN_HPP_NAMESPACE::Result::eErrorUnknown;
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class Pipelines : public std::vector<VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Pipeline>
  {
  public:

    Pipelines( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::ComputePipelineCreateInfo> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
    {
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * dispatcher = device.getDispatcher();
      std::vector<VkPipeline> pipelines( createInfos.size() );
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( dispatcher->vkCreateComputePipelines( static_cast<VkDevice>( *device ), pipelineCache ? static_cast<VkPipelineCache>( **pipelineCache ) : 0, createInfos.size(), reinterpret_cast<const VkComputePipelineCreateInfo *>( createInfos.data() ), reinterpret_cast<const VkAllocationCallbacks *>(static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), pipelines.data() ) );
      if ( ( result == VULKAN_HPP_NAMESPACE::Result::eSuccess )|| ( result == VULKAN_HPP_NAMESPACE::Result::ePipelineCompileRequiredEXT ) )
      {
        this->reserve( createInfos.size() );
        for ( auto const & pipeline : pipelines )
        {
          this->emplace_back( device, pipeline, allocator, result );
        }
      }
      else
      {
        throwResultException( result, "vkCreateComputePipelines" );
      }
    }

    Pipelines( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::GraphicsPipelineCreateInfo> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
    {
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * dispatcher = device.getDispatcher();
      std::vector<VkPipeline> pipelines( createInfos.size() );
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( dispatcher->vkCreateGraphicsPipelines( static_cast<VkDevice>( *device ), pipelineCache ? static_cast<VkPipelineCache>( **pipelineCache ) : 0, createInfos.size(), reinterpret_cast<const VkGraphicsPipelineCreateInfo *>( createInfos.data() ), reinterpret_cast<const VkAllocationCallbacks *>(static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), pipelines.data() ) );
      if ( ( result == VULKAN_HPP_NAMESPACE::Result::eSuccess )|| ( result == VULKAN_HPP_NAMESPACE::Result::ePipelineCompileRequiredEXT ) )
      {
        this->reserve( createInfos.size() );
        for ( auto const & pipeline : pipelines )
        {
          this->emplace_back( device, pipeline, allocator, result );
        }
      }
      else
      {
        throwResultException( result, "vkCreateGraphicsPipelines" );
      }
    }

    Pipelines( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeferredOperationKHR> const & deferredOperation, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoKHR> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
    {
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * dispatcher = device.getDispatcher();
      std::vector<VkPipeline> pipelines( createInfos.size() );
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( dispatcher->vkCreateRayTracingPipelinesKHR( static_cast<VkDevice>( *device ), deferredOperation ? static_cast<VkDeferredOperationKHR>( **deferredOperation ) : 0, pipelineCache ? static_cast<VkPipelineCache>( **pipelineCache ) : 0, createInfos.size(), reinterpret_cast<const VkRayTracingPipelineCreateInfoKHR *>( createInfos.data() ), reinterpret_cast<const VkAllocationCallbacks *>(static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), pipelines.data() ) );
      if ( ( result == VULKAN_HPP_NAMESPACE::Result::eSuccess )|| ( result == VULKAN_HPP_NAMESPACE::Result::eOperationDeferredKHR )|| ( result == VULKAN_HPP_NAMESPACE::Result::eOperationNotDeferredKHR )|| ( result == VULKAN_HPP_NAMESPACE::Result::ePipelineCompileRequiredEXT ) )
      {
        this->reserve( createInfos.size() );
        for ( auto const & pipeline : pipelines )
        {
          this->emplace_back( device, pipeline, allocator, result );
        }
      }
      else
      {
        throwResultException( result, "vkCreateRayTracingPipelinesKHR" );
      }
    }

    Pipelines( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoNV> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
    {
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * dispatcher = device.getDispatcher();
      std::vector<VkPipeline> pipelines( createInfos.size() );
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( dispatcher->vkCreateRayTracingPipelinesNV( static_cast<VkDevice>( *device ), pipelineCache ? static_cast<VkPipelineCache>( **pipelineCache ) : 0, createInfos.size(), reinterpret_cast<const VkRayTracingPipelineCreateInfoNV *>( createInfos.data() ), reinterpret_cast<const VkAllocationCallbacks *>(static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), pipelines.data() ) );
      if ( ( result == VULKAN_HPP_NAMESPACE::Result::eSuccess )|| ( result == VULKAN_HPP_NAMESPACE::Result::ePipelineCompileRequiredEXT ) )
      {
        this->reserve( createInfos.size() );
        for ( auto const & pipeline : pipelines )
        {
          this->emplace_back( device, pipeline, allocator, result );
        }
      }
      else
      {
        throwResultException( result, "vkCreateRayTracingPipelinesNV" );
      }
    }

    Pipelines( std::nullptr_t ) {}

    Pipelines() = delete;
    Pipelines( Pipelines const & ) = delete;
    Pipelines( Pipelines && rhs ) = default;
    Pipelines & operator=( Pipelines const & ) = delete;
    Pipelines & operator=( Pipelines && rhs ) = default;
  };


  class PipelineLayout
  {
  public:
    using CType = VkPipelineLayout;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::ePipelineLayout;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::ePipelineLayout;

  public:

    PipelineLayout( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::PipelineLayoutCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreatePipelineLayout( static_cast<VkDevice>( *device ), reinterpret_cast<const VkPipelineLayoutCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkPipelineLayout*>( &m_pipelineLayout ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreatePipelineLayout" );
      }
    }

    PipelineLayout( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkPipelineLayout pipelineLayout, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_pipelineLayout( pipelineLayout ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    PipelineLayout( std::nullptr_t ) {}

    ~PipelineLayout()
    {
      clear();
    }

    PipelineLayout() = delete;
      PipelineLayout( PipelineLayout const & ) = delete;
    PipelineLayout( PipelineLayout && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_pipelineLayout( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_pipelineLayout, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      PipelineLayout & operator=( PipelineLayout const & ) = delete;
    PipelineLayout & operator=( PipelineLayout && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_pipelineLayout = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_pipelineLayout, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::PipelineLayout const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_pipelineLayout;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_pipelineLayout )
        {
          getDispatcher()->vkDestroyPipelineLayout( static_cast<VkDevice>( m_device ), static_cast<VkPipelineLayout>( m_pipelineLayout ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_pipelineLayout = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::PipelineLayout release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_pipelineLayout, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineLayout & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_pipelineLayout, rhs.m_pipelineLayout );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::PipelineLayout m_pipelineLayout = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class PrivateDataSlot
  {
  public:
    using CType = VkPrivateDataSlot;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::ePrivateDataSlot;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:

    PrivateDataSlot( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::PrivateDataSlotCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreatePrivateDataSlot( static_cast<VkDevice>( *device ), reinterpret_cast<const VkPrivateDataSlotCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkPrivateDataSlot*>( &m_privateDataSlot ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreatePrivateDataSlot" );
      }
    }

    PrivateDataSlot( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkPrivateDataSlot privateDataSlot, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_privateDataSlot( privateDataSlot ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    PrivateDataSlot( std::nullptr_t ) {}

    ~PrivateDataSlot()
    {
      clear();
    }

    PrivateDataSlot() = delete;
      PrivateDataSlot( PrivateDataSlot const & ) = delete;
    PrivateDataSlot( PrivateDataSlot && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_privateDataSlot( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_privateDataSlot, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      PrivateDataSlot & operator=( PrivateDataSlot const & ) = delete;
    PrivateDataSlot & operator=( PrivateDataSlot && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_privateDataSlot = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_privateDataSlot, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::PrivateDataSlot const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_privateDataSlot;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_privateDataSlot )
        {
          getDispatcher()->vkDestroyPrivateDataSlot( static_cast<VkDevice>( m_device ), static_cast<VkPrivateDataSlot>( m_privateDataSlot ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_privateDataSlot = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::PrivateDataSlot release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_privateDataSlot, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PrivateDataSlot & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_privateDataSlot, rhs.m_privateDataSlot );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::PrivateDataSlot m_privateDataSlot = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class QueryPool
  {
  public:
    using CType = VkQueryPool;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eQueryPool;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eQueryPool;

  public:

    QueryPool( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::QueryPoolCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateQueryPool( static_cast<VkDevice>( *device ), reinterpret_cast<const VkQueryPoolCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkQueryPool*>( &m_queryPool ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateQueryPool" );
      }
    }

    QueryPool( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkQueryPool queryPool, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_queryPool( queryPool ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    QueryPool( std::nullptr_t ) {}

    ~QueryPool()
    {
      clear();
    }

    QueryPool() = delete;
      QueryPool( QueryPool const & ) = delete;
    QueryPool( QueryPool && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_queryPool( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_queryPool, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      QueryPool & operator=( QueryPool const & ) = delete;
    QueryPool & operator=( QueryPool && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_queryPool = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_queryPool, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::QueryPool const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_queryPool;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_queryPool )
        {
          getDispatcher()->vkDestroyQueryPool( static_cast<VkDevice>( m_device ), static_cast<VkQueryPool>( m_queryPool ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_queryPool = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::QueryPool release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_queryPool, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::QueryPool & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_queryPool, rhs.m_queryPool );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===

    template <typename DataType>
    VULKAN_HPP_NODISCARD  std::pair<VULKAN_HPP_NAMESPACE::Result, std::vector<DataType>> getResults( uint32_t firstQuery, uint32_t queryCount, size_t dataSize, VULKAN_HPP_NAMESPACE::DeviceSize stride, VULKAN_HPP_NAMESPACE::QueryResultFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const ;

    template <typename DataType>
    VULKAN_HPP_NODISCARD  std::pair<VULKAN_HPP_NAMESPACE::Result, DataType> getResult( uint32_t firstQuery, uint32_t queryCount, VULKAN_HPP_NAMESPACE::DeviceSize stride, VULKAN_HPP_NAMESPACE::QueryResultFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const ;

  //=== VK_VERSION_1_2 ===


     void reset( uint32_t firstQuery, uint32_t queryCount ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_EXT_host_query_reset ===


     void resetEXT( uint32_t firstQuery, uint32_t queryCount ) const  VULKAN_HPP_NOEXCEPT;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::QueryPool m_queryPool = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class Queue
  {
  public:
    using CType = VkQueue;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eQueue;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eQueue;

  public:

    Queue( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, uint32_t queueFamilyIndex, uint32_t queueIndex )
      : m_dispatcher( device.getDispatcher() )
    {
      getDispatcher()->vkGetDeviceQueue( static_cast<VkDevice>( *device ), queueFamilyIndex, queueIndex, reinterpret_cast<VkQueue*>( &m_queue ) );
    }

    Queue( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::DeviceQueueInfo2 const & queueInfo )
      : m_dispatcher( device.getDispatcher() )
    {
      getDispatcher()->vkGetDeviceQueue2( static_cast<VkDevice>( *device ), reinterpret_cast<const VkDeviceQueueInfo2 *>( &queueInfo ), reinterpret_cast<VkQueue*>( &m_queue ) );
    }

    Queue( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkQueue queue )
      : m_queue( queue ), m_dispatcher( device.getDispatcher() )
    {}

    Queue( std::nullptr_t ) {}

    ~Queue()
    {
      clear();
    }

    Queue() = delete;
      Queue( Queue const & rhs ) : m_queue( rhs.m_queue ), m_dispatcher( rhs.m_dispatcher ) {}
    Queue( Queue && rhs ) VULKAN_HPP_NOEXCEPT
      : m_queue( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_queue, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      Queue & operator=( Queue const & rhs )
      {
        m_queue = rhs.m_queue;
        m_dispatcher    = rhs.m_dispatcher;
        return *this;
      }
    Queue & operator=( Queue && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {

          m_queue = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_queue, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::Queue const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_queue;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {

        m_queue = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::Queue release()
    {

        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_queue, nullptr );
    }



    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Queue & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_queue, rhs.m_queue );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===


     void submit( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::SubmitInfo> const & submits, VULKAN_HPP_NAMESPACE::Fence fence VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const ;


     void waitIdle(  ) const ;


     void bindSparse( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BindSparseInfo> const & bindInfo, VULKAN_HPP_NAMESPACE::Fence fence VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const ;

  //=== VK_VERSION_1_3 ===


     void submit2( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::SubmitInfo2> const & submits, VULKAN_HPP_NAMESPACE::Fence fence VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const ;

  //=== VK_KHR_swapchain ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result presentKHR( const VULKAN_HPP_NAMESPACE::PresentInfoKHR & presentInfo ) const ;

  //=== VK_EXT_debug_utils ===


     void beginDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT & labelInfo ) const  VULKAN_HPP_NOEXCEPT;


     void endDebugUtilsLabelEXT(  ) const  VULKAN_HPP_NOEXCEPT;


     void insertDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT & labelInfo ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_NV_device_diagnostic_checkpoints ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::CheckpointDataNV> getCheckpointDataNV(  ) const ;

  //=== VK_INTEL_performance_query ===


     void setPerformanceConfigurationINTEL( VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL configuration ) const ;

  //=== VK_KHR_synchronization2 ===


     void submit2KHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::SubmitInfo2> const & submits, VULKAN_HPP_NAMESPACE::Fence fence VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::CheckpointData2NV> getCheckpointData2NV(  ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Queue m_queue = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class RenderPass
  {
  public:
    using CType = VkRenderPass;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eRenderPass;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eRenderPass;

  public:

    RenderPass( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::RenderPassCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateRenderPass( static_cast<VkDevice>( *device ), reinterpret_cast<const VkRenderPassCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkRenderPass*>( &m_renderPass ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateRenderPass" );
      }
    }

    RenderPass( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::RenderPassCreateInfo2 const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateRenderPass2( static_cast<VkDevice>( *device ), reinterpret_cast<const VkRenderPassCreateInfo2 *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkRenderPass*>( &m_renderPass ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateRenderPass2" );
      }
    }

    RenderPass( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkRenderPass renderPass, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_renderPass( renderPass ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    RenderPass( std::nullptr_t ) {}

    ~RenderPass()
    {
      clear();
    }

    RenderPass() = delete;
      RenderPass( RenderPass const & ) = delete;
    RenderPass( RenderPass && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_renderPass( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_renderPass, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      RenderPass & operator=( RenderPass const & ) = delete;
    RenderPass & operator=( RenderPass && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_renderPass = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_renderPass, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::RenderPass const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_renderPass;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_renderPass )
        {
          getDispatcher()->vkDestroyRenderPass( static_cast<VkDevice>( m_device ), static_cast<VkRenderPass>( m_renderPass ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_renderPass = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::RenderPass release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_renderPass, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::RenderPass & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_renderPass, rhs.m_renderPass );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_0 ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Extent2D getRenderAreaGranularity(  ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_HUAWEI_subpass_shading ===


    VULKAN_HPP_NODISCARD  std::pair<VULKAN_HPP_NAMESPACE::Result, VULKAN_HPP_NAMESPACE::Extent2D> getSubpassShadingMaxWorkgroupSizeHUAWEI(  ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::RenderPass m_renderPass = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class Sampler
  {
  public:
    using CType = VkSampler;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eSampler;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSampler;

  public:

    Sampler( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::SamplerCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateSampler( static_cast<VkDevice>( *device ), reinterpret_cast<const VkSamplerCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSampler*>( &m_sampler ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateSampler" );
      }
    }

    Sampler( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkSampler sampler, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_sampler( sampler ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    Sampler( std::nullptr_t ) {}

    ~Sampler()
    {
      clear();
    }

    Sampler() = delete;
      Sampler( Sampler const & ) = delete;
    Sampler( Sampler && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_sampler( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_sampler, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      Sampler & operator=( Sampler const & ) = delete;
    Sampler & operator=( Sampler && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_sampler = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_sampler, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::Sampler const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_sampler;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_sampler )
        {
          getDispatcher()->vkDestroySampler( static_cast<VkDevice>( m_device ), static_cast<VkSampler>( m_sampler ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_sampler = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::Sampler release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_sampler, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Sampler & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_sampler, rhs.m_sampler );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::Sampler m_sampler = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class SamplerYcbcrConversion
  {
  public:
    using CType = VkSamplerYcbcrConversion;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eSamplerYcbcrConversion;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSamplerYcbcrConversion;

  public:

    SamplerYcbcrConversion( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::SamplerYcbcrConversionCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateSamplerYcbcrConversion( static_cast<VkDevice>( *device ), reinterpret_cast<const VkSamplerYcbcrConversionCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSamplerYcbcrConversion*>( &m_ycbcrConversion ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateSamplerYcbcrConversion" );
      }
    }

    SamplerYcbcrConversion( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkSamplerYcbcrConversion ycbcrConversion, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_ycbcrConversion( ycbcrConversion ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    SamplerYcbcrConversion( std::nullptr_t ) {}

    ~SamplerYcbcrConversion()
    {
      clear();
    }

    SamplerYcbcrConversion() = delete;
      SamplerYcbcrConversion( SamplerYcbcrConversion const & ) = delete;
    SamplerYcbcrConversion( SamplerYcbcrConversion && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_ycbcrConversion( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_ycbcrConversion, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      SamplerYcbcrConversion & operator=( SamplerYcbcrConversion const & ) = delete;
    SamplerYcbcrConversion & operator=( SamplerYcbcrConversion && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_ycbcrConversion = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_ycbcrConversion, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_ycbcrConversion;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_ycbcrConversion )
        {
          getDispatcher()->vkDestroySamplerYcbcrConversion( static_cast<VkDevice>( m_device ), static_cast<VkSamplerYcbcrConversion>( m_ycbcrConversion ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_ycbcrConversion = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_ycbcrConversion, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::SamplerYcbcrConversion & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_ycbcrConversion, rhs.m_ycbcrConversion );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion m_ycbcrConversion = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class Semaphore
  {
  public:
    using CType = VkSemaphore;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eSemaphore;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSemaphore;

  public:

    Semaphore( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::SemaphoreCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateSemaphore( static_cast<VkDevice>( *device ), reinterpret_cast<const VkSemaphoreCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSemaphore*>( &m_semaphore ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateSemaphore" );
      }
    }

    Semaphore( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkSemaphore semaphore, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_semaphore( semaphore ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    Semaphore( std::nullptr_t ) {}

    ~Semaphore()
    {
      clear();
    }

    Semaphore() = delete;
      Semaphore( Semaphore const & ) = delete;
    Semaphore( Semaphore && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_semaphore( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_semaphore, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      Semaphore & operator=( Semaphore const & ) = delete;
    Semaphore & operator=( Semaphore && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_semaphore = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_semaphore, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::Semaphore const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_semaphore;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_semaphore )
        {
          getDispatcher()->vkDestroySemaphore( static_cast<VkDevice>( m_device ), static_cast<VkSemaphore>( m_semaphore ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_semaphore = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::Semaphore release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_semaphore, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Semaphore & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_semaphore, rhs.m_semaphore );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_VERSION_1_2 ===


    VULKAN_HPP_NODISCARD  uint64_t getCounterValue(  ) const ;

  //=== VK_KHR_timeline_semaphore ===


    VULKAN_HPP_NODISCARD  uint64_t getCounterValueKHR(  ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::Semaphore m_semaphore = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class ShaderModule
  {
  public:
    using CType = VkShaderModule;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eShaderModule;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eShaderModule;

  public:

    ShaderModule( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::ShaderModuleCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateShaderModule( static_cast<VkDevice>( *device ), reinterpret_cast<const VkShaderModuleCreateInfo *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkShaderModule*>( &m_shaderModule ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateShaderModule" );
      }
    }

    ShaderModule( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkShaderModule shaderModule, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_shaderModule( shaderModule ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    ShaderModule( std::nullptr_t ) {}

    ~ShaderModule()
    {
      clear();
    }

    ShaderModule() = delete;
      ShaderModule( ShaderModule const & ) = delete;
    ShaderModule( ShaderModule && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_shaderModule( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_shaderModule, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      ShaderModule & operator=( ShaderModule const & ) = delete;
    ShaderModule & operator=( ShaderModule && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_shaderModule = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_shaderModule, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::ShaderModule const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_shaderModule;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_shaderModule )
        {
          getDispatcher()->vkDestroyShaderModule( static_cast<VkDevice>( m_device ), static_cast<VkShaderModule>( m_shaderModule ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_shaderModule = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::ShaderModule release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_shaderModule, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::ShaderModule & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_shaderModule, rhs.m_shaderModule );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_EXT_shader_module_identifier ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::ShaderModuleIdentifierEXT getIdentifierEXT(  ) const  VULKAN_HPP_NOEXCEPT;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::ShaderModule m_shaderModule = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class SurfaceKHR
  {
  public:
    using CType = VkSurfaceKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eSurfaceKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSurfaceKHR;

  public:

#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::AndroidSurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateAndroidSurfaceKHR( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkAndroidSurfaceCreateInfoKHR *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateAndroidSurfaceKHR" );
      }
    }
#endif /*VK_USE_PLATFORM_ANDROID_KHR*/

#if defined( VK_USE_PLATFORM_DIRECTFB_EXT )
    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::DirectFBSurfaceCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateDirectFBSurfaceEXT( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkDirectFBSurfaceCreateInfoEXT *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateDirectFBSurfaceEXT" );
      }
    }
#endif /*VK_USE_PLATFORM_DIRECTFB_EXT*/

    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::DisplaySurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateDisplayPlaneSurfaceKHR( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkDisplaySurfaceCreateInfoKHR *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateDisplayPlaneSurfaceKHR" );
      }
    }

    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::HeadlessSurfaceCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateHeadlessSurfaceEXT( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkHeadlessSurfaceCreateInfoEXT *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateHeadlessSurfaceEXT" );
      }
    }

#if defined( VK_USE_PLATFORM_IOS_MVK )
    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::IOSSurfaceCreateInfoMVK const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateIOSSurfaceMVK( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkIOSSurfaceCreateInfoMVK *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateIOSSurfaceMVK" );
      }
    }
#endif /*VK_USE_PLATFORM_IOS_MVK*/

#if defined( VK_USE_PLATFORM_FUCHSIA )
    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::ImagePipeSurfaceCreateInfoFUCHSIA const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateImagePipeSurfaceFUCHSIA( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkImagePipeSurfaceCreateInfoFUCHSIA *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateImagePipeSurfaceFUCHSIA" );
      }
    }
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_MACOS_MVK )
    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::MacOSSurfaceCreateInfoMVK const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateMacOSSurfaceMVK( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkMacOSSurfaceCreateInfoMVK *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateMacOSSurfaceMVK" );
      }
    }
#endif /*VK_USE_PLATFORM_MACOS_MVK*/

#if defined( VK_USE_PLATFORM_METAL_EXT )
    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::MetalSurfaceCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateMetalSurfaceEXT( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkMetalSurfaceCreateInfoEXT *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateMetalSurfaceEXT" );
      }
    }
#endif /*VK_USE_PLATFORM_METAL_EXT*/

#if defined( VK_USE_PLATFORM_SCREEN_QNX )
    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::ScreenSurfaceCreateInfoQNX const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateScreenSurfaceQNX( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkScreenSurfaceCreateInfoQNX *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateScreenSurfaceQNX" );
      }
    }
#endif /*VK_USE_PLATFORM_SCREEN_QNX*/

#if defined( VK_USE_PLATFORM_GGP )
    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::StreamDescriptorSurfaceCreateInfoGGP const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateStreamDescriptorSurfaceGGP( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkStreamDescriptorSurfaceCreateInfoGGP *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateStreamDescriptorSurfaceGGP" );
      }
    }
#endif /*VK_USE_PLATFORM_GGP*/

#if defined( VK_USE_PLATFORM_VI_NN )
    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::ViSurfaceCreateInfoNN const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateViSurfaceNN( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkViSurfaceCreateInfoNN *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateViSurfaceNN" );
      }
    }
#endif /*VK_USE_PLATFORM_VI_NN*/

#if defined( VK_USE_PLATFORM_WAYLAND_KHR )
    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::WaylandSurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateWaylandSurfaceKHR( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkWaylandSurfaceCreateInfoKHR *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateWaylandSurfaceKHR" );
      }
    }
#endif /*VK_USE_PLATFORM_WAYLAND_KHR*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::Win32SurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateWin32SurfaceKHR( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkWin32SurfaceCreateInfoKHR *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateWin32SurfaceKHR" );
      }
    }
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

#if defined( VK_USE_PLATFORM_XCB_KHR )
    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::XcbSurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateXcbSurfaceKHR( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkXcbSurfaceCreateInfoKHR *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateXcbSurfaceKHR" );
      }
    }
#endif /*VK_USE_PLATFORM_XCB_KHR*/

#if defined( VK_USE_PLATFORM_XLIB_KHR )
    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VULKAN_HPP_NAMESPACE::XlibSurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( instance.getDispatcher()->vkCreateXlibSurfaceKHR( static_cast<VkInstance>( *instance ), reinterpret_cast<const VkXlibSurfaceCreateInfoKHR *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSurfaceKHR*>( &m_surface ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateXlibSurfaceKHR" );
      }
    }
#endif /*VK_USE_PLATFORM_XLIB_KHR*/

    SurfaceKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Instance const & instance, VkSurfaceKHR surface, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_instance( *instance ), m_surface( surface ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( instance.getDispatcher() )
    {}

    SurfaceKHR( std::nullptr_t ) {}

    ~SurfaceKHR()
    {
      clear();
    }

    SurfaceKHR() = delete;
      SurfaceKHR( SurfaceKHR const & ) = delete;
    SurfaceKHR( SurfaceKHR && rhs ) VULKAN_HPP_NOEXCEPT
      : m_instance( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_instance, {} ) ), m_surface( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_surface, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      SurfaceKHR & operator=( SurfaceKHR const & ) = delete;
    SurfaceKHR & operator=( SurfaceKHR && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_instance = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_instance, {} );
          m_surface = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_surface, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::SurfaceKHR const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_surface;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_surface )
        {
          getDispatcher()->vkDestroySurfaceKHR( static_cast<VkInstance>( m_instance ), static_cast<VkSurfaceKHR>( m_surface ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_instance = nullptr;
      m_surface = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::SurfaceKHR release()
    {

      m_instance = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_surface, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Instance getInstance() const
    {
      return m_instance;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_instance, rhs.m_instance );
      std::swap( m_surface, rhs.m_surface );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }



  private:

    VULKAN_HPP_NAMESPACE::Instance m_instance = {};
    VULKAN_HPP_NAMESPACE::SurfaceKHR m_surface = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::InstanceDispatcher const * m_dispatcher = nullptr;
  };

  class SwapchainKHR
  {
  public:
    using CType = VkSwapchainKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eSwapchainKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSwapchainKHR;

  public:

    SwapchainKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateSwapchainKHR( static_cast<VkDevice>( *device ), reinterpret_cast<const VkSwapchainCreateInfoKHR *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkSwapchainKHR*>( &m_swapchain ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateSwapchainKHR" );
      }
    }

    SwapchainKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkSwapchainKHR swapchain, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_swapchain( swapchain ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    SwapchainKHR( std::nullptr_t ) {}

    ~SwapchainKHR()
    {
      clear();
    }

    SwapchainKHR() = delete;
      SwapchainKHR( SwapchainKHR const & ) = delete;
    SwapchainKHR( SwapchainKHR && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_swapchain( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_swapchain, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      SwapchainKHR & operator=( SwapchainKHR const & ) = delete;
    SwapchainKHR & operator=( SwapchainKHR && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_swapchain = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_swapchain, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::SwapchainKHR const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_swapchain;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_swapchain )
        {
          getDispatcher()->vkDestroySwapchainKHR( static_cast<VkDevice>( m_device ), static_cast<VkSwapchainKHR>( m_swapchain ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_swapchain = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::SwapchainKHR release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_swapchain, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::SwapchainKHR & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_swapchain, rhs.m_swapchain );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_KHR_swapchain ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::Image> getImages(  ) const ;


    VULKAN_HPP_NODISCARD  std::pair<VULKAN_HPP_NAMESPACE::Result, uint32_t> acquireNextImage( uint64_t timeout, VULKAN_HPP_NAMESPACE::Semaphore semaphore VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT, VULKAN_HPP_NAMESPACE::Fence fence VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT ) const ;

  //=== VK_EXT_display_control ===


    VULKAN_HPP_NODISCARD  uint64_t getCounterEXT( VULKAN_HPP_NAMESPACE::SurfaceCounterFlagBitsEXT counter ) const ;

  //=== VK_GOOGLE_display_timing ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::RefreshCycleDurationGOOGLE getRefreshCycleDurationGOOGLE(  ) const ;


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::PastPresentationTimingGOOGLE> getPastPresentationTimingGOOGLE(  ) const ;

  //=== VK_KHR_shared_presentable_image ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result getStatus(  ) const ;

  //=== VK_AMD_display_native_hdr ===


     void setLocalDimmingAMD( VULKAN_HPP_NAMESPACE::Bool32 localDimmingEnable ) const  VULKAN_HPP_NOEXCEPT;

  //=== VK_KHR_present_wait ===


    VULKAN_HPP_NODISCARD  VULKAN_HPP_NAMESPACE::Result waitForPresent( uint64_t presentId, uint64_t timeout ) const ;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_EXT_full_screen_exclusive ===


     void acquireFullScreenExclusiveModeEXT(  ) const ;


     void releaseFullScreenExclusiveModeEXT(  ) const ;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::SwapchainKHR m_swapchain = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class SwapchainKHRs : public std::vector<VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::SwapchainKHR>
  {
  public:

    SwapchainKHRs( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
    {
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * dispatcher = device.getDispatcher();
      std::vector<VkSwapchainKHR> swapchains( createInfos.size() );
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( dispatcher->vkCreateSharedSwapchainsKHR( static_cast<VkDevice>( *device ), createInfos.size(), reinterpret_cast<const VkSwapchainCreateInfoKHR *>( createInfos.data() ), reinterpret_cast<const VkAllocationCallbacks *>(static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), swapchains.data() ) );
      if ( result == VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        this->reserve( createInfos.size() );
        for ( auto const & swapchainKHR : swapchains )
        {
          this->emplace_back( device, swapchainKHR, allocator );
        }
      }
      else
      {
        throwResultException( result, "vkCreateSharedSwapchainsKHR" );
      }
    }

    SwapchainKHRs( std::nullptr_t ) {}

    SwapchainKHRs() = delete;
    SwapchainKHRs( SwapchainKHRs const & ) = delete;
    SwapchainKHRs( SwapchainKHRs && rhs ) = default;
    SwapchainKHRs & operator=( SwapchainKHRs const & ) = delete;
    SwapchainKHRs & operator=( SwapchainKHRs && rhs ) = default;
  };


  class ValidationCacheEXT
  {
  public:
    using CType = VkValidationCacheEXT;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eValidationCacheEXT;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eValidationCacheEXT;

  public:

    ValidationCacheEXT( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::ValidationCacheCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateValidationCacheEXT( static_cast<VkDevice>( *device ), reinterpret_cast<const VkValidationCacheCreateInfoEXT *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkValidationCacheEXT*>( &m_validationCache ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateValidationCacheEXT" );
      }
    }

    ValidationCacheEXT( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkValidationCacheEXT validationCache, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_validationCache( validationCache ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    ValidationCacheEXT( std::nullptr_t ) {}

    ~ValidationCacheEXT()
    {
      clear();
    }

    ValidationCacheEXT() = delete;
      ValidationCacheEXT( ValidationCacheEXT const & ) = delete;
    ValidationCacheEXT( ValidationCacheEXT && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_validationCache( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_validationCache, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      ValidationCacheEXT & operator=( ValidationCacheEXT const & ) = delete;
    ValidationCacheEXT & operator=( ValidationCacheEXT && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_validationCache = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_validationCache, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::ValidationCacheEXT const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_validationCache;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_validationCache )
        {
          getDispatcher()->vkDestroyValidationCacheEXT( static_cast<VkDevice>( m_device ), static_cast<VkValidationCacheEXT>( m_validationCache ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_validationCache = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::ValidationCacheEXT release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_validationCache, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::ValidationCacheEXT & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_validationCache, rhs.m_validationCache );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_EXT_validation_cache ===


     void merge( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ValidationCacheEXT> const & srcCaches ) const ;


    VULKAN_HPP_NODISCARD  std::vector<uint8_t> getData(  ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::ValidationCacheEXT m_validationCache = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class VideoSessionKHR
  {
  public:
    using CType = VkVideoSessionKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eVideoSessionKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:

    VideoSessionKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::VideoSessionCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateVideoSessionKHR( static_cast<VkDevice>( *device ), reinterpret_cast<const VkVideoSessionCreateInfoKHR *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkVideoSessionKHR*>( &m_videoSession ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateVideoSessionKHR" );
      }
    }

    VideoSessionKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkVideoSessionKHR videoSession, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_videoSession( videoSession ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    VideoSessionKHR( std::nullptr_t ) {}

    ~VideoSessionKHR()
    {
      clear();
    }

    VideoSessionKHR() = delete;
      VideoSessionKHR( VideoSessionKHR const & ) = delete;
    VideoSessionKHR( VideoSessionKHR && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_videoSession( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_videoSession, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      VideoSessionKHR & operator=( VideoSessionKHR const & ) = delete;
    VideoSessionKHR & operator=( VideoSessionKHR && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_videoSession = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_videoSession, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::VideoSessionKHR const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_videoSession;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_videoSession )
        {
          getDispatcher()->vkDestroyVideoSessionKHR( static_cast<VkDevice>( m_device ), static_cast<VkVideoSessionKHR>( m_videoSession ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_videoSession = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::VideoSessionKHR release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_videoSession, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::VideoSessionKHR & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_videoSession, rhs.m_videoSession );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_KHR_video_queue ===


    VULKAN_HPP_NODISCARD  std::vector<VULKAN_HPP_NAMESPACE::VideoSessionMemoryRequirementsKHR> getMemoryRequirements(  ) const ;


     void bindMemory( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BindVideoSessionMemoryInfoKHR> const & bindSessionMemoryInfos ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::VideoSessionKHR m_videoSession = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };

  class VideoSessionParametersKHR
  {
  public:
    using CType = VkVideoSessionParametersKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eVideoSessionParametersKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:

    VideoSessionParametersKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VULKAN_HPP_NAMESPACE::VideoSessionParametersCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {
      VULKAN_HPP_NAMESPACE::Result result = static_cast<VULKAN_HPP_NAMESPACE::Result>( device.getDispatcher()->vkCreateVideoSessionParametersKHR( static_cast<VkDevice>( *device ), reinterpret_cast<const VkVideoSessionParametersCreateInfoKHR *>( &createInfo ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ), reinterpret_cast<VkVideoSessionParametersKHR*>( &m_videoSessionParameters ) ) );
      if ( result != VULKAN_HPP_NAMESPACE::Result::eSuccess )
      {
        throwResultException( result, "vkCreateVideoSessionParametersKHR" );
      }
    }

    VideoSessionParametersKHR( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::Device const & device, VkVideoSessionParametersKHR videoSessionParameters, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator = nullptr )
      : m_device( *device ), m_videoSessionParameters( videoSessionParameters ), m_allocator( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ), m_dispatcher( device.getDispatcher() )
    {}

    VideoSessionParametersKHR( std::nullptr_t ) {}

    ~VideoSessionParametersKHR()
    {
      clear();
    }

    VideoSessionParametersKHR() = delete;
      VideoSessionParametersKHR( VideoSessionParametersKHR const & ) = delete;
    VideoSessionParametersKHR( VideoSessionParametersKHR && rhs ) VULKAN_HPP_NOEXCEPT
      : m_device( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} ) ), m_videoSessionParameters( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_videoSessionParameters, {} ) ), m_allocator( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} ) ), m_dispatcher( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr ) )
    {}
      VideoSessionParametersKHR & operator=( VideoSessionParametersKHR const & ) = delete;
    VideoSessionParametersKHR & operator=( VideoSessionParametersKHR && rhs ) VULKAN_HPP_NOEXCEPT
    {
      if ( this != &rhs )
      {
          clear();
          m_device = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_device, {} );
          m_videoSessionParameters = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_videoSessionParameters, {} );
          m_allocator = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_allocator, {} );
        m_dispatcher = VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( rhs.m_dispatcher, nullptr );
      }
      return *this;
    }

    VULKAN_HPP_NAMESPACE::VideoSessionParametersKHR const & operator*() const VULKAN_HPP_NOEXCEPT
    {
      return m_videoSessionParameters;
    }

    void clear() VULKAN_HPP_NOEXCEPT
    {
        if ( m_videoSessionParameters )
        {
          getDispatcher()->vkDestroyVideoSessionParametersKHR( static_cast<VkDevice>( m_device ), static_cast<VkVideoSessionParametersKHR>( m_videoSessionParameters ), reinterpret_cast<const VkAllocationCallbacks *>( m_allocator ) );
        }
      m_device = nullptr;
      m_videoSessionParameters = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
    }

    VULKAN_HPP_NAMESPACE::VideoSessionParametersKHR release()
    {

      m_device = nullptr;
      m_allocator = nullptr;
        m_dispatcher = nullptr;
        return VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::exchange( m_videoSessionParameters, nullptr );
    }


    VULKAN_HPP_NAMESPACE::Device getDevice() const
    {
      return m_device;
    }

    VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * getDispatcher() const
    {
      VULKAN_HPP_ASSERT( m_dispatcher->getVkHeaderVersion() == VK_HEADER_VERSION );
      return m_dispatcher;
    }

    void swap( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::VideoSessionParametersKHR & rhs ) VULKAN_HPP_NOEXCEPT
    {

      std::swap( m_device, rhs.m_device );
      std::swap( m_videoSessionParameters, rhs.m_videoSessionParameters );
      std::swap( m_allocator, rhs.m_allocator );
      std::swap( m_dispatcher, rhs.m_dispatcher );
    }


  //=== VK_KHR_video_queue ===


     void update( const VULKAN_HPP_NAMESPACE::VideoSessionParametersUpdateInfoKHR & updateInfo ) const ;


  private:

    VULKAN_HPP_NAMESPACE::Device m_device = {};
    VULKAN_HPP_NAMESPACE::VideoSessionParametersKHR m_videoSessionParameters = {};
    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * m_allocator = {};
      VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeviceDispatcher const * m_dispatcher = nullptr;
  };



  //===========================
  //=== COMMAND Definitions ===
  //===========================


  //=== VK_VERSION_1_0 ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Instance Context::createInstance( VULKAN_HPP_NAMESPACE::InstanceCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Instance( *this, createInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE std::vector<VULKAN_HPP_RAII_NAMESPACE::PhysicalDevice> Instance::enumeratePhysicalDevices(  ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::PhysicalDevices( *this );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures PhysicalDevice::getFeatures(  ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures features;
    getDispatcher()->vkGetPhysicalDeviceFeatures( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceFeatures *>( &features ) );


    return features;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::FormatProperties PhysicalDevice::getFormatProperties( VULKAN_HPP_NAMESPACE::Format format ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::FormatProperties formatProperties;
    getDispatcher()->vkGetPhysicalDeviceFormatProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkFormat>( format ), reinterpret_cast<VkFormatProperties *>( &formatProperties ) );


    return formatProperties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ImageFormatProperties PhysicalDevice::getImageFormatProperties( VULKAN_HPP_NAMESPACE::Format format, VULKAN_HPP_NAMESPACE::ImageType type, VULKAN_HPP_NAMESPACE::ImageTiling tiling, VULKAN_HPP_NAMESPACE::ImageUsageFlags usage, VULKAN_HPP_NAMESPACE::ImageCreateFlags flags ) const
  {



    VULKAN_HPP_NAMESPACE::ImageFormatProperties imageFormatProperties;
    VkResult result = getDispatcher()->vkGetPhysicalDeviceImageFormatProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkFormat>( format ), static_cast<VkImageType>( type ), static_cast<VkImageTiling>( tiling ), static_cast<VkImageUsageFlags>( usage ), static_cast<VkImageCreateFlags>( flags ), reinterpret_cast<VkImageFormatProperties *>( &imageFormatProperties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getImageFormatProperties" );

    return imageFormatProperties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties PhysicalDevice::getProperties(  ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties properties;
    getDispatcher()->vkGetPhysicalDeviceProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceProperties *>( &properties ) );


    return properties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties> PhysicalDevice::getQueueFamilyProperties(  ) const
  {



    std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties> queueFamilyProperties;
    uint32_t queueFamilyPropertyCount;
    getDispatcher()->vkGetPhysicalDeviceQueueFamilyProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), &queueFamilyPropertyCount, nullptr );
    queueFamilyProperties.resize( queueFamilyPropertyCount );
    getDispatcher()->vkGetPhysicalDeviceQueueFamilyProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), &queueFamilyPropertyCount, reinterpret_cast<VkQueueFamilyProperties *>( queueFamilyProperties.data() ) );

    VULKAN_HPP_ASSERT( queueFamilyPropertyCount <= queueFamilyProperties.size() );
    if ( queueFamilyPropertyCount < queueFamilyProperties.size() )
    {
      queueFamilyProperties.resize( queueFamilyPropertyCount );
    }
    return queueFamilyProperties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties PhysicalDevice::getMemoryProperties(  ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties memoryProperties;
    getDispatcher()->vkGetPhysicalDeviceMemoryProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceMemoryProperties *>( &memoryProperties ) );


    return memoryProperties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE PFN_vkVoidFunction Instance::getProcAddr( const std::string & name ) const  VULKAN_HPP_NOEXCEPT
  {




    PFN_vkVoidFunction result = getDispatcher()->vkGetInstanceProcAddr( static_cast<VkInstance>( m_instance ), name.c_str() );


    return result;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE PFN_vkVoidFunction Device::getProcAddr( const std::string & name ) const  VULKAN_HPP_NOEXCEPT
  {




    PFN_vkVoidFunction result = getDispatcher()->vkGetDeviceProcAddr( static_cast<VkDevice>( m_device ), name.c_str() );


    return result;
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Device PhysicalDevice::createDevice( VULKAN_HPP_NAMESPACE::DeviceCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Device( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::ExtensionProperties> Context::enumerateInstanceExtensionProperties( Optional<const std::string> layerName ) const
  {



    std::vector<VULKAN_HPP_NAMESPACE::ExtensionProperties> properties;
    uint32_t propertyCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkEnumerateInstanceExtensionProperties( layerName ? layerName->c_str() : nullptr, &propertyCount, nullptr );
      if ( ( result == VK_SUCCESS ) && propertyCount )
      {
        properties.resize( propertyCount );
        result = getDispatcher()->vkEnumerateInstanceExtensionProperties( layerName ? layerName->c_str() : nullptr, &propertyCount, reinterpret_cast<VkExtensionProperties *>( properties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Context::enumerateInstanceExtensionProperties" );
    VULKAN_HPP_ASSERT( propertyCount <= properties.size() );
    if ( propertyCount < properties.size() )
    {
      properties.resize( propertyCount );
    }
    return properties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::ExtensionProperties> PhysicalDevice::enumerateDeviceExtensionProperties( Optional<const std::string> layerName ) const
  {



    std::vector<VULKAN_HPP_NAMESPACE::ExtensionProperties> properties;
    uint32_t propertyCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkEnumerateDeviceExtensionProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), layerName ? layerName->c_str() : nullptr, &propertyCount, nullptr );
      if ( ( result == VK_SUCCESS ) && propertyCount )
      {
        properties.resize( propertyCount );
        result = getDispatcher()->vkEnumerateDeviceExtensionProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), layerName ? layerName->c_str() : nullptr, &propertyCount, reinterpret_cast<VkExtensionProperties *>( properties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::enumerateDeviceExtensionProperties" );
    VULKAN_HPP_ASSERT( propertyCount <= properties.size() );
    if ( propertyCount < properties.size() )
    {
      properties.resize( propertyCount );
    }
    return properties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::LayerProperties> Context::enumerateInstanceLayerProperties(  ) const
  {



    std::vector<VULKAN_HPP_NAMESPACE::LayerProperties> properties;
    uint32_t propertyCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkEnumerateInstanceLayerProperties( &propertyCount, nullptr );
      if ( ( result == VK_SUCCESS ) && propertyCount )
      {
        properties.resize( propertyCount );
        result = getDispatcher()->vkEnumerateInstanceLayerProperties( &propertyCount, reinterpret_cast<VkLayerProperties *>( properties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Context::enumerateInstanceLayerProperties" );
    VULKAN_HPP_ASSERT( propertyCount <= properties.size() );
    if ( propertyCount < properties.size() )
    {
      properties.resize( propertyCount );
    }
    return properties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::LayerProperties> PhysicalDevice::enumerateDeviceLayerProperties(  ) const
  {



    std::vector<VULKAN_HPP_NAMESPACE::LayerProperties> properties;
    uint32_t propertyCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkEnumerateDeviceLayerProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), &propertyCount, nullptr );
      if ( ( result == VK_SUCCESS ) && propertyCount )
      {
        properties.resize( propertyCount );
        result = getDispatcher()->vkEnumerateDeviceLayerProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), &propertyCount, reinterpret_cast<VkLayerProperties *>( properties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::enumerateDeviceLayerProperties" );
    VULKAN_HPP_ASSERT( propertyCount <= properties.size() );
    if ( propertyCount < properties.size() )
    {
      properties.resize( propertyCount );
    }
    return properties;
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Queue Device::getQueue( uint32_t queueFamilyIndex, uint32_t queueIndex ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Queue( *this, queueFamilyIndex, queueIndex );
  }


   VULKAN_HPP_INLINE void Queue::submit( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::SubmitInfo> const & submits, VULKAN_HPP_NAMESPACE::Fence fence ) const
  {




    VkResult result = getDispatcher()->vkQueueSubmit( static_cast<VkQueue>( m_queue ), submits.size(), reinterpret_cast<const VkSubmitInfo *>( submits.data() ), static_cast<VkFence>( fence ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Queue::submit" );


  }


   VULKAN_HPP_INLINE void Queue::waitIdle(  ) const
  {




    VkResult result = getDispatcher()->vkQueueWaitIdle( static_cast<VkQueue>( m_queue ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Queue::waitIdle" );


  }


   VULKAN_HPP_INLINE void Device::waitIdle(  ) const
  {




    VkResult result = getDispatcher()->vkDeviceWaitIdle( static_cast<VkDevice>( m_device ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::waitIdle" );


  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::DeviceMemory Device::allocateMemory( VULKAN_HPP_NAMESPACE::MemoryAllocateInfo const & allocateInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::DeviceMemory( *this, allocateInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE void * DeviceMemory::mapMemory( VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::DeviceSize size, VULKAN_HPP_NAMESPACE::MemoryMapFlags flags ) const
  {



    void * pData;
    VkResult result = getDispatcher()->vkMapMemory( static_cast<VkDevice>( m_device ), static_cast<VkDeviceMemory>( m_memory ), static_cast<VkDeviceSize>( offset ), static_cast<VkDeviceSize>( size ), static_cast<VkMemoryMapFlags>( flags ), &pData );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::DeviceMemory::mapMemory" );

    return pData;
  }


   VULKAN_HPP_INLINE void DeviceMemory::unmapMemory(  ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkUnmapMemory( static_cast<VkDevice>( m_device ), static_cast<VkDeviceMemory>( m_memory ) );



  }


   VULKAN_HPP_INLINE void Device::flushMappedMemoryRanges( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MappedMemoryRange> const & memoryRanges ) const
  {




    VkResult result = getDispatcher()->vkFlushMappedMemoryRanges( static_cast<VkDevice>( m_device ), memoryRanges.size(), reinterpret_cast<const VkMappedMemoryRange *>( memoryRanges.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::flushMappedMemoryRanges" );


  }


   VULKAN_HPP_INLINE void Device::invalidateMappedMemoryRanges( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MappedMemoryRange> const & memoryRanges ) const
  {




    VkResult result = getDispatcher()->vkInvalidateMappedMemoryRanges( static_cast<VkDevice>( m_device ), memoryRanges.size(), reinterpret_cast<const VkMappedMemoryRange *>( memoryRanges.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::invalidateMappedMemoryRanges" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DeviceSize DeviceMemory::getCommitment(  ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::DeviceSize committedMemoryInBytes;
    getDispatcher()->vkGetDeviceMemoryCommitment( static_cast<VkDevice>( m_device ), static_cast<VkDeviceMemory>( m_memory ), reinterpret_cast<VkDeviceSize *>( &committedMemoryInBytes ) );


    return committedMemoryInBytes;
  }


   VULKAN_HPP_INLINE void Buffer::bindMemory( VULKAN_HPP_NAMESPACE::DeviceMemory memory, VULKAN_HPP_NAMESPACE::DeviceSize memoryOffset ) const
  {




    VkResult result = getDispatcher()->vkBindBufferMemory( static_cast<VkDevice>( m_device ), static_cast<VkBuffer>( m_buffer ), static_cast<VkDeviceMemory>( memory ), static_cast<VkDeviceSize>( memoryOffset ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Buffer::bindMemory" );


  }


   VULKAN_HPP_INLINE void Image::bindMemory( VULKAN_HPP_NAMESPACE::DeviceMemory memory, VULKAN_HPP_NAMESPACE::DeviceSize memoryOffset ) const
  {




    VkResult result = getDispatcher()->vkBindImageMemory( static_cast<VkDevice>( m_device ), static_cast<VkImage>( m_image ), static_cast<VkDeviceMemory>( memory ), static_cast<VkDeviceSize>( memoryOffset ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Image::bindMemory" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryRequirements Buffer::getMemoryRequirements(  ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::MemoryRequirements memoryRequirements;
    getDispatcher()->vkGetBufferMemoryRequirements( static_cast<VkDevice>( m_device ), static_cast<VkBuffer>( m_buffer ), reinterpret_cast<VkMemoryRequirements *>( &memoryRequirements ) );


    return memoryRequirements;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryRequirements Image::getMemoryRequirements(  ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::MemoryRequirements memoryRequirements;
    getDispatcher()->vkGetImageMemoryRequirements( static_cast<VkDevice>( m_device ), static_cast<VkImage>( m_image ), reinterpret_cast<VkMemoryRequirements *>( &memoryRequirements ) );


    return memoryRequirements;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements> Image::getSparseMemoryRequirements(  ) const
  {



    std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements> sparseMemoryRequirements;
    uint32_t sparseMemoryRequirementCount;
    getDispatcher()->vkGetImageSparseMemoryRequirements( static_cast<VkDevice>( m_device ), static_cast<VkImage>( m_image ), &sparseMemoryRequirementCount, nullptr );
    sparseMemoryRequirements.resize( sparseMemoryRequirementCount );
    getDispatcher()->vkGetImageSparseMemoryRequirements( static_cast<VkDevice>( m_device ), static_cast<VkImage>( m_image ), &sparseMemoryRequirementCount, reinterpret_cast<VkSparseImageMemoryRequirements *>( sparseMemoryRequirements.data() ) );

    VULKAN_HPP_ASSERT( sparseMemoryRequirementCount <= sparseMemoryRequirements.size() );
    if ( sparseMemoryRequirementCount < sparseMemoryRequirements.size() )
    {
      sparseMemoryRequirements.resize( sparseMemoryRequirementCount );
    }
    return sparseMemoryRequirements;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties> PhysicalDevice::getSparseImageFormatProperties( VULKAN_HPP_NAMESPACE::Format format, VULKAN_HPP_NAMESPACE::ImageType type, VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples, VULKAN_HPP_NAMESPACE::ImageUsageFlags usage, VULKAN_HPP_NAMESPACE::ImageTiling tiling ) const
  {



    std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties> properties;
    uint32_t propertyCount;
    getDispatcher()->vkGetPhysicalDeviceSparseImageFormatProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkFormat>( format ), static_cast<VkImageType>( type ), static_cast<VkSampleCountFlagBits>( samples ), static_cast<VkImageUsageFlags>( usage ), static_cast<VkImageTiling>( tiling ), &propertyCount, nullptr );
    properties.resize( propertyCount );
    getDispatcher()->vkGetPhysicalDeviceSparseImageFormatProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkFormat>( format ), static_cast<VkImageType>( type ), static_cast<VkSampleCountFlagBits>( samples ), static_cast<VkImageUsageFlags>( usage ), static_cast<VkImageTiling>( tiling ), &propertyCount, reinterpret_cast<VkSparseImageFormatProperties *>( properties.data() ) );

    VULKAN_HPP_ASSERT( propertyCount <= properties.size() );
    if ( propertyCount < properties.size() )
    {
      properties.resize( propertyCount );
    }
    return properties;
  }


   VULKAN_HPP_INLINE void Queue::bindSparse( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BindSparseInfo> const & bindInfo, VULKAN_HPP_NAMESPACE::Fence fence ) const
  {




    VkResult result = getDispatcher()->vkQueueBindSparse( static_cast<VkQueue>( m_queue ), bindInfo.size(), reinterpret_cast<const VkBindSparseInfo *>( bindInfo.data() ), static_cast<VkFence>( fence ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Queue::bindSparse" );


  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Fence Device::createFence( VULKAN_HPP_NAMESPACE::FenceCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Fence( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void Device::resetFences( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Fence> const & fences ) const
  {




    VkResult result = getDispatcher()->vkResetFences( static_cast<VkDevice>( m_device ), fences.size(), reinterpret_cast<const VkFence *>( fences.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::resetFences" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result Fence::getStatus(  ) const
  {




    VkResult result = getDispatcher()->vkGetFenceStatus( static_cast<VkDevice>( m_device ), static_cast<VkFence>( m_fence ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Fence::getStatus", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eNotReady } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result Device::waitForFences( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Fence> const & fences, VULKAN_HPP_NAMESPACE::Bool32 waitAll, uint64_t timeout ) const
  {




    VkResult result = getDispatcher()->vkWaitForFences( static_cast<VkDevice>( m_device ), fences.size(), reinterpret_cast<const VkFence *>( fences.data() ), static_cast<VkBool32>( waitAll ), timeout );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::waitForFences", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eTimeout } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Semaphore Device::createSemaphore( VULKAN_HPP_NAMESPACE::SemaphoreCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Semaphore( *this, createInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Event Device::createEvent( VULKAN_HPP_NAMESPACE::EventCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Event( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result Event::getStatus(  ) const
  {




    VkResult result = getDispatcher()->vkGetEventStatus( static_cast<VkDevice>( m_device ), static_cast<VkEvent>( m_event ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Event::getStatus", { VULKAN_HPP_NAMESPACE::Result::eEventSet, VULKAN_HPP_NAMESPACE::Result::eEventReset } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }


   VULKAN_HPP_INLINE void Event::set(  ) const
  {




    VkResult result = getDispatcher()->vkSetEvent( static_cast<VkDevice>( m_device ), static_cast<VkEvent>( m_event ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Event::set" );


  }


   VULKAN_HPP_INLINE void Event::reset(  ) const
  {




    VkResult result = getDispatcher()->vkResetEvent( static_cast<VkDevice>( m_device ), static_cast<VkEvent>( m_event ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Event::reset" );


  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::QueryPool Device::createQueryPool( VULKAN_HPP_NAMESPACE::QueryPoolCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::QueryPool( *this, createInfo, allocator );
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::pair<VULKAN_HPP_NAMESPACE::Result, std::vector<DataType>> QueryPool::getResults( uint32_t firstQuery, uint32_t queryCount, size_t dataSize, VULKAN_HPP_NAMESPACE::DeviceSize stride, VULKAN_HPP_NAMESPACE::QueryResultFlags flags ) const
  {


        VULKAN_HPP_ASSERT( dataSize % sizeof( DataType ) == 0 );
    std::vector<DataType> data( dataSize / sizeof( DataType ) );
    VkResult result = getDispatcher()->vkGetQueryPoolResults( static_cast<VkDevice>( m_device ), static_cast<VkQueryPool>( m_queryPool ), firstQuery, queryCount, data.size() * sizeof( DataType ), reinterpret_cast<void *>( data.data() ), static_cast<VkDeviceSize>( stride ), static_cast<VkQueryResultFlags>( flags ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::QueryPool::getResults", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eNotReady } );

    return std::make_pair( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), data );
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::pair<VULKAN_HPP_NAMESPACE::Result, DataType> QueryPool::getResult( uint32_t firstQuery, uint32_t queryCount, VULKAN_HPP_NAMESPACE::DeviceSize stride, VULKAN_HPP_NAMESPACE::QueryResultFlags flags ) const
  {



    DataType data;
    VkResult result = getDispatcher()->vkGetQueryPoolResults( static_cast<VkDevice>( m_device ), static_cast<VkQueryPool>( m_queryPool ), firstQuery, queryCount, sizeof( DataType ), reinterpret_cast<void *>( &data ), static_cast<VkDeviceSize>( stride ), static_cast<VkQueryResultFlags>( flags ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::QueryPool::getResult", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eNotReady } );

    return std::make_pair( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), data );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Buffer Device::createBuffer( VULKAN_HPP_NAMESPACE::BufferCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Buffer( *this, createInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::BufferView Device::createBufferView( VULKAN_HPP_NAMESPACE::BufferViewCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::BufferView( *this, createInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Image Device::createImage( VULKAN_HPP_NAMESPACE::ImageCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Image( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::SubresourceLayout Image::getSubresourceLayout( const VULKAN_HPP_NAMESPACE::ImageSubresource & subresource ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::SubresourceLayout layout;
    getDispatcher()->vkGetImageSubresourceLayout( static_cast<VkDevice>( m_device ), static_cast<VkImage>( m_image ), reinterpret_cast<const VkImageSubresource *>( &subresource ), reinterpret_cast<VkSubresourceLayout *>( &layout ) );


    return layout;
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::ImageView Device::createImageView( VULKAN_HPP_NAMESPACE::ImageViewCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::ImageView( *this, createInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::ShaderModule Device::createShaderModule( VULKAN_HPP_NAMESPACE::ShaderModuleCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::ShaderModule( *this, createInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::PipelineCache Device::createPipelineCache( VULKAN_HPP_NAMESPACE::PipelineCacheCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::PipelineCache( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<uint8_t> PipelineCache::getData(  ) const
  {



    std::vector<uint8_t> data;
    size_t dataSize;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPipelineCacheData( static_cast<VkDevice>( m_device ), static_cast<VkPipelineCache>( m_pipelineCache ), &dataSize, nullptr );
      if ( ( result == VK_SUCCESS ) && dataSize )
      {
        data.resize( dataSize );
        result = getDispatcher()->vkGetPipelineCacheData( static_cast<VkDevice>( m_device ), static_cast<VkPipelineCache>( m_pipelineCache ), &dataSize, reinterpret_cast<void *>( data.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PipelineCache::getData" );
    VULKAN_HPP_ASSERT( dataSize <= data.size() );
    if ( dataSize < data.size() )
    {
      data.resize( dataSize );
    }
    return data;
  }


   VULKAN_HPP_INLINE void PipelineCache::merge( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::PipelineCache> const & srcCaches ) const
  {




    VkResult result = getDispatcher()->vkMergePipelineCaches( static_cast<VkDevice>( m_device ), static_cast<VkPipelineCache>( m_pipelineCache ), srcCaches.size(), reinterpret_cast<const VkPipelineCache *>( srcCaches.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PipelineCache::merge" );


  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE std::vector<VULKAN_HPP_RAII_NAMESPACE::Pipeline> Device::createGraphicsPipelines( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::GraphicsPipelineCreateInfo> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Pipelines( *this, pipelineCache, createInfos, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Pipeline Device::createGraphicsPipeline( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::GraphicsPipelineCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Pipeline( *this, pipelineCache, createInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE std::vector<VULKAN_HPP_RAII_NAMESPACE::Pipeline> Device::createComputePipelines( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::ComputePipelineCreateInfo> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Pipelines( *this, pipelineCache, createInfos, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Pipeline Device::createComputePipeline( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ComputePipelineCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Pipeline( *this, pipelineCache, createInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::PipelineLayout Device::createPipelineLayout( VULKAN_HPP_NAMESPACE::PipelineLayoutCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::PipelineLayout( *this, createInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Sampler Device::createSampler( VULKAN_HPP_NAMESPACE::SamplerCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Sampler( *this, createInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::DescriptorSetLayout Device::createDescriptorSetLayout( VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::DescriptorSetLayout( *this, createInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::DescriptorPool Device::createDescriptorPool( VULKAN_HPP_NAMESPACE::DescriptorPoolCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::DescriptorPool( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void DescriptorPool::reset( VULKAN_HPP_NAMESPACE::DescriptorPoolResetFlags flags ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkResetDescriptorPool( static_cast<VkDevice>( m_device ), static_cast<VkDescriptorPool>( m_descriptorPool ), static_cast<VkDescriptorPoolResetFlags>( flags ) );



  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE std::vector<VULKAN_HPP_RAII_NAMESPACE::DescriptorSet> Device::allocateDescriptorSets( VULKAN_HPP_NAMESPACE::DescriptorSetAllocateInfo const & allocateInfo ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::DescriptorSets( *this, allocateInfo );
  }


   VULKAN_HPP_INLINE void Device::updateDescriptorSets( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::WriteDescriptorSet> const & descriptorWrites, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::CopyDescriptorSet> const & descriptorCopies ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkUpdateDescriptorSets( static_cast<VkDevice>( m_device ), descriptorWrites.size(), reinterpret_cast<const VkWriteDescriptorSet *>( descriptorWrites.data() ), descriptorCopies.size(), reinterpret_cast<const VkCopyDescriptorSet *>( descriptorCopies.data() ) );



  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Framebuffer Device::createFramebuffer( VULKAN_HPP_NAMESPACE::FramebufferCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Framebuffer( *this, createInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::RenderPass Device::createRenderPass( VULKAN_HPP_NAMESPACE::RenderPassCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::RenderPass( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Extent2D RenderPass::getRenderAreaGranularity(  ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::Extent2D granularity;
    getDispatcher()->vkGetRenderAreaGranularity( static_cast<VkDevice>( m_device ), static_cast<VkRenderPass>( m_renderPass ), reinterpret_cast<VkExtent2D *>( &granularity ) );


    return granularity;
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::CommandPool Device::createCommandPool( VULKAN_HPP_NAMESPACE::CommandPoolCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::CommandPool( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void CommandPool::reset( VULKAN_HPP_NAMESPACE::CommandPoolResetFlags flags ) const
  {




    VkResult result = getDispatcher()->vkResetCommandPool( static_cast<VkDevice>( m_device ), static_cast<VkCommandPool>( m_commandPool ), static_cast<VkCommandPoolResetFlags>( flags ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::CommandPool::reset" );


  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE std::vector<VULKAN_HPP_RAII_NAMESPACE::CommandBuffer> Device::allocateCommandBuffers( VULKAN_HPP_NAMESPACE::CommandBufferAllocateInfo const & allocateInfo ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::CommandBuffers( *this, allocateInfo );
  }


   VULKAN_HPP_INLINE void CommandBuffer::begin( const VULKAN_HPP_NAMESPACE::CommandBufferBeginInfo & beginInfo ) const
  {




    VkResult result = getDispatcher()->vkBeginCommandBuffer( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCommandBufferBeginInfo *>( &beginInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::begin" );


  }


   VULKAN_HPP_INLINE void CommandBuffer::end(  ) const
  {




    VkResult result = getDispatcher()->vkEndCommandBuffer( static_cast<VkCommandBuffer>( m_commandBuffer ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::end" );


  }


   VULKAN_HPP_INLINE void CommandBuffer::reset( VULKAN_HPP_NAMESPACE::CommandBufferResetFlags flags ) const
  {




    VkResult result = getDispatcher()->vkResetCommandBuffer( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkCommandBufferResetFlags>( flags ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::reset" );


  }


   VULKAN_HPP_INLINE void CommandBuffer::bindPipeline( VULKAN_HPP_NAMESPACE::PipelineBindPoint pipelineBindPoint, VULKAN_HPP_NAMESPACE::Pipeline pipeline ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdBindPipeline( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPipelineBindPoint>( pipelineBindPoint ), static_cast<VkPipeline>( pipeline ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setViewport( uint32_t firstViewport, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Viewport> const & viewports ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetViewport( static_cast<VkCommandBuffer>( m_commandBuffer ), firstViewport, viewports.size(), reinterpret_cast<const VkViewport *>( viewports.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setScissor( uint32_t firstScissor, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & scissors ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetScissor( static_cast<VkCommandBuffer>( m_commandBuffer ), firstScissor, scissors.size(), reinterpret_cast<const VkRect2D *>( scissors.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setLineWidth( float lineWidth ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetLineWidth( static_cast<VkCommandBuffer>( m_commandBuffer ), lineWidth );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthBias( float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetDepthBias( static_cast<VkCommandBuffer>( m_commandBuffer ), depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setBlendConstants( const float blendConstants[4] ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetBlendConstants( static_cast<VkCommandBuffer>( m_commandBuffer ), blendConstants );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthBounds( float minDepthBounds, float maxDepthBounds ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetDepthBounds( static_cast<VkCommandBuffer>( m_commandBuffer ), minDepthBounds, maxDepthBounds );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setStencilCompareMask( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask, uint32_t compareMask ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetStencilCompareMask( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkStencilFaceFlags>( faceMask ), compareMask );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setStencilWriteMask( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask, uint32_t writeMask ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetStencilWriteMask( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkStencilFaceFlags>( faceMask ), writeMask );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setStencilReference( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask, uint32_t reference ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetStencilReference( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkStencilFaceFlags>( faceMask ), reference );



  }


   VULKAN_HPP_INLINE void CommandBuffer::bindDescriptorSets( VULKAN_HPP_NAMESPACE::PipelineBindPoint pipelineBindPoint, VULKAN_HPP_NAMESPACE::PipelineLayout layout, uint32_t firstSet, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DescriptorSet> const & descriptorSets, VULKAN_HPP_NAMESPACE::ArrayProxy<const uint32_t> const & dynamicOffsets ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdBindDescriptorSets( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPipelineBindPoint>( pipelineBindPoint ), static_cast<VkPipelineLayout>( layout ), firstSet, descriptorSets.size(), reinterpret_cast<const VkDescriptorSet *>( descriptorSets.data() ), dynamicOffsets.size(), dynamicOffsets.data() );



  }


   VULKAN_HPP_INLINE void CommandBuffer::bindIndexBuffer( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::IndexType indexType ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdBindIndexBuffer( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( buffer ), static_cast<VkDeviceSize>( offset ), static_cast<VkIndexType>( indexType ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::bindVertexBuffers( uint32_t firstBinding, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const & buffers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & offsets ) const
  {

    if ( buffers.size() != offsets.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::bindVertexBuffers: buffers.size() != offsets.size()" );
  }



    getDispatcher()->vkCmdBindVertexBuffers( static_cast<VkCommandBuffer>( m_commandBuffer ), firstBinding, buffers.size(), reinterpret_cast<const VkBuffer *>( buffers.data() ), reinterpret_cast<const VkDeviceSize *>( offsets.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::draw( uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdDraw( static_cast<VkCommandBuffer>( m_commandBuffer ), vertexCount, instanceCount, firstVertex, firstInstance );



  }


   VULKAN_HPP_INLINE void CommandBuffer::drawIndexed( uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdDrawIndexed( static_cast<VkCommandBuffer>( m_commandBuffer ), indexCount, instanceCount, firstIndex, vertexOffset, firstInstance );



  }


   VULKAN_HPP_INLINE void CommandBuffer::drawIndirect( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, uint32_t drawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdDrawIndirect( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( buffer ), static_cast<VkDeviceSize>( offset ), drawCount, stride );



  }


   VULKAN_HPP_INLINE void CommandBuffer::drawIndexedIndirect( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, uint32_t drawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdDrawIndexedIndirect( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( buffer ), static_cast<VkDeviceSize>( offset ), drawCount, stride );



  }


   VULKAN_HPP_INLINE void CommandBuffer::dispatch( uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdDispatch( static_cast<VkCommandBuffer>( m_commandBuffer ), groupCountX, groupCountY, groupCountZ );



  }


   VULKAN_HPP_INLINE void CommandBuffer::dispatchIndirect( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdDispatchIndirect( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( buffer ), static_cast<VkDeviceSize>( offset ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyBuffer( VULKAN_HPP_NAMESPACE::Buffer srcBuffer, VULKAN_HPP_NAMESPACE::Buffer dstBuffer, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferCopy> const & regions ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdCopyBuffer( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( srcBuffer ), static_cast<VkBuffer>( dstBuffer ), regions.size(), reinterpret_cast<const VkBufferCopy *>( regions.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyImage( VULKAN_HPP_NAMESPACE::Image srcImage, VULKAN_HPP_NAMESPACE::ImageLayout srcImageLayout, VULKAN_HPP_NAMESPACE::Image dstImage, VULKAN_HPP_NAMESPACE::ImageLayout dstImageLayout, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageCopy> const & regions ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdCopyImage( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkImage>( srcImage ), static_cast<VkImageLayout>( srcImageLayout ), static_cast<VkImage>( dstImage ), static_cast<VkImageLayout>( dstImageLayout ), regions.size(), reinterpret_cast<const VkImageCopy *>( regions.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::blitImage( VULKAN_HPP_NAMESPACE::Image srcImage, VULKAN_HPP_NAMESPACE::ImageLayout srcImageLayout, VULKAN_HPP_NAMESPACE::Image dstImage, VULKAN_HPP_NAMESPACE::ImageLayout dstImageLayout, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageBlit> const & regions, VULKAN_HPP_NAMESPACE::Filter filter ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdBlitImage( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkImage>( srcImage ), static_cast<VkImageLayout>( srcImageLayout ), static_cast<VkImage>( dstImage ), static_cast<VkImageLayout>( dstImageLayout ), regions.size(), reinterpret_cast<const VkImageBlit *>( regions.data() ), static_cast<VkFilter>( filter ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyBufferToImage( VULKAN_HPP_NAMESPACE::Buffer srcBuffer, VULKAN_HPP_NAMESPACE::Image dstImage, VULKAN_HPP_NAMESPACE::ImageLayout dstImageLayout, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferImageCopy> const & regions ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdCopyBufferToImage( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( srcBuffer ), static_cast<VkImage>( dstImage ), static_cast<VkImageLayout>( dstImageLayout ), regions.size(), reinterpret_cast<const VkBufferImageCopy *>( regions.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyImageToBuffer( VULKAN_HPP_NAMESPACE::Image srcImage, VULKAN_HPP_NAMESPACE::ImageLayout srcImageLayout, VULKAN_HPP_NAMESPACE::Buffer dstBuffer, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferImageCopy> const & regions ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdCopyImageToBuffer( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkImage>( srcImage ), static_cast<VkImageLayout>( srcImageLayout ), static_cast<VkBuffer>( dstBuffer ), regions.size(), reinterpret_cast<const VkBufferImageCopy *>( regions.data() ) );



  }

  template <typename DataType>
   VULKAN_HPP_INLINE void CommandBuffer::updateBuffer( VULKAN_HPP_NAMESPACE::Buffer dstBuffer, VULKAN_HPP_NAMESPACE::DeviceSize dstOffset, VULKAN_HPP_NAMESPACE::ArrayProxy<const DataType> const & data ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdUpdateBuffer( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( dstBuffer ), static_cast<VkDeviceSize>( dstOffset ), data.size() * sizeof( DataType ), reinterpret_cast<const void *>( data.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::fillBuffer( VULKAN_HPP_NAMESPACE::Buffer dstBuffer, VULKAN_HPP_NAMESPACE::DeviceSize dstOffset, VULKAN_HPP_NAMESPACE::DeviceSize size, uint32_t data ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdFillBuffer( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( dstBuffer ), static_cast<VkDeviceSize>( dstOffset ), static_cast<VkDeviceSize>( size ), data );



  }


   VULKAN_HPP_INLINE void CommandBuffer::clearColorImage( VULKAN_HPP_NAMESPACE::Image image, VULKAN_HPP_NAMESPACE::ImageLayout imageLayout, const VULKAN_HPP_NAMESPACE::ClearColorValue & color, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageSubresourceRange> const & ranges ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdClearColorImage( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkImage>( image ), static_cast<VkImageLayout>( imageLayout ), reinterpret_cast<const VkClearColorValue *>( &color ), ranges.size(), reinterpret_cast<const VkImageSubresourceRange *>( ranges.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::clearDepthStencilImage( VULKAN_HPP_NAMESPACE::Image image, VULKAN_HPP_NAMESPACE::ImageLayout imageLayout, const VULKAN_HPP_NAMESPACE::ClearDepthStencilValue & depthStencil, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageSubresourceRange> const & ranges ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdClearDepthStencilImage( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkImage>( image ), static_cast<VkImageLayout>( imageLayout ), reinterpret_cast<const VkClearDepthStencilValue *>( &depthStencil ), ranges.size(), reinterpret_cast<const VkImageSubresourceRange *>( ranges.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::clearAttachments( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ClearAttachment> const & attachments, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ClearRect> const & rects ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdClearAttachments( static_cast<VkCommandBuffer>( m_commandBuffer ), attachments.size(), reinterpret_cast<const VkClearAttachment *>( attachments.data() ), rects.size(), reinterpret_cast<const VkClearRect *>( rects.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::resolveImage( VULKAN_HPP_NAMESPACE::Image srcImage, VULKAN_HPP_NAMESPACE::ImageLayout srcImageLayout, VULKAN_HPP_NAMESPACE::Image dstImage, VULKAN_HPP_NAMESPACE::ImageLayout dstImageLayout, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageResolve> const & regions ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdResolveImage( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkImage>( srcImage ), static_cast<VkImageLayout>( srcImageLayout ), static_cast<VkImage>( dstImage ), static_cast<VkImageLayout>( dstImageLayout ), regions.size(), reinterpret_cast<const VkImageResolve *>( regions.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setEvent( VULKAN_HPP_NAMESPACE::Event event, VULKAN_HPP_NAMESPACE::PipelineStageFlags stageMask ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetEvent( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkEvent>( event ), static_cast<VkPipelineStageFlags>( stageMask ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::resetEvent( VULKAN_HPP_NAMESPACE::Event event, VULKAN_HPP_NAMESPACE::PipelineStageFlags stageMask ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdResetEvent( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkEvent>( event ), static_cast<VkPipelineStageFlags>( stageMask ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::waitEvents( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Event> const & events, VULKAN_HPP_NAMESPACE::PipelineStageFlags srcStageMask, VULKAN_HPP_NAMESPACE::PipelineStageFlags dstStageMask, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MemoryBarrier> const & memoryBarriers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferMemoryBarrier> const & bufferMemoryBarriers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageMemoryBarrier> const & imageMemoryBarriers ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdWaitEvents( static_cast<VkCommandBuffer>( m_commandBuffer ), events.size(), reinterpret_cast<const VkEvent *>( events.data() ), static_cast<VkPipelineStageFlags>( srcStageMask ), static_cast<VkPipelineStageFlags>( dstStageMask ), memoryBarriers.size(), reinterpret_cast<const VkMemoryBarrier *>( memoryBarriers.data() ), bufferMemoryBarriers.size(), reinterpret_cast<const VkBufferMemoryBarrier *>( bufferMemoryBarriers.data() ), imageMemoryBarriers.size(), reinterpret_cast<const VkImageMemoryBarrier *>( imageMemoryBarriers.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::pipelineBarrier( VULKAN_HPP_NAMESPACE::PipelineStageFlags srcStageMask, VULKAN_HPP_NAMESPACE::PipelineStageFlags dstStageMask, VULKAN_HPP_NAMESPACE::DependencyFlags dependencyFlags, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MemoryBarrier> const & memoryBarriers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferMemoryBarrier> const & bufferMemoryBarriers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageMemoryBarrier> const & imageMemoryBarriers ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdPipelineBarrier( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPipelineStageFlags>( srcStageMask ), static_cast<VkPipelineStageFlags>( dstStageMask ), static_cast<VkDependencyFlags>( dependencyFlags ), memoryBarriers.size(), reinterpret_cast<const VkMemoryBarrier *>( memoryBarriers.data() ), bufferMemoryBarriers.size(), reinterpret_cast<const VkBufferMemoryBarrier *>( bufferMemoryBarriers.data() ), imageMemoryBarriers.size(), reinterpret_cast<const VkImageMemoryBarrier *>( imageMemoryBarriers.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::beginQuery( VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t query, VULKAN_HPP_NAMESPACE::QueryControlFlags flags ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdBeginQuery( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkQueryPool>( queryPool ), query, static_cast<VkQueryControlFlags>( flags ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::endQuery( VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t query ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdEndQuery( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkQueryPool>( queryPool ), query );



  }


   VULKAN_HPP_INLINE void CommandBuffer::resetQueryPool( VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t firstQuery, uint32_t queryCount ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdResetQueryPool( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkQueryPool>( queryPool ), firstQuery, queryCount );



  }


   VULKAN_HPP_INLINE void CommandBuffer::writeTimestamp( VULKAN_HPP_NAMESPACE::PipelineStageFlagBits pipelineStage, VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t query ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdWriteTimestamp( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPipelineStageFlagBits>( pipelineStage ), static_cast<VkQueryPool>( queryPool ), query );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyQueryPoolResults( VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VULKAN_HPP_NAMESPACE::Buffer dstBuffer, VULKAN_HPP_NAMESPACE::DeviceSize dstOffset, VULKAN_HPP_NAMESPACE::DeviceSize stride, VULKAN_HPP_NAMESPACE::QueryResultFlags flags ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdCopyQueryPoolResults( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkQueryPool>( queryPool ), firstQuery, queryCount, static_cast<VkBuffer>( dstBuffer ), static_cast<VkDeviceSize>( dstOffset ), static_cast<VkDeviceSize>( stride ), static_cast<VkQueryResultFlags>( flags ) );



  }

  template <typename ValuesType>
   VULKAN_HPP_INLINE void CommandBuffer::pushConstants( VULKAN_HPP_NAMESPACE::PipelineLayout layout, VULKAN_HPP_NAMESPACE::ShaderStageFlags stageFlags, uint32_t offset, VULKAN_HPP_NAMESPACE::ArrayProxy<const ValuesType> const & values ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdPushConstants( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPipelineLayout>( layout ), static_cast<VkShaderStageFlags>( stageFlags ), offset, values.size() * sizeof( ValuesType ), reinterpret_cast<const void *>( values.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::beginRenderPass( const VULKAN_HPP_NAMESPACE::RenderPassBeginInfo & renderPassBegin, VULKAN_HPP_NAMESPACE::SubpassContents contents ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdBeginRenderPass( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkRenderPassBeginInfo *>( &renderPassBegin ), static_cast<VkSubpassContents>( contents ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::nextSubpass( VULKAN_HPP_NAMESPACE::SubpassContents contents ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdNextSubpass( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkSubpassContents>( contents ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::endRenderPass(  ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdEndRenderPass( static_cast<VkCommandBuffer>( m_commandBuffer ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::executeCommands( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::CommandBuffer> const & commandBuffers ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdExecuteCommands( static_cast<VkCommandBuffer>( m_commandBuffer ), commandBuffers.size(), reinterpret_cast<const VkCommandBuffer *>( commandBuffers.data() ) );



  }

  //=== VK_VERSION_1_1 ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE uint32_t Context::enumerateInstanceVersion(  ) const
  {



    uint32_t apiVersion;
    VkResult result = getDispatcher()->vkEnumerateInstanceVersion( &apiVersion );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Context::enumerateInstanceVersion" );

    return apiVersion;
  }


   VULKAN_HPP_INLINE void Device::bindBufferMemory2( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BindBufferMemoryInfo> const & bindInfos ) const
  {




    VkResult result = getDispatcher()->vkBindBufferMemory2( static_cast<VkDevice>( m_device ), bindInfos.size(), reinterpret_cast<const VkBindBufferMemoryInfo *>( bindInfos.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::bindBufferMemory2" );


  }


   VULKAN_HPP_INLINE void Device::bindImageMemory2( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BindImageMemoryInfo> const & bindInfos ) const
  {




    VkResult result = getDispatcher()->vkBindImageMemory2( static_cast<VkDevice>( m_device ), bindInfos.size(), reinterpret_cast<const VkBindImageMemoryInfo *>( bindInfos.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::bindImageMemory2" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::PeerMemoryFeatureFlags Device::getGroupPeerMemoryFeatures( uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::PeerMemoryFeatureFlags peerMemoryFeatures;
    getDispatcher()->vkGetDeviceGroupPeerMemoryFeatures( static_cast<VkDevice>( m_device ), heapIndex, localDeviceIndex, remoteDeviceIndex, reinterpret_cast<VkPeerMemoryFeatureFlags *>( &peerMemoryFeatures ) );


    return peerMemoryFeatures;
  }


   VULKAN_HPP_INLINE void CommandBuffer::setDeviceMask( uint32_t deviceMask ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetDeviceMask( static_cast<VkCommandBuffer>( m_commandBuffer ), deviceMask );



  }


   VULKAN_HPP_INLINE void CommandBuffer::dispatchBase( uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdDispatchBase( static_cast<VkCommandBuffer>( m_commandBuffer ), baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ );



  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties> Instance::enumeratePhysicalDeviceGroups(  ) const
  {



    std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties> physicalDeviceGroupProperties;
    uint32_t physicalDeviceGroupCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkEnumeratePhysicalDeviceGroups( static_cast<VkInstance>( m_instance ), &physicalDeviceGroupCount, nullptr );
      if ( ( result == VK_SUCCESS ) && physicalDeviceGroupCount )
      {
        physicalDeviceGroupProperties.resize( physicalDeviceGroupCount );
        result = getDispatcher()->vkEnumeratePhysicalDeviceGroups( static_cast<VkInstance>( m_instance ), &physicalDeviceGroupCount, reinterpret_cast<VkPhysicalDeviceGroupProperties *>( physicalDeviceGroupProperties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Instance::enumeratePhysicalDeviceGroups" );
    VULKAN_HPP_ASSERT( physicalDeviceGroupCount <= physicalDeviceGroupProperties.size() );
    if ( physicalDeviceGroupCount < physicalDeviceGroupProperties.size() )
    {
      physicalDeviceGroupProperties.resize( physicalDeviceGroupCount );
    }
    return physicalDeviceGroupProperties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryRequirements2 Device::getImageMemoryRequirements2( const VULKAN_HPP_NAMESPACE::ImageMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::MemoryRequirements2 memoryRequirements;
    getDispatcher()->vkGetImageMemoryRequirements2( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImageMemoryRequirementsInfo2 *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return memoryRequirements;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Device::getImageMemoryRequirements2( const VULKAN_HPP_NAMESPACE::ImageMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT
  {



    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::MemoryRequirements2 & memoryRequirements = structureChain.template get<VULKAN_HPP_NAMESPACE::MemoryRequirements2>();
    getDispatcher()->vkGetImageMemoryRequirements2( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImageMemoryRequirementsInfo2 *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryRequirements2 Device::getBufferMemoryRequirements2( const VULKAN_HPP_NAMESPACE::BufferMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::MemoryRequirements2 memoryRequirements;
    getDispatcher()->vkGetBufferMemoryRequirements2( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkBufferMemoryRequirementsInfo2 *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return memoryRequirements;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Device::getBufferMemoryRequirements2( const VULKAN_HPP_NAMESPACE::BufferMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT
  {



    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::MemoryRequirements2 & memoryRequirements = structureChain.template get<VULKAN_HPP_NAMESPACE::MemoryRequirements2>();
    getDispatcher()->vkGetBufferMemoryRequirements2( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkBufferMemoryRequirementsInfo2 *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2> Device::getImageSparseMemoryRequirements2( const VULKAN_HPP_NAMESPACE::ImageSparseMemoryRequirementsInfo2 & info ) const
  {



    std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2> sparseMemoryRequirements;
    uint32_t sparseMemoryRequirementCount;
    getDispatcher()->vkGetImageSparseMemoryRequirements2( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImageSparseMemoryRequirementsInfo2 *>( &info ), &sparseMemoryRequirementCount, nullptr );
    sparseMemoryRequirements.resize( sparseMemoryRequirementCount );
    getDispatcher()->vkGetImageSparseMemoryRequirements2( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImageSparseMemoryRequirementsInfo2 *>( &info ), &sparseMemoryRequirementCount, reinterpret_cast<VkSparseImageMemoryRequirements2 *>( sparseMemoryRequirements.data() ) );

    VULKAN_HPP_ASSERT( sparseMemoryRequirementCount <= sparseMemoryRequirements.size() );
    if ( sparseMemoryRequirementCount < sparseMemoryRequirements.size() )
    {
      sparseMemoryRequirements.resize( sparseMemoryRequirementCount );
    }
    return sparseMemoryRequirements;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures2 PhysicalDevice::getFeatures2(  ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures2 features;
    getDispatcher()->vkGetPhysicalDeviceFeatures2( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceFeatures2 *>( &features ) );


    return features;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> PhysicalDevice::getFeatures2(  ) const  VULKAN_HPP_NOEXCEPT
  {



    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures2 & features = structureChain.template get<VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures2>();
    getDispatcher()->vkGetPhysicalDeviceFeatures2( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceFeatures2 *>( &features ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties2 PhysicalDevice::getProperties2(  ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties2 properties;
    getDispatcher()->vkGetPhysicalDeviceProperties2( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceProperties2 *>( &properties ) );


    return properties;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> PhysicalDevice::getProperties2(  ) const  VULKAN_HPP_NOEXCEPT
  {



    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties2 & properties = structureChain.template get<VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties2>();
    getDispatcher()->vkGetPhysicalDeviceProperties2( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceProperties2 *>( &properties ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::FormatProperties2 PhysicalDevice::getFormatProperties2( VULKAN_HPP_NAMESPACE::Format format ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::FormatProperties2 formatProperties;
    getDispatcher()->vkGetPhysicalDeviceFormatProperties2( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkFormat>( format ), reinterpret_cast<VkFormatProperties2 *>( &formatProperties ) );


    return formatProperties;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> PhysicalDevice::getFormatProperties2( VULKAN_HPP_NAMESPACE::Format format ) const  VULKAN_HPP_NOEXCEPT
  {



    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::FormatProperties2 & formatProperties = structureChain.template get<VULKAN_HPP_NAMESPACE::FormatProperties2>();
    getDispatcher()->vkGetPhysicalDeviceFormatProperties2( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkFormat>( format ), reinterpret_cast<VkFormatProperties2 *>( &formatProperties ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ImageFormatProperties2 PhysicalDevice::getImageFormatProperties2( const VULKAN_HPP_NAMESPACE::PhysicalDeviceImageFormatInfo2 & imageFormatInfo ) const
  {



    VULKAN_HPP_NAMESPACE::ImageFormatProperties2 imageFormatProperties;
    VkResult result = getDispatcher()->vkGetPhysicalDeviceImageFormatProperties2( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceImageFormatInfo2 *>( &imageFormatInfo ), reinterpret_cast<VkImageFormatProperties2 *>( &imageFormatProperties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getImageFormatProperties2" );

    return imageFormatProperties;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> PhysicalDevice::getImageFormatProperties2( const VULKAN_HPP_NAMESPACE::PhysicalDeviceImageFormatInfo2 & imageFormatInfo ) const
  {



    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::ImageFormatProperties2 & imageFormatProperties = structureChain.template get<VULKAN_HPP_NAMESPACE::ImageFormatProperties2>();
    VkResult result = getDispatcher()->vkGetPhysicalDeviceImageFormatProperties2( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceImageFormatInfo2 *>( &imageFormatInfo ), reinterpret_cast<VkImageFormatProperties2 *>( &imageFormatProperties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getImageFormatProperties2" );

    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2> PhysicalDevice::getQueueFamilyProperties2(  ) const
  {



    std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2> queueFamilyProperties;
    uint32_t queueFamilyPropertyCount;
    getDispatcher()->vkGetPhysicalDeviceQueueFamilyProperties2( static_cast<VkPhysicalDevice>( m_physicalDevice ), &queueFamilyPropertyCount, nullptr );
    queueFamilyProperties.resize( queueFamilyPropertyCount );
    getDispatcher()->vkGetPhysicalDeviceQueueFamilyProperties2( static_cast<VkPhysicalDevice>( m_physicalDevice ), &queueFamilyPropertyCount, reinterpret_cast<VkQueueFamilyProperties2 *>( queueFamilyProperties.data() ) );

    VULKAN_HPP_ASSERT( queueFamilyPropertyCount <= queueFamilyProperties.size() );
    if ( queueFamilyPropertyCount < queueFamilyProperties.size() )
    {
      queueFamilyProperties.resize( queueFamilyPropertyCount );
    }
    return queueFamilyProperties;
  }

  template <typename StructureChain>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<StructureChain> PhysicalDevice::getQueueFamilyProperties2(  ) const
  {



    std::vector<StructureChain> structureChains;
    std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2> queueFamilyProperties;
    uint32_t queueFamilyPropertyCount;
    getDispatcher()->vkGetPhysicalDeviceQueueFamilyProperties2( static_cast<VkPhysicalDevice>( m_physicalDevice ), &queueFamilyPropertyCount, nullptr );
    structureChains.resize( queueFamilyPropertyCount );
    queueFamilyProperties.resize( queueFamilyPropertyCount );
    for ( uint32_t i = 0; i < queueFamilyPropertyCount; i++ )
    {
      queueFamilyProperties[i].pNext = structureChains[i].template get<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2>().pNext;
    }
    getDispatcher()->vkGetPhysicalDeviceQueueFamilyProperties2( static_cast<VkPhysicalDevice>( m_physicalDevice ), &queueFamilyPropertyCount, reinterpret_cast<VkQueueFamilyProperties2 *>( queueFamilyProperties.data() ) );

    VULKAN_HPP_ASSERT( queueFamilyPropertyCount <= queueFamilyProperties.size() );
      if ( queueFamilyPropertyCount < queueFamilyProperties.size() )
      {
        structureChains.resize( queueFamilyPropertyCount );
      }
      for ( uint32_t i = 0; i < queueFamilyPropertyCount; i++ )
      {
        structureChains[i].template get<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2>() = queueFamilyProperties[i];
      }
    return structureChains;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties2 PhysicalDevice::getMemoryProperties2(  ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties2 memoryProperties;
    getDispatcher()->vkGetPhysicalDeviceMemoryProperties2( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceMemoryProperties2 *>( &memoryProperties ) );


    return memoryProperties;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> PhysicalDevice::getMemoryProperties2(  ) const  VULKAN_HPP_NOEXCEPT
  {



    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties2 & memoryProperties = structureChain.template get<VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties2>();
    getDispatcher()->vkGetPhysicalDeviceMemoryProperties2( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceMemoryProperties2 *>( &memoryProperties ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2> PhysicalDevice::getSparseImageFormatProperties2( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSparseImageFormatInfo2 & formatInfo ) const
  {



    std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2> properties;
    uint32_t propertyCount;
    getDispatcher()->vkGetPhysicalDeviceSparseImageFormatProperties2( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceSparseImageFormatInfo2 *>( &formatInfo ), &propertyCount, nullptr );
    properties.resize( propertyCount );
    getDispatcher()->vkGetPhysicalDeviceSparseImageFormatProperties2( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceSparseImageFormatInfo2 *>( &formatInfo ), &propertyCount, reinterpret_cast<VkSparseImageFormatProperties2 *>( properties.data() ) );

    VULKAN_HPP_ASSERT( propertyCount <= properties.size() );
    if ( propertyCount < properties.size() )
    {
      properties.resize( propertyCount );
    }
    return properties;
  }


   VULKAN_HPP_INLINE void CommandPool::trim( VULKAN_HPP_NAMESPACE::CommandPoolTrimFlags flags ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkTrimCommandPool( static_cast<VkDevice>( m_device ), static_cast<VkCommandPool>( m_commandPool ), static_cast<VkCommandPoolTrimFlags>( flags ) );



  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Queue Device::getQueue2( VULKAN_HPP_NAMESPACE::DeviceQueueInfo2 const & queueInfo ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Queue( *this, queueInfo );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SamplerYcbcrConversion Device::createSamplerYcbcrConversion( VULKAN_HPP_NAMESPACE::SamplerYcbcrConversionCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SamplerYcbcrConversion( *this, createInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::DescriptorUpdateTemplate Device::createDescriptorUpdateTemplate( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplateCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::DescriptorUpdateTemplate( *this, createInfo, allocator );
  }

  template <typename DataType>
   VULKAN_HPP_INLINE void DescriptorSet::updateWithTemplate( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate, DataType const & data ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkUpdateDescriptorSetWithTemplate( static_cast<VkDevice>( m_device ), static_cast<VkDescriptorSet>( m_descriptorSet ), static_cast<VkDescriptorUpdateTemplate>( descriptorUpdateTemplate ), reinterpret_cast<const void *>( &data ) );



  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ExternalBufferProperties PhysicalDevice::getExternalBufferProperties( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalBufferInfo & externalBufferInfo ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::ExternalBufferProperties externalBufferProperties;
    getDispatcher()->vkGetPhysicalDeviceExternalBufferProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceExternalBufferInfo *>( &externalBufferInfo ), reinterpret_cast<VkExternalBufferProperties *>( &externalBufferProperties ) );


    return externalBufferProperties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ExternalFenceProperties PhysicalDevice::getExternalFenceProperties( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalFenceInfo & externalFenceInfo ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::ExternalFenceProperties externalFenceProperties;
    getDispatcher()->vkGetPhysicalDeviceExternalFenceProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceExternalFenceInfo *>( &externalFenceInfo ), reinterpret_cast<VkExternalFenceProperties *>( &externalFenceProperties ) );


    return externalFenceProperties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ExternalSemaphoreProperties PhysicalDevice::getExternalSemaphoreProperties( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalSemaphoreInfo & externalSemaphoreInfo ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::ExternalSemaphoreProperties externalSemaphoreProperties;
    getDispatcher()->vkGetPhysicalDeviceExternalSemaphoreProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceExternalSemaphoreInfo *>( &externalSemaphoreInfo ), reinterpret_cast<VkExternalSemaphoreProperties *>( &externalSemaphoreProperties ) );


    return externalSemaphoreProperties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DescriptorSetLayoutSupport Device::getDescriptorSetLayoutSupport( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo & createInfo ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::DescriptorSetLayoutSupport support;
    getDispatcher()->vkGetDescriptorSetLayoutSupport( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDescriptorSetLayoutCreateInfo *>( &createInfo ), reinterpret_cast<VkDescriptorSetLayoutSupport *>( &support ) );


    return support;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Device::getDescriptorSetLayoutSupport( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo & createInfo ) const  VULKAN_HPP_NOEXCEPT
  {



    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::DescriptorSetLayoutSupport & support = structureChain.template get<VULKAN_HPP_NAMESPACE::DescriptorSetLayoutSupport>();
    getDispatcher()->vkGetDescriptorSetLayoutSupport( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDescriptorSetLayoutCreateInfo *>( &createInfo ), reinterpret_cast<VkDescriptorSetLayoutSupport *>( &support ) );


    return structureChain;
  }

  //=== VK_VERSION_1_2 ===


   VULKAN_HPP_INLINE void CommandBuffer::drawIndirectCount( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdDrawIndirectCount( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( buffer ), static_cast<VkDeviceSize>( offset ), static_cast<VkBuffer>( countBuffer ), static_cast<VkDeviceSize>( countBufferOffset ), maxDrawCount, stride );



  }


   VULKAN_HPP_INLINE void CommandBuffer::drawIndexedIndirectCount( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdDrawIndexedIndirectCount( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( buffer ), static_cast<VkDeviceSize>( offset ), static_cast<VkBuffer>( countBuffer ), static_cast<VkDeviceSize>( countBufferOffset ), maxDrawCount, stride );



  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::RenderPass Device::createRenderPass2( VULKAN_HPP_NAMESPACE::RenderPassCreateInfo2 const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::RenderPass( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void CommandBuffer::beginRenderPass2( const VULKAN_HPP_NAMESPACE::RenderPassBeginInfo & renderPassBegin, const VULKAN_HPP_NAMESPACE::SubpassBeginInfo & subpassBeginInfo ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdBeginRenderPass2( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkRenderPassBeginInfo *>( &renderPassBegin ), reinterpret_cast<const VkSubpassBeginInfo *>( &subpassBeginInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::nextSubpass2( const VULKAN_HPP_NAMESPACE::SubpassBeginInfo & subpassBeginInfo, const VULKAN_HPP_NAMESPACE::SubpassEndInfo & subpassEndInfo ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdNextSubpass2( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkSubpassBeginInfo *>( &subpassBeginInfo ), reinterpret_cast<const VkSubpassEndInfo *>( &subpassEndInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::endRenderPass2( const VULKAN_HPP_NAMESPACE::SubpassEndInfo & subpassEndInfo ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdEndRenderPass2( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkSubpassEndInfo *>( &subpassEndInfo ) );



  }


   VULKAN_HPP_INLINE void QueryPool::reset( uint32_t firstQuery, uint32_t queryCount ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkResetQueryPool( static_cast<VkDevice>( m_device ), static_cast<VkQueryPool>( m_queryPool ), firstQuery, queryCount );



  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE uint64_t Semaphore::getCounterValue(  ) const
  {



    uint64_t value;
    VkResult result = getDispatcher()->vkGetSemaphoreCounterValue( static_cast<VkDevice>( m_device ), static_cast<VkSemaphore>( m_semaphore ), &value );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Semaphore::getCounterValue" );

    return value;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result Device::waitSemaphores( const VULKAN_HPP_NAMESPACE::SemaphoreWaitInfo & waitInfo, uint64_t timeout ) const
  {




    VkResult result = getDispatcher()->vkWaitSemaphores( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkSemaphoreWaitInfo *>( &waitInfo ), timeout );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::waitSemaphores", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eTimeout } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }


   VULKAN_HPP_INLINE void Device::signalSemaphore( const VULKAN_HPP_NAMESPACE::SemaphoreSignalInfo & signalInfo ) const
  {




    VkResult result = getDispatcher()->vkSignalSemaphore( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkSemaphoreSignalInfo *>( &signalInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::signalSemaphore" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DeviceAddress Device::getBufferAddress( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info ) const  VULKAN_HPP_NOEXCEPT
  {




    VkDeviceAddress result = getDispatcher()->vkGetBufferDeviceAddress( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkBufferDeviceAddressInfo *>( &info ) );


    return static_cast<VULKAN_HPP_NAMESPACE::DeviceAddress>( result );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE uint64_t Device::getBufferOpaqueCaptureAddress( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info ) const  VULKAN_HPP_NOEXCEPT
  {




    uint64_t result = getDispatcher()->vkGetBufferOpaqueCaptureAddress( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkBufferDeviceAddressInfo *>( &info ) );


    return result;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE uint64_t Device::getMemoryOpaqueCaptureAddress( const VULKAN_HPP_NAMESPACE::DeviceMemoryOpaqueCaptureAddressInfo & info ) const  VULKAN_HPP_NOEXCEPT
  {




    uint64_t result = getDispatcher()->vkGetDeviceMemoryOpaqueCaptureAddress( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDeviceMemoryOpaqueCaptureAddressInfo *>( &info ) );


    return result;
  }

  //=== VK_VERSION_1_3 ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties> PhysicalDevice::getToolProperties(  ) const
  {



    std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties> toolProperties;
    uint32_t toolCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceToolProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), &toolCount, nullptr );
      if ( ( result == VK_SUCCESS ) && toolCount )
      {
        toolProperties.resize( toolCount );
        result = getDispatcher()->vkGetPhysicalDeviceToolProperties( static_cast<VkPhysicalDevice>( m_physicalDevice ), &toolCount, reinterpret_cast<VkPhysicalDeviceToolProperties *>( toolProperties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getToolProperties" );
    VULKAN_HPP_ASSERT( toolCount <= toolProperties.size() );
    if ( toolCount < toolProperties.size() )
    {
      toolProperties.resize( toolCount );
    }
    return toolProperties;
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::PrivateDataSlot Device::createPrivateDataSlot( VULKAN_HPP_NAMESPACE::PrivateDataSlotCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::PrivateDataSlot( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void Device::setPrivateData( VULKAN_HPP_NAMESPACE::ObjectType objectType_, uint64_t objectHandle, VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot, uint64_t data ) const
  {




    VkResult result = getDispatcher()->vkSetPrivateData( static_cast<VkDevice>( m_device ), static_cast<VkObjectType>( objectType_ ), objectHandle, static_cast<VkPrivateDataSlot>( privateDataSlot ), data );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::setPrivateData" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE uint64_t Device::getPrivateData( VULKAN_HPP_NAMESPACE::ObjectType objectType_, uint64_t objectHandle, VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot ) const  VULKAN_HPP_NOEXCEPT
  {



    uint64_t data;
    getDispatcher()->vkGetPrivateData( static_cast<VkDevice>( m_device ), static_cast<VkObjectType>( objectType_ ), objectHandle, static_cast<VkPrivateDataSlot>( privateDataSlot ), &data );


    return data;
  }


   VULKAN_HPP_INLINE void CommandBuffer::setEvent2( VULKAN_HPP_NAMESPACE::Event event, const VULKAN_HPP_NAMESPACE::DependencyInfo & dependencyInfo ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetEvent2( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkEvent>( event ), reinterpret_cast<const VkDependencyInfo *>( &dependencyInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::resetEvent2( VULKAN_HPP_NAMESPACE::Event event, VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stageMask ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdResetEvent2( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkEvent>( event ), static_cast<VkPipelineStageFlags2>( stageMask ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::waitEvents2( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Event> const & events, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DependencyInfo> const & dependencyInfos ) const
  {

    if ( events.size() != dependencyInfos.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::waitEvents2: events.size() != dependencyInfos.size()" );
  }



    getDispatcher()->vkCmdWaitEvents2( static_cast<VkCommandBuffer>( m_commandBuffer ), events.size(), reinterpret_cast<const VkEvent *>( events.data() ), reinterpret_cast<const VkDependencyInfo *>( dependencyInfos.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::pipelineBarrier2( const VULKAN_HPP_NAMESPACE::DependencyInfo & dependencyInfo ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdPipelineBarrier2( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkDependencyInfo *>( &dependencyInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::writeTimestamp2( VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stage, VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t query ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdWriteTimestamp2( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPipelineStageFlags2>( stage ), static_cast<VkQueryPool>( queryPool ), query );



  }


   VULKAN_HPP_INLINE void Queue::submit2( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::SubmitInfo2> const & submits, VULKAN_HPP_NAMESPACE::Fence fence ) const
  {




    VkResult result = getDispatcher()->vkQueueSubmit2( static_cast<VkQueue>( m_queue ), submits.size(), reinterpret_cast<const VkSubmitInfo2 *>( submits.data() ), static_cast<VkFence>( fence ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Queue::submit2" );


  }


   VULKAN_HPP_INLINE void CommandBuffer::copyBuffer2( const VULKAN_HPP_NAMESPACE::CopyBufferInfo2 & copyBufferInfo ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdCopyBuffer2( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCopyBufferInfo2 *>( &copyBufferInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyImage2( const VULKAN_HPP_NAMESPACE::CopyImageInfo2 & copyImageInfo ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdCopyImage2( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCopyImageInfo2 *>( &copyImageInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyBufferToImage2( const VULKAN_HPP_NAMESPACE::CopyBufferToImageInfo2 & copyBufferToImageInfo ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdCopyBufferToImage2( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCopyBufferToImageInfo2 *>( &copyBufferToImageInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyImageToBuffer2( const VULKAN_HPP_NAMESPACE::CopyImageToBufferInfo2 & copyImageToBufferInfo ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdCopyImageToBuffer2( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCopyImageToBufferInfo2 *>( &copyImageToBufferInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::blitImage2( const VULKAN_HPP_NAMESPACE::BlitImageInfo2 & blitImageInfo ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdBlitImage2( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkBlitImageInfo2 *>( &blitImageInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::resolveImage2( const VULKAN_HPP_NAMESPACE::ResolveImageInfo2 & resolveImageInfo ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdResolveImage2( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkResolveImageInfo2 *>( &resolveImageInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::beginRendering( const VULKAN_HPP_NAMESPACE::RenderingInfo & renderingInfo ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdBeginRendering( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkRenderingInfo *>( &renderingInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::endRendering(  ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdEndRendering( static_cast<VkCommandBuffer>( m_commandBuffer ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setCullMode( VULKAN_HPP_NAMESPACE::CullModeFlags cullMode ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetCullMode( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkCullModeFlags>( cullMode ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setFrontFace( VULKAN_HPP_NAMESPACE::FrontFace frontFace ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetFrontFace( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkFrontFace>( frontFace ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setPrimitiveTopology( VULKAN_HPP_NAMESPACE::PrimitiveTopology primitiveTopology ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetPrimitiveTopology( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPrimitiveTopology>( primitiveTopology ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setViewportWithCount( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Viewport> const & viewports ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetViewportWithCount( static_cast<VkCommandBuffer>( m_commandBuffer ), viewports.size(), reinterpret_cast<const VkViewport *>( viewports.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setScissorWithCount( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & scissors ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetScissorWithCount( static_cast<VkCommandBuffer>( m_commandBuffer ), scissors.size(), reinterpret_cast<const VkRect2D *>( scissors.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::bindVertexBuffers2( uint32_t firstBinding, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const & buffers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & offsets, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & sizes, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & strides ) const
  {

    if ( buffers.size() != offsets.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::bindVertexBuffers2: buffers.size() != offsets.size()" );
  }
    if ( !sizes.empty() && buffers.size() != sizes.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::bindVertexBuffers2: buffers.size() != sizes.size()" );
  }
    if ( !strides.empty() && buffers.size() != strides.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::bindVertexBuffers2: buffers.size() != strides.size()" );
  }



    getDispatcher()->vkCmdBindVertexBuffers2( static_cast<VkCommandBuffer>( m_commandBuffer ), firstBinding, buffers.size(), reinterpret_cast<const VkBuffer *>( buffers.data() ), reinterpret_cast<const VkDeviceSize *>( offsets.data() ), reinterpret_cast<const VkDeviceSize *>( sizes.data() ), reinterpret_cast<const VkDeviceSize *>( strides.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthTestEnable( VULKAN_HPP_NAMESPACE::Bool32 depthTestEnable ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetDepthTestEnable( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( depthTestEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthWriteEnable( VULKAN_HPP_NAMESPACE::Bool32 depthWriteEnable ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetDepthWriteEnable( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( depthWriteEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthCompareOp( VULKAN_HPP_NAMESPACE::CompareOp depthCompareOp ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetDepthCompareOp( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkCompareOp>( depthCompareOp ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthBoundsTestEnable( VULKAN_HPP_NAMESPACE::Bool32 depthBoundsTestEnable ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetDepthBoundsTestEnable( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( depthBoundsTestEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setStencilTestEnable( VULKAN_HPP_NAMESPACE::Bool32 stencilTestEnable ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetStencilTestEnable( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( stencilTestEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setStencilOp( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask, VULKAN_HPP_NAMESPACE::StencilOp failOp, VULKAN_HPP_NAMESPACE::StencilOp passOp, VULKAN_HPP_NAMESPACE::StencilOp depthFailOp, VULKAN_HPP_NAMESPACE::CompareOp compareOp ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetStencilOp( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkStencilFaceFlags>( faceMask ), static_cast<VkStencilOp>( failOp ), static_cast<VkStencilOp>( passOp ), static_cast<VkStencilOp>( depthFailOp ), static_cast<VkCompareOp>( compareOp ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setRasterizerDiscardEnable( VULKAN_HPP_NAMESPACE::Bool32 rasterizerDiscardEnable ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetRasterizerDiscardEnable( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( rasterizerDiscardEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthBiasEnable( VULKAN_HPP_NAMESPACE::Bool32 depthBiasEnable ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetDepthBiasEnable( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( depthBiasEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setPrimitiveRestartEnable( VULKAN_HPP_NAMESPACE::Bool32 primitiveRestartEnable ) const  VULKAN_HPP_NOEXCEPT
  {




    getDispatcher()->vkCmdSetPrimitiveRestartEnable( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( primitiveRestartEnable ) );



  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryRequirements2 Device::getBufferMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceBufferMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::MemoryRequirements2 memoryRequirements;
    getDispatcher()->vkGetDeviceBufferMemoryRequirements( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDeviceBufferMemoryRequirements *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return memoryRequirements;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Device::getBufferMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceBufferMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT
  {



    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::MemoryRequirements2 & memoryRequirements = structureChain.template get<VULKAN_HPP_NAMESPACE::MemoryRequirements2>();
    getDispatcher()->vkGetDeviceBufferMemoryRequirements( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDeviceBufferMemoryRequirements *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryRequirements2 Device::getImageMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT
  {



    VULKAN_HPP_NAMESPACE::MemoryRequirements2 memoryRequirements;
    getDispatcher()->vkGetDeviceImageMemoryRequirements( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDeviceImageMemoryRequirements *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return memoryRequirements;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Device::getImageMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT
  {



    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::MemoryRequirements2 & memoryRequirements = structureChain.template get<VULKAN_HPP_NAMESPACE::MemoryRequirements2>();
    getDispatcher()->vkGetDeviceImageMemoryRequirements( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDeviceImageMemoryRequirements *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2> Device::getImageSparseMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info ) const
  {



    std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2> sparseMemoryRequirements;
    uint32_t sparseMemoryRequirementCount;
    getDispatcher()->vkGetDeviceImageSparseMemoryRequirements( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDeviceImageMemoryRequirements *>( &info ), &sparseMemoryRequirementCount, nullptr );
    sparseMemoryRequirements.resize( sparseMemoryRequirementCount );
    getDispatcher()->vkGetDeviceImageSparseMemoryRequirements( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDeviceImageMemoryRequirements *>( &info ), &sparseMemoryRequirementCount, reinterpret_cast<VkSparseImageMemoryRequirements2 *>( sparseMemoryRequirements.data() ) );

    VULKAN_HPP_ASSERT( sparseMemoryRequirementCount <= sparseMemoryRequirements.size() );
    if ( sparseMemoryRequirementCount < sparseMemoryRequirements.size() )
    {
      sparseMemoryRequirements.resize( sparseMemoryRequirementCount );
    }
    return sparseMemoryRequirements;
  }

  //=== VK_KHR_surface ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Bool32 PhysicalDevice::getSurfaceSupportKHR( uint32_t queueFamilyIndex, VULKAN_HPP_NAMESPACE::SurfaceKHR surface ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceSurfaceSupportKHR && "Function <vkGetPhysicalDeviceSurfaceSupportKHR> needs extension <VK_KHR_surface> enabled!" );


    VULKAN_HPP_NAMESPACE::Bool32 supported;
    VkResult result = getDispatcher()->vkGetPhysicalDeviceSurfaceSupportKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), queueFamilyIndex, static_cast<VkSurfaceKHR>( surface ), reinterpret_cast<VkBool32 *>( &supported ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getSurfaceSupportKHR" );

    return supported;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::SurfaceCapabilitiesKHR PhysicalDevice::getSurfaceCapabilitiesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceSurfaceCapabilitiesKHR && "Function <vkGetPhysicalDeviceSurfaceCapabilitiesKHR> needs extension <VK_KHR_surface> enabled!" );


    VULKAN_HPP_NAMESPACE::SurfaceCapabilitiesKHR surfaceCapabilities;
    VkResult result = getDispatcher()->vkGetPhysicalDeviceSurfaceCapabilitiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkSurfaceKHR>( surface ), reinterpret_cast<VkSurfaceCapabilitiesKHR *>( &surfaceCapabilities ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getSurfaceCapabilitiesKHR" );

    return surfaceCapabilities;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::SurfaceFormatKHR> PhysicalDevice::getSurfaceFormatsKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceSurfaceFormatsKHR && "Function <vkGetPhysicalDeviceSurfaceFormatsKHR> needs extension <VK_KHR_surface> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::SurfaceFormatKHR> surfaceFormats;
    uint32_t surfaceFormatCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceSurfaceFormatsKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkSurfaceKHR>( surface ), &surfaceFormatCount, nullptr );
      if ( ( result == VK_SUCCESS ) && surfaceFormatCount )
      {
        surfaceFormats.resize( surfaceFormatCount );
        result = getDispatcher()->vkGetPhysicalDeviceSurfaceFormatsKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkSurfaceKHR>( surface ), &surfaceFormatCount, reinterpret_cast<VkSurfaceFormatKHR *>( surfaceFormats.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getSurfaceFormatsKHR" );
    VULKAN_HPP_ASSERT( surfaceFormatCount <= surfaceFormats.size() );
    if ( surfaceFormatCount < surfaceFormats.size() )
    {
      surfaceFormats.resize( surfaceFormatCount );
    }
    return surfaceFormats;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::PresentModeKHR> PhysicalDevice::getSurfacePresentModesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceSurfacePresentModesKHR && "Function <vkGetPhysicalDeviceSurfacePresentModesKHR> needs extension <VK_KHR_surface> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::PresentModeKHR> presentModes;
    uint32_t presentModeCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceSurfacePresentModesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkSurfaceKHR>( surface ), &presentModeCount, nullptr );
      if ( ( result == VK_SUCCESS ) && presentModeCount )
      {
        presentModes.resize( presentModeCount );
        result = getDispatcher()->vkGetPhysicalDeviceSurfacePresentModesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkSurfaceKHR>( surface ), &presentModeCount, reinterpret_cast<VkPresentModeKHR *>( presentModes.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getSurfacePresentModesKHR" );
    VULKAN_HPP_ASSERT( presentModeCount <= presentModes.size() );
    if ( presentModeCount < presentModes.size() )
    {
      presentModes.resize( presentModeCount );
    }
    return presentModes;
  }

  //=== VK_KHR_swapchain ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SwapchainKHR Device::createSwapchainKHR( VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SwapchainKHR( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::Image> SwapchainKHR::getImages(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetSwapchainImagesKHR && "Function <vkGetSwapchainImagesKHR> needs extension <VK_KHR_swapchain> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::Image> swapchainImages;
    uint32_t swapchainImageCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetSwapchainImagesKHR( static_cast<VkDevice>( m_device ), static_cast<VkSwapchainKHR>( m_swapchain ), &swapchainImageCount, nullptr );
      if ( ( result == VK_SUCCESS ) && swapchainImageCount )
      {
        swapchainImages.resize( swapchainImageCount );
        result = getDispatcher()->vkGetSwapchainImagesKHR( static_cast<VkDevice>( m_device ), static_cast<VkSwapchainKHR>( m_swapchain ), &swapchainImageCount, reinterpret_cast<VkImage *>( swapchainImages.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::SwapchainKHR::getImages" );
    VULKAN_HPP_ASSERT( swapchainImageCount <= swapchainImages.size() );
    if ( swapchainImageCount < swapchainImages.size() )
    {
      swapchainImages.resize( swapchainImageCount );
    }
    return swapchainImages;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::pair<VULKAN_HPP_NAMESPACE::Result, uint32_t> SwapchainKHR::acquireNextImage( uint64_t timeout, VULKAN_HPP_NAMESPACE::Semaphore semaphore, VULKAN_HPP_NAMESPACE::Fence fence ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkAcquireNextImageKHR && "Function <vkAcquireNextImageKHR> needs extension <VK_KHR_swapchain> enabled!" );


    uint32_t imageIndex;
    VkResult result = getDispatcher()->vkAcquireNextImageKHR( static_cast<VkDevice>( m_device ), static_cast<VkSwapchainKHR>( m_swapchain ), timeout, static_cast<VkSemaphore>( semaphore ), static_cast<VkFence>( fence ), &imageIndex );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::SwapchainKHR::acquireNextImage", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eTimeout, VULKAN_HPP_NAMESPACE::Result::eNotReady, VULKAN_HPP_NAMESPACE::Result::eSuboptimalKHR } );

    return std::make_pair( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), imageIndex );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result Queue::presentKHR( const VULKAN_HPP_NAMESPACE::PresentInfoKHR & presentInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkQueuePresentKHR && "Function <vkQueuePresentKHR> needs extension <VK_KHR_swapchain> enabled!" );



    VkResult result = getDispatcher()->vkQueuePresentKHR( static_cast<VkQueue>( m_queue ), reinterpret_cast<const VkPresentInfoKHR *>( &presentInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Queue::presentKHR", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eSuboptimalKHR } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DeviceGroupPresentCapabilitiesKHR Device::getGroupPresentCapabilitiesKHR(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeviceGroupPresentCapabilitiesKHR && "Function <vkGetDeviceGroupPresentCapabilitiesKHR> needs extension <VK_KHR_swapchain> enabled!" );


    VULKAN_HPP_NAMESPACE::DeviceGroupPresentCapabilitiesKHR deviceGroupPresentCapabilities;
    VkResult result = getDispatcher()->vkGetDeviceGroupPresentCapabilitiesKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<VkDeviceGroupPresentCapabilitiesKHR *>( &deviceGroupPresentCapabilities ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getGroupPresentCapabilitiesKHR" );

    return deviceGroupPresentCapabilities;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DeviceGroupPresentModeFlagsKHR Device::getGroupSurfacePresentModesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeviceGroupSurfacePresentModesKHR && "Function <vkGetDeviceGroupSurfacePresentModesKHR> needs extension <VK_KHR_swapchain> enabled!" );


    VULKAN_HPP_NAMESPACE::DeviceGroupPresentModeFlagsKHR modes;
    VkResult result = getDispatcher()->vkGetDeviceGroupSurfacePresentModesKHR( static_cast<VkDevice>( m_device ), static_cast<VkSurfaceKHR>( surface ), reinterpret_cast<VkDeviceGroupPresentModeFlagsKHR *>( &modes ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getGroupSurfacePresentModesKHR" );

    return modes;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::Rect2D> PhysicalDevice::getPresentRectanglesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDevicePresentRectanglesKHR && "Function <vkGetPhysicalDevicePresentRectanglesKHR> needs extension <VK_KHR_swapchain> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::Rect2D> rects;
    uint32_t rectCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDevicePresentRectanglesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkSurfaceKHR>( surface ), &rectCount, nullptr );
      if ( ( result == VK_SUCCESS ) && rectCount )
      {
        rects.resize( rectCount );
        result = getDispatcher()->vkGetPhysicalDevicePresentRectanglesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkSurfaceKHR>( surface ), &rectCount, reinterpret_cast<VkRect2D *>( rects.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getPresentRectanglesKHR" );
    VULKAN_HPP_ASSERT( rectCount <= rects.size() );
    if ( rectCount < rects.size() )
    {
      rects.resize( rectCount );
    }
    return rects;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::pair<VULKAN_HPP_NAMESPACE::Result, uint32_t> Device::acquireNextImage2KHR( const VULKAN_HPP_NAMESPACE::AcquireNextImageInfoKHR & acquireInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkAcquireNextImage2KHR && "Function <vkAcquireNextImage2KHR> needs extension <VK_KHR_swapchain> enabled!" );


    uint32_t imageIndex;
    VkResult result = getDispatcher()->vkAcquireNextImage2KHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkAcquireNextImageInfoKHR *>( &acquireInfo ), &imageIndex );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::acquireNextImage2KHR", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eTimeout, VULKAN_HPP_NAMESPACE::Result::eNotReady, VULKAN_HPP_NAMESPACE::Result::eSuboptimalKHR } );

    return std::make_pair( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), imageIndex );
  }

  //=== VK_KHR_display ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::DisplayPropertiesKHR> PhysicalDevice::getDisplayPropertiesKHR(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceDisplayPropertiesKHR && "Function <vkGetPhysicalDeviceDisplayPropertiesKHR> needs extension <VK_KHR_display> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::DisplayPropertiesKHR> properties;
    uint32_t propertyCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceDisplayPropertiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), &propertyCount, nullptr );
      if ( ( result == VK_SUCCESS ) && propertyCount )
      {
        properties.resize( propertyCount );
        result = getDispatcher()->vkGetPhysicalDeviceDisplayPropertiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), &propertyCount, reinterpret_cast<VkDisplayPropertiesKHR *>( properties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getDisplayPropertiesKHR" );
    VULKAN_HPP_ASSERT( propertyCount <= properties.size() );
    if ( propertyCount < properties.size() )
    {
      properties.resize( propertyCount );
    }
    return properties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::DisplayPlanePropertiesKHR> PhysicalDevice::getDisplayPlanePropertiesKHR(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceDisplayPlanePropertiesKHR && "Function <vkGetPhysicalDeviceDisplayPlanePropertiesKHR> needs extension <VK_KHR_display> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::DisplayPlanePropertiesKHR> properties;
    uint32_t propertyCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceDisplayPlanePropertiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), &propertyCount, nullptr );
      if ( ( result == VK_SUCCESS ) && propertyCount )
      {
        properties.resize( propertyCount );
        result = getDispatcher()->vkGetPhysicalDeviceDisplayPlanePropertiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), &propertyCount, reinterpret_cast<VkDisplayPlanePropertiesKHR *>( properties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getDisplayPlanePropertiesKHR" );
    VULKAN_HPP_ASSERT( propertyCount <= properties.size() );
    if ( propertyCount < properties.size() )
    {
      properties.resize( propertyCount );
    }
    return properties;
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE std::vector<VULKAN_HPP_RAII_NAMESPACE::DisplayKHR> PhysicalDevice::getDisplayPlaneSupportedDisplaysKHR( uint32_t planeIndex ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::DisplayKHRs( *this, planeIndex );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::DisplayModePropertiesKHR> DisplayKHR::getModeProperties(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDisplayModePropertiesKHR && "Function <vkGetDisplayModePropertiesKHR> needs extension <VK_KHR_display> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::DisplayModePropertiesKHR> properties;
    uint32_t propertyCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetDisplayModePropertiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkDisplayKHR>( m_display ), &propertyCount, nullptr );
      if ( ( result == VK_SUCCESS ) && propertyCount )
      {
        properties.resize( propertyCount );
        result = getDispatcher()->vkGetDisplayModePropertiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkDisplayKHR>( m_display ), &propertyCount, reinterpret_cast<VkDisplayModePropertiesKHR *>( properties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::DisplayKHR::getModeProperties" );
    VULKAN_HPP_ASSERT( propertyCount <= properties.size() );
    if ( propertyCount < properties.size() )
    {
      properties.resize( propertyCount );
    }
    return properties;
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::DisplayModeKHR DisplayKHR::createMode( VULKAN_HPP_NAMESPACE::DisplayModeCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::DisplayModeKHR( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DisplayPlaneCapabilitiesKHR DisplayModeKHR::getDisplayPlaneCapabilities( uint32_t planeIndex ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDisplayPlaneCapabilitiesKHR && "Function <vkGetDisplayPlaneCapabilitiesKHR> needs extension <VK_KHR_display> enabled!" );


    VULKAN_HPP_NAMESPACE::DisplayPlaneCapabilitiesKHR capabilities;
    VkResult result = getDispatcher()->vkGetDisplayPlaneCapabilitiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkDisplayModeKHR>( m_displayModeKHR ), planeIndex, reinterpret_cast<VkDisplayPlaneCapabilitiesKHR *>( &capabilities ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::DisplayModeKHR::getDisplayPlaneCapabilities" );

    return capabilities;
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createDisplayPlaneSurfaceKHR( VULKAN_HPP_NAMESPACE::DisplaySurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }

  //=== VK_KHR_display_swapchain ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE std::vector<VULKAN_HPP_RAII_NAMESPACE::SwapchainKHR> Device::createSharedSwapchainsKHR( VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SwapchainKHRs( *this, createInfos, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SwapchainKHR Device::createSharedSwapchainKHR( VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SwapchainKHR( *this, createInfo, allocator );
  }

#if defined( VK_USE_PLATFORM_XLIB_KHR )
  //=== VK_KHR_xlib_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createXlibSurfaceKHR( VULKAN_HPP_NAMESPACE::XlibSurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Bool32 PhysicalDevice::getXlibPresentationSupportKHR( uint32_t queueFamilyIndex, Display & dpy, VisualID visualID ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceXlibPresentationSupportKHR && "Function <vkGetPhysicalDeviceXlibPresentationSupportKHR> needs extension <VK_KHR_xlib_surface> enabled!" );



    VkBool32 result = getDispatcher()->vkGetPhysicalDeviceXlibPresentationSupportKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), queueFamilyIndex, &dpy, visualID );


    return static_cast<VULKAN_HPP_NAMESPACE::Bool32>( result );
  }
#endif /*VK_USE_PLATFORM_XLIB_KHR*/

#if defined( VK_USE_PLATFORM_XCB_KHR )
  //=== VK_KHR_xcb_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createXcbSurfaceKHR( VULKAN_HPP_NAMESPACE::XcbSurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Bool32 PhysicalDevice::getXcbPresentationSupportKHR( uint32_t queueFamilyIndex, xcb_connection_t & connection, xcb_visualid_t visual_id ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceXcbPresentationSupportKHR && "Function <vkGetPhysicalDeviceXcbPresentationSupportKHR> needs extension <VK_KHR_xcb_surface> enabled!" );



    VkBool32 result = getDispatcher()->vkGetPhysicalDeviceXcbPresentationSupportKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), queueFamilyIndex, &connection, visual_id );


    return static_cast<VULKAN_HPP_NAMESPACE::Bool32>( result );
  }
#endif /*VK_USE_PLATFORM_XCB_KHR*/

#if defined( VK_USE_PLATFORM_WAYLAND_KHR )
  //=== VK_KHR_wayland_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createWaylandSurfaceKHR( VULKAN_HPP_NAMESPACE::WaylandSurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Bool32 PhysicalDevice::getWaylandPresentationSupportKHR( uint32_t queueFamilyIndex, struct wl_display & display ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceWaylandPresentationSupportKHR && "Function <vkGetPhysicalDeviceWaylandPresentationSupportKHR> needs extension <VK_KHR_wayland_surface> enabled!" );



    VkBool32 result = getDispatcher()->vkGetPhysicalDeviceWaylandPresentationSupportKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), queueFamilyIndex, &display );


    return static_cast<VULKAN_HPP_NAMESPACE::Bool32>( result );
  }
#endif /*VK_USE_PLATFORM_WAYLAND_KHR*/

#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  //=== VK_KHR_android_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createAndroidSurfaceKHR( VULKAN_HPP_NAMESPACE::AndroidSurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }
#endif /*VK_USE_PLATFORM_ANDROID_KHR*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_win32_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createWin32SurfaceKHR( VULKAN_HPP_NAMESPACE::Win32SurfaceCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Bool32 PhysicalDevice::getWin32PresentationSupportKHR( uint32_t queueFamilyIndex ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceWin32PresentationSupportKHR && "Function <vkGetPhysicalDeviceWin32PresentationSupportKHR> needs extension <VK_KHR_win32_surface> enabled!" );



    VkBool32 result = getDispatcher()->vkGetPhysicalDeviceWin32PresentationSupportKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), queueFamilyIndex );


    return static_cast<VULKAN_HPP_NAMESPACE::Bool32>( result );
  }
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_EXT_debug_report ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::DebugReportCallbackEXT Instance::createDebugReportCallbackEXT( VULKAN_HPP_NAMESPACE::DebugReportCallbackCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::DebugReportCallbackEXT( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void Instance::debugReportMessageEXT( VULKAN_HPP_NAMESPACE::DebugReportFlagsEXT flags, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT objectType_, uint64_t object, size_t location, int32_t messageCode, const std::string & layerPrefix, const std::string & message ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkDebugReportMessageEXT && "Function <vkDebugReportMessageEXT> needs extension <VK_EXT_debug_report> enabled!" );



    getDispatcher()->vkDebugReportMessageEXT( static_cast<VkInstance>( m_instance ), static_cast<VkDebugReportFlagsEXT>( flags ), static_cast<VkDebugReportObjectTypeEXT>( objectType_ ), object, location, messageCode, layerPrefix.c_str(), message.c_str() );



  }

  //=== VK_EXT_debug_marker ===


   VULKAN_HPP_INLINE void Device::debugMarkerSetObjectTagEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerObjectTagInfoEXT & tagInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkDebugMarkerSetObjectTagEXT && "Function <vkDebugMarkerSetObjectTagEXT> needs extension <VK_EXT_debug_marker> enabled!" );



    VkResult result = getDispatcher()->vkDebugMarkerSetObjectTagEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDebugMarkerObjectTagInfoEXT *>( &tagInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::debugMarkerSetObjectTagEXT" );


  }


   VULKAN_HPP_INLINE void Device::debugMarkerSetObjectNameEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerObjectNameInfoEXT & nameInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkDebugMarkerSetObjectNameEXT && "Function <vkDebugMarkerSetObjectNameEXT> needs extension <VK_EXT_debug_marker> enabled!" );



    VkResult result = getDispatcher()->vkDebugMarkerSetObjectNameEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDebugMarkerObjectNameInfoEXT *>( &nameInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::debugMarkerSetObjectNameEXT" );


  }


   VULKAN_HPP_INLINE void CommandBuffer::debugMarkerBeginEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerMarkerInfoEXT & markerInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDebugMarkerBeginEXT && "Function <vkCmdDebugMarkerBeginEXT> needs extension <VK_EXT_debug_marker> enabled!" );



    getDispatcher()->vkCmdDebugMarkerBeginEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkDebugMarkerMarkerInfoEXT *>( &markerInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::debugMarkerEndEXT(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDebugMarkerEndEXT && "Function <vkCmdDebugMarkerEndEXT> needs extension <VK_EXT_debug_marker> enabled!" );



    getDispatcher()->vkCmdDebugMarkerEndEXT( static_cast<VkCommandBuffer>( m_commandBuffer ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::debugMarkerInsertEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerMarkerInfoEXT & markerInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDebugMarkerInsertEXT && "Function <vkCmdDebugMarkerInsertEXT> needs extension <VK_EXT_debug_marker> enabled!" );



    getDispatcher()->vkCmdDebugMarkerInsertEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkDebugMarkerMarkerInfoEXT *>( &markerInfo ) );



  }

  //=== VK_KHR_video_queue ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::VideoCapabilitiesKHR PhysicalDevice::getVideoCapabilitiesKHR( const VULKAN_HPP_NAMESPACE::VideoProfileInfoKHR & videoProfile ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceVideoCapabilitiesKHR && "Function <vkGetPhysicalDeviceVideoCapabilitiesKHR> needs extension <VK_KHR_video_queue> enabled!" );


    VULKAN_HPP_NAMESPACE::VideoCapabilitiesKHR capabilities;
    VkResult result = getDispatcher()->vkGetPhysicalDeviceVideoCapabilitiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkVideoProfileInfoKHR *>( &videoProfile ), reinterpret_cast<VkVideoCapabilitiesKHR *>( &capabilities ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getVideoCapabilitiesKHR" );

    return capabilities;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> PhysicalDevice::getVideoCapabilitiesKHR( const VULKAN_HPP_NAMESPACE::VideoProfileInfoKHR & videoProfile ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceVideoCapabilitiesKHR && "Function <vkGetPhysicalDeviceVideoCapabilitiesKHR> needs extension <VK_KHR_video_queue> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::VideoCapabilitiesKHR & capabilities = structureChain.template get<VULKAN_HPP_NAMESPACE::VideoCapabilitiesKHR>();
    VkResult result = getDispatcher()->vkGetPhysicalDeviceVideoCapabilitiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkVideoProfileInfoKHR *>( &videoProfile ), reinterpret_cast<VkVideoCapabilitiesKHR *>( &capabilities ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getVideoCapabilitiesKHR" );

    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::VideoFormatPropertiesKHR> PhysicalDevice::getVideoFormatPropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceVideoFormatInfoKHR & videoFormatInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceVideoFormatPropertiesKHR && "Function <vkGetPhysicalDeviceVideoFormatPropertiesKHR> needs extension <VK_KHR_video_queue> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::VideoFormatPropertiesKHR> videoFormatProperties;
    uint32_t videoFormatPropertyCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceVideoFormatPropertiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceVideoFormatInfoKHR *>( &videoFormatInfo ), &videoFormatPropertyCount, nullptr );
      if ( ( result == VK_SUCCESS ) && videoFormatPropertyCount )
      {
        videoFormatProperties.resize( videoFormatPropertyCount );
        result = getDispatcher()->vkGetPhysicalDeviceVideoFormatPropertiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceVideoFormatInfoKHR *>( &videoFormatInfo ), &videoFormatPropertyCount, reinterpret_cast<VkVideoFormatPropertiesKHR *>( videoFormatProperties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getVideoFormatPropertiesKHR" );
    VULKAN_HPP_ASSERT( videoFormatPropertyCount <= videoFormatProperties.size() );
    if ( videoFormatPropertyCount < videoFormatProperties.size() )
    {
      videoFormatProperties.resize( videoFormatPropertyCount );
    }
    return videoFormatProperties;
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::VideoSessionKHR Device::createVideoSessionKHR( VULKAN_HPP_NAMESPACE::VideoSessionCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::VideoSessionKHR( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::VideoSessionMemoryRequirementsKHR> VideoSessionKHR::getMemoryRequirements(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetVideoSessionMemoryRequirementsKHR && "Function <vkGetVideoSessionMemoryRequirementsKHR> needs extension <VK_KHR_video_queue> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::VideoSessionMemoryRequirementsKHR> memoryRequirements;
    uint32_t memoryRequirementsCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetVideoSessionMemoryRequirementsKHR( static_cast<VkDevice>( m_device ), static_cast<VkVideoSessionKHR>( m_videoSession ), &memoryRequirementsCount, nullptr );
      if ( ( result == VK_SUCCESS ) && memoryRequirementsCount )
      {
        memoryRequirements.resize( memoryRequirementsCount );
        result = getDispatcher()->vkGetVideoSessionMemoryRequirementsKHR( static_cast<VkDevice>( m_device ), static_cast<VkVideoSessionKHR>( m_videoSession ), &memoryRequirementsCount, reinterpret_cast<VkVideoSessionMemoryRequirementsKHR *>( memoryRequirements.data() ) );
      }
    } while ( result == VK_INCOMPLETE );

    VULKAN_HPP_ASSERT( memoryRequirementsCount <= memoryRequirements.size() );
    if ( memoryRequirementsCount < memoryRequirements.size() )
    {
      memoryRequirements.resize( memoryRequirementsCount );
    }
    return memoryRequirements;
  }


   VULKAN_HPP_INLINE void VideoSessionKHR::bindMemory( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BindVideoSessionMemoryInfoKHR> const & bindSessionMemoryInfos ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkBindVideoSessionMemoryKHR && "Function <vkBindVideoSessionMemoryKHR> needs extension <VK_KHR_video_queue> enabled!" );



    VkResult result = getDispatcher()->vkBindVideoSessionMemoryKHR( static_cast<VkDevice>( m_device ), static_cast<VkVideoSessionKHR>( m_videoSession ), bindSessionMemoryInfos.size(), reinterpret_cast<const VkBindVideoSessionMemoryInfoKHR *>( bindSessionMemoryInfos.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::VideoSessionKHR::bindMemory" );


  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::VideoSessionParametersKHR Device::createVideoSessionParametersKHR( VULKAN_HPP_NAMESPACE::VideoSessionParametersCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::VideoSessionParametersKHR( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void VideoSessionParametersKHR::update( const VULKAN_HPP_NAMESPACE::VideoSessionParametersUpdateInfoKHR & updateInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkUpdateVideoSessionParametersKHR && "Function <vkUpdateVideoSessionParametersKHR> needs extension <VK_KHR_video_queue> enabled!" );



    VkResult result = getDispatcher()->vkUpdateVideoSessionParametersKHR( static_cast<VkDevice>( m_device ), static_cast<VkVideoSessionParametersKHR>( m_videoSessionParameters ), reinterpret_cast<const VkVideoSessionParametersUpdateInfoKHR *>( &updateInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::VideoSessionParametersKHR::update" );


  }


   VULKAN_HPP_INLINE void CommandBuffer::beginVideoCodingKHR( const VULKAN_HPP_NAMESPACE::VideoBeginCodingInfoKHR & beginInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBeginVideoCodingKHR && "Function <vkCmdBeginVideoCodingKHR> needs extension <VK_KHR_video_queue> enabled!" );



    getDispatcher()->vkCmdBeginVideoCodingKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkVideoBeginCodingInfoKHR *>( &beginInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::endVideoCodingKHR( const VULKAN_HPP_NAMESPACE::VideoEndCodingInfoKHR & endCodingInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdEndVideoCodingKHR && "Function <vkCmdEndVideoCodingKHR> needs extension <VK_KHR_video_queue> enabled!" );



    getDispatcher()->vkCmdEndVideoCodingKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkVideoEndCodingInfoKHR *>( &endCodingInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::controlVideoCodingKHR( const VULKAN_HPP_NAMESPACE::VideoCodingControlInfoKHR & codingControlInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdControlVideoCodingKHR && "Function <vkCmdControlVideoCodingKHR> needs extension <VK_KHR_video_queue> enabled!" );



    getDispatcher()->vkCmdControlVideoCodingKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkVideoCodingControlInfoKHR *>( &codingControlInfo ) );



  }

  //=== VK_KHR_video_decode_queue ===


   VULKAN_HPP_INLINE void CommandBuffer::decodeVideoKHR( const VULKAN_HPP_NAMESPACE::VideoDecodeInfoKHR & decodeInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDecodeVideoKHR && "Function <vkCmdDecodeVideoKHR> needs extension <VK_KHR_video_decode_queue> enabled!" );



    getDispatcher()->vkCmdDecodeVideoKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkVideoDecodeInfoKHR *>( &decodeInfo ) );



  }

  //=== VK_EXT_transform_feedback ===


   VULKAN_HPP_INLINE void CommandBuffer::bindTransformFeedbackBuffersEXT( uint32_t firstBinding, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const & buffers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & offsets, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & sizes ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBindTransformFeedbackBuffersEXT && "Function <vkCmdBindTransformFeedbackBuffersEXT> needs extension <VK_EXT_transform_feedback> enabled!" );
    if ( buffers.size() != offsets.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::bindTransformFeedbackBuffersEXT: buffers.size() != offsets.size()" );
  }
    if ( !sizes.empty() && buffers.size() != sizes.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::bindTransformFeedbackBuffersEXT: buffers.size() != sizes.size()" );
  }



    getDispatcher()->vkCmdBindTransformFeedbackBuffersEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), firstBinding, buffers.size(), reinterpret_cast<const VkBuffer *>( buffers.data() ), reinterpret_cast<const VkDeviceSize *>( offsets.data() ), reinterpret_cast<const VkDeviceSize *>( sizes.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::beginTransformFeedbackEXT( uint32_t firstCounterBuffer, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const & counterBuffers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & counterBufferOffsets ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBeginTransformFeedbackEXT && "Function <vkCmdBeginTransformFeedbackEXT> needs extension <VK_EXT_transform_feedback> enabled!" );
    if ( !counterBufferOffsets.empty() && counterBuffers.size() != counterBufferOffsets.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::beginTransformFeedbackEXT: counterBuffers.size() != counterBufferOffsets.size()" );
  }



    getDispatcher()->vkCmdBeginTransformFeedbackEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), firstCounterBuffer, counterBuffers.size(), reinterpret_cast<const VkBuffer *>( counterBuffers.data() ), reinterpret_cast<const VkDeviceSize *>( counterBufferOffsets.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::endTransformFeedbackEXT( uint32_t firstCounterBuffer, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const & counterBuffers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & counterBufferOffsets ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdEndTransformFeedbackEXT && "Function <vkCmdEndTransformFeedbackEXT> needs extension <VK_EXT_transform_feedback> enabled!" );
    if ( !counterBufferOffsets.empty() && counterBuffers.size() != counterBufferOffsets.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::endTransformFeedbackEXT: counterBuffers.size() != counterBufferOffsets.size()" );
  }



    getDispatcher()->vkCmdEndTransformFeedbackEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), firstCounterBuffer, counterBuffers.size(), reinterpret_cast<const VkBuffer *>( counterBuffers.data() ), reinterpret_cast<const VkDeviceSize *>( counterBufferOffsets.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::beginQueryIndexedEXT( VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t query, VULKAN_HPP_NAMESPACE::QueryControlFlags flags, uint32_t index ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBeginQueryIndexedEXT && "Function <vkCmdBeginQueryIndexedEXT> needs extension <VK_EXT_transform_feedback> enabled!" );



    getDispatcher()->vkCmdBeginQueryIndexedEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkQueryPool>( queryPool ), query, static_cast<VkQueryControlFlags>( flags ), index );



  }


   VULKAN_HPP_INLINE void CommandBuffer::endQueryIndexedEXT( VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t query, uint32_t index ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdEndQueryIndexedEXT && "Function <vkCmdEndQueryIndexedEXT> needs extension <VK_EXT_transform_feedback> enabled!" );



    getDispatcher()->vkCmdEndQueryIndexedEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkQueryPool>( queryPool ), query, index );



  }


   VULKAN_HPP_INLINE void CommandBuffer::drawIndirectByteCountEXT( uint32_t instanceCount, uint32_t firstInstance, VULKAN_HPP_NAMESPACE::Buffer counterBuffer, VULKAN_HPP_NAMESPACE::DeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDrawIndirectByteCountEXT && "Function <vkCmdDrawIndirectByteCountEXT> needs extension <VK_EXT_transform_feedback> enabled!" );



    getDispatcher()->vkCmdDrawIndirectByteCountEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), instanceCount, firstInstance, static_cast<VkBuffer>( counterBuffer ), static_cast<VkDeviceSize>( counterBufferOffset ), counterOffset, vertexStride );



  }

  //=== VK_NVX_binary_import ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::CuModuleNVX Device::createCuModuleNVX( VULKAN_HPP_NAMESPACE::CuModuleCreateInfoNVX const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::CuModuleNVX( *this, createInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::CuFunctionNVX Device::createCuFunctionNVX( VULKAN_HPP_NAMESPACE::CuFunctionCreateInfoNVX const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::CuFunctionNVX( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void CommandBuffer::cuLaunchKernelNVX( const VULKAN_HPP_NAMESPACE::CuLaunchInfoNVX & launchInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdCuLaunchKernelNVX && "Function <vkCmdCuLaunchKernelNVX> needs extension <VK_NVX_binary_import> enabled!" );



    getDispatcher()->vkCmdCuLaunchKernelNVX( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCuLaunchInfoNVX *>( &launchInfo ) );



  }

  //=== VK_NVX_image_view_handle ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE uint32_t Device::getImageViewHandleNVX( const VULKAN_HPP_NAMESPACE::ImageViewHandleInfoNVX & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetImageViewHandleNVX && "Function <vkGetImageViewHandleNVX> needs extension <VK_NVX_image_view_handle> enabled!" );



    uint32_t result = getDispatcher()->vkGetImageViewHandleNVX( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImageViewHandleInfoNVX *>( &info ) );


    return result;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ImageViewAddressPropertiesNVX ImageView::getAddressNVX(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetImageViewAddressNVX && "Function <vkGetImageViewAddressNVX> needs extension <VK_NVX_image_view_handle> enabled!" );


    VULKAN_HPP_NAMESPACE::ImageViewAddressPropertiesNVX properties;
    VkResult result = getDispatcher()->vkGetImageViewAddressNVX( static_cast<VkDevice>( m_device ), static_cast<VkImageView>( m_imageView ), reinterpret_cast<VkImageViewAddressPropertiesNVX *>( &properties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::ImageView::getAddressNVX" );

    return properties;
  }

  //=== VK_AMD_draw_indirect_count ===


   VULKAN_HPP_INLINE void CommandBuffer::drawIndirectCountAMD( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDrawIndirectCountAMD && "Function <vkCmdDrawIndirectCountAMD> needs extension <VK_AMD_draw_indirect_count> enabled!" );



    getDispatcher()->vkCmdDrawIndirectCountAMD( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( buffer ), static_cast<VkDeviceSize>( offset ), static_cast<VkBuffer>( countBuffer ), static_cast<VkDeviceSize>( countBufferOffset ), maxDrawCount, stride );



  }


   VULKAN_HPP_INLINE void CommandBuffer::drawIndexedIndirectCountAMD( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDrawIndexedIndirectCountAMD && "Function <vkCmdDrawIndexedIndirectCountAMD> needs extension <VK_AMD_draw_indirect_count> enabled!" );



    getDispatcher()->vkCmdDrawIndexedIndirectCountAMD( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( buffer ), static_cast<VkDeviceSize>( offset ), static_cast<VkBuffer>( countBuffer ), static_cast<VkDeviceSize>( countBufferOffset ), maxDrawCount, stride );



  }

  //=== VK_AMD_shader_info ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<uint8_t> Pipeline::getShaderInfoAMD( VULKAN_HPP_NAMESPACE::ShaderStageFlagBits shaderStage, VULKAN_HPP_NAMESPACE::ShaderInfoTypeAMD infoType ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetShaderInfoAMD && "Function <vkGetShaderInfoAMD> needs extension <VK_AMD_shader_info> enabled!" );


    std::vector<uint8_t> info;
    size_t infoSize;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetShaderInfoAMD( static_cast<VkDevice>( m_device ), static_cast<VkPipeline>( m_pipeline ), static_cast<VkShaderStageFlagBits>( shaderStage ), static_cast<VkShaderInfoTypeAMD>( infoType ), &infoSize, nullptr );
      if ( ( result == VK_SUCCESS ) && infoSize )
      {
        info.resize( infoSize );
        result = getDispatcher()->vkGetShaderInfoAMD( static_cast<VkDevice>( m_device ), static_cast<VkPipeline>( m_pipeline ), static_cast<VkShaderStageFlagBits>( shaderStage ), static_cast<VkShaderInfoTypeAMD>( infoType ), &infoSize, reinterpret_cast<void *>( info.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Pipeline::getShaderInfoAMD" );
    VULKAN_HPP_ASSERT( infoSize <= info.size() );
    if ( infoSize < info.size() )
    {
      info.resize( infoSize );
    }
    return info;
  }

  //=== VK_KHR_dynamic_rendering ===


   VULKAN_HPP_INLINE void CommandBuffer::beginRenderingKHR( const VULKAN_HPP_NAMESPACE::RenderingInfo & renderingInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBeginRenderingKHR && "Function <vkCmdBeginRenderingKHR> needs extension <VK_KHR_dynamic_rendering> enabled!" );



    getDispatcher()->vkCmdBeginRenderingKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkRenderingInfo *>( &renderingInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::endRenderingKHR(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdEndRenderingKHR && "Function <vkCmdEndRenderingKHR> needs extension <VK_KHR_dynamic_rendering> enabled!" );



    getDispatcher()->vkCmdEndRenderingKHR( static_cast<VkCommandBuffer>( m_commandBuffer ) );



  }

#if defined( VK_USE_PLATFORM_GGP )
  //=== VK_GGP_stream_descriptor_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createStreamDescriptorSurfaceGGP( VULKAN_HPP_NAMESPACE::StreamDescriptorSurfaceCreateInfoGGP const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }
#endif /*VK_USE_PLATFORM_GGP*/

  //=== VK_NV_external_memory_capabilities ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ExternalImageFormatPropertiesNV PhysicalDevice::getExternalImageFormatPropertiesNV( VULKAN_HPP_NAMESPACE::Format format, VULKAN_HPP_NAMESPACE::ImageType type, VULKAN_HPP_NAMESPACE::ImageTiling tiling, VULKAN_HPP_NAMESPACE::ImageUsageFlags usage, VULKAN_HPP_NAMESPACE::ImageCreateFlags flags, VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV externalHandleType ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceExternalImageFormatPropertiesNV && "Function <vkGetPhysicalDeviceExternalImageFormatPropertiesNV> needs extension <VK_NV_external_memory_capabilities> enabled!" );


    VULKAN_HPP_NAMESPACE::ExternalImageFormatPropertiesNV externalImageFormatProperties;
    VkResult result = getDispatcher()->vkGetPhysicalDeviceExternalImageFormatPropertiesNV( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkFormat>( format ), static_cast<VkImageType>( type ), static_cast<VkImageTiling>( tiling ), static_cast<VkImageUsageFlags>( usage ), static_cast<VkImageCreateFlags>( flags ), static_cast<VkExternalMemoryHandleTypeFlagsNV>( externalHandleType ), reinterpret_cast<VkExternalImageFormatPropertiesNV *>( &externalImageFormatProperties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getExternalImageFormatPropertiesNV" );

    return externalImageFormatProperties;
  }

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_NV_external_memory_win32 ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE HANDLE DeviceMemory::getMemoryWin32HandleNV( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV handleType ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetMemoryWin32HandleNV && "Function <vkGetMemoryWin32HandleNV> needs extension <VK_NV_external_memory_win32> enabled!" );


    HANDLE handle;
    VkResult result = getDispatcher()->vkGetMemoryWin32HandleNV( static_cast<VkDevice>( m_device ), static_cast<VkDeviceMemory>( m_memory ), static_cast<VkExternalMemoryHandleTypeFlagsNV>( handleType ), &handle );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::DeviceMemory::getMemoryWin32HandleNV" );

    return handle;
  }
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_get_physical_device_properties2 ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures2 PhysicalDevice::getFeatures2KHR(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceFeatures2KHR && "Function <vkGetPhysicalDeviceFeatures2KHR> needs extension <VK_KHR_get_physical_device_properties2> enabled!" );


    VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures2 features;
    getDispatcher()->vkGetPhysicalDeviceFeatures2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceFeatures2 *>( &features ) );


    return features;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> PhysicalDevice::getFeatures2KHR(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceFeatures2KHR && "Function <vkGetPhysicalDeviceFeatures2KHR> needs extension <VK_KHR_get_physical_device_properties2> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures2 & features = structureChain.template get<VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures2>();
    getDispatcher()->vkGetPhysicalDeviceFeatures2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceFeatures2 *>( &features ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties2 PhysicalDevice::getProperties2KHR(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceProperties2KHR && "Function <vkGetPhysicalDeviceProperties2KHR> needs extension <VK_KHR_get_physical_device_properties2> enabled!" );


    VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties2 properties;
    getDispatcher()->vkGetPhysicalDeviceProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceProperties2 *>( &properties ) );


    return properties;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> PhysicalDevice::getProperties2KHR(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceProperties2KHR && "Function <vkGetPhysicalDeviceProperties2KHR> needs extension <VK_KHR_get_physical_device_properties2> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties2 & properties = structureChain.template get<VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties2>();
    getDispatcher()->vkGetPhysicalDeviceProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceProperties2 *>( &properties ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::FormatProperties2 PhysicalDevice::getFormatProperties2KHR( VULKAN_HPP_NAMESPACE::Format format ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceFormatProperties2KHR && "Function <vkGetPhysicalDeviceFormatProperties2KHR> needs extension <VK_KHR_get_physical_device_properties2> enabled!" );


    VULKAN_HPP_NAMESPACE::FormatProperties2 formatProperties;
    getDispatcher()->vkGetPhysicalDeviceFormatProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkFormat>( format ), reinterpret_cast<VkFormatProperties2 *>( &formatProperties ) );


    return formatProperties;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> PhysicalDevice::getFormatProperties2KHR( VULKAN_HPP_NAMESPACE::Format format ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceFormatProperties2KHR && "Function <vkGetPhysicalDeviceFormatProperties2KHR> needs extension <VK_KHR_get_physical_device_properties2> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::FormatProperties2 & formatProperties = structureChain.template get<VULKAN_HPP_NAMESPACE::FormatProperties2>();
    getDispatcher()->vkGetPhysicalDeviceFormatProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkFormat>( format ), reinterpret_cast<VkFormatProperties2 *>( &formatProperties ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ImageFormatProperties2 PhysicalDevice::getImageFormatProperties2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceImageFormatInfo2 & imageFormatInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceImageFormatProperties2KHR && "Function <vkGetPhysicalDeviceImageFormatProperties2KHR> needs extension <VK_KHR_get_physical_device_properties2> enabled!" );


    VULKAN_HPP_NAMESPACE::ImageFormatProperties2 imageFormatProperties;
    VkResult result = getDispatcher()->vkGetPhysicalDeviceImageFormatProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceImageFormatInfo2 *>( &imageFormatInfo ), reinterpret_cast<VkImageFormatProperties2 *>( &imageFormatProperties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getImageFormatProperties2KHR" );

    return imageFormatProperties;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> PhysicalDevice::getImageFormatProperties2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceImageFormatInfo2 & imageFormatInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceImageFormatProperties2KHR && "Function <vkGetPhysicalDeviceImageFormatProperties2KHR> needs extension <VK_KHR_get_physical_device_properties2> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::ImageFormatProperties2 & imageFormatProperties = structureChain.template get<VULKAN_HPP_NAMESPACE::ImageFormatProperties2>();
    VkResult result = getDispatcher()->vkGetPhysicalDeviceImageFormatProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceImageFormatInfo2 *>( &imageFormatInfo ), reinterpret_cast<VkImageFormatProperties2 *>( &imageFormatProperties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getImageFormatProperties2KHR" );

    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2> PhysicalDevice::getQueueFamilyProperties2KHR(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceQueueFamilyProperties2KHR && "Function <vkGetPhysicalDeviceQueueFamilyProperties2KHR> needs extension <VK_KHR_get_physical_device_properties2> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2> queueFamilyProperties;
    uint32_t queueFamilyPropertyCount;
    getDispatcher()->vkGetPhysicalDeviceQueueFamilyProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), &queueFamilyPropertyCount, nullptr );
    queueFamilyProperties.resize( queueFamilyPropertyCount );
    getDispatcher()->vkGetPhysicalDeviceQueueFamilyProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), &queueFamilyPropertyCount, reinterpret_cast<VkQueueFamilyProperties2 *>( queueFamilyProperties.data() ) );

    VULKAN_HPP_ASSERT( queueFamilyPropertyCount <= queueFamilyProperties.size() );
    if ( queueFamilyPropertyCount < queueFamilyProperties.size() )
    {
      queueFamilyProperties.resize( queueFamilyPropertyCount );
    }
    return queueFamilyProperties;
  }

  template <typename StructureChain>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<StructureChain> PhysicalDevice::getQueueFamilyProperties2KHR(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceQueueFamilyProperties2KHR && "Function <vkGetPhysicalDeviceQueueFamilyProperties2KHR> needs extension <VK_KHR_get_physical_device_properties2> enabled!" );


    std::vector<StructureChain> structureChains;
    std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2> queueFamilyProperties;
    uint32_t queueFamilyPropertyCount;
    getDispatcher()->vkGetPhysicalDeviceQueueFamilyProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), &queueFamilyPropertyCount, nullptr );
    structureChains.resize( queueFamilyPropertyCount );
    queueFamilyProperties.resize( queueFamilyPropertyCount );
    for ( uint32_t i = 0; i < queueFamilyPropertyCount; i++ )
    {
      queueFamilyProperties[i].pNext = structureChains[i].template get<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2>().pNext;
    }
    getDispatcher()->vkGetPhysicalDeviceQueueFamilyProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), &queueFamilyPropertyCount, reinterpret_cast<VkQueueFamilyProperties2 *>( queueFamilyProperties.data() ) );

    VULKAN_HPP_ASSERT( queueFamilyPropertyCount <= queueFamilyProperties.size() );
      if ( queueFamilyPropertyCount < queueFamilyProperties.size() )
      {
        structureChains.resize( queueFamilyPropertyCount );
      }
      for ( uint32_t i = 0; i < queueFamilyPropertyCount; i++ )
      {
        structureChains[i].template get<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2>() = queueFamilyProperties[i];
      }
    return structureChains;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties2 PhysicalDevice::getMemoryProperties2KHR(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceMemoryProperties2KHR && "Function <vkGetPhysicalDeviceMemoryProperties2KHR> needs extension <VK_KHR_get_physical_device_properties2> enabled!" );


    VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties2 memoryProperties;
    getDispatcher()->vkGetPhysicalDeviceMemoryProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceMemoryProperties2 *>( &memoryProperties ) );


    return memoryProperties;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> PhysicalDevice::getMemoryProperties2KHR(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceMemoryProperties2KHR && "Function <vkGetPhysicalDeviceMemoryProperties2KHR> needs extension <VK_KHR_get_physical_device_properties2> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties2 & memoryProperties = structureChain.template get<VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties2>();
    getDispatcher()->vkGetPhysicalDeviceMemoryProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<VkPhysicalDeviceMemoryProperties2 *>( &memoryProperties ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2> PhysicalDevice::getSparseImageFormatProperties2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSparseImageFormatInfo2 & formatInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceSparseImageFormatProperties2KHR && "Function <vkGetPhysicalDeviceSparseImageFormatProperties2KHR> needs extension <VK_KHR_get_physical_device_properties2> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2> properties;
    uint32_t propertyCount;
    getDispatcher()->vkGetPhysicalDeviceSparseImageFormatProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceSparseImageFormatInfo2 *>( &formatInfo ), &propertyCount, nullptr );
    properties.resize( propertyCount );
    getDispatcher()->vkGetPhysicalDeviceSparseImageFormatProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceSparseImageFormatInfo2 *>( &formatInfo ), &propertyCount, reinterpret_cast<VkSparseImageFormatProperties2 *>( properties.data() ) );

    VULKAN_HPP_ASSERT( propertyCount <= properties.size() );
    if ( propertyCount < properties.size() )
    {
      properties.resize( propertyCount );
    }
    return properties;
  }

  //=== VK_KHR_device_group ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::PeerMemoryFeatureFlags Device::getGroupPeerMemoryFeaturesKHR( uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeviceGroupPeerMemoryFeaturesKHR && "Function <vkGetDeviceGroupPeerMemoryFeaturesKHR> needs extension <VK_KHR_device_group> enabled!" );


    VULKAN_HPP_NAMESPACE::PeerMemoryFeatureFlags peerMemoryFeatures;
    getDispatcher()->vkGetDeviceGroupPeerMemoryFeaturesKHR( static_cast<VkDevice>( m_device ), heapIndex, localDeviceIndex, remoteDeviceIndex, reinterpret_cast<VkPeerMemoryFeatureFlags *>( &peerMemoryFeatures ) );


    return peerMemoryFeatures;
  }


   VULKAN_HPP_INLINE void CommandBuffer::setDeviceMaskKHR( uint32_t deviceMask ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetDeviceMaskKHR && "Function <vkCmdSetDeviceMaskKHR> needs extension <VK_KHR_device_group> enabled!" );



    getDispatcher()->vkCmdSetDeviceMaskKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), deviceMask );



  }


   VULKAN_HPP_INLINE void CommandBuffer::dispatchBaseKHR( uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDispatchBaseKHR && "Function <vkCmdDispatchBaseKHR> needs extension <VK_KHR_device_group> enabled!" );



    getDispatcher()->vkCmdDispatchBaseKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ );



  }

#if defined( VK_USE_PLATFORM_VI_NN )
  //=== VK_NN_vi_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createViSurfaceNN( VULKAN_HPP_NAMESPACE::ViSurfaceCreateInfoNN const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }
#endif /*VK_USE_PLATFORM_VI_NN*/

  //=== VK_KHR_maintenance1 ===


   VULKAN_HPP_INLINE void CommandPool::trimKHR( VULKAN_HPP_NAMESPACE::CommandPoolTrimFlags flags ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkTrimCommandPoolKHR && "Function <vkTrimCommandPoolKHR> needs extension <VK_KHR_maintenance1> enabled!" );



    getDispatcher()->vkTrimCommandPoolKHR( static_cast<VkDevice>( m_device ), static_cast<VkCommandPool>( m_commandPool ), static_cast<VkCommandPoolTrimFlags>( flags ) );



  }

  //=== VK_KHR_device_group_creation ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties> Instance::enumeratePhysicalDeviceGroupsKHR(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkEnumeratePhysicalDeviceGroupsKHR && "Function <vkEnumeratePhysicalDeviceGroupsKHR> needs extension <VK_KHR_device_group_creation> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties> physicalDeviceGroupProperties;
    uint32_t physicalDeviceGroupCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkEnumeratePhysicalDeviceGroupsKHR( static_cast<VkInstance>( m_instance ), &physicalDeviceGroupCount, nullptr );
      if ( ( result == VK_SUCCESS ) && physicalDeviceGroupCount )
      {
        physicalDeviceGroupProperties.resize( physicalDeviceGroupCount );
        result = getDispatcher()->vkEnumeratePhysicalDeviceGroupsKHR( static_cast<VkInstance>( m_instance ), &physicalDeviceGroupCount, reinterpret_cast<VkPhysicalDeviceGroupProperties *>( physicalDeviceGroupProperties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Instance::enumeratePhysicalDeviceGroupsKHR" );
    VULKAN_HPP_ASSERT( physicalDeviceGroupCount <= physicalDeviceGroupProperties.size() );
    if ( physicalDeviceGroupCount < physicalDeviceGroupProperties.size() )
    {
      physicalDeviceGroupProperties.resize( physicalDeviceGroupCount );
    }
    return physicalDeviceGroupProperties;
  }

  //=== VK_KHR_external_memory_capabilities ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ExternalBufferProperties PhysicalDevice::getExternalBufferPropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalBufferInfo & externalBufferInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceExternalBufferPropertiesKHR && "Function <vkGetPhysicalDeviceExternalBufferPropertiesKHR> needs extension <VK_KHR_external_memory_capabilities> enabled!" );


    VULKAN_HPP_NAMESPACE::ExternalBufferProperties externalBufferProperties;
    getDispatcher()->vkGetPhysicalDeviceExternalBufferPropertiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceExternalBufferInfo *>( &externalBufferInfo ), reinterpret_cast<VkExternalBufferProperties *>( &externalBufferProperties ) );


    return externalBufferProperties;
  }

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_memory_win32 ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE HANDLE Device::getMemoryWin32HandleKHR( const VULKAN_HPP_NAMESPACE::MemoryGetWin32HandleInfoKHR & getWin32HandleInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetMemoryWin32HandleKHR && "Function <vkGetMemoryWin32HandleKHR> needs extension <VK_KHR_external_memory_win32> enabled!" );


    HANDLE handle;
    VkResult result = getDispatcher()->vkGetMemoryWin32HandleKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkMemoryGetWin32HandleInfoKHR *>( &getWin32HandleInfo ), &handle );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getMemoryWin32HandleKHR" );

    return handle;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryWin32HandlePropertiesKHR Device::getMemoryWin32HandlePropertiesKHR( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType, HANDLE handle ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetMemoryWin32HandlePropertiesKHR && "Function <vkGetMemoryWin32HandlePropertiesKHR> needs extension <VK_KHR_external_memory_win32> enabled!" );


    VULKAN_HPP_NAMESPACE::MemoryWin32HandlePropertiesKHR memoryWin32HandleProperties;
    VkResult result = getDispatcher()->vkGetMemoryWin32HandlePropertiesKHR( static_cast<VkDevice>( m_device ), static_cast<VkExternalMemoryHandleTypeFlagBits>( handleType ), handle, reinterpret_cast<VkMemoryWin32HandlePropertiesKHR *>( &memoryWin32HandleProperties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getMemoryWin32HandlePropertiesKHR" );

    return memoryWin32HandleProperties;
  }
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_external_memory_fd ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE int Device::getMemoryFdKHR( const VULKAN_HPP_NAMESPACE::MemoryGetFdInfoKHR & getFdInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetMemoryFdKHR && "Function <vkGetMemoryFdKHR> needs extension <VK_KHR_external_memory_fd> enabled!" );


    int fd;
    VkResult result = getDispatcher()->vkGetMemoryFdKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkMemoryGetFdInfoKHR *>( &getFdInfo ), &fd );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getMemoryFdKHR" );

    return fd;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryFdPropertiesKHR Device::getMemoryFdPropertiesKHR( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType, int fd ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetMemoryFdPropertiesKHR && "Function <vkGetMemoryFdPropertiesKHR> needs extension <VK_KHR_external_memory_fd> enabled!" );


    VULKAN_HPP_NAMESPACE::MemoryFdPropertiesKHR memoryFdProperties;
    VkResult result = getDispatcher()->vkGetMemoryFdPropertiesKHR( static_cast<VkDevice>( m_device ), static_cast<VkExternalMemoryHandleTypeFlagBits>( handleType ), fd, reinterpret_cast<VkMemoryFdPropertiesKHR *>( &memoryFdProperties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getMemoryFdPropertiesKHR" );

    return memoryFdProperties;
  }

  //=== VK_KHR_external_semaphore_capabilities ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ExternalSemaphoreProperties PhysicalDevice::getExternalSemaphorePropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalSemaphoreInfo & externalSemaphoreInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceExternalSemaphorePropertiesKHR && "Function <vkGetPhysicalDeviceExternalSemaphorePropertiesKHR> needs extension <VK_KHR_external_semaphore_capabilities> enabled!" );


    VULKAN_HPP_NAMESPACE::ExternalSemaphoreProperties externalSemaphoreProperties;
    getDispatcher()->vkGetPhysicalDeviceExternalSemaphorePropertiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceExternalSemaphoreInfo *>( &externalSemaphoreInfo ), reinterpret_cast<VkExternalSemaphoreProperties *>( &externalSemaphoreProperties ) );


    return externalSemaphoreProperties;
  }

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_semaphore_win32 ===


   VULKAN_HPP_INLINE void Device::importSemaphoreWin32HandleKHR( const VULKAN_HPP_NAMESPACE::ImportSemaphoreWin32HandleInfoKHR & importSemaphoreWin32HandleInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkImportSemaphoreWin32HandleKHR && "Function <vkImportSemaphoreWin32HandleKHR> needs extension <VK_KHR_external_semaphore_win32> enabled!" );



    VkResult result = getDispatcher()->vkImportSemaphoreWin32HandleKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImportSemaphoreWin32HandleInfoKHR *>( &importSemaphoreWin32HandleInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::importSemaphoreWin32HandleKHR" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE HANDLE Device::getSemaphoreWin32HandleKHR( const VULKAN_HPP_NAMESPACE::SemaphoreGetWin32HandleInfoKHR & getWin32HandleInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetSemaphoreWin32HandleKHR && "Function <vkGetSemaphoreWin32HandleKHR> needs extension <VK_KHR_external_semaphore_win32> enabled!" );


    HANDLE handle;
    VkResult result = getDispatcher()->vkGetSemaphoreWin32HandleKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkSemaphoreGetWin32HandleInfoKHR *>( &getWin32HandleInfo ), &handle );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getSemaphoreWin32HandleKHR" );

    return handle;
  }
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_external_semaphore_fd ===


   VULKAN_HPP_INLINE void Device::importSemaphoreFdKHR( const VULKAN_HPP_NAMESPACE::ImportSemaphoreFdInfoKHR & importSemaphoreFdInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkImportSemaphoreFdKHR && "Function <vkImportSemaphoreFdKHR> needs extension <VK_KHR_external_semaphore_fd> enabled!" );



    VkResult result = getDispatcher()->vkImportSemaphoreFdKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImportSemaphoreFdInfoKHR *>( &importSemaphoreFdInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::importSemaphoreFdKHR" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE int Device::getSemaphoreFdKHR( const VULKAN_HPP_NAMESPACE::SemaphoreGetFdInfoKHR & getFdInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetSemaphoreFdKHR && "Function <vkGetSemaphoreFdKHR> needs extension <VK_KHR_external_semaphore_fd> enabled!" );


    int fd;
    VkResult result = getDispatcher()->vkGetSemaphoreFdKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkSemaphoreGetFdInfoKHR *>( &getFdInfo ), &fd );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getSemaphoreFdKHR" );

    return fd;
  }

  //=== VK_KHR_push_descriptor ===


   VULKAN_HPP_INLINE void CommandBuffer::pushDescriptorSetKHR( VULKAN_HPP_NAMESPACE::PipelineBindPoint pipelineBindPoint, VULKAN_HPP_NAMESPACE::PipelineLayout layout, uint32_t set, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::WriteDescriptorSet> const & descriptorWrites ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdPushDescriptorSetKHR && "Function <vkCmdPushDescriptorSetKHR> needs extension <VK_KHR_push_descriptor> enabled!" );



    getDispatcher()->vkCmdPushDescriptorSetKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPipelineBindPoint>( pipelineBindPoint ), static_cast<VkPipelineLayout>( layout ), set, descriptorWrites.size(), reinterpret_cast<const VkWriteDescriptorSet *>( descriptorWrites.data() ) );



  }

  template <typename DataType>
   VULKAN_HPP_INLINE void CommandBuffer::pushDescriptorSetWithTemplateKHR( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate, VULKAN_HPP_NAMESPACE::PipelineLayout layout, uint32_t set, DataType const & data ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdPushDescriptorSetWithTemplateKHR && "Function <vkCmdPushDescriptorSetWithTemplateKHR> needs extension <VK_KHR_push_descriptor> enabled!" );



    getDispatcher()->vkCmdPushDescriptorSetWithTemplateKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkDescriptorUpdateTemplate>( descriptorUpdateTemplate ), static_cast<VkPipelineLayout>( layout ), set, reinterpret_cast<const void *>( &data ) );



  }

  //=== VK_EXT_conditional_rendering ===


   VULKAN_HPP_INLINE void CommandBuffer::beginConditionalRenderingEXT( const VULKAN_HPP_NAMESPACE::ConditionalRenderingBeginInfoEXT & conditionalRenderingBegin ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBeginConditionalRenderingEXT && "Function <vkCmdBeginConditionalRenderingEXT> needs extension <VK_EXT_conditional_rendering> enabled!" );



    getDispatcher()->vkCmdBeginConditionalRenderingEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkConditionalRenderingBeginInfoEXT *>( &conditionalRenderingBegin ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::endConditionalRenderingEXT(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdEndConditionalRenderingEXT && "Function <vkCmdEndConditionalRenderingEXT> needs extension <VK_EXT_conditional_rendering> enabled!" );



    getDispatcher()->vkCmdEndConditionalRenderingEXT( static_cast<VkCommandBuffer>( m_commandBuffer ) );



  }

  //=== VK_KHR_descriptor_update_template ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::DescriptorUpdateTemplate Device::createDescriptorUpdateTemplateKHR( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplateCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::DescriptorUpdateTemplate( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void Device::destroyDescriptorUpdateTemplateKHR( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate, Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkDestroyDescriptorUpdateTemplateKHR && "Function <vkDestroyDescriptorUpdateTemplateKHR> needs extension <VK_KHR_descriptor_update_template> enabled!" );



    getDispatcher()->vkDestroyDescriptorUpdateTemplateKHR( static_cast<VkDevice>( m_device ), static_cast<VkDescriptorUpdateTemplate>( descriptorUpdateTemplate ), reinterpret_cast<const VkAllocationCallbacks *>( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ) );



  }

  template <typename DataType>
   VULKAN_HPP_INLINE void DescriptorSet::updateWithTemplateKHR( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate, DataType const & data ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkUpdateDescriptorSetWithTemplateKHR && "Function <vkUpdateDescriptorSetWithTemplateKHR> needs extension <VK_KHR_descriptor_update_template> enabled!" );



    getDispatcher()->vkUpdateDescriptorSetWithTemplateKHR( static_cast<VkDevice>( m_device ), static_cast<VkDescriptorSet>( m_descriptorSet ), static_cast<VkDescriptorUpdateTemplate>( descriptorUpdateTemplate ), reinterpret_cast<const void *>( &data ) );



  }

  //=== VK_NV_clip_space_w_scaling ===


   VULKAN_HPP_INLINE void CommandBuffer::setViewportWScalingNV( uint32_t firstViewport, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ViewportWScalingNV> const & viewportWScalings ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetViewportWScalingNV && "Function <vkCmdSetViewportWScalingNV> needs extension <VK_NV_clip_space_w_scaling> enabled!" );



    getDispatcher()->vkCmdSetViewportWScalingNV( static_cast<VkCommandBuffer>( m_commandBuffer ), firstViewport, viewportWScalings.size(), reinterpret_cast<const VkViewportWScalingNV *>( viewportWScalings.data() ) );



  }

#if defined( VK_USE_PLATFORM_XLIB_XRANDR_EXT )
  //=== VK_EXT_acquire_xlib_display ===


   VULKAN_HPP_INLINE void PhysicalDevice::acquireXlibDisplayEXT( Display & dpy, VULKAN_HPP_NAMESPACE::DisplayKHR display ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkAcquireXlibDisplayEXT && "Function <vkAcquireXlibDisplayEXT> needs extension <VK_EXT_acquire_xlib_display> enabled!" );



    VkResult result = getDispatcher()->vkAcquireXlibDisplayEXT( static_cast<VkPhysicalDevice>( m_physicalDevice ), &dpy, static_cast<VkDisplayKHR>( display ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::acquireXlibDisplayEXT" );


  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::DisplayKHR PhysicalDevice::getRandROutputDisplayEXT( Display & dpy, RROutput rrOutput ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::DisplayKHR( *this, dpy, rrOutput );
  }
#endif /*VK_USE_PLATFORM_XLIB_XRANDR_EXT*/

  //=== VK_EXT_display_surface_counter ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::SurfaceCapabilities2EXT PhysicalDevice::getSurfaceCapabilities2EXT( VULKAN_HPP_NAMESPACE::SurfaceKHR surface ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceSurfaceCapabilities2EXT && "Function <vkGetPhysicalDeviceSurfaceCapabilities2EXT> needs extension <VK_EXT_display_surface_counter> enabled!" );


    VULKAN_HPP_NAMESPACE::SurfaceCapabilities2EXT surfaceCapabilities;
    VkResult result = getDispatcher()->vkGetPhysicalDeviceSurfaceCapabilities2EXT( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkSurfaceKHR>( surface ), reinterpret_cast<VkSurfaceCapabilities2EXT *>( &surfaceCapabilities ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getSurfaceCapabilities2EXT" );

    return surfaceCapabilities;
  }

  //=== VK_EXT_display_control ===


   VULKAN_HPP_INLINE void Device::displayPowerControlEXT( VULKAN_HPP_NAMESPACE::DisplayKHR display, const VULKAN_HPP_NAMESPACE::DisplayPowerInfoEXT & displayPowerInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkDisplayPowerControlEXT && "Function <vkDisplayPowerControlEXT> needs extension <VK_EXT_display_control> enabled!" );



    VkResult result = getDispatcher()->vkDisplayPowerControlEXT( static_cast<VkDevice>( m_device ), static_cast<VkDisplayKHR>( display ), reinterpret_cast<const VkDisplayPowerInfoEXT *>( &displayPowerInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::displayPowerControlEXT" );


  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Fence Device::registerEventEXT( VULKAN_HPP_NAMESPACE::DeviceEventInfoEXT const & deviceEventInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Fence( *this, deviceEventInfo, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Fence Device::registerDisplayEventEXT( VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DisplayKHR const & display, VULKAN_HPP_NAMESPACE::DisplayEventInfoEXT const & displayEventInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Fence( *this, display, displayEventInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE uint64_t SwapchainKHR::getCounterEXT( VULKAN_HPP_NAMESPACE::SurfaceCounterFlagBitsEXT counter ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetSwapchainCounterEXT && "Function <vkGetSwapchainCounterEXT> needs extension <VK_EXT_display_control> enabled!" );


    uint64_t counterValue;
    VkResult result = getDispatcher()->vkGetSwapchainCounterEXT( static_cast<VkDevice>( m_device ), static_cast<VkSwapchainKHR>( m_swapchain ), static_cast<VkSurfaceCounterFlagBitsEXT>( counter ), &counterValue );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::SwapchainKHR::getCounterEXT" );

    return counterValue;
  }

  //=== VK_GOOGLE_display_timing ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::RefreshCycleDurationGOOGLE SwapchainKHR::getRefreshCycleDurationGOOGLE(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetRefreshCycleDurationGOOGLE && "Function <vkGetRefreshCycleDurationGOOGLE> needs extension <VK_GOOGLE_display_timing> enabled!" );


    VULKAN_HPP_NAMESPACE::RefreshCycleDurationGOOGLE displayTimingProperties;
    VkResult result = getDispatcher()->vkGetRefreshCycleDurationGOOGLE( static_cast<VkDevice>( m_device ), static_cast<VkSwapchainKHR>( m_swapchain ), reinterpret_cast<VkRefreshCycleDurationGOOGLE *>( &displayTimingProperties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::SwapchainKHR::getRefreshCycleDurationGOOGLE" );

    return displayTimingProperties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::PastPresentationTimingGOOGLE> SwapchainKHR::getPastPresentationTimingGOOGLE(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPastPresentationTimingGOOGLE && "Function <vkGetPastPresentationTimingGOOGLE> needs extension <VK_GOOGLE_display_timing> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::PastPresentationTimingGOOGLE> presentationTimings;
    uint32_t presentationTimingCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPastPresentationTimingGOOGLE( static_cast<VkDevice>( m_device ), static_cast<VkSwapchainKHR>( m_swapchain ), &presentationTimingCount, nullptr );
      if ( ( result == VK_SUCCESS ) && presentationTimingCount )
      {
        presentationTimings.resize( presentationTimingCount );
        result = getDispatcher()->vkGetPastPresentationTimingGOOGLE( static_cast<VkDevice>( m_device ), static_cast<VkSwapchainKHR>( m_swapchain ), &presentationTimingCount, reinterpret_cast<VkPastPresentationTimingGOOGLE *>( presentationTimings.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::SwapchainKHR::getPastPresentationTimingGOOGLE" );
    VULKAN_HPP_ASSERT( presentationTimingCount <= presentationTimings.size() );
    if ( presentationTimingCount < presentationTimings.size() )
    {
      presentationTimings.resize( presentationTimingCount );
    }
    return presentationTimings;
  }

  //=== VK_EXT_discard_rectangles ===


   VULKAN_HPP_INLINE void CommandBuffer::setDiscardRectangleEXT( uint32_t firstDiscardRectangle, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & discardRectangles ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetDiscardRectangleEXT && "Function <vkCmdSetDiscardRectangleEXT> needs extension <VK_EXT_discard_rectangles> enabled!" );



    getDispatcher()->vkCmdSetDiscardRectangleEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), firstDiscardRectangle, discardRectangles.size(), reinterpret_cast<const VkRect2D *>( discardRectangles.data() ) );



  }

  //=== VK_EXT_hdr_metadata ===


   VULKAN_HPP_INLINE void Device::setHdrMetadataEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::SwapchainKHR> const & swapchains, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::HdrMetadataEXT> const & metadata ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkSetHdrMetadataEXT && "Function <vkSetHdrMetadataEXT> needs extension <VK_EXT_hdr_metadata> enabled!" );
    if ( swapchains.size() != metadata.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::Device::setHdrMetadataEXT: swapchains.size() != metadata.size()" );
  }



    getDispatcher()->vkSetHdrMetadataEXT( static_cast<VkDevice>( m_device ), swapchains.size(), reinterpret_cast<const VkSwapchainKHR *>( swapchains.data() ), reinterpret_cast<const VkHdrMetadataEXT *>( metadata.data() ) );



  }

  //=== VK_KHR_create_renderpass2 ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::RenderPass Device::createRenderPass2KHR( VULKAN_HPP_NAMESPACE::RenderPassCreateInfo2 const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::RenderPass( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void CommandBuffer::beginRenderPass2KHR( const VULKAN_HPP_NAMESPACE::RenderPassBeginInfo & renderPassBegin, const VULKAN_HPP_NAMESPACE::SubpassBeginInfo & subpassBeginInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBeginRenderPass2KHR && "Function <vkCmdBeginRenderPass2KHR> needs extension <VK_KHR_create_renderpass2> enabled!" );



    getDispatcher()->vkCmdBeginRenderPass2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkRenderPassBeginInfo *>( &renderPassBegin ), reinterpret_cast<const VkSubpassBeginInfo *>( &subpassBeginInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::nextSubpass2KHR( const VULKAN_HPP_NAMESPACE::SubpassBeginInfo & subpassBeginInfo, const VULKAN_HPP_NAMESPACE::SubpassEndInfo & subpassEndInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdNextSubpass2KHR && "Function <vkCmdNextSubpass2KHR> needs extension <VK_KHR_create_renderpass2> enabled!" );



    getDispatcher()->vkCmdNextSubpass2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkSubpassBeginInfo *>( &subpassBeginInfo ), reinterpret_cast<const VkSubpassEndInfo *>( &subpassEndInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::endRenderPass2KHR( const VULKAN_HPP_NAMESPACE::SubpassEndInfo & subpassEndInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdEndRenderPass2KHR && "Function <vkCmdEndRenderPass2KHR> needs extension <VK_KHR_create_renderpass2> enabled!" );



    getDispatcher()->vkCmdEndRenderPass2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkSubpassEndInfo *>( &subpassEndInfo ) );



  }

  //=== VK_KHR_shared_presentable_image ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result SwapchainKHR::getStatus(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetSwapchainStatusKHR && "Function <vkGetSwapchainStatusKHR> needs extension <VK_KHR_shared_presentable_image> enabled!" );



    VkResult result = getDispatcher()->vkGetSwapchainStatusKHR( static_cast<VkDevice>( m_device ), static_cast<VkSwapchainKHR>( m_swapchain ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::SwapchainKHR::getStatus", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eSuboptimalKHR } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }

  //=== VK_KHR_external_fence_capabilities ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ExternalFenceProperties PhysicalDevice::getExternalFencePropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalFenceInfo & externalFenceInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceExternalFencePropertiesKHR && "Function <vkGetPhysicalDeviceExternalFencePropertiesKHR> needs extension <VK_KHR_external_fence_capabilities> enabled!" );


    VULKAN_HPP_NAMESPACE::ExternalFenceProperties externalFenceProperties;
    getDispatcher()->vkGetPhysicalDeviceExternalFencePropertiesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceExternalFenceInfo *>( &externalFenceInfo ), reinterpret_cast<VkExternalFenceProperties *>( &externalFenceProperties ) );


    return externalFenceProperties;
  }

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_fence_win32 ===


   VULKAN_HPP_INLINE void Device::importFenceWin32HandleKHR( const VULKAN_HPP_NAMESPACE::ImportFenceWin32HandleInfoKHR & importFenceWin32HandleInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkImportFenceWin32HandleKHR && "Function <vkImportFenceWin32HandleKHR> needs extension <VK_KHR_external_fence_win32> enabled!" );



    VkResult result = getDispatcher()->vkImportFenceWin32HandleKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImportFenceWin32HandleInfoKHR *>( &importFenceWin32HandleInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::importFenceWin32HandleKHR" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE HANDLE Device::getFenceWin32HandleKHR( const VULKAN_HPP_NAMESPACE::FenceGetWin32HandleInfoKHR & getWin32HandleInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetFenceWin32HandleKHR && "Function <vkGetFenceWin32HandleKHR> needs extension <VK_KHR_external_fence_win32> enabled!" );


    HANDLE handle;
    VkResult result = getDispatcher()->vkGetFenceWin32HandleKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkFenceGetWin32HandleInfoKHR *>( &getWin32HandleInfo ), &handle );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getFenceWin32HandleKHR" );

    return handle;
  }
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_external_fence_fd ===


   VULKAN_HPP_INLINE void Device::importFenceFdKHR( const VULKAN_HPP_NAMESPACE::ImportFenceFdInfoKHR & importFenceFdInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkImportFenceFdKHR && "Function <vkImportFenceFdKHR> needs extension <VK_KHR_external_fence_fd> enabled!" );



    VkResult result = getDispatcher()->vkImportFenceFdKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImportFenceFdInfoKHR *>( &importFenceFdInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::importFenceFdKHR" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE int Device::getFenceFdKHR( const VULKAN_HPP_NAMESPACE::FenceGetFdInfoKHR & getFdInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetFenceFdKHR && "Function <vkGetFenceFdKHR> needs extension <VK_KHR_external_fence_fd> enabled!" );


    int fd;
    VkResult result = getDispatcher()->vkGetFenceFdKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkFenceGetFdInfoKHR *>( &getFdInfo ), &fd );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getFenceFdKHR" );

    return fd;
  }

  //=== VK_KHR_performance_query ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::pair<std::vector<VULKAN_HPP_NAMESPACE::PerformanceCounterKHR>, std::vector<VULKAN_HPP_NAMESPACE::PerformanceCounterDescriptionKHR>> PhysicalDevice::enumerateQueueFamilyPerformanceQueryCountersKHR( uint32_t queueFamilyIndex ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR && "Function <vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR> needs extension <VK_KHR_performance_query> enabled!" );


    std::pair<std::vector<VULKAN_HPP_NAMESPACE::PerformanceCounterKHR>, std::vector<VULKAN_HPP_NAMESPACE::PerformanceCounterDescriptionKHR>> data;
    std::vector<VULKAN_HPP_NAMESPACE::PerformanceCounterKHR> & counters = data.first;
    std::vector<VULKAN_HPP_NAMESPACE::PerformanceCounterDescriptionKHR> & counterDescriptions = data.second;
    uint32_t counterCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), queueFamilyIndex, &counterCount, nullptr, nullptr );
      if ( ( result == VK_SUCCESS ) && counterCount )
      {
        counters.resize( counterCount );
counterDescriptions.resize( counterCount );
        result = getDispatcher()->vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), queueFamilyIndex, &counterCount, reinterpret_cast<VkPerformanceCounterKHR *>( counters.data() ), reinterpret_cast<VkPerformanceCounterDescriptionKHR *>( counterDescriptions.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::enumerateQueueFamilyPerformanceQueryCountersKHR" );
    VULKAN_HPP_ASSERT( counterCount <= counters.size() );
    if ( counterCount < counters.size() )
    {
      counters.resize( counterCount );
counterDescriptions.resize( counterCount );
    }
    return data;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE uint32_t PhysicalDevice::getQueueFamilyPerformanceQueryPassesKHR( const VULKAN_HPP_NAMESPACE::QueryPoolPerformanceCreateInfoKHR & performanceQueryCreateInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR && "Function <vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR> needs extension <VK_KHR_performance_query> enabled!" );


    uint32_t numPasses;
    getDispatcher()->vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkQueryPoolPerformanceCreateInfoKHR *>( &performanceQueryCreateInfo ), &numPasses );


    return numPasses;
  }


   VULKAN_HPP_INLINE void Device::acquireProfilingLockKHR( const VULKAN_HPP_NAMESPACE::AcquireProfilingLockInfoKHR & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkAcquireProfilingLockKHR && "Function <vkAcquireProfilingLockKHR> needs extension <VK_KHR_performance_query> enabled!" );



    VkResult result = getDispatcher()->vkAcquireProfilingLockKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkAcquireProfilingLockInfoKHR *>( &info ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::acquireProfilingLockKHR" );


  }


   VULKAN_HPP_INLINE void Device::releaseProfilingLockKHR(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkReleaseProfilingLockKHR && "Function <vkReleaseProfilingLockKHR> needs extension <VK_KHR_performance_query> enabled!" );



    getDispatcher()->vkReleaseProfilingLockKHR( static_cast<VkDevice>( m_device ) );



  }

  //=== VK_KHR_get_surface_capabilities2 ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::SurfaceCapabilities2KHR PhysicalDevice::getSurfaceCapabilities2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceSurfaceCapabilities2KHR && "Function <vkGetPhysicalDeviceSurfaceCapabilities2KHR> needs extension <VK_KHR_get_surface_capabilities2> enabled!" );


    VULKAN_HPP_NAMESPACE::SurfaceCapabilities2KHR surfaceCapabilities;
    VkResult result = getDispatcher()->vkGetPhysicalDeviceSurfaceCapabilities2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceSurfaceInfo2KHR *>( &surfaceInfo ), reinterpret_cast<VkSurfaceCapabilities2KHR *>( &surfaceCapabilities ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getSurfaceCapabilities2KHR" );

    return surfaceCapabilities;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> PhysicalDevice::getSurfaceCapabilities2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceSurfaceCapabilities2KHR && "Function <vkGetPhysicalDeviceSurfaceCapabilities2KHR> needs extension <VK_KHR_get_surface_capabilities2> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::SurfaceCapabilities2KHR & surfaceCapabilities = structureChain.template get<VULKAN_HPP_NAMESPACE::SurfaceCapabilities2KHR>();
    VkResult result = getDispatcher()->vkGetPhysicalDeviceSurfaceCapabilities2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceSurfaceInfo2KHR *>( &surfaceInfo ), reinterpret_cast<VkSurfaceCapabilities2KHR *>( &surfaceCapabilities ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getSurfaceCapabilities2KHR" );

    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::SurfaceFormat2KHR> PhysicalDevice::getSurfaceFormats2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceSurfaceFormats2KHR && "Function <vkGetPhysicalDeviceSurfaceFormats2KHR> needs extension <VK_KHR_get_surface_capabilities2> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::SurfaceFormat2KHR> surfaceFormats;
    uint32_t surfaceFormatCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceSurfaceFormats2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceSurfaceInfo2KHR *>( &surfaceInfo ), &surfaceFormatCount, nullptr );
      if ( ( result == VK_SUCCESS ) && surfaceFormatCount )
      {
        surfaceFormats.resize( surfaceFormatCount );
        result = getDispatcher()->vkGetPhysicalDeviceSurfaceFormats2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceSurfaceInfo2KHR *>( &surfaceInfo ), &surfaceFormatCount, reinterpret_cast<VkSurfaceFormat2KHR *>( surfaceFormats.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getSurfaceFormats2KHR" );
    VULKAN_HPP_ASSERT( surfaceFormatCount <= surfaceFormats.size() );
    if ( surfaceFormatCount < surfaceFormats.size() )
    {
      surfaceFormats.resize( surfaceFormatCount );
    }
    return surfaceFormats;
  }

  template <typename StructureChain>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<StructureChain> PhysicalDevice::getSurfaceFormats2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceSurfaceFormats2KHR && "Function <vkGetPhysicalDeviceSurfaceFormats2KHR> needs extension <VK_KHR_get_surface_capabilities2> enabled!" );


    std::vector<StructureChain> structureChains;
    std::vector<VULKAN_HPP_NAMESPACE::SurfaceFormat2KHR> surfaceFormats;
    uint32_t surfaceFormatCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceSurfaceFormats2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceSurfaceInfo2KHR *>( &surfaceInfo ), &surfaceFormatCount, nullptr );
      if ( ( result == VK_SUCCESS ) && surfaceFormatCount )
      {
        structureChains.resize( surfaceFormatCount );
        surfaceFormats.resize( surfaceFormatCount );
        for ( uint32_t i = 0; i < surfaceFormatCount; i++ )
        {
          surfaceFormats[i].pNext = structureChains[i].template get<VULKAN_HPP_NAMESPACE::SurfaceFormat2KHR>().pNext;
        }
        result = getDispatcher()->vkGetPhysicalDeviceSurfaceFormats2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceSurfaceInfo2KHR *>( &surfaceInfo ), &surfaceFormatCount, reinterpret_cast<VkSurfaceFormat2KHR *>( surfaceFormats.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getSurfaceFormats2KHR" );
    VULKAN_HPP_ASSERT( surfaceFormatCount <= surfaceFormats.size() );
      if ( surfaceFormatCount < surfaceFormats.size() )
      {
        structureChains.resize( surfaceFormatCount );
      }
      for ( uint32_t i = 0; i < surfaceFormatCount; i++ )
      {
        structureChains[i].template get<VULKAN_HPP_NAMESPACE::SurfaceFormat2KHR>() = surfaceFormats[i];
      }
    return structureChains;
  }

  //=== VK_KHR_get_display_properties2 ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::DisplayProperties2KHR> PhysicalDevice::getDisplayProperties2KHR(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceDisplayProperties2KHR && "Function <vkGetPhysicalDeviceDisplayProperties2KHR> needs extension <VK_KHR_get_display_properties2> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::DisplayProperties2KHR> properties;
    uint32_t propertyCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceDisplayProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), &propertyCount, nullptr );
      if ( ( result == VK_SUCCESS ) && propertyCount )
      {
        properties.resize( propertyCount );
        result = getDispatcher()->vkGetPhysicalDeviceDisplayProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), &propertyCount, reinterpret_cast<VkDisplayProperties2KHR *>( properties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getDisplayProperties2KHR" );
    VULKAN_HPP_ASSERT( propertyCount <= properties.size() );
    if ( propertyCount < properties.size() )
    {
      properties.resize( propertyCount );
    }
    return properties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::DisplayPlaneProperties2KHR> PhysicalDevice::getDisplayPlaneProperties2KHR(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceDisplayPlaneProperties2KHR && "Function <vkGetPhysicalDeviceDisplayPlaneProperties2KHR> needs extension <VK_KHR_get_display_properties2> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::DisplayPlaneProperties2KHR> properties;
    uint32_t propertyCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceDisplayPlaneProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), &propertyCount, nullptr );
      if ( ( result == VK_SUCCESS ) && propertyCount )
      {
        properties.resize( propertyCount );
        result = getDispatcher()->vkGetPhysicalDeviceDisplayPlaneProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), &propertyCount, reinterpret_cast<VkDisplayPlaneProperties2KHR *>( properties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getDisplayPlaneProperties2KHR" );
    VULKAN_HPP_ASSERT( propertyCount <= properties.size() );
    if ( propertyCount < properties.size() )
    {
      properties.resize( propertyCount );
    }
    return properties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::DisplayModeProperties2KHR> DisplayKHR::getModeProperties2(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDisplayModeProperties2KHR && "Function <vkGetDisplayModeProperties2KHR> needs extension <VK_KHR_get_display_properties2> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::DisplayModeProperties2KHR> properties;
    uint32_t propertyCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetDisplayModeProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkDisplayKHR>( m_display ), &propertyCount, nullptr );
      if ( ( result == VK_SUCCESS ) && propertyCount )
      {
        properties.resize( propertyCount );
        result = getDispatcher()->vkGetDisplayModeProperties2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkDisplayKHR>( m_display ), &propertyCount, reinterpret_cast<VkDisplayModeProperties2KHR *>( properties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::DisplayKHR::getModeProperties2" );
    VULKAN_HPP_ASSERT( propertyCount <= properties.size() );
    if ( propertyCount < properties.size() )
    {
      properties.resize( propertyCount );
    }
    return properties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DisplayPlaneCapabilities2KHR PhysicalDevice::getDisplayPlaneCapabilities2KHR( const VULKAN_HPP_NAMESPACE::DisplayPlaneInfo2KHR & displayPlaneInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDisplayPlaneCapabilities2KHR && "Function <vkGetDisplayPlaneCapabilities2KHR> needs extension <VK_KHR_get_display_properties2> enabled!" );


    VULKAN_HPP_NAMESPACE::DisplayPlaneCapabilities2KHR capabilities;
    VkResult result = getDispatcher()->vkGetDisplayPlaneCapabilities2KHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkDisplayPlaneInfo2KHR *>( &displayPlaneInfo ), reinterpret_cast<VkDisplayPlaneCapabilities2KHR *>( &capabilities ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getDisplayPlaneCapabilities2KHR" );

    return capabilities;
  }

#if defined( VK_USE_PLATFORM_IOS_MVK )
  //=== VK_MVK_ios_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createIOSSurfaceMVK( VULKAN_HPP_NAMESPACE::IOSSurfaceCreateInfoMVK const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }
#endif /*VK_USE_PLATFORM_IOS_MVK*/

#if defined( VK_USE_PLATFORM_MACOS_MVK )
  //=== VK_MVK_macos_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createMacOSSurfaceMVK( VULKAN_HPP_NAMESPACE::MacOSSurfaceCreateInfoMVK const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }
#endif /*VK_USE_PLATFORM_MACOS_MVK*/

  //=== VK_EXT_debug_utils ===


   VULKAN_HPP_INLINE void Device::setDebugUtilsObjectNameEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsObjectNameInfoEXT & nameInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkSetDebugUtilsObjectNameEXT && "Function <vkSetDebugUtilsObjectNameEXT> needs extension <VK_EXT_debug_utils> enabled!" );



    VkResult result = getDispatcher()->vkSetDebugUtilsObjectNameEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDebugUtilsObjectNameInfoEXT *>( &nameInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::setDebugUtilsObjectNameEXT" );


  }


   VULKAN_HPP_INLINE void Device::setDebugUtilsObjectTagEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsObjectTagInfoEXT & tagInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkSetDebugUtilsObjectTagEXT && "Function <vkSetDebugUtilsObjectTagEXT> needs extension <VK_EXT_debug_utils> enabled!" );



    VkResult result = getDispatcher()->vkSetDebugUtilsObjectTagEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDebugUtilsObjectTagInfoEXT *>( &tagInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::setDebugUtilsObjectTagEXT" );


  }


   VULKAN_HPP_INLINE void Queue::beginDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT & labelInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkQueueBeginDebugUtilsLabelEXT && "Function <vkQueueBeginDebugUtilsLabelEXT> needs extension <VK_EXT_debug_utils> enabled!" );



    getDispatcher()->vkQueueBeginDebugUtilsLabelEXT( static_cast<VkQueue>( m_queue ), reinterpret_cast<const VkDebugUtilsLabelEXT *>( &labelInfo ) );



  }


   VULKAN_HPP_INLINE void Queue::endDebugUtilsLabelEXT(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkQueueEndDebugUtilsLabelEXT && "Function <vkQueueEndDebugUtilsLabelEXT> needs extension <VK_EXT_debug_utils> enabled!" );



    getDispatcher()->vkQueueEndDebugUtilsLabelEXT( static_cast<VkQueue>( m_queue ) );



  }


   VULKAN_HPP_INLINE void Queue::insertDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT & labelInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkQueueInsertDebugUtilsLabelEXT && "Function <vkQueueInsertDebugUtilsLabelEXT> needs extension <VK_EXT_debug_utils> enabled!" );



    getDispatcher()->vkQueueInsertDebugUtilsLabelEXT( static_cast<VkQueue>( m_queue ), reinterpret_cast<const VkDebugUtilsLabelEXT *>( &labelInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::beginDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT & labelInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBeginDebugUtilsLabelEXT && "Function <vkCmdBeginDebugUtilsLabelEXT> needs extension <VK_EXT_debug_utils> enabled!" );



    getDispatcher()->vkCmdBeginDebugUtilsLabelEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkDebugUtilsLabelEXT *>( &labelInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::endDebugUtilsLabelEXT(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdEndDebugUtilsLabelEXT && "Function <vkCmdEndDebugUtilsLabelEXT> needs extension <VK_EXT_debug_utils> enabled!" );



    getDispatcher()->vkCmdEndDebugUtilsLabelEXT( static_cast<VkCommandBuffer>( m_commandBuffer ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::insertDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT & labelInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdInsertDebugUtilsLabelEXT && "Function <vkCmdInsertDebugUtilsLabelEXT> needs extension <VK_EXT_debug_utils> enabled!" );



    getDispatcher()->vkCmdInsertDebugUtilsLabelEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkDebugUtilsLabelEXT *>( &labelInfo ) );



  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::DebugUtilsMessengerEXT Instance::createDebugUtilsMessengerEXT( VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::DebugUtilsMessengerEXT( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void Instance::submitDebugUtilsMessageEXT( VULKAN_HPP_NAMESPACE::DebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VULKAN_HPP_NAMESPACE::DebugUtilsMessageTypeFlagsEXT messageTypes, const VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCallbackDataEXT & callbackData ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkSubmitDebugUtilsMessageEXT && "Function <vkSubmitDebugUtilsMessageEXT> needs extension <VK_EXT_debug_utils> enabled!" );



    getDispatcher()->vkSubmitDebugUtilsMessageEXT( static_cast<VkInstance>( m_instance ), static_cast<VkDebugUtilsMessageSeverityFlagBitsEXT>( messageSeverity ), static_cast<VkDebugUtilsMessageTypeFlagsEXT>( messageTypes ), reinterpret_cast<const VkDebugUtilsMessengerCallbackDataEXT *>( &callbackData ) );



  }

#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  //=== VK_ANDROID_external_memory_android_hardware_buffer ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::AndroidHardwareBufferPropertiesANDROID Device::getAndroidHardwareBufferPropertiesANDROID( const struct AHardwareBuffer & buffer ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetAndroidHardwareBufferPropertiesANDROID && "Function <vkGetAndroidHardwareBufferPropertiesANDROID> needs extension <VK_ANDROID_external_memory_android_hardware_buffer> enabled!" );


    VULKAN_HPP_NAMESPACE::AndroidHardwareBufferPropertiesANDROID properties;
    VkResult result = getDispatcher()->vkGetAndroidHardwareBufferPropertiesANDROID( static_cast<VkDevice>( m_device ), &buffer, reinterpret_cast<VkAndroidHardwareBufferPropertiesANDROID *>( &properties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getAndroidHardwareBufferPropertiesANDROID" );

    return properties;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Device::getAndroidHardwareBufferPropertiesANDROID( const struct AHardwareBuffer & buffer ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetAndroidHardwareBufferPropertiesANDROID && "Function <vkGetAndroidHardwareBufferPropertiesANDROID> needs extension <VK_ANDROID_external_memory_android_hardware_buffer> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::AndroidHardwareBufferPropertiesANDROID & properties = structureChain.template get<VULKAN_HPP_NAMESPACE::AndroidHardwareBufferPropertiesANDROID>();
    VkResult result = getDispatcher()->vkGetAndroidHardwareBufferPropertiesANDROID( static_cast<VkDevice>( m_device ), &buffer, reinterpret_cast<VkAndroidHardwareBufferPropertiesANDROID *>( &properties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getAndroidHardwareBufferPropertiesANDROID" );

    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE struct AHardwareBuffer * Device::getMemoryAndroidHardwareBufferANDROID( const VULKAN_HPP_NAMESPACE::MemoryGetAndroidHardwareBufferInfoANDROID & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetMemoryAndroidHardwareBufferANDROID && "Function <vkGetMemoryAndroidHardwareBufferANDROID> needs extension <VK_ANDROID_external_memory_android_hardware_buffer> enabled!" );


    struct AHardwareBuffer * buffer;
    VkResult result = getDispatcher()->vkGetMemoryAndroidHardwareBufferANDROID( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkMemoryGetAndroidHardwareBufferInfoANDROID *>( &info ), &buffer );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getMemoryAndroidHardwareBufferANDROID" );

    return buffer;
  }
#endif /*VK_USE_PLATFORM_ANDROID_KHR*/

  //=== VK_EXT_sample_locations ===


   VULKAN_HPP_INLINE void CommandBuffer::setSampleLocationsEXT( const VULKAN_HPP_NAMESPACE::SampleLocationsInfoEXT & sampleLocationsInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetSampleLocationsEXT && "Function <vkCmdSetSampleLocationsEXT> needs extension <VK_EXT_sample_locations> enabled!" );



    getDispatcher()->vkCmdSetSampleLocationsEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkSampleLocationsInfoEXT *>( &sampleLocationsInfo ) );



  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MultisamplePropertiesEXT PhysicalDevice::getMultisamplePropertiesEXT( VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceMultisamplePropertiesEXT && "Function <vkGetPhysicalDeviceMultisamplePropertiesEXT> needs extension <VK_EXT_sample_locations> enabled!" );


    VULKAN_HPP_NAMESPACE::MultisamplePropertiesEXT multisampleProperties;
    getDispatcher()->vkGetPhysicalDeviceMultisamplePropertiesEXT( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkSampleCountFlagBits>( samples ), reinterpret_cast<VkMultisamplePropertiesEXT *>( &multisampleProperties ) );


    return multisampleProperties;
  }

  //=== VK_KHR_get_memory_requirements2 ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryRequirements2 Device::getImageMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::ImageMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetImageMemoryRequirements2KHR && "Function <vkGetImageMemoryRequirements2KHR> needs extension <VK_KHR_get_memory_requirements2> enabled!" );


    VULKAN_HPP_NAMESPACE::MemoryRequirements2 memoryRequirements;
    getDispatcher()->vkGetImageMemoryRequirements2KHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImageMemoryRequirementsInfo2 *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return memoryRequirements;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Device::getImageMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::ImageMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetImageMemoryRequirements2KHR && "Function <vkGetImageMemoryRequirements2KHR> needs extension <VK_KHR_get_memory_requirements2> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::MemoryRequirements2 & memoryRequirements = structureChain.template get<VULKAN_HPP_NAMESPACE::MemoryRequirements2>();
    getDispatcher()->vkGetImageMemoryRequirements2KHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImageMemoryRequirementsInfo2 *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryRequirements2 Device::getBufferMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::BufferMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetBufferMemoryRequirements2KHR && "Function <vkGetBufferMemoryRequirements2KHR> needs extension <VK_KHR_get_memory_requirements2> enabled!" );


    VULKAN_HPP_NAMESPACE::MemoryRequirements2 memoryRequirements;
    getDispatcher()->vkGetBufferMemoryRequirements2KHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkBufferMemoryRequirementsInfo2 *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return memoryRequirements;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Device::getBufferMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::BufferMemoryRequirementsInfo2 & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetBufferMemoryRequirements2KHR && "Function <vkGetBufferMemoryRequirements2KHR> needs extension <VK_KHR_get_memory_requirements2> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::MemoryRequirements2 & memoryRequirements = structureChain.template get<VULKAN_HPP_NAMESPACE::MemoryRequirements2>();
    getDispatcher()->vkGetBufferMemoryRequirements2KHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkBufferMemoryRequirementsInfo2 *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2> Device::getImageSparseMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::ImageSparseMemoryRequirementsInfo2 & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetImageSparseMemoryRequirements2KHR && "Function <vkGetImageSparseMemoryRequirements2KHR> needs extension <VK_KHR_get_memory_requirements2> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2> sparseMemoryRequirements;
    uint32_t sparseMemoryRequirementCount;
    getDispatcher()->vkGetImageSparseMemoryRequirements2KHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImageSparseMemoryRequirementsInfo2 *>( &info ), &sparseMemoryRequirementCount, nullptr );
    sparseMemoryRequirements.resize( sparseMemoryRequirementCount );
    getDispatcher()->vkGetImageSparseMemoryRequirements2KHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImageSparseMemoryRequirementsInfo2 *>( &info ), &sparseMemoryRequirementCount, reinterpret_cast<VkSparseImageMemoryRequirements2 *>( sparseMemoryRequirements.data() ) );

    VULKAN_HPP_ASSERT( sparseMemoryRequirementCount <= sparseMemoryRequirements.size() );
    if ( sparseMemoryRequirementCount < sparseMemoryRequirements.size() )
    {
      sparseMemoryRequirements.resize( sparseMemoryRequirementCount );
    }
    return sparseMemoryRequirements;
  }

  //=== VK_KHR_acceleration_structure ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::AccelerationStructureKHR Device::createAccelerationStructureKHR( VULKAN_HPP_NAMESPACE::AccelerationStructureCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::AccelerationStructureKHR( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void CommandBuffer::buildAccelerationStructuresKHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR> const & infos, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildRangeInfoKHR * const> const & pBuildRangeInfos ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBuildAccelerationStructuresKHR && "Function <vkCmdBuildAccelerationStructuresKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );
    if ( infos.size() != pBuildRangeInfos.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::buildAccelerationStructuresKHR: infos.size() != pBuildRangeInfos.size()" );
  }



    getDispatcher()->vkCmdBuildAccelerationStructuresKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), infos.size(), reinterpret_cast<const VkAccelerationStructureBuildGeometryInfoKHR *>( infos.data() ), reinterpret_cast<const VkAccelerationStructureBuildRangeInfoKHR * const *>( pBuildRangeInfos.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::buildAccelerationStructuresIndirectKHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR> const & infos, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceAddress> const & indirectDeviceAddresses, VULKAN_HPP_NAMESPACE::ArrayProxy<const uint32_t> const & indirectStrides, VULKAN_HPP_NAMESPACE::ArrayProxy<const uint32_t * const> const & pMaxPrimitiveCounts ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBuildAccelerationStructuresIndirectKHR && "Function <vkCmdBuildAccelerationStructuresIndirectKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );
    if ( infos.size() != indirectDeviceAddresses.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::buildAccelerationStructuresIndirectKHR: infos.size() != indirectDeviceAddresses.size()" );
  }
    if ( infos.size() != indirectStrides.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::buildAccelerationStructuresIndirectKHR: infos.size() != indirectStrides.size()" );
  }
    if ( infos.size() != pMaxPrimitiveCounts.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::buildAccelerationStructuresIndirectKHR: infos.size() != pMaxPrimitiveCounts.size()" );
  }



    getDispatcher()->vkCmdBuildAccelerationStructuresIndirectKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), infos.size(), reinterpret_cast<const VkAccelerationStructureBuildGeometryInfoKHR *>( infos.data() ), reinterpret_cast<const VkDeviceAddress *>( indirectDeviceAddresses.data() ), indirectStrides.data(), pMaxPrimitiveCounts.data() );



  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result Device::buildAccelerationStructuresKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR> const & infos, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildRangeInfoKHR * const> const & pBuildRangeInfos ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkBuildAccelerationStructuresKHR && "Function <vkBuildAccelerationStructuresKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );
    if ( infos.size() != pBuildRangeInfos.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::Device::buildAccelerationStructuresKHR: infos.size() != pBuildRangeInfos.size()" );
  }



    VkResult result = getDispatcher()->vkBuildAccelerationStructuresKHR( static_cast<VkDevice>( m_device ), static_cast<VkDeferredOperationKHR>( deferredOperation ), infos.size(), reinterpret_cast<const VkAccelerationStructureBuildGeometryInfoKHR *>( infos.data() ), reinterpret_cast<const VkAccelerationStructureBuildRangeInfoKHR * const *>( pBuildRangeInfos.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::buildAccelerationStructuresKHR", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eOperationDeferredKHR, VULKAN_HPP_NAMESPACE::Result::eOperationNotDeferredKHR } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result Device::copyAccelerationStructureKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureInfoKHR & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCopyAccelerationStructureKHR && "Function <vkCopyAccelerationStructureKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );



    VkResult result = getDispatcher()->vkCopyAccelerationStructureKHR( static_cast<VkDevice>( m_device ), static_cast<VkDeferredOperationKHR>( deferredOperation ), reinterpret_cast<const VkCopyAccelerationStructureInfoKHR *>( &info ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::copyAccelerationStructureKHR", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eOperationDeferredKHR, VULKAN_HPP_NAMESPACE::Result::eOperationNotDeferredKHR } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result Device::copyAccelerationStructureToMemoryKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureToMemoryInfoKHR & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCopyAccelerationStructureToMemoryKHR && "Function <vkCopyAccelerationStructureToMemoryKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );



    VkResult result = getDispatcher()->vkCopyAccelerationStructureToMemoryKHR( static_cast<VkDevice>( m_device ), static_cast<VkDeferredOperationKHR>( deferredOperation ), reinterpret_cast<const VkCopyAccelerationStructureToMemoryInfoKHR *>( &info ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::copyAccelerationStructureToMemoryKHR", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eOperationDeferredKHR, VULKAN_HPP_NAMESPACE::Result::eOperationNotDeferredKHR } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result Device::copyMemoryToAccelerationStructureKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, const VULKAN_HPP_NAMESPACE::CopyMemoryToAccelerationStructureInfoKHR & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCopyMemoryToAccelerationStructureKHR && "Function <vkCopyMemoryToAccelerationStructureKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );



    VkResult result = getDispatcher()->vkCopyMemoryToAccelerationStructureKHR( static_cast<VkDevice>( m_device ), static_cast<VkDeferredOperationKHR>( deferredOperation ), reinterpret_cast<const VkCopyMemoryToAccelerationStructureInfoKHR *>( &info ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::copyMemoryToAccelerationStructureKHR", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eOperationDeferredKHR, VULKAN_HPP_NAMESPACE::Result::eOperationNotDeferredKHR } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<DataType> Device::writeAccelerationStructuresPropertiesKHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureKHR> const & accelerationStructures, VULKAN_HPP_NAMESPACE::QueryType queryType, size_t dataSize, size_t stride ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkWriteAccelerationStructuresPropertiesKHR && "Function <vkWriteAccelerationStructuresPropertiesKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );

        VULKAN_HPP_ASSERT( dataSize % sizeof( DataType ) == 0 );
    std::vector<DataType> data( dataSize / sizeof( DataType ) );
    VkResult result = getDispatcher()->vkWriteAccelerationStructuresPropertiesKHR( static_cast<VkDevice>( m_device ), accelerationStructures.size(), reinterpret_cast<const VkAccelerationStructureKHR *>( accelerationStructures.data() ), static_cast<VkQueryType>( queryType ), data.size() * sizeof( DataType ), reinterpret_cast<void *>( data.data() ), stride );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::writeAccelerationStructuresPropertiesKHR" );

    return data;
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE DataType Device::writeAccelerationStructuresPropertyKHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureKHR> const & accelerationStructures, VULKAN_HPP_NAMESPACE::QueryType queryType, size_t stride ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkWriteAccelerationStructuresPropertiesKHR && "Function <vkWriteAccelerationStructuresPropertiesKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );


    DataType data;
    VkResult result = getDispatcher()->vkWriteAccelerationStructuresPropertiesKHR( static_cast<VkDevice>( m_device ), accelerationStructures.size(), reinterpret_cast<const VkAccelerationStructureKHR *>( accelerationStructures.data() ), static_cast<VkQueryType>( queryType ), sizeof( DataType ), reinterpret_cast<void *>( &data ), stride );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::writeAccelerationStructuresPropertyKHR" );

    return data;
  }


   VULKAN_HPP_INLINE void CommandBuffer::copyAccelerationStructureKHR( const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureInfoKHR & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdCopyAccelerationStructureKHR && "Function <vkCmdCopyAccelerationStructureKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );



    getDispatcher()->vkCmdCopyAccelerationStructureKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCopyAccelerationStructureInfoKHR *>( &info ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyAccelerationStructureToMemoryKHR( const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureToMemoryInfoKHR & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdCopyAccelerationStructureToMemoryKHR && "Function <vkCmdCopyAccelerationStructureToMemoryKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );



    getDispatcher()->vkCmdCopyAccelerationStructureToMemoryKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCopyAccelerationStructureToMemoryInfoKHR *>( &info ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyMemoryToAccelerationStructureKHR( const VULKAN_HPP_NAMESPACE::CopyMemoryToAccelerationStructureInfoKHR & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdCopyMemoryToAccelerationStructureKHR && "Function <vkCmdCopyMemoryToAccelerationStructureKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );



    getDispatcher()->vkCmdCopyMemoryToAccelerationStructureKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCopyMemoryToAccelerationStructureInfoKHR *>( &info ) );



  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DeviceAddress Device::getAccelerationStructureAddressKHR( const VULKAN_HPP_NAMESPACE::AccelerationStructureDeviceAddressInfoKHR & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetAccelerationStructureDeviceAddressKHR && "Function <vkGetAccelerationStructureDeviceAddressKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );



    VkDeviceAddress result = getDispatcher()->vkGetAccelerationStructureDeviceAddressKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkAccelerationStructureDeviceAddressInfoKHR *>( &info ) );


    return static_cast<VULKAN_HPP_NAMESPACE::DeviceAddress>( result );
  }


   VULKAN_HPP_INLINE void CommandBuffer::writeAccelerationStructuresPropertiesKHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureKHR> const & accelerationStructures, VULKAN_HPP_NAMESPACE::QueryType queryType, VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t firstQuery ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdWriteAccelerationStructuresPropertiesKHR && "Function <vkCmdWriteAccelerationStructuresPropertiesKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );



    getDispatcher()->vkCmdWriteAccelerationStructuresPropertiesKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), accelerationStructures.size(), reinterpret_cast<const VkAccelerationStructureKHR *>( accelerationStructures.data() ), static_cast<VkQueryType>( queryType ), static_cast<VkQueryPool>( queryPool ), firstQuery );



  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::AccelerationStructureCompatibilityKHR Device::getAccelerationStructureCompatibilityKHR( const VULKAN_HPP_NAMESPACE::AccelerationStructureVersionInfoKHR & versionInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeviceAccelerationStructureCompatibilityKHR && "Function <vkGetDeviceAccelerationStructureCompatibilityKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );


    VULKAN_HPP_NAMESPACE::AccelerationStructureCompatibilityKHR compatibility;
    getDispatcher()->vkGetDeviceAccelerationStructureCompatibilityKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkAccelerationStructureVersionInfoKHR *>( &versionInfo ), reinterpret_cast<VkAccelerationStructureCompatibilityKHR *>( &compatibility ) );


    return compatibility;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::AccelerationStructureBuildSizesInfoKHR Device::getAccelerationStructureBuildSizesKHR( VULKAN_HPP_NAMESPACE::AccelerationStructureBuildTypeKHR buildType, const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR & buildInfo, VULKAN_HPP_NAMESPACE::ArrayProxy<const uint32_t> const & maxPrimitiveCounts ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetAccelerationStructureBuildSizesKHR && "Function <vkGetAccelerationStructureBuildSizesKHR> needs extension <VK_KHR_acceleration_structure> enabled!" );
    if ( maxPrimitiveCounts.size() != buildInfo.geometryCount )
    {
      throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::Device::getAccelerationStructureBuildSizesKHR: maxPrimitiveCounts.size() != buildInfo.geometryCount" );
    }


    VULKAN_HPP_NAMESPACE::AccelerationStructureBuildSizesInfoKHR sizeInfo;
    getDispatcher()->vkGetAccelerationStructureBuildSizesKHR( static_cast<VkDevice>( m_device ), static_cast<VkAccelerationStructureBuildTypeKHR>( buildType ), reinterpret_cast<const VkAccelerationStructureBuildGeometryInfoKHR *>( &buildInfo ), maxPrimitiveCounts.data(), reinterpret_cast<VkAccelerationStructureBuildSizesInfoKHR *>( &sizeInfo ) );


    return sizeInfo;
  }

  //=== VK_KHR_sampler_ycbcr_conversion ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SamplerYcbcrConversion Device::createSamplerYcbcrConversionKHR( VULKAN_HPP_NAMESPACE::SamplerYcbcrConversionCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SamplerYcbcrConversion( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void Device::destroySamplerYcbcrConversionKHR( VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion ycbcrConversion, Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkDestroySamplerYcbcrConversionKHR && "Function <vkDestroySamplerYcbcrConversionKHR> needs extension <VK_KHR_sampler_ycbcr_conversion> enabled!" );



    getDispatcher()->vkDestroySamplerYcbcrConversionKHR( static_cast<VkDevice>( m_device ), static_cast<VkSamplerYcbcrConversion>( ycbcrConversion ), reinterpret_cast<const VkAllocationCallbacks *>( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ) );



  }

  //=== VK_KHR_bind_memory2 ===


   VULKAN_HPP_INLINE void Device::bindBufferMemory2KHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BindBufferMemoryInfo> const & bindInfos ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkBindBufferMemory2KHR && "Function <vkBindBufferMemory2KHR> needs extension <VK_KHR_bind_memory2> enabled!" );



    VkResult result = getDispatcher()->vkBindBufferMemory2KHR( static_cast<VkDevice>( m_device ), bindInfos.size(), reinterpret_cast<const VkBindBufferMemoryInfo *>( bindInfos.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::bindBufferMemory2KHR" );


  }


   VULKAN_HPP_INLINE void Device::bindImageMemory2KHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BindImageMemoryInfo> const & bindInfos ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkBindImageMemory2KHR && "Function <vkBindImageMemory2KHR> needs extension <VK_KHR_bind_memory2> enabled!" );



    VkResult result = getDispatcher()->vkBindImageMemory2KHR( static_cast<VkDevice>( m_device ), bindInfos.size(), reinterpret_cast<const VkBindImageMemoryInfo *>( bindInfos.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::bindImageMemory2KHR" );


  }

  //=== VK_EXT_image_drm_format_modifier ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ImageDrmFormatModifierPropertiesEXT Image::getDrmFormatModifierPropertiesEXT(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetImageDrmFormatModifierPropertiesEXT && "Function <vkGetImageDrmFormatModifierPropertiesEXT> needs extension <VK_EXT_image_drm_format_modifier> enabled!" );


    VULKAN_HPP_NAMESPACE::ImageDrmFormatModifierPropertiesEXT properties;
    VkResult result = getDispatcher()->vkGetImageDrmFormatModifierPropertiesEXT( static_cast<VkDevice>( m_device ), static_cast<VkImage>( m_image ), reinterpret_cast<VkImageDrmFormatModifierPropertiesEXT *>( &properties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Image::getDrmFormatModifierPropertiesEXT" );

    return properties;
  }

  //=== VK_EXT_validation_cache ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::ValidationCacheEXT Device::createValidationCacheEXT( VULKAN_HPP_NAMESPACE::ValidationCacheCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::ValidationCacheEXT( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void ValidationCacheEXT::merge( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ValidationCacheEXT> const & srcCaches ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkMergeValidationCachesEXT && "Function <vkMergeValidationCachesEXT> needs extension <VK_EXT_validation_cache> enabled!" );



    VkResult result = getDispatcher()->vkMergeValidationCachesEXT( static_cast<VkDevice>( m_device ), static_cast<VkValidationCacheEXT>( m_validationCache ), srcCaches.size(), reinterpret_cast<const VkValidationCacheEXT *>( srcCaches.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::ValidationCacheEXT::merge" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<uint8_t> ValidationCacheEXT::getData(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetValidationCacheDataEXT && "Function <vkGetValidationCacheDataEXT> needs extension <VK_EXT_validation_cache> enabled!" );


    std::vector<uint8_t> data;
    size_t dataSize;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetValidationCacheDataEXT( static_cast<VkDevice>( m_device ), static_cast<VkValidationCacheEXT>( m_validationCache ), &dataSize, nullptr );
      if ( ( result == VK_SUCCESS ) && dataSize )
      {
        data.resize( dataSize );
        result = getDispatcher()->vkGetValidationCacheDataEXT( static_cast<VkDevice>( m_device ), static_cast<VkValidationCacheEXT>( m_validationCache ), &dataSize, reinterpret_cast<void *>( data.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::ValidationCacheEXT::getData" );
    VULKAN_HPP_ASSERT( dataSize <= data.size() );
    if ( dataSize < data.size() )
    {
      data.resize( dataSize );
    }
    return data;
  }

  //=== VK_NV_shading_rate_image ===


   VULKAN_HPP_INLINE void CommandBuffer::bindShadingRateImageNV( VULKAN_HPP_NAMESPACE::ImageView imageView, VULKAN_HPP_NAMESPACE::ImageLayout imageLayout ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBindShadingRateImageNV && "Function <vkCmdBindShadingRateImageNV> needs extension <VK_NV_shading_rate_image> enabled!" );



    getDispatcher()->vkCmdBindShadingRateImageNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkImageView>( imageView ), static_cast<VkImageLayout>( imageLayout ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setViewportShadingRatePaletteNV( uint32_t firstViewport, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ShadingRatePaletteNV> const & shadingRatePalettes ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetViewportShadingRatePaletteNV && "Function <vkCmdSetViewportShadingRatePaletteNV> needs extension <VK_NV_shading_rate_image> enabled!" );



    getDispatcher()->vkCmdSetViewportShadingRatePaletteNV( static_cast<VkCommandBuffer>( m_commandBuffer ), firstViewport, shadingRatePalettes.size(), reinterpret_cast<const VkShadingRatePaletteNV *>( shadingRatePalettes.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setCoarseSampleOrderNV( VULKAN_HPP_NAMESPACE::CoarseSampleOrderTypeNV sampleOrderType, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::CoarseSampleOrderCustomNV> const & customSampleOrders ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetCoarseSampleOrderNV && "Function <vkCmdSetCoarseSampleOrderNV> needs extension <VK_NV_shading_rate_image> enabled!" );



    getDispatcher()->vkCmdSetCoarseSampleOrderNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkCoarseSampleOrderTypeNV>( sampleOrderType ), customSampleOrders.size(), reinterpret_cast<const VkCoarseSampleOrderCustomNV *>( customSampleOrders.data() ) );



  }

  //=== VK_NV_ray_tracing ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::AccelerationStructureNV Device::createAccelerationStructureNV( VULKAN_HPP_NAMESPACE::AccelerationStructureCreateInfoNV const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::AccelerationStructureNV( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryRequirements2KHR Device::getAccelerationStructureMemoryRequirementsNV( const VULKAN_HPP_NAMESPACE::AccelerationStructureMemoryRequirementsInfoNV & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetAccelerationStructureMemoryRequirementsNV && "Function <vkGetAccelerationStructureMemoryRequirementsNV> needs extension <VK_NV_ray_tracing> enabled!" );


    VULKAN_HPP_NAMESPACE::MemoryRequirements2KHR memoryRequirements;
    getDispatcher()->vkGetAccelerationStructureMemoryRequirementsNV( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkAccelerationStructureMemoryRequirementsInfoNV *>( &info ), reinterpret_cast<VkMemoryRequirements2KHR *>( &memoryRequirements ) );


    return memoryRequirements;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Device::getAccelerationStructureMemoryRequirementsNV( const VULKAN_HPP_NAMESPACE::AccelerationStructureMemoryRequirementsInfoNV & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetAccelerationStructureMemoryRequirementsNV && "Function <vkGetAccelerationStructureMemoryRequirementsNV> needs extension <VK_NV_ray_tracing> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::MemoryRequirements2KHR & memoryRequirements = structureChain.template get<VULKAN_HPP_NAMESPACE::MemoryRequirements2KHR>();
    getDispatcher()->vkGetAccelerationStructureMemoryRequirementsNV( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkAccelerationStructureMemoryRequirementsInfoNV *>( &info ), reinterpret_cast<VkMemoryRequirements2KHR *>( &memoryRequirements ) );


    return structureChain;
  }


   VULKAN_HPP_INLINE void Device::bindAccelerationStructureMemoryNV( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::BindAccelerationStructureMemoryInfoNV> const & bindInfos ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkBindAccelerationStructureMemoryNV && "Function <vkBindAccelerationStructureMemoryNV> needs extension <VK_NV_ray_tracing> enabled!" );



    VkResult result = getDispatcher()->vkBindAccelerationStructureMemoryNV( static_cast<VkDevice>( m_device ), bindInfos.size(), reinterpret_cast<const VkBindAccelerationStructureMemoryInfoNV *>( bindInfos.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::bindAccelerationStructureMemoryNV" );


  }


   VULKAN_HPP_INLINE void CommandBuffer::buildAccelerationStructureNV( const VULKAN_HPP_NAMESPACE::AccelerationStructureInfoNV & info, VULKAN_HPP_NAMESPACE::Buffer instanceData, VULKAN_HPP_NAMESPACE::DeviceSize instanceOffset, VULKAN_HPP_NAMESPACE::Bool32 update, VULKAN_HPP_NAMESPACE::AccelerationStructureNV dst, VULKAN_HPP_NAMESPACE::AccelerationStructureNV src, VULKAN_HPP_NAMESPACE::Buffer scratch, VULKAN_HPP_NAMESPACE::DeviceSize scratchOffset ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBuildAccelerationStructureNV && "Function <vkCmdBuildAccelerationStructureNV> needs extension <VK_NV_ray_tracing> enabled!" );



    getDispatcher()->vkCmdBuildAccelerationStructureNV( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkAccelerationStructureInfoNV *>( &info ), static_cast<VkBuffer>( instanceData ), static_cast<VkDeviceSize>( instanceOffset ), static_cast<VkBool32>( update ), static_cast<VkAccelerationStructureNV>( dst ), static_cast<VkAccelerationStructureNV>( src ), static_cast<VkBuffer>( scratch ), static_cast<VkDeviceSize>( scratchOffset ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyAccelerationStructureNV( VULKAN_HPP_NAMESPACE::AccelerationStructureNV dst, VULKAN_HPP_NAMESPACE::AccelerationStructureNV src, VULKAN_HPP_NAMESPACE::CopyAccelerationStructureModeKHR mode ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdCopyAccelerationStructureNV && "Function <vkCmdCopyAccelerationStructureNV> needs extension <VK_NV_ray_tracing> enabled!" );



    getDispatcher()->vkCmdCopyAccelerationStructureNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkAccelerationStructureNV>( dst ), static_cast<VkAccelerationStructureNV>( src ), static_cast<VkCopyAccelerationStructureModeKHR>( mode ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::traceRaysNV( VULKAN_HPP_NAMESPACE::Buffer raygenShaderBindingTableBuffer, VULKAN_HPP_NAMESPACE::DeviceSize raygenShaderBindingOffset, VULKAN_HPP_NAMESPACE::Buffer missShaderBindingTableBuffer, VULKAN_HPP_NAMESPACE::DeviceSize missShaderBindingOffset, VULKAN_HPP_NAMESPACE::DeviceSize missShaderBindingStride, VULKAN_HPP_NAMESPACE::Buffer hitShaderBindingTableBuffer, VULKAN_HPP_NAMESPACE::DeviceSize hitShaderBindingOffset, VULKAN_HPP_NAMESPACE::DeviceSize hitShaderBindingStride, VULKAN_HPP_NAMESPACE::Buffer callableShaderBindingTableBuffer, VULKAN_HPP_NAMESPACE::DeviceSize callableShaderBindingOffset, VULKAN_HPP_NAMESPACE::DeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdTraceRaysNV && "Function <vkCmdTraceRaysNV> needs extension <VK_NV_ray_tracing> enabled!" );



    getDispatcher()->vkCmdTraceRaysNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( raygenShaderBindingTableBuffer ), static_cast<VkDeviceSize>( raygenShaderBindingOffset ), static_cast<VkBuffer>( missShaderBindingTableBuffer ), static_cast<VkDeviceSize>( missShaderBindingOffset ), static_cast<VkDeviceSize>( missShaderBindingStride ), static_cast<VkBuffer>( hitShaderBindingTableBuffer ), static_cast<VkDeviceSize>( hitShaderBindingOffset ), static_cast<VkDeviceSize>( hitShaderBindingStride ), static_cast<VkBuffer>( callableShaderBindingTableBuffer ), static_cast<VkDeviceSize>( callableShaderBindingOffset ), static_cast<VkDeviceSize>( callableShaderBindingStride ), width, height, depth );



  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE std::vector<VULKAN_HPP_RAII_NAMESPACE::Pipeline> Device::createRayTracingPipelinesNV( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoNV> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Pipelines( *this, pipelineCache, createInfos, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Pipeline Device::createRayTracingPipelineNV( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoNV const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Pipeline( *this, pipelineCache, createInfo, allocator );
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<DataType> Pipeline::getRayTracingShaderGroupHandlesNV( uint32_t firstGroup, uint32_t groupCount, size_t dataSize ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetRayTracingShaderGroupHandlesNV && "Function <vkGetRayTracingShaderGroupHandlesNV> needs extension <VK_NV_ray_tracing> enabled!" );

        VULKAN_HPP_ASSERT( dataSize % sizeof( DataType ) == 0 );
    std::vector<DataType> data( dataSize / sizeof( DataType ) );
    VkResult result = getDispatcher()->vkGetRayTracingShaderGroupHandlesNV( static_cast<VkDevice>( m_device ), static_cast<VkPipeline>( m_pipeline ), firstGroup, groupCount, data.size() * sizeof( DataType ), reinterpret_cast<void *>( data.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Pipeline::getRayTracingShaderGroupHandlesNV" );

    return data;
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE DataType Pipeline::getRayTracingShaderGroupHandleNV( uint32_t firstGroup, uint32_t groupCount ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetRayTracingShaderGroupHandlesNV && "Function <vkGetRayTracingShaderGroupHandlesNV> needs extension <VK_NV_ray_tracing> enabled!" );


    DataType data;
    VkResult result = getDispatcher()->vkGetRayTracingShaderGroupHandlesNV( static_cast<VkDevice>( m_device ), static_cast<VkPipeline>( m_pipeline ), firstGroup, groupCount, sizeof( DataType ), reinterpret_cast<void *>( &data ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Pipeline::getRayTracingShaderGroupHandleNV" );

    return data;
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<DataType> AccelerationStructureNV::getHandle( size_t dataSize ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetAccelerationStructureHandleNV && "Function <vkGetAccelerationStructureHandleNV> needs extension <VK_NV_ray_tracing> enabled!" );

        VULKAN_HPP_ASSERT( dataSize % sizeof( DataType ) == 0 );
    std::vector<DataType> data( dataSize / sizeof( DataType ) );
    VkResult result = getDispatcher()->vkGetAccelerationStructureHandleNV( static_cast<VkDevice>( m_device ), static_cast<VkAccelerationStructureNV>( m_accelerationStructure ), data.size() * sizeof( DataType ), reinterpret_cast<void *>( data.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::AccelerationStructureNV::getHandle" );

    return data;
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE DataType AccelerationStructureNV::getHandle(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetAccelerationStructureHandleNV && "Function <vkGetAccelerationStructureHandleNV> needs extension <VK_NV_ray_tracing> enabled!" );


    DataType data;
    VkResult result = getDispatcher()->vkGetAccelerationStructureHandleNV( static_cast<VkDevice>( m_device ), static_cast<VkAccelerationStructureNV>( m_accelerationStructure ), sizeof( DataType ), reinterpret_cast<void *>( &data ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::AccelerationStructureNV::getHandle" );

    return data;
  }


   VULKAN_HPP_INLINE void CommandBuffer::writeAccelerationStructuresPropertiesNV( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureNV> const & accelerationStructures, VULKAN_HPP_NAMESPACE::QueryType queryType, VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t firstQuery ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdWriteAccelerationStructuresPropertiesNV && "Function <vkCmdWriteAccelerationStructuresPropertiesNV> needs extension <VK_NV_ray_tracing> enabled!" );



    getDispatcher()->vkCmdWriteAccelerationStructuresPropertiesNV( static_cast<VkCommandBuffer>( m_commandBuffer ), accelerationStructures.size(), reinterpret_cast<const VkAccelerationStructureNV *>( accelerationStructures.data() ), static_cast<VkQueryType>( queryType ), static_cast<VkQueryPool>( queryPool ), firstQuery );



  }


   VULKAN_HPP_INLINE void Pipeline::compileDeferredNV( uint32_t shader ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCompileDeferredNV && "Function <vkCompileDeferredNV> needs extension <VK_NV_ray_tracing> enabled!" );



    VkResult result = getDispatcher()->vkCompileDeferredNV( static_cast<VkDevice>( m_device ), static_cast<VkPipeline>( m_pipeline ), shader );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Pipeline::compileDeferredNV" );


  }

  //=== VK_KHR_maintenance3 ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DescriptorSetLayoutSupport Device::getDescriptorSetLayoutSupportKHR( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo & createInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDescriptorSetLayoutSupportKHR && "Function <vkGetDescriptorSetLayoutSupportKHR> needs extension <VK_KHR_maintenance3> enabled!" );


    VULKAN_HPP_NAMESPACE::DescriptorSetLayoutSupport support;
    getDispatcher()->vkGetDescriptorSetLayoutSupportKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDescriptorSetLayoutCreateInfo *>( &createInfo ), reinterpret_cast<VkDescriptorSetLayoutSupport *>( &support ) );


    return support;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Device::getDescriptorSetLayoutSupportKHR( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo & createInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDescriptorSetLayoutSupportKHR && "Function <vkGetDescriptorSetLayoutSupportKHR> needs extension <VK_KHR_maintenance3> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::DescriptorSetLayoutSupport & support = structureChain.template get<VULKAN_HPP_NAMESPACE::DescriptorSetLayoutSupport>();
    getDispatcher()->vkGetDescriptorSetLayoutSupportKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDescriptorSetLayoutCreateInfo *>( &createInfo ), reinterpret_cast<VkDescriptorSetLayoutSupport *>( &support ) );


    return structureChain;
  }

  //=== VK_KHR_draw_indirect_count ===


   VULKAN_HPP_INLINE void CommandBuffer::drawIndirectCountKHR( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDrawIndirectCountKHR && "Function <vkCmdDrawIndirectCountKHR> needs extension <VK_KHR_draw_indirect_count> enabled!" );



    getDispatcher()->vkCmdDrawIndirectCountKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( buffer ), static_cast<VkDeviceSize>( offset ), static_cast<VkBuffer>( countBuffer ), static_cast<VkDeviceSize>( countBufferOffset ), maxDrawCount, stride );



  }


   VULKAN_HPP_INLINE void CommandBuffer::drawIndexedIndirectCountKHR( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDrawIndexedIndirectCountKHR && "Function <vkCmdDrawIndexedIndirectCountKHR> needs extension <VK_KHR_draw_indirect_count> enabled!" );



    getDispatcher()->vkCmdDrawIndexedIndirectCountKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( buffer ), static_cast<VkDeviceSize>( offset ), static_cast<VkBuffer>( countBuffer ), static_cast<VkDeviceSize>( countBufferOffset ), maxDrawCount, stride );



  }

  //=== VK_EXT_external_memory_host ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryHostPointerPropertiesEXT Device::getMemoryHostPointerPropertiesEXT( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType, const void * pHostPointer ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetMemoryHostPointerPropertiesEXT && "Function <vkGetMemoryHostPointerPropertiesEXT> needs extension <VK_EXT_external_memory_host> enabled!" );


    VULKAN_HPP_NAMESPACE::MemoryHostPointerPropertiesEXT memoryHostPointerProperties;
    VkResult result = getDispatcher()->vkGetMemoryHostPointerPropertiesEXT( static_cast<VkDevice>( m_device ), static_cast<VkExternalMemoryHandleTypeFlagBits>( handleType ), pHostPointer, reinterpret_cast<VkMemoryHostPointerPropertiesEXT *>( &memoryHostPointerProperties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getMemoryHostPointerPropertiesEXT" );

    return memoryHostPointerProperties;
  }

  //=== VK_AMD_buffer_marker ===


   VULKAN_HPP_INLINE void CommandBuffer::writeBufferMarkerAMD( VULKAN_HPP_NAMESPACE::PipelineStageFlagBits pipelineStage, VULKAN_HPP_NAMESPACE::Buffer dstBuffer, VULKAN_HPP_NAMESPACE::DeviceSize dstOffset, uint32_t marker ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdWriteBufferMarkerAMD && "Function <vkCmdWriteBufferMarkerAMD> needs extension <VK_AMD_buffer_marker> enabled!" );



    getDispatcher()->vkCmdWriteBufferMarkerAMD( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPipelineStageFlagBits>( pipelineStage ), static_cast<VkBuffer>( dstBuffer ), static_cast<VkDeviceSize>( dstOffset ), marker );



  }

  //=== VK_EXT_calibrated_timestamps ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::TimeDomainEXT> PhysicalDevice::getCalibrateableTimeDomainsEXT(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceCalibrateableTimeDomainsEXT && "Function <vkGetPhysicalDeviceCalibrateableTimeDomainsEXT> needs extension <VK_EXT_calibrated_timestamps> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::TimeDomainEXT> timeDomains;
    uint32_t timeDomainCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceCalibrateableTimeDomainsEXT( static_cast<VkPhysicalDevice>( m_physicalDevice ), &timeDomainCount, nullptr );
      if ( ( result == VK_SUCCESS ) && timeDomainCount )
      {
        timeDomains.resize( timeDomainCount );
        result = getDispatcher()->vkGetPhysicalDeviceCalibrateableTimeDomainsEXT( static_cast<VkPhysicalDevice>( m_physicalDevice ), &timeDomainCount, reinterpret_cast<VkTimeDomainEXT *>( timeDomains.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getCalibrateableTimeDomainsEXT" );
    VULKAN_HPP_ASSERT( timeDomainCount <= timeDomains.size() );
    if ( timeDomainCount < timeDomains.size() )
    {
      timeDomains.resize( timeDomainCount );
    }
    return timeDomains;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::pair<std::vector<uint64_t>, uint64_t> Device::getCalibratedTimestampsEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::CalibratedTimestampInfoEXT> const & timestampInfos ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetCalibratedTimestampsEXT && "Function <vkGetCalibratedTimestampsEXT> needs extension <VK_EXT_calibrated_timestamps> enabled!" );


    std::pair<std::vector<uint64_t>,uint64_t> data( std::piecewise_construct, std::forward_as_tuple( timestampInfos.size() ), std::forward_as_tuple( 0 ) );
    std::vector<uint64_t> & timestamps = data.first;
    uint64_t & maxDeviation = data.second;
    VkResult result = getDispatcher()->vkGetCalibratedTimestampsEXT( static_cast<VkDevice>( m_device ), timestampInfos.size(), reinterpret_cast<const VkCalibratedTimestampInfoEXT *>( timestampInfos.data() ), timestamps.data(), &maxDeviation );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getCalibratedTimestampsEXT" );

    return data;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::pair<uint64_t, uint64_t> Device::getCalibratedTimestampEXT( const VULKAN_HPP_NAMESPACE::CalibratedTimestampInfoEXT & timestampInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetCalibratedTimestampsEXT && "Function <vkGetCalibratedTimestampsEXT> needs extension <VK_EXT_calibrated_timestamps> enabled!" );


    std::pair<uint64_t,uint64_t> data;
    uint64_t & timestamp = data.first;
    uint64_t & maxDeviation = data.second;
    VkResult result = getDispatcher()->vkGetCalibratedTimestampsEXT( static_cast<VkDevice>( m_device ), 1, reinterpret_cast<const VkCalibratedTimestampInfoEXT *>( &timestampInfo ), &timestamp, &maxDeviation );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getCalibratedTimestampEXT" );

    return data;
  }

  //=== VK_NV_mesh_shader ===


   VULKAN_HPP_INLINE void CommandBuffer::drawMeshTasksNV( uint32_t taskCount, uint32_t firstTask ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDrawMeshTasksNV && "Function <vkCmdDrawMeshTasksNV> needs extension <VK_NV_mesh_shader> enabled!" );



    getDispatcher()->vkCmdDrawMeshTasksNV( static_cast<VkCommandBuffer>( m_commandBuffer ), taskCount, firstTask );



  }


   VULKAN_HPP_INLINE void CommandBuffer::drawMeshTasksIndirectNV( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, uint32_t drawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDrawMeshTasksIndirectNV && "Function <vkCmdDrawMeshTasksIndirectNV> needs extension <VK_NV_mesh_shader> enabled!" );



    getDispatcher()->vkCmdDrawMeshTasksIndirectNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( buffer ), static_cast<VkDeviceSize>( offset ), drawCount, stride );



  }


   VULKAN_HPP_INLINE void CommandBuffer::drawMeshTasksIndirectCountNV( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDrawMeshTasksIndirectCountNV && "Function <vkCmdDrawMeshTasksIndirectCountNV> needs extension <VK_NV_mesh_shader> enabled!" );



    getDispatcher()->vkCmdDrawMeshTasksIndirectCountNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( buffer ), static_cast<VkDeviceSize>( offset ), static_cast<VkBuffer>( countBuffer ), static_cast<VkDeviceSize>( countBufferOffset ), maxDrawCount, stride );



  }

  //=== VK_NV_scissor_exclusive ===


   VULKAN_HPP_INLINE void CommandBuffer::setExclusiveScissorNV( uint32_t firstExclusiveScissor, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & exclusiveScissors ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetExclusiveScissorNV && "Function <vkCmdSetExclusiveScissorNV> needs extension <VK_NV_scissor_exclusive> enabled!" );



    getDispatcher()->vkCmdSetExclusiveScissorNV( static_cast<VkCommandBuffer>( m_commandBuffer ), firstExclusiveScissor, exclusiveScissors.size(), reinterpret_cast<const VkRect2D *>( exclusiveScissors.data() ) );



  }

  //=== VK_NV_device_diagnostic_checkpoints ===

  template <typename CheckpointMarkerType>
   VULKAN_HPP_INLINE void CommandBuffer::setCheckpointNV( CheckpointMarkerType const & checkpointMarker ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetCheckpointNV && "Function <vkCmdSetCheckpointNV> needs extension <VK_NV_device_diagnostic_checkpoints> enabled!" );



    getDispatcher()->vkCmdSetCheckpointNV( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const void *>( &checkpointMarker ) );



  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::CheckpointDataNV> Queue::getCheckpointDataNV(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetQueueCheckpointDataNV && "Function <vkGetQueueCheckpointDataNV> needs extension <VK_NV_device_diagnostic_checkpoints> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::CheckpointDataNV> checkpointData;
    uint32_t checkpointDataCount;
    getDispatcher()->vkGetQueueCheckpointDataNV( static_cast<VkQueue>( m_queue ), &checkpointDataCount, nullptr );
    checkpointData.resize( checkpointDataCount );
    getDispatcher()->vkGetQueueCheckpointDataNV( static_cast<VkQueue>( m_queue ), &checkpointDataCount, reinterpret_cast<VkCheckpointDataNV *>( checkpointData.data() ) );

    VULKAN_HPP_ASSERT( checkpointDataCount <= checkpointData.size() );
    if ( checkpointDataCount < checkpointData.size() )
    {
      checkpointData.resize( checkpointDataCount );
    }
    return checkpointData;
  }

  //=== VK_KHR_timeline_semaphore ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE uint64_t Semaphore::getCounterValueKHR(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetSemaphoreCounterValueKHR && "Function <vkGetSemaphoreCounterValueKHR> needs extension <VK_KHR_timeline_semaphore> enabled!" );


    uint64_t value;
    VkResult result = getDispatcher()->vkGetSemaphoreCounterValueKHR( static_cast<VkDevice>( m_device ), static_cast<VkSemaphore>( m_semaphore ), &value );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Semaphore::getCounterValueKHR" );

    return value;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result Device::waitSemaphoresKHR( const VULKAN_HPP_NAMESPACE::SemaphoreWaitInfo & waitInfo, uint64_t timeout ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkWaitSemaphoresKHR && "Function <vkWaitSemaphoresKHR> needs extension <VK_KHR_timeline_semaphore> enabled!" );



    VkResult result = getDispatcher()->vkWaitSemaphoresKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkSemaphoreWaitInfo *>( &waitInfo ), timeout );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::waitSemaphoresKHR", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eTimeout } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }


   VULKAN_HPP_INLINE void Device::signalSemaphoreKHR( const VULKAN_HPP_NAMESPACE::SemaphoreSignalInfo & signalInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkSignalSemaphoreKHR && "Function <vkSignalSemaphoreKHR> needs extension <VK_KHR_timeline_semaphore> enabled!" );



    VkResult result = getDispatcher()->vkSignalSemaphoreKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkSemaphoreSignalInfo *>( &signalInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::signalSemaphoreKHR" );


  }

  //=== VK_INTEL_performance_query ===


   VULKAN_HPP_INLINE void Device::initializePerformanceApiINTEL( const VULKAN_HPP_NAMESPACE::InitializePerformanceApiInfoINTEL & initializeInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkInitializePerformanceApiINTEL && "Function <vkInitializePerformanceApiINTEL> needs extension <VK_INTEL_performance_query> enabled!" );



    VkResult result = getDispatcher()->vkInitializePerformanceApiINTEL( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkInitializePerformanceApiInfoINTEL *>( &initializeInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::initializePerformanceApiINTEL" );


  }


   VULKAN_HPP_INLINE void Device::uninitializePerformanceApiINTEL(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkUninitializePerformanceApiINTEL && "Function <vkUninitializePerformanceApiINTEL> needs extension <VK_INTEL_performance_query> enabled!" );



    getDispatcher()->vkUninitializePerformanceApiINTEL( static_cast<VkDevice>( m_device ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setPerformanceMarkerINTEL( const VULKAN_HPP_NAMESPACE::PerformanceMarkerInfoINTEL & markerInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetPerformanceMarkerINTEL && "Function <vkCmdSetPerformanceMarkerINTEL> needs extension <VK_INTEL_performance_query> enabled!" );



    VkResult result = getDispatcher()->vkCmdSetPerformanceMarkerINTEL( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkPerformanceMarkerInfoINTEL *>( &markerInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::setPerformanceMarkerINTEL" );


  }


   VULKAN_HPP_INLINE void CommandBuffer::setPerformanceStreamMarkerINTEL( const VULKAN_HPP_NAMESPACE::PerformanceStreamMarkerInfoINTEL & markerInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetPerformanceStreamMarkerINTEL && "Function <vkCmdSetPerformanceStreamMarkerINTEL> needs extension <VK_INTEL_performance_query> enabled!" );



    VkResult result = getDispatcher()->vkCmdSetPerformanceStreamMarkerINTEL( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkPerformanceStreamMarkerInfoINTEL *>( &markerInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::setPerformanceStreamMarkerINTEL" );


  }


   VULKAN_HPP_INLINE void CommandBuffer::setPerformanceOverrideINTEL( const VULKAN_HPP_NAMESPACE::PerformanceOverrideInfoINTEL & overrideInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetPerformanceOverrideINTEL && "Function <vkCmdSetPerformanceOverrideINTEL> needs extension <VK_INTEL_performance_query> enabled!" );



    VkResult result = getDispatcher()->vkCmdSetPerformanceOverrideINTEL( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkPerformanceOverrideInfoINTEL *>( &overrideInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::setPerformanceOverrideINTEL" );


  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::PerformanceConfigurationINTEL Device::acquirePerformanceConfigurationINTEL( VULKAN_HPP_NAMESPACE::PerformanceConfigurationAcquireInfoINTEL const & acquireInfo ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::PerformanceConfigurationINTEL( *this, acquireInfo );
  }


   VULKAN_HPP_INLINE void Queue::setPerformanceConfigurationINTEL( VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL configuration ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkQueueSetPerformanceConfigurationINTEL && "Function <vkQueueSetPerformanceConfigurationINTEL> needs extension <VK_INTEL_performance_query> enabled!" );



    VkResult result = getDispatcher()->vkQueueSetPerformanceConfigurationINTEL( static_cast<VkQueue>( m_queue ), static_cast<VkPerformanceConfigurationINTEL>( configuration ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Queue::setPerformanceConfigurationINTEL" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::PerformanceValueINTEL Device::getPerformanceParameterINTEL( VULKAN_HPP_NAMESPACE::PerformanceParameterTypeINTEL parameter ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPerformanceParameterINTEL && "Function <vkGetPerformanceParameterINTEL> needs extension <VK_INTEL_performance_query> enabled!" );


    VULKAN_HPP_NAMESPACE::PerformanceValueINTEL value;
    VkResult result = getDispatcher()->vkGetPerformanceParameterINTEL( static_cast<VkDevice>( m_device ), static_cast<VkPerformanceParameterTypeINTEL>( parameter ), reinterpret_cast<VkPerformanceValueINTEL *>( &value ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getPerformanceParameterINTEL" );

    return value;
  }

  //=== VK_AMD_display_native_hdr ===


   VULKAN_HPP_INLINE void SwapchainKHR::setLocalDimmingAMD( VULKAN_HPP_NAMESPACE::Bool32 localDimmingEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkSetLocalDimmingAMD && "Function <vkSetLocalDimmingAMD> needs extension <VK_AMD_display_native_hdr> enabled!" );



    getDispatcher()->vkSetLocalDimmingAMD( static_cast<VkDevice>( m_device ), static_cast<VkSwapchainKHR>( m_swapchain ), static_cast<VkBool32>( localDimmingEnable ) );



  }

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_imagepipe_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createImagePipeSurfaceFUCHSIA( VULKAN_HPP_NAMESPACE::ImagePipeSurfaceCreateInfoFUCHSIA const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_METAL_EXT )
  //=== VK_EXT_metal_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createMetalSurfaceEXT( VULKAN_HPP_NAMESPACE::MetalSurfaceCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }
#endif /*VK_USE_PLATFORM_METAL_EXT*/

  //=== VK_KHR_fragment_shading_rate ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceFragmentShadingRateKHR> PhysicalDevice::getFragmentShadingRatesKHR(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceFragmentShadingRatesKHR && "Function <vkGetPhysicalDeviceFragmentShadingRatesKHR> needs extension <VK_KHR_fragment_shading_rate> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceFragmentShadingRateKHR> fragmentShadingRates;
    uint32_t fragmentShadingRateCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceFragmentShadingRatesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), &fragmentShadingRateCount, nullptr );
      if ( ( result == VK_SUCCESS ) && fragmentShadingRateCount )
      {
        fragmentShadingRates.resize( fragmentShadingRateCount );
        result = getDispatcher()->vkGetPhysicalDeviceFragmentShadingRatesKHR( static_cast<VkPhysicalDevice>( m_physicalDevice ), &fragmentShadingRateCount, reinterpret_cast<VkPhysicalDeviceFragmentShadingRateKHR *>( fragmentShadingRates.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getFragmentShadingRatesKHR" );
    VULKAN_HPP_ASSERT( fragmentShadingRateCount <= fragmentShadingRates.size() );
    if ( fragmentShadingRateCount < fragmentShadingRates.size() )
    {
      fragmentShadingRates.resize( fragmentShadingRateCount );
    }
    return fragmentShadingRates;
  }


   VULKAN_HPP_INLINE void CommandBuffer::setFragmentShadingRateKHR( const VULKAN_HPP_NAMESPACE::Extent2D & fragmentSize, const VULKAN_HPP_NAMESPACE::FragmentShadingRateCombinerOpKHR combinerOps[2] ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetFragmentShadingRateKHR && "Function <vkCmdSetFragmentShadingRateKHR> needs extension <VK_KHR_fragment_shading_rate> enabled!" );



    getDispatcher()->vkCmdSetFragmentShadingRateKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkExtent2D *>( &fragmentSize ), reinterpret_cast<const VkFragmentShadingRateCombinerOpKHR *>( combinerOps ) );



  }

  //=== VK_EXT_buffer_device_address ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DeviceAddress Device::getBufferAddressEXT( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetBufferDeviceAddressEXT && "Function <vkGetBufferDeviceAddressEXT> needs extension <VK_EXT_buffer_device_address> enabled!" );



    VkDeviceAddress result = getDispatcher()->vkGetBufferDeviceAddressEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkBufferDeviceAddressInfo *>( &info ) );


    return static_cast<VULKAN_HPP_NAMESPACE::DeviceAddress>( result );
  }

  //=== VK_EXT_tooling_info ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties> PhysicalDevice::getToolPropertiesEXT(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceToolPropertiesEXT && "Function <vkGetPhysicalDeviceToolPropertiesEXT> needs extension <VK_EXT_tooling_info> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties> toolProperties;
    uint32_t toolCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceToolPropertiesEXT( static_cast<VkPhysicalDevice>( m_physicalDevice ), &toolCount, nullptr );
      if ( ( result == VK_SUCCESS ) && toolCount )
      {
        toolProperties.resize( toolCount );
        result = getDispatcher()->vkGetPhysicalDeviceToolPropertiesEXT( static_cast<VkPhysicalDevice>( m_physicalDevice ), &toolCount, reinterpret_cast<VkPhysicalDeviceToolProperties *>( toolProperties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getToolPropertiesEXT" );
    VULKAN_HPP_ASSERT( toolCount <= toolProperties.size() );
    if ( toolCount < toolProperties.size() )
    {
      toolProperties.resize( toolCount );
    }
    return toolProperties;
  }

  //=== VK_KHR_present_wait ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result SwapchainKHR::waitForPresent( uint64_t presentId, uint64_t timeout ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkWaitForPresentKHR && "Function <vkWaitForPresentKHR> needs extension <VK_KHR_present_wait> enabled!" );



    VkResult result = getDispatcher()->vkWaitForPresentKHR( static_cast<VkDevice>( m_device ), static_cast<VkSwapchainKHR>( m_swapchain ), presentId, timeout );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::SwapchainKHR::waitForPresent", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eTimeout, VULKAN_HPP_NAMESPACE::Result::eSuboptimalKHR } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }

  //=== VK_NV_cooperative_matrix ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::CooperativeMatrixPropertiesNV> PhysicalDevice::getCooperativeMatrixPropertiesNV(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceCooperativeMatrixPropertiesNV && "Function <vkGetPhysicalDeviceCooperativeMatrixPropertiesNV> needs extension <VK_NV_cooperative_matrix> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::CooperativeMatrixPropertiesNV> properties;
    uint32_t propertyCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceCooperativeMatrixPropertiesNV( static_cast<VkPhysicalDevice>( m_physicalDevice ), &propertyCount, nullptr );
      if ( ( result == VK_SUCCESS ) && propertyCount )
      {
        properties.resize( propertyCount );
        result = getDispatcher()->vkGetPhysicalDeviceCooperativeMatrixPropertiesNV( static_cast<VkPhysicalDevice>( m_physicalDevice ), &propertyCount, reinterpret_cast<VkCooperativeMatrixPropertiesNV *>( properties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getCooperativeMatrixPropertiesNV" );
    VULKAN_HPP_ASSERT( propertyCount <= properties.size() );
    if ( propertyCount < properties.size() )
    {
      properties.resize( propertyCount );
    }
    return properties;
  }

  //=== VK_NV_coverage_reduction_mode ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::FramebufferMixedSamplesCombinationNV> PhysicalDevice::getSupportedFramebufferMixedSamplesCombinationsNV(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV && "Function <vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV> needs extension <VK_NV_coverage_reduction_mode> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::FramebufferMixedSamplesCombinationNV> combinations;
    uint32_t combinationCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV( static_cast<VkPhysicalDevice>( m_physicalDevice ), &combinationCount, nullptr );
      if ( ( result == VK_SUCCESS ) && combinationCount )
      {
        combinations.resize( combinationCount );
        result = getDispatcher()->vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV( static_cast<VkPhysicalDevice>( m_physicalDevice ), &combinationCount, reinterpret_cast<VkFramebufferMixedSamplesCombinationNV *>( combinations.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getSupportedFramebufferMixedSamplesCombinationsNV" );
    VULKAN_HPP_ASSERT( combinationCount <= combinations.size() );
    if ( combinationCount < combinations.size() )
    {
      combinations.resize( combinationCount );
    }
    return combinations;
  }

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_EXT_full_screen_exclusive ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::PresentModeKHR> PhysicalDevice::getSurfacePresentModes2EXT( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceSurfacePresentModes2EXT && "Function <vkGetPhysicalDeviceSurfacePresentModes2EXT> needs extension <VK_EXT_full_screen_exclusive> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::PresentModeKHR> presentModes;
    uint32_t presentModeCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceSurfacePresentModes2EXT( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceSurfaceInfo2KHR *>( &surfaceInfo ), &presentModeCount, nullptr );
      if ( ( result == VK_SUCCESS ) && presentModeCount )
      {
        presentModes.resize( presentModeCount );
        result = getDispatcher()->vkGetPhysicalDeviceSurfacePresentModes2EXT( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkPhysicalDeviceSurfaceInfo2KHR *>( &surfaceInfo ), &presentModeCount, reinterpret_cast<VkPresentModeKHR *>( presentModes.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getSurfacePresentModes2EXT" );
    VULKAN_HPP_ASSERT( presentModeCount <= presentModes.size() );
    if ( presentModeCount < presentModes.size() )
    {
      presentModes.resize( presentModeCount );
    }
    return presentModes;
  }


   VULKAN_HPP_INLINE void SwapchainKHR::acquireFullScreenExclusiveModeEXT(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkAcquireFullScreenExclusiveModeEXT && "Function <vkAcquireFullScreenExclusiveModeEXT> needs extension <VK_EXT_full_screen_exclusive> enabled!" );



    VkResult result = getDispatcher()->vkAcquireFullScreenExclusiveModeEXT( static_cast<VkDevice>( m_device ), static_cast<VkSwapchainKHR>( m_swapchain ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::SwapchainKHR::acquireFullScreenExclusiveModeEXT" );


  }


   VULKAN_HPP_INLINE void SwapchainKHR::releaseFullScreenExclusiveModeEXT(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkReleaseFullScreenExclusiveModeEXT && "Function <vkReleaseFullScreenExclusiveModeEXT> needs extension <VK_EXT_full_screen_exclusive> enabled!" );



    VkResult result = getDispatcher()->vkReleaseFullScreenExclusiveModeEXT( static_cast<VkDevice>( m_device ), static_cast<VkSwapchainKHR>( m_swapchain ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::SwapchainKHR::releaseFullScreenExclusiveModeEXT" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DeviceGroupPresentModeFlagsKHR Device::getGroupSurfacePresentModes2EXT( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeviceGroupSurfacePresentModes2EXT && "Function <vkGetDeviceGroupSurfacePresentModes2EXT> needs extension <VK_EXT_full_screen_exclusive> enabled!" );


    VULKAN_HPP_NAMESPACE::DeviceGroupPresentModeFlagsKHR modes;
    VkResult result = getDispatcher()->vkGetDeviceGroupSurfacePresentModes2EXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkPhysicalDeviceSurfaceInfo2KHR *>( &surfaceInfo ), reinterpret_cast<VkDeviceGroupPresentModeFlagsKHR *>( &modes ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getGroupSurfacePresentModes2EXT" );

    return modes;
  }
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_EXT_headless_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createHeadlessSurfaceEXT( VULKAN_HPP_NAMESPACE::HeadlessSurfaceCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }

  //=== VK_KHR_buffer_device_address ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DeviceAddress Device::getBufferAddressKHR( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetBufferDeviceAddressKHR && "Function <vkGetBufferDeviceAddressKHR> needs extension <VK_KHR_buffer_device_address> enabled!" );



    VkDeviceAddress result = getDispatcher()->vkGetBufferDeviceAddressKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkBufferDeviceAddressInfo *>( &info ) );


    return static_cast<VULKAN_HPP_NAMESPACE::DeviceAddress>( result );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE uint64_t Device::getBufferOpaqueCaptureAddressKHR( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetBufferOpaqueCaptureAddressKHR && "Function <vkGetBufferOpaqueCaptureAddressKHR> needs extension <VK_KHR_buffer_device_address> enabled!" );



    uint64_t result = getDispatcher()->vkGetBufferOpaqueCaptureAddressKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkBufferDeviceAddressInfo *>( &info ) );


    return result;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE uint64_t Device::getMemoryOpaqueCaptureAddressKHR( const VULKAN_HPP_NAMESPACE::DeviceMemoryOpaqueCaptureAddressInfo & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeviceMemoryOpaqueCaptureAddressKHR && "Function <vkGetDeviceMemoryOpaqueCaptureAddressKHR> needs extension <VK_KHR_buffer_device_address> enabled!" );



    uint64_t result = getDispatcher()->vkGetDeviceMemoryOpaqueCaptureAddressKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDeviceMemoryOpaqueCaptureAddressInfo *>( &info ) );


    return result;
  }

  //=== VK_EXT_line_rasterization ===


   VULKAN_HPP_INLINE void CommandBuffer::setLineStippleEXT( uint32_t lineStippleFactor, uint16_t lineStipplePattern ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetLineStippleEXT && "Function <vkCmdSetLineStippleEXT> needs extension <VK_EXT_line_rasterization> enabled!" );



    getDispatcher()->vkCmdSetLineStippleEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), lineStippleFactor, lineStipplePattern );



  }

  //=== VK_EXT_host_query_reset ===


   VULKAN_HPP_INLINE void QueryPool::resetEXT( uint32_t firstQuery, uint32_t queryCount ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkResetQueryPoolEXT && "Function <vkResetQueryPoolEXT> needs extension <VK_EXT_host_query_reset> enabled!" );



    getDispatcher()->vkResetQueryPoolEXT( static_cast<VkDevice>( m_device ), static_cast<VkQueryPool>( m_queryPool ), firstQuery, queryCount );



  }

  //=== VK_EXT_extended_dynamic_state ===


   VULKAN_HPP_INLINE void CommandBuffer::setCullModeEXT( VULKAN_HPP_NAMESPACE::CullModeFlags cullMode ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetCullModeEXT && "Function <vkCmdSetCullModeEXT> needs extension <VK_EXT_extended_dynamic_state> enabled!" );



    getDispatcher()->vkCmdSetCullModeEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkCullModeFlags>( cullMode ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setFrontFaceEXT( VULKAN_HPP_NAMESPACE::FrontFace frontFace ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetFrontFaceEXT && "Function <vkCmdSetFrontFaceEXT> needs extension <VK_EXT_extended_dynamic_state> enabled!" );



    getDispatcher()->vkCmdSetFrontFaceEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkFrontFace>( frontFace ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setPrimitiveTopologyEXT( VULKAN_HPP_NAMESPACE::PrimitiveTopology primitiveTopology ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetPrimitiveTopologyEXT && "Function <vkCmdSetPrimitiveTopologyEXT> needs extension <VK_EXT_extended_dynamic_state> enabled!" );



    getDispatcher()->vkCmdSetPrimitiveTopologyEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPrimitiveTopology>( primitiveTopology ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setViewportWithCountEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Viewport> const & viewports ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetViewportWithCountEXT && "Function <vkCmdSetViewportWithCountEXT> needs extension <VK_EXT_extended_dynamic_state> enabled!" );



    getDispatcher()->vkCmdSetViewportWithCountEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), viewports.size(), reinterpret_cast<const VkViewport *>( viewports.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setScissorWithCountEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & scissors ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetScissorWithCountEXT && "Function <vkCmdSetScissorWithCountEXT> needs extension <VK_EXT_extended_dynamic_state> enabled!" );



    getDispatcher()->vkCmdSetScissorWithCountEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), scissors.size(), reinterpret_cast<const VkRect2D *>( scissors.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::bindVertexBuffers2EXT( uint32_t firstBinding, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const & buffers, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & offsets, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & sizes, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & strides ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBindVertexBuffers2EXT && "Function <vkCmdBindVertexBuffers2EXT> needs extension <VK_EXT_extended_dynamic_state> enabled!" );
    if ( buffers.size() != offsets.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::bindVertexBuffers2EXT: buffers.size() != offsets.size()" );
  }
    if ( !sizes.empty() && buffers.size() != sizes.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::bindVertexBuffers2EXT: buffers.size() != sizes.size()" );
  }
    if ( !strides.empty() && buffers.size() != strides.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::bindVertexBuffers2EXT: buffers.size() != strides.size()" );
  }



    getDispatcher()->vkCmdBindVertexBuffers2EXT( static_cast<VkCommandBuffer>( m_commandBuffer ), firstBinding, buffers.size(), reinterpret_cast<const VkBuffer *>( buffers.data() ), reinterpret_cast<const VkDeviceSize *>( offsets.data() ), reinterpret_cast<const VkDeviceSize *>( sizes.data() ), reinterpret_cast<const VkDeviceSize *>( strides.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthTestEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthTestEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetDepthTestEnableEXT && "Function <vkCmdSetDepthTestEnableEXT> needs extension <VK_EXT_extended_dynamic_state> enabled!" );



    getDispatcher()->vkCmdSetDepthTestEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( depthTestEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthWriteEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthWriteEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetDepthWriteEnableEXT && "Function <vkCmdSetDepthWriteEnableEXT> needs extension <VK_EXT_extended_dynamic_state> enabled!" );



    getDispatcher()->vkCmdSetDepthWriteEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( depthWriteEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthCompareOpEXT( VULKAN_HPP_NAMESPACE::CompareOp depthCompareOp ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetDepthCompareOpEXT && "Function <vkCmdSetDepthCompareOpEXT> needs extension <VK_EXT_extended_dynamic_state> enabled!" );



    getDispatcher()->vkCmdSetDepthCompareOpEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkCompareOp>( depthCompareOp ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthBoundsTestEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthBoundsTestEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetDepthBoundsTestEnableEXT && "Function <vkCmdSetDepthBoundsTestEnableEXT> needs extension <VK_EXT_extended_dynamic_state> enabled!" );



    getDispatcher()->vkCmdSetDepthBoundsTestEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( depthBoundsTestEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setStencilTestEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 stencilTestEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetStencilTestEnableEXT && "Function <vkCmdSetStencilTestEnableEXT> needs extension <VK_EXT_extended_dynamic_state> enabled!" );



    getDispatcher()->vkCmdSetStencilTestEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( stencilTestEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setStencilOpEXT( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask, VULKAN_HPP_NAMESPACE::StencilOp failOp, VULKAN_HPP_NAMESPACE::StencilOp passOp, VULKAN_HPP_NAMESPACE::StencilOp depthFailOp, VULKAN_HPP_NAMESPACE::CompareOp compareOp ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetStencilOpEXT && "Function <vkCmdSetStencilOpEXT> needs extension <VK_EXT_extended_dynamic_state> enabled!" );



    getDispatcher()->vkCmdSetStencilOpEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkStencilFaceFlags>( faceMask ), static_cast<VkStencilOp>( failOp ), static_cast<VkStencilOp>( passOp ), static_cast<VkStencilOp>( depthFailOp ), static_cast<VkCompareOp>( compareOp ) );



  }

  //=== VK_KHR_deferred_host_operations ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::DeferredOperationKHR Device::createDeferredOperationKHR( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::DeferredOperationKHR( *this, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE uint32_t DeferredOperationKHR::getMaxConcurrency(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeferredOperationMaxConcurrencyKHR && "Function <vkGetDeferredOperationMaxConcurrencyKHR> needs extension <VK_KHR_deferred_host_operations> enabled!" );



    uint32_t result = getDispatcher()->vkGetDeferredOperationMaxConcurrencyKHR( static_cast<VkDevice>( m_device ), static_cast<VkDeferredOperationKHR>( m_operation ) );


    return result;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result DeferredOperationKHR::getResult(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeferredOperationResultKHR && "Function <vkGetDeferredOperationResultKHR> needs extension <VK_KHR_deferred_host_operations> enabled!" );



    VkResult result = getDispatcher()->vkGetDeferredOperationResultKHR( static_cast<VkDevice>( m_device ), static_cast<VkDeferredOperationKHR>( m_operation ) );


    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result DeferredOperationKHR::join(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkDeferredOperationJoinKHR && "Function <vkDeferredOperationJoinKHR> needs extension <VK_KHR_deferred_host_operations> enabled!" );



    VkResult result = getDispatcher()->vkDeferredOperationJoinKHR( static_cast<VkDevice>( m_device ), static_cast<VkDeferredOperationKHR>( m_operation ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::DeferredOperationKHR::join", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eThreadDoneKHR, VULKAN_HPP_NAMESPACE::Result::eThreadIdleKHR } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }

  //=== VK_KHR_pipeline_executable_properties ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutablePropertiesKHR> Device::getPipelineExecutablePropertiesKHR( const VULKAN_HPP_NAMESPACE::PipelineInfoKHR & pipelineInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPipelineExecutablePropertiesKHR && "Function <vkGetPipelineExecutablePropertiesKHR> needs extension <VK_KHR_pipeline_executable_properties> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutablePropertiesKHR> properties;
    uint32_t executableCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPipelineExecutablePropertiesKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkPipelineInfoKHR *>( &pipelineInfo ), &executableCount, nullptr );
      if ( ( result == VK_SUCCESS ) && executableCount )
      {
        properties.resize( executableCount );
        result = getDispatcher()->vkGetPipelineExecutablePropertiesKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkPipelineInfoKHR *>( &pipelineInfo ), &executableCount, reinterpret_cast<VkPipelineExecutablePropertiesKHR *>( properties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getPipelineExecutablePropertiesKHR" );
    VULKAN_HPP_ASSERT( executableCount <= properties.size() );
    if ( executableCount < properties.size() )
    {
      properties.resize( executableCount );
    }
    return properties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutableStatisticKHR> Device::getPipelineExecutableStatisticsKHR( const VULKAN_HPP_NAMESPACE::PipelineExecutableInfoKHR & executableInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPipelineExecutableStatisticsKHR && "Function <vkGetPipelineExecutableStatisticsKHR> needs extension <VK_KHR_pipeline_executable_properties> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutableStatisticKHR> statistics;
    uint32_t statisticCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPipelineExecutableStatisticsKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkPipelineExecutableInfoKHR *>( &executableInfo ), &statisticCount, nullptr );
      if ( ( result == VK_SUCCESS ) && statisticCount )
      {
        statistics.resize( statisticCount );
        result = getDispatcher()->vkGetPipelineExecutableStatisticsKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkPipelineExecutableInfoKHR *>( &executableInfo ), &statisticCount, reinterpret_cast<VkPipelineExecutableStatisticKHR *>( statistics.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getPipelineExecutableStatisticsKHR" );
    VULKAN_HPP_ASSERT( statisticCount <= statistics.size() );
    if ( statisticCount < statistics.size() )
    {
      statistics.resize( statisticCount );
    }
    return statistics;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutableInternalRepresentationKHR> Device::getPipelineExecutableInternalRepresentationsKHR( const VULKAN_HPP_NAMESPACE::PipelineExecutableInfoKHR & executableInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPipelineExecutableInternalRepresentationsKHR && "Function <vkGetPipelineExecutableInternalRepresentationsKHR> needs extension <VK_KHR_pipeline_executable_properties> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutableInternalRepresentationKHR> internalRepresentations;
    uint32_t internalRepresentationCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPipelineExecutableInternalRepresentationsKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkPipelineExecutableInfoKHR *>( &executableInfo ), &internalRepresentationCount, nullptr );
      if ( ( result == VK_SUCCESS ) && internalRepresentationCount )
      {
        internalRepresentations.resize( internalRepresentationCount );
        result = getDispatcher()->vkGetPipelineExecutableInternalRepresentationsKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkPipelineExecutableInfoKHR *>( &executableInfo ), &internalRepresentationCount, reinterpret_cast<VkPipelineExecutableInternalRepresentationKHR *>( internalRepresentations.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getPipelineExecutableInternalRepresentationsKHR" );
    VULKAN_HPP_ASSERT( internalRepresentationCount <= internalRepresentations.size() );
    if ( internalRepresentationCount < internalRepresentations.size() )
    {
      internalRepresentations.resize( internalRepresentationCount );
    }
    return internalRepresentations;
  }

  //=== VK_EXT_swapchain_maintenance1 ===


   VULKAN_HPP_INLINE void Device::releaseSwapchainImagesEXT( const VULKAN_HPP_NAMESPACE::ReleaseSwapchainImagesInfoEXT & releaseInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkReleaseSwapchainImagesEXT && "Function <vkReleaseSwapchainImagesEXT> needs extension <VK_EXT_swapchain_maintenance1> enabled!" );



    VkResult result = getDispatcher()->vkReleaseSwapchainImagesEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkReleaseSwapchainImagesInfoEXT *>( &releaseInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::releaseSwapchainImagesEXT" );


  }

  //=== VK_NV_device_generated_commands ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryRequirements2 Device::getGeneratedCommandsMemoryRequirementsNV( const VULKAN_HPP_NAMESPACE::GeneratedCommandsMemoryRequirementsInfoNV & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetGeneratedCommandsMemoryRequirementsNV && "Function <vkGetGeneratedCommandsMemoryRequirementsNV> needs extension <VK_NV_device_generated_commands> enabled!" );


    VULKAN_HPP_NAMESPACE::MemoryRequirements2 memoryRequirements;
    getDispatcher()->vkGetGeneratedCommandsMemoryRequirementsNV( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkGeneratedCommandsMemoryRequirementsInfoNV *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return memoryRequirements;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Device::getGeneratedCommandsMemoryRequirementsNV( const VULKAN_HPP_NAMESPACE::GeneratedCommandsMemoryRequirementsInfoNV & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetGeneratedCommandsMemoryRequirementsNV && "Function <vkGetGeneratedCommandsMemoryRequirementsNV> needs extension <VK_NV_device_generated_commands> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::MemoryRequirements2 & memoryRequirements = structureChain.template get<VULKAN_HPP_NAMESPACE::MemoryRequirements2>();
    getDispatcher()->vkGetGeneratedCommandsMemoryRequirementsNV( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkGeneratedCommandsMemoryRequirementsInfoNV *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return structureChain;
  }


   VULKAN_HPP_INLINE void CommandBuffer::preprocessGeneratedCommandsNV( const VULKAN_HPP_NAMESPACE::GeneratedCommandsInfoNV & generatedCommandsInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdPreprocessGeneratedCommandsNV && "Function <vkCmdPreprocessGeneratedCommandsNV> needs extension <VK_NV_device_generated_commands> enabled!" );



    getDispatcher()->vkCmdPreprocessGeneratedCommandsNV( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkGeneratedCommandsInfoNV *>( &generatedCommandsInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::executeGeneratedCommandsNV( VULKAN_HPP_NAMESPACE::Bool32 isPreprocessed, const VULKAN_HPP_NAMESPACE::GeneratedCommandsInfoNV & generatedCommandsInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdExecuteGeneratedCommandsNV && "Function <vkCmdExecuteGeneratedCommandsNV> needs extension <VK_NV_device_generated_commands> enabled!" );



    getDispatcher()->vkCmdExecuteGeneratedCommandsNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( isPreprocessed ), reinterpret_cast<const VkGeneratedCommandsInfoNV *>( &generatedCommandsInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::bindPipelineShaderGroupNV( VULKAN_HPP_NAMESPACE::PipelineBindPoint pipelineBindPoint, VULKAN_HPP_NAMESPACE::Pipeline pipeline, uint32_t groupIndex ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBindPipelineShaderGroupNV && "Function <vkCmdBindPipelineShaderGroupNV> needs extension <VK_NV_device_generated_commands> enabled!" );



    getDispatcher()->vkCmdBindPipelineShaderGroupNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPipelineBindPoint>( pipelineBindPoint ), static_cast<VkPipeline>( pipeline ), groupIndex );



  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::IndirectCommandsLayoutNV Device::createIndirectCommandsLayoutNV( VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutCreateInfoNV const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::IndirectCommandsLayoutNV( *this, createInfo, allocator );
  }

  //=== VK_EXT_acquire_drm_display ===


   VULKAN_HPP_INLINE void PhysicalDevice::acquireDrmDisplayEXT( int32_t drmFd, VULKAN_HPP_NAMESPACE::DisplayKHR display ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkAcquireDrmDisplayEXT && "Function <vkAcquireDrmDisplayEXT> needs extension <VK_EXT_acquire_drm_display> enabled!" );



    VkResult result = getDispatcher()->vkAcquireDrmDisplayEXT( static_cast<VkPhysicalDevice>( m_physicalDevice ), drmFd, static_cast<VkDisplayKHR>( display ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::acquireDrmDisplayEXT" );


  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::DisplayKHR PhysicalDevice::getDrmDisplayEXT( int32_t drmFd, uint32_t connectorId ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::DisplayKHR( *this, drmFd, connectorId );
  }

  //=== VK_EXT_private_data ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::PrivateDataSlot Device::createPrivateDataSlotEXT( VULKAN_HPP_NAMESPACE::PrivateDataSlotCreateInfo const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::PrivateDataSlot( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void Device::destroyPrivateDataSlotEXT( VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot, Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkDestroyPrivateDataSlotEXT && "Function <vkDestroyPrivateDataSlotEXT> needs extension <VK_EXT_private_data> enabled!" );



    getDispatcher()->vkDestroyPrivateDataSlotEXT( static_cast<VkDevice>( m_device ), static_cast<VkPrivateDataSlot>( privateDataSlot ), reinterpret_cast<const VkAllocationCallbacks *>( static_cast<const VULKAN_HPP_NAMESPACE::AllocationCallbacks *>( allocator ) ) );



  }


   VULKAN_HPP_INLINE void Device::setPrivateDataEXT( VULKAN_HPP_NAMESPACE::ObjectType objectType_, uint64_t objectHandle, VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot, uint64_t data ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkSetPrivateDataEXT && "Function <vkSetPrivateDataEXT> needs extension <VK_EXT_private_data> enabled!" );



    VkResult result = getDispatcher()->vkSetPrivateDataEXT( static_cast<VkDevice>( m_device ), static_cast<VkObjectType>( objectType_ ), objectHandle, static_cast<VkPrivateDataSlot>( privateDataSlot ), data );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::setPrivateDataEXT" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE uint64_t Device::getPrivateDataEXT( VULKAN_HPP_NAMESPACE::ObjectType objectType_, uint64_t objectHandle, VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPrivateDataEXT && "Function <vkGetPrivateDataEXT> needs extension <VK_EXT_private_data> enabled!" );


    uint64_t data;
    getDispatcher()->vkGetPrivateDataEXT( static_cast<VkDevice>( m_device ), static_cast<VkObjectType>( objectType_ ), objectHandle, static_cast<VkPrivateDataSlot>( privateDataSlot ), &data );


    return data;
  }

#if defined( VK_ENABLE_BETA_EXTENSIONS )
  //=== VK_KHR_video_encode_queue ===


   VULKAN_HPP_INLINE void CommandBuffer::encodeVideoKHR( const VULKAN_HPP_NAMESPACE::VideoEncodeInfoKHR & encodeInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdEncodeVideoKHR && "Function <vkCmdEncodeVideoKHR> needs extension <VK_KHR_video_encode_queue> enabled!" );



    getDispatcher()->vkCmdEncodeVideoKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkVideoEncodeInfoKHR *>( &encodeInfo ) );



  }
#endif /*VK_ENABLE_BETA_EXTENSIONS*/

#if defined( VK_USE_PLATFORM_METAL_EXT )
  //=== VK_EXT_metal_objects ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ExportMetalObjectsInfoEXT Device::exportMetalObjectsEXT(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkExportMetalObjectsEXT && "Function <vkExportMetalObjectsEXT> needs extension <VK_EXT_metal_objects> enabled!" );


    VULKAN_HPP_NAMESPACE::ExportMetalObjectsInfoEXT metalObjectsInfo;
    getDispatcher()->vkExportMetalObjectsEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<VkExportMetalObjectsInfoEXT *>( &metalObjectsInfo ) );


    return metalObjectsInfo;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Device::exportMetalObjectsEXT(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkExportMetalObjectsEXT && "Function <vkExportMetalObjectsEXT> needs extension <VK_EXT_metal_objects> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::ExportMetalObjectsInfoEXT & metalObjectsInfo = structureChain.template get<VULKAN_HPP_NAMESPACE::ExportMetalObjectsInfoEXT>();
    getDispatcher()->vkExportMetalObjectsEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<VkExportMetalObjectsInfoEXT *>( &metalObjectsInfo ) );


    return structureChain;
  }
#endif /*VK_USE_PLATFORM_METAL_EXT*/

  //=== VK_KHR_synchronization2 ===


   VULKAN_HPP_INLINE void CommandBuffer::setEvent2KHR( VULKAN_HPP_NAMESPACE::Event event, const VULKAN_HPP_NAMESPACE::DependencyInfo & dependencyInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetEvent2KHR && "Function <vkCmdSetEvent2KHR> needs extension <VK_KHR_synchronization2> enabled!" );



    getDispatcher()->vkCmdSetEvent2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkEvent>( event ), reinterpret_cast<const VkDependencyInfo *>( &dependencyInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::resetEvent2KHR( VULKAN_HPP_NAMESPACE::Event event, VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stageMask ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdResetEvent2KHR && "Function <vkCmdResetEvent2KHR> needs extension <VK_KHR_synchronization2> enabled!" );



    getDispatcher()->vkCmdResetEvent2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkEvent>( event ), static_cast<VkPipelineStageFlags2>( stageMask ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::waitEvents2KHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Event> const & events, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DependencyInfo> const & dependencyInfos ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdWaitEvents2KHR && "Function <vkCmdWaitEvents2KHR> needs extension <VK_KHR_synchronization2> enabled!" );
    if ( events.size() != dependencyInfos.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::waitEvents2KHR: events.size() != dependencyInfos.size()" );
  }



    getDispatcher()->vkCmdWaitEvents2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), events.size(), reinterpret_cast<const VkEvent *>( events.data() ), reinterpret_cast<const VkDependencyInfo *>( dependencyInfos.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::pipelineBarrier2KHR( const VULKAN_HPP_NAMESPACE::DependencyInfo & dependencyInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdPipelineBarrier2KHR && "Function <vkCmdPipelineBarrier2KHR> needs extension <VK_KHR_synchronization2> enabled!" );



    getDispatcher()->vkCmdPipelineBarrier2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkDependencyInfo *>( &dependencyInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::writeTimestamp2KHR( VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stage, VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t query ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdWriteTimestamp2KHR && "Function <vkCmdWriteTimestamp2KHR> needs extension <VK_KHR_synchronization2> enabled!" );



    getDispatcher()->vkCmdWriteTimestamp2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPipelineStageFlags2>( stage ), static_cast<VkQueryPool>( queryPool ), query );



  }


   VULKAN_HPP_INLINE void Queue::submit2KHR( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::SubmitInfo2> const & submits, VULKAN_HPP_NAMESPACE::Fence fence ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkQueueSubmit2KHR && "Function <vkQueueSubmit2KHR> needs extension <VK_KHR_synchronization2> enabled!" );



    VkResult result = getDispatcher()->vkQueueSubmit2KHR( static_cast<VkQueue>( m_queue ), submits.size(), reinterpret_cast<const VkSubmitInfo2 *>( submits.data() ), static_cast<VkFence>( fence ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Queue::submit2KHR" );


  }


   VULKAN_HPP_INLINE void CommandBuffer::writeBufferMarker2AMD( VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stage, VULKAN_HPP_NAMESPACE::Buffer dstBuffer, VULKAN_HPP_NAMESPACE::DeviceSize dstOffset, uint32_t marker ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdWriteBufferMarker2AMD && "Function <vkCmdWriteBufferMarker2AMD> needs extension <VK_KHR_synchronization2> enabled!" );



    getDispatcher()->vkCmdWriteBufferMarker2AMD( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPipelineStageFlags2>( stage ), static_cast<VkBuffer>( dstBuffer ), static_cast<VkDeviceSize>( dstOffset ), marker );



  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::CheckpointData2NV> Queue::getCheckpointData2NV(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetQueueCheckpointData2NV && "Function <vkGetQueueCheckpointData2NV> needs extension <VK_KHR_synchronization2> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::CheckpointData2NV> checkpointData;
    uint32_t checkpointDataCount;
    getDispatcher()->vkGetQueueCheckpointData2NV( static_cast<VkQueue>( m_queue ), &checkpointDataCount, nullptr );
    checkpointData.resize( checkpointDataCount );
    getDispatcher()->vkGetQueueCheckpointData2NV( static_cast<VkQueue>( m_queue ), &checkpointDataCount, reinterpret_cast<VkCheckpointData2NV *>( checkpointData.data() ) );

    VULKAN_HPP_ASSERT( checkpointDataCount <= checkpointData.size() );
    if ( checkpointDataCount < checkpointData.size() )
    {
      checkpointData.resize( checkpointDataCount );
    }
    return checkpointData;
  }

  //=== VK_EXT_descriptor_buffer ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DeviceSize DescriptorSetLayout::getSizeEXT(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDescriptorSetLayoutSizeEXT && "Function <vkGetDescriptorSetLayoutSizeEXT> needs extension <VK_EXT_descriptor_buffer> enabled!" );


    VULKAN_HPP_NAMESPACE::DeviceSize layoutSizeInBytes;
    getDispatcher()->vkGetDescriptorSetLayoutSizeEXT( static_cast<VkDevice>( m_device ), static_cast<VkDescriptorSetLayout>( m_descriptorSetLayout ), reinterpret_cast<VkDeviceSize *>( &layoutSizeInBytes ) );


    return layoutSizeInBytes;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DeviceSize DescriptorSetLayout::getBindingOffsetEXT( uint32_t binding ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDescriptorSetLayoutBindingOffsetEXT && "Function <vkGetDescriptorSetLayoutBindingOffsetEXT> needs extension <VK_EXT_descriptor_buffer> enabled!" );


    VULKAN_HPP_NAMESPACE::DeviceSize offset;
    getDispatcher()->vkGetDescriptorSetLayoutBindingOffsetEXT( static_cast<VkDevice>( m_device ), static_cast<VkDescriptorSetLayout>( m_descriptorSetLayout ), binding, reinterpret_cast<VkDeviceSize *>( &offset ) );


    return offset;
  }

  template <typename DescriptorType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE DescriptorType Device::getDescriptorEXT( const VULKAN_HPP_NAMESPACE::DescriptorGetInfoEXT & descriptorInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDescriptorEXT && "Function <vkGetDescriptorEXT> needs extension <VK_EXT_descriptor_buffer> enabled!" );


    DescriptorType descriptor;
    getDispatcher()->vkGetDescriptorEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDescriptorGetInfoEXT *>( &descriptorInfo ), sizeof( DescriptorType ), reinterpret_cast<void *>( &descriptor ) );


    return descriptor;
  }


   VULKAN_HPP_INLINE void CommandBuffer::bindDescriptorBuffersEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DescriptorBufferBindingInfoEXT> const & bindingInfos ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBindDescriptorBuffersEXT && "Function <vkCmdBindDescriptorBuffersEXT> needs extension <VK_EXT_descriptor_buffer> enabled!" );



    getDispatcher()->vkCmdBindDescriptorBuffersEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), bindingInfos.size(), reinterpret_cast<const VkDescriptorBufferBindingInfoEXT *>( bindingInfos.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDescriptorBufferOffsetsEXT( VULKAN_HPP_NAMESPACE::PipelineBindPoint pipelineBindPoint, VULKAN_HPP_NAMESPACE::PipelineLayout layout, uint32_t firstSet, VULKAN_HPP_NAMESPACE::ArrayProxy<const uint32_t> const & bufferIndices, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & offsets ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetDescriptorBufferOffsetsEXT && "Function <vkCmdSetDescriptorBufferOffsetsEXT> needs extension <VK_EXT_descriptor_buffer> enabled!" );
    if ( bufferIndices.size() != offsets.size() )
  {
    throw LogicError( VULKAN_HPP_NAMESPACE_STRING "::CommandBuffer::setDescriptorBufferOffsetsEXT: bufferIndices.size() != offsets.size()" );
  }



    getDispatcher()->vkCmdSetDescriptorBufferOffsetsEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPipelineBindPoint>( pipelineBindPoint ), static_cast<VkPipelineLayout>( layout ), firstSet, bufferIndices.size(), bufferIndices.data(), reinterpret_cast<const VkDeviceSize *>( offsets.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::bindDescriptorBufferEmbeddedSamplersEXT( VULKAN_HPP_NAMESPACE::PipelineBindPoint pipelineBindPoint, VULKAN_HPP_NAMESPACE::PipelineLayout layout, uint32_t set ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBindDescriptorBufferEmbeddedSamplersEXT && "Function <vkCmdBindDescriptorBufferEmbeddedSamplersEXT> needs extension <VK_EXT_descriptor_buffer> enabled!" );



    getDispatcher()->vkCmdBindDescriptorBufferEmbeddedSamplersEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPipelineBindPoint>( pipelineBindPoint ), static_cast<VkPipelineLayout>( layout ), set );



  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE DataType Device::getBufferOpaqueCaptureDescriptorDataEXT( const VULKAN_HPP_NAMESPACE::BufferCaptureDescriptorDataInfoEXT & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetBufferOpaqueCaptureDescriptorDataEXT && "Function <vkGetBufferOpaqueCaptureDescriptorDataEXT> needs extension <VK_EXT_descriptor_buffer> enabled!" );


    DataType data;
    VkResult result = getDispatcher()->vkGetBufferOpaqueCaptureDescriptorDataEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkBufferCaptureDescriptorDataInfoEXT *>( &info ), &data );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getBufferOpaqueCaptureDescriptorDataEXT" );

    return data;
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE DataType Device::getImageOpaqueCaptureDescriptorDataEXT( const VULKAN_HPP_NAMESPACE::ImageCaptureDescriptorDataInfoEXT & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetImageOpaqueCaptureDescriptorDataEXT && "Function <vkGetImageOpaqueCaptureDescriptorDataEXT> needs extension <VK_EXT_descriptor_buffer> enabled!" );


    DataType data;
    VkResult result = getDispatcher()->vkGetImageOpaqueCaptureDescriptorDataEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImageCaptureDescriptorDataInfoEXT *>( &info ), &data );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getImageOpaqueCaptureDescriptorDataEXT" );

    return data;
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE DataType Device::getImageViewOpaqueCaptureDescriptorDataEXT( const VULKAN_HPP_NAMESPACE::ImageViewCaptureDescriptorDataInfoEXT & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetImageViewOpaqueCaptureDescriptorDataEXT && "Function <vkGetImageViewOpaqueCaptureDescriptorDataEXT> needs extension <VK_EXT_descriptor_buffer> enabled!" );


    DataType data;
    VkResult result = getDispatcher()->vkGetImageViewOpaqueCaptureDescriptorDataEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImageViewCaptureDescriptorDataInfoEXT *>( &info ), &data );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getImageViewOpaqueCaptureDescriptorDataEXT" );

    return data;
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE DataType Device::getSamplerOpaqueCaptureDescriptorDataEXT( const VULKAN_HPP_NAMESPACE::SamplerCaptureDescriptorDataInfoEXT & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetSamplerOpaqueCaptureDescriptorDataEXT && "Function <vkGetSamplerOpaqueCaptureDescriptorDataEXT> needs extension <VK_EXT_descriptor_buffer> enabled!" );


    DataType data;
    VkResult result = getDispatcher()->vkGetSamplerOpaqueCaptureDescriptorDataEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkSamplerCaptureDescriptorDataInfoEXT *>( &info ), &data );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getSamplerOpaqueCaptureDescriptorDataEXT" );

    return data;
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE DataType Device::getAccelerationStructureOpaqueCaptureDescriptorDataEXT( const VULKAN_HPP_NAMESPACE::AccelerationStructureCaptureDescriptorDataInfoEXT & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT && "Function <vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT> needs extension <VK_EXT_descriptor_buffer> enabled!" );


    DataType data;
    VkResult result = getDispatcher()->vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkAccelerationStructureCaptureDescriptorDataInfoEXT *>( &info ), &data );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getAccelerationStructureOpaqueCaptureDescriptorDataEXT" );

    return data;
  }

  //=== VK_NV_fragment_shading_rate_enums ===


   VULKAN_HPP_INLINE void CommandBuffer::setFragmentShadingRateEnumNV( VULKAN_HPP_NAMESPACE::FragmentShadingRateNV shadingRate, const VULKAN_HPP_NAMESPACE::FragmentShadingRateCombinerOpKHR combinerOps[2] ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetFragmentShadingRateEnumNV && "Function <vkCmdSetFragmentShadingRateEnumNV> needs extension <VK_NV_fragment_shading_rate_enums> enabled!" );



    getDispatcher()->vkCmdSetFragmentShadingRateEnumNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkFragmentShadingRateNV>( shadingRate ), reinterpret_cast<const VkFragmentShadingRateCombinerOpKHR *>( combinerOps ) );



  }

  //=== VK_EXT_mesh_shader ===


   VULKAN_HPP_INLINE void CommandBuffer::drawMeshTasksEXT( uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDrawMeshTasksEXT && "Function <vkCmdDrawMeshTasksEXT> needs extension <VK_EXT_mesh_shader> enabled!" );



    getDispatcher()->vkCmdDrawMeshTasksEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), groupCountX, groupCountY, groupCountZ );



  }


   VULKAN_HPP_INLINE void CommandBuffer::drawMeshTasksIndirectEXT( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, uint32_t drawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDrawMeshTasksIndirectEXT && "Function <vkCmdDrawMeshTasksIndirectEXT> needs extension <VK_EXT_mesh_shader> enabled!" );



    getDispatcher()->vkCmdDrawMeshTasksIndirectEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( buffer ), static_cast<VkDeviceSize>( offset ), drawCount, stride );



  }


   VULKAN_HPP_INLINE void CommandBuffer::drawMeshTasksIndirectCountEXT( VULKAN_HPP_NAMESPACE::Buffer buffer, VULKAN_HPP_NAMESPACE::DeviceSize offset, VULKAN_HPP_NAMESPACE::Buffer countBuffer, VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDrawMeshTasksIndirectCountEXT && "Function <vkCmdDrawMeshTasksIndirectCountEXT> needs extension <VK_EXT_mesh_shader> enabled!" );



    getDispatcher()->vkCmdDrawMeshTasksIndirectCountEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBuffer>( buffer ), static_cast<VkDeviceSize>( offset ), static_cast<VkBuffer>( countBuffer ), static_cast<VkDeviceSize>( countBufferOffset ), maxDrawCount, stride );



  }

  //=== VK_KHR_copy_commands2 ===


   VULKAN_HPP_INLINE void CommandBuffer::copyBuffer2KHR( const VULKAN_HPP_NAMESPACE::CopyBufferInfo2 & copyBufferInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdCopyBuffer2KHR && "Function <vkCmdCopyBuffer2KHR> needs extension <VK_KHR_copy_commands2> enabled!" );



    getDispatcher()->vkCmdCopyBuffer2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCopyBufferInfo2 *>( &copyBufferInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyImage2KHR( const VULKAN_HPP_NAMESPACE::CopyImageInfo2 & copyImageInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdCopyImage2KHR && "Function <vkCmdCopyImage2KHR> needs extension <VK_KHR_copy_commands2> enabled!" );



    getDispatcher()->vkCmdCopyImage2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCopyImageInfo2 *>( &copyImageInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyBufferToImage2KHR( const VULKAN_HPP_NAMESPACE::CopyBufferToImageInfo2 & copyBufferToImageInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdCopyBufferToImage2KHR && "Function <vkCmdCopyBufferToImage2KHR> needs extension <VK_KHR_copy_commands2> enabled!" );



    getDispatcher()->vkCmdCopyBufferToImage2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCopyBufferToImageInfo2 *>( &copyBufferToImageInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyImageToBuffer2KHR( const VULKAN_HPP_NAMESPACE::CopyImageToBufferInfo2 & copyImageToBufferInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdCopyImageToBuffer2KHR && "Function <vkCmdCopyImageToBuffer2KHR> needs extension <VK_KHR_copy_commands2> enabled!" );



    getDispatcher()->vkCmdCopyImageToBuffer2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCopyImageToBufferInfo2 *>( &copyImageToBufferInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::blitImage2KHR( const VULKAN_HPP_NAMESPACE::BlitImageInfo2 & blitImageInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBlitImage2KHR && "Function <vkCmdBlitImage2KHR> needs extension <VK_KHR_copy_commands2> enabled!" );



    getDispatcher()->vkCmdBlitImage2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkBlitImageInfo2 *>( &blitImageInfo ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::resolveImage2KHR( const VULKAN_HPP_NAMESPACE::ResolveImageInfo2 & resolveImageInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdResolveImage2KHR && "Function <vkCmdResolveImage2KHR> needs extension <VK_KHR_copy_commands2> enabled!" );



    getDispatcher()->vkCmdResolveImage2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkResolveImageInfo2 *>( &resolveImageInfo ) );



  }

  //=== VK_EXT_image_compression_control ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::SubresourceLayout2EXT Image::getSubresourceLayout2EXT( const VULKAN_HPP_NAMESPACE::ImageSubresource2EXT & subresource ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetImageSubresourceLayout2EXT && "Function <vkGetImageSubresourceLayout2EXT> needs extension <VK_EXT_image_compression_control> enabled!" );


    VULKAN_HPP_NAMESPACE::SubresourceLayout2EXT layout;
    getDispatcher()->vkGetImageSubresourceLayout2EXT( static_cast<VkDevice>( m_device ), static_cast<VkImage>( m_image ), reinterpret_cast<const VkImageSubresource2EXT *>( &subresource ), reinterpret_cast<VkSubresourceLayout2EXT *>( &layout ) );


    return layout;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Image::getSubresourceLayout2EXT( const VULKAN_HPP_NAMESPACE::ImageSubresource2EXT & subresource ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetImageSubresourceLayout2EXT && "Function <vkGetImageSubresourceLayout2EXT> needs extension <VK_EXT_image_compression_control> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::SubresourceLayout2EXT & layout = structureChain.template get<VULKAN_HPP_NAMESPACE::SubresourceLayout2EXT>();
    getDispatcher()->vkGetImageSubresourceLayout2EXT( static_cast<VkDevice>( m_device ), static_cast<VkImage>( m_image ), reinterpret_cast<const VkImageSubresource2EXT *>( &subresource ), reinterpret_cast<VkSubresourceLayout2EXT *>( &layout ) );


    return structureChain;
  }

  //=== VK_EXT_device_fault ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::pair<VULKAN_HPP_NAMESPACE::Result, std::pair<VULKAN_HPP_NAMESPACE::DeviceFaultCountsEXT, VULKAN_HPP_NAMESPACE::DeviceFaultInfoEXT>> Device::getFaultInfoEXT(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeviceFaultInfoEXT && "Function <vkGetDeviceFaultInfoEXT> needs extension <VK_EXT_device_fault> enabled!" );


    std::pair<VULKAN_HPP_NAMESPACE::DeviceFaultCountsEXT,VULKAN_HPP_NAMESPACE::DeviceFaultInfoEXT> data;
    VULKAN_HPP_NAMESPACE::DeviceFaultCountsEXT & faultCounts = data.first;
    VULKAN_HPP_NAMESPACE::DeviceFaultInfoEXT & faultInfo = data.second;
    VkResult result = getDispatcher()->vkGetDeviceFaultInfoEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<VkDeviceFaultCountsEXT *>( &faultCounts ), reinterpret_cast<VkDeviceFaultInfoEXT *>( &faultInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getFaultInfoEXT", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eIncomplete } );

    return std::make_pair( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), data );
  }

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_NV_acquire_winrt_display ===


   VULKAN_HPP_INLINE void DisplayKHR::acquireWinrtNV(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkAcquireWinrtDisplayNV && "Function <vkAcquireWinrtDisplayNV> needs extension <VK_NV_acquire_winrt_display> enabled!" );



    VkResult result = getDispatcher()->vkAcquireWinrtDisplayNV( static_cast<VkPhysicalDevice>( m_physicalDevice ), static_cast<VkDisplayKHR>( m_display ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::DisplayKHR::acquireWinrtNV" );


  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::DisplayKHR PhysicalDevice::getWinrtDisplayNV( uint32_t deviceRelativeId ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::DisplayKHR( *this, deviceRelativeId );
  }
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

#if defined( VK_USE_PLATFORM_DIRECTFB_EXT )
  //=== VK_EXT_directfb_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createDirectFBSurfaceEXT( VULKAN_HPP_NAMESPACE::DirectFBSurfaceCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Bool32 PhysicalDevice::getDirectFBPresentationSupportEXT( uint32_t queueFamilyIndex, IDirectFB & dfb ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceDirectFBPresentationSupportEXT && "Function <vkGetPhysicalDeviceDirectFBPresentationSupportEXT> needs extension <VK_EXT_directfb_surface> enabled!" );



    VkBool32 result = getDispatcher()->vkGetPhysicalDeviceDirectFBPresentationSupportEXT( static_cast<VkPhysicalDevice>( m_physicalDevice ), queueFamilyIndex, &dfb );


    return static_cast<VULKAN_HPP_NAMESPACE::Bool32>( result );
  }
#endif /*VK_USE_PLATFORM_DIRECTFB_EXT*/

  //=== VK_KHR_ray_tracing_pipeline ===


   VULKAN_HPP_INLINE void CommandBuffer::traceRaysKHR( const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & raygenShaderBindingTable, const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & missShaderBindingTable, const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & hitShaderBindingTable, const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & callableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdTraceRaysKHR && "Function <vkCmdTraceRaysKHR> needs extension <VK_KHR_ray_tracing_pipeline> enabled!" );



    getDispatcher()->vkCmdTraceRaysKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkStridedDeviceAddressRegionKHR *>( &raygenShaderBindingTable ), reinterpret_cast<const VkStridedDeviceAddressRegionKHR *>( &missShaderBindingTable ), reinterpret_cast<const VkStridedDeviceAddressRegionKHR *>( &hitShaderBindingTable ), reinterpret_cast<const VkStridedDeviceAddressRegionKHR *>( &callableShaderBindingTable ), width, height, depth );



  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE std::vector<VULKAN_HPP_RAII_NAMESPACE::Pipeline> Device::createRayTracingPipelinesKHR( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeferredOperationKHR> const & deferredOperation, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::ArrayProxy<VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoKHR> const & createInfos, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Pipelines( *this, deferredOperation, pipelineCache, createInfos, allocator );
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::Pipeline Device::createRayTracingPipelineKHR( VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::DeferredOperationKHR> const & deferredOperation, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::VULKAN_HPP_RAII_NAMESPACE::PipelineCache> const & pipelineCache, VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoKHR const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::Pipeline( *this, deferredOperation, pipelineCache, createInfo, allocator );
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<DataType> Pipeline::getRayTracingShaderGroupHandlesKHR( uint32_t firstGroup, uint32_t groupCount, size_t dataSize ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetRayTracingShaderGroupHandlesKHR && "Function <vkGetRayTracingShaderGroupHandlesKHR> needs extension <VK_KHR_ray_tracing_pipeline> enabled!" );

        VULKAN_HPP_ASSERT( dataSize % sizeof( DataType ) == 0 );
    std::vector<DataType> data( dataSize / sizeof( DataType ) );
    VkResult result = getDispatcher()->vkGetRayTracingShaderGroupHandlesKHR( static_cast<VkDevice>( m_device ), static_cast<VkPipeline>( m_pipeline ), firstGroup, groupCount, data.size() * sizeof( DataType ), reinterpret_cast<void *>( data.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Pipeline::getRayTracingShaderGroupHandlesKHR" );

    return data;
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE DataType Pipeline::getRayTracingShaderGroupHandleKHR( uint32_t firstGroup, uint32_t groupCount ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetRayTracingShaderGroupHandlesKHR && "Function <vkGetRayTracingShaderGroupHandlesKHR> needs extension <VK_KHR_ray_tracing_pipeline> enabled!" );


    DataType data;
    VkResult result = getDispatcher()->vkGetRayTracingShaderGroupHandlesKHR( static_cast<VkDevice>( m_device ), static_cast<VkPipeline>( m_pipeline ), firstGroup, groupCount, sizeof( DataType ), reinterpret_cast<void *>( &data ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Pipeline::getRayTracingShaderGroupHandleKHR" );

    return data;
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<DataType> Pipeline::getRayTracingCaptureReplayShaderGroupHandlesKHR( uint32_t firstGroup, uint32_t groupCount, size_t dataSize ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetRayTracingCaptureReplayShaderGroupHandlesKHR && "Function <vkGetRayTracingCaptureReplayShaderGroupHandlesKHR> needs extension <VK_KHR_ray_tracing_pipeline> enabled!" );

        VULKAN_HPP_ASSERT( dataSize % sizeof( DataType ) == 0 );
    std::vector<DataType> data( dataSize / sizeof( DataType ) );
    VkResult result = getDispatcher()->vkGetRayTracingCaptureReplayShaderGroupHandlesKHR( static_cast<VkDevice>( m_device ), static_cast<VkPipeline>( m_pipeline ), firstGroup, groupCount, data.size() * sizeof( DataType ), reinterpret_cast<void *>( data.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Pipeline::getRayTracingCaptureReplayShaderGroupHandlesKHR" );

    return data;
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE DataType Pipeline::getRayTracingCaptureReplayShaderGroupHandleKHR( uint32_t firstGroup, uint32_t groupCount ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetRayTracingCaptureReplayShaderGroupHandlesKHR && "Function <vkGetRayTracingCaptureReplayShaderGroupHandlesKHR> needs extension <VK_KHR_ray_tracing_pipeline> enabled!" );


    DataType data;
    VkResult result = getDispatcher()->vkGetRayTracingCaptureReplayShaderGroupHandlesKHR( static_cast<VkDevice>( m_device ), static_cast<VkPipeline>( m_pipeline ), firstGroup, groupCount, sizeof( DataType ), reinterpret_cast<void *>( &data ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Pipeline::getRayTracingCaptureReplayShaderGroupHandleKHR" );

    return data;
  }


   VULKAN_HPP_INLINE void CommandBuffer::traceRaysIndirectKHR( const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & raygenShaderBindingTable, const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & missShaderBindingTable, const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & hitShaderBindingTable, const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & callableShaderBindingTable, VULKAN_HPP_NAMESPACE::DeviceAddress indirectDeviceAddress ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdTraceRaysIndirectKHR && "Function <vkCmdTraceRaysIndirectKHR> needs extension <VK_KHR_ray_tracing_pipeline> enabled!" );



    getDispatcher()->vkCmdTraceRaysIndirectKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkStridedDeviceAddressRegionKHR *>( &raygenShaderBindingTable ), reinterpret_cast<const VkStridedDeviceAddressRegionKHR *>( &missShaderBindingTable ), reinterpret_cast<const VkStridedDeviceAddressRegionKHR *>( &hitShaderBindingTable ), reinterpret_cast<const VkStridedDeviceAddressRegionKHR *>( &callableShaderBindingTable ), static_cast<VkDeviceAddress>( indirectDeviceAddress ) );



  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DeviceSize Pipeline::getRayTracingShaderGroupStackSizeKHR( uint32_t group, VULKAN_HPP_NAMESPACE::ShaderGroupShaderKHR groupShader ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetRayTracingShaderGroupStackSizeKHR && "Function <vkGetRayTracingShaderGroupStackSizeKHR> needs extension <VK_KHR_ray_tracing_pipeline> enabled!" );



    VkDeviceSize result = getDispatcher()->vkGetRayTracingShaderGroupStackSizeKHR( static_cast<VkDevice>( m_device ), static_cast<VkPipeline>( m_pipeline ), group, static_cast<VkShaderGroupShaderKHR>( groupShader ) );


    return static_cast<VULKAN_HPP_NAMESPACE::DeviceSize>( result );
  }


   VULKAN_HPP_INLINE void CommandBuffer::setRayTracingPipelineStackSizeKHR( uint32_t pipelineStackSize ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetRayTracingPipelineStackSizeKHR && "Function <vkCmdSetRayTracingPipelineStackSizeKHR> needs extension <VK_KHR_ray_tracing_pipeline> enabled!" );



    getDispatcher()->vkCmdSetRayTracingPipelineStackSizeKHR( static_cast<VkCommandBuffer>( m_commandBuffer ), pipelineStackSize );



  }

  //=== VK_EXT_vertex_input_dynamic_state ===


   VULKAN_HPP_INLINE void CommandBuffer::setVertexInputEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::VertexInputBindingDescription2EXT> const & vertexBindingDescriptions, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::VertexInputAttributeDescription2EXT> const & vertexAttributeDescriptions ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetVertexInputEXT && "Function <vkCmdSetVertexInputEXT> needs extension <VK_EXT_vertex_input_dynamic_state> enabled!" );



    getDispatcher()->vkCmdSetVertexInputEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), vertexBindingDescriptions.size(), reinterpret_cast<const VkVertexInputBindingDescription2EXT *>( vertexBindingDescriptions.data() ), vertexAttributeDescriptions.size(), reinterpret_cast<const VkVertexInputAttributeDescription2EXT *>( vertexAttributeDescriptions.data() ) );



  }

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_external_memory ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE zx_handle_t Device::getMemoryZirconHandleFUCHSIA( const VULKAN_HPP_NAMESPACE::MemoryGetZirconHandleInfoFUCHSIA & getZirconHandleInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetMemoryZirconHandleFUCHSIA && "Function <vkGetMemoryZirconHandleFUCHSIA> needs extension <VK_FUCHSIA_external_memory> enabled!" );


    zx_handle_t zirconHandle;
    VkResult result = getDispatcher()->vkGetMemoryZirconHandleFUCHSIA( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkMemoryGetZirconHandleInfoFUCHSIA *>( &getZirconHandleInfo ), &zirconHandle );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getMemoryZirconHandleFUCHSIA" );

    return zirconHandle;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryZirconHandlePropertiesFUCHSIA Device::getMemoryZirconHandlePropertiesFUCHSIA( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetMemoryZirconHandlePropertiesFUCHSIA && "Function <vkGetMemoryZirconHandlePropertiesFUCHSIA> needs extension <VK_FUCHSIA_external_memory> enabled!" );


    VULKAN_HPP_NAMESPACE::MemoryZirconHandlePropertiesFUCHSIA memoryZirconHandleProperties;
    VkResult result = getDispatcher()->vkGetMemoryZirconHandlePropertiesFUCHSIA( static_cast<VkDevice>( m_device ), static_cast<VkExternalMemoryHandleTypeFlagBits>( handleType ), zirconHandle, reinterpret_cast<VkMemoryZirconHandlePropertiesFUCHSIA *>( &memoryZirconHandleProperties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getMemoryZirconHandlePropertiesFUCHSIA" );

    return memoryZirconHandleProperties;
  }
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_external_semaphore ===


   VULKAN_HPP_INLINE void Device::importSemaphoreZirconHandleFUCHSIA( const VULKAN_HPP_NAMESPACE::ImportSemaphoreZirconHandleInfoFUCHSIA & importSemaphoreZirconHandleInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkImportSemaphoreZirconHandleFUCHSIA && "Function <vkImportSemaphoreZirconHandleFUCHSIA> needs extension <VK_FUCHSIA_external_semaphore> enabled!" );



    VkResult result = getDispatcher()->vkImportSemaphoreZirconHandleFUCHSIA( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkImportSemaphoreZirconHandleInfoFUCHSIA *>( &importSemaphoreZirconHandleInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::importSemaphoreZirconHandleFUCHSIA" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE zx_handle_t Device::getSemaphoreZirconHandleFUCHSIA( const VULKAN_HPP_NAMESPACE::SemaphoreGetZirconHandleInfoFUCHSIA & getZirconHandleInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetSemaphoreZirconHandleFUCHSIA && "Function <vkGetSemaphoreZirconHandleFUCHSIA> needs extension <VK_FUCHSIA_external_semaphore> enabled!" );


    zx_handle_t zirconHandle;
    VkResult result = getDispatcher()->vkGetSemaphoreZirconHandleFUCHSIA( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkSemaphoreGetZirconHandleInfoFUCHSIA *>( &getZirconHandleInfo ), &zirconHandle );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getSemaphoreZirconHandleFUCHSIA" );

    return zirconHandle;
  }
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_buffer_collection ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::BufferCollectionFUCHSIA Device::createBufferCollectionFUCHSIA( VULKAN_HPP_NAMESPACE::BufferCollectionCreateInfoFUCHSIA const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::BufferCollectionFUCHSIA( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void BufferCollectionFUCHSIA::setImageConstraints( const VULKAN_HPP_NAMESPACE::ImageConstraintsInfoFUCHSIA & imageConstraintsInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkSetBufferCollectionImageConstraintsFUCHSIA && "Function <vkSetBufferCollectionImageConstraintsFUCHSIA> needs extension <VK_FUCHSIA_buffer_collection> enabled!" );



    VkResult result = getDispatcher()->vkSetBufferCollectionImageConstraintsFUCHSIA( static_cast<VkDevice>( m_device ), static_cast<VkBufferCollectionFUCHSIA>( m_collection ), reinterpret_cast<const VkImageConstraintsInfoFUCHSIA *>( &imageConstraintsInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::BufferCollectionFUCHSIA::setImageConstraints" );


  }


   VULKAN_HPP_INLINE void BufferCollectionFUCHSIA::setBufferConstraints( const VULKAN_HPP_NAMESPACE::BufferConstraintsInfoFUCHSIA & bufferConstraintsInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkSetBufferCollectionBufferConstraintsFUCHSIA && "Function <vkSetBufferCollectionBufferConstraintsFUCHSIA> needs extension <VK_FUCHSIA_buffer_collection> enabled!" );



    VkResult result = getDispatcher()->vkSetBufferCollectionBufferConstraintsFUCHSIA( static_cast<VkDevice>( m_device ), static_cast<VkBufferCollectionFUCHSIA>( m_collection ), reinterpret_cast<const VkBufferConstraintsInfoFUCHSIA *>( &bufferConstraintsInfo ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::BufferCollectionFUCHSIA::setBufferConstraints" );


  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::BufferCollectionPropertiesFUCHSIA BufferCollectionFUCHSIA::getProperties(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetBufferCollectionPropertiesFUCHSIA && "Function <vkGetBufferCollectionPropertiesFUCHSIA> needs extension <VK_FUCHSIA_buffer_collection> enabled!" );


    VULKAN_HPP_NAMESPACE::BufferCollectionPropertiesFUCHSIA properties;
    VkResult result = getDispatcher()->vkGetBufferCollectionPropertiesFUCHSIA( static_cast<VkDevice>( m_device ), static_cast<VkBufferCollectionFUCHSIA>( m_collection ), reinterpret_cast<VkBufferCollectionPropertiesFUCHSIA *>( &properties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::BufferCollectionFUCHSIA::getProperties" );

    return properties;
  }
#endif /*VK_USE_PLATFORM_FUCHSIA*/

  //=== VK_HUAWEI_subpass_shading ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::pair<VULKAN_HPP_NAMESPACE::Result, VULKAN_HPP_NAMESPACE::Extent2D> RenderPass::getSubpassShadingMaxWorkgroupSizeHUAWEI(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI && "Function <vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI> needs extension <VK_HUAWEI_subpass_shading> enabled!" );


    VULKAN_HPP_NAMESPACE::Extent2D maxWorkgroupSize;
    VkResult result = getDispatcher()->vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI( static_cast<VkDevice>( m_device ), static_cast<VkRenderPass>( m_renderPass ), reinterpret_cast<VkExtent2D *>( &maxWorkgroupSize ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::RenderPass::getSubpassShadingMaxWorkgroupSizeHUAWEI", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eIncomplete } );

    return std::make_pair( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), maxWorkgroupSize );
  }


   VULKAN_HPP_INLINE void CommandBuffer::subpassShadingHUAWEI(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSubpassShadingHUAWEI && "Function <vkCmdSubpassShadingHUAWEI> needs extension <VK_HUAWEI_subpass_shading> enabled!" );



    getDispatcher()->vkCmdSubpassShadingHUAWEI( static_cast<VkCommandBuffer>( m_commandBuffer ) );



  }

  //=== VK_HUAWEI_invocation_mask ===


   VULKAN_HPP_INLINE void CommandBuffer::bindInvocationMaskHUAWEI( VULKAN_HPP_NAMESPACE::ImageView imageView, VULKAN_HPP_NAMESPACE::ImageLayout imageLayout ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBindInvocationMaskHUAWEI && "Function <vkCmdBindInvocationMaskHUAWEI> needs extension <VK_HUAWEI_invocation_mask> enabled!" );



    getDispatcher()->vkCmdBindInvocationMaskHUAWEI( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkImageView>( imageView ), static_cast<VkImageLayout>( imageLayout ) );



  }

  //=== VK_NV_external_memory_rdma ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::RemoteAddressNV Device::getMemoryRemoteAddressNV( const VULKAN_HPP_NAMESPACE::MemoryGetRemoteAddressInfoNV & memoryGetRemoteAddressInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetMemoryRemoteAddressNV && "Function <vkGetMemoryRemoteAddressNV> needs extension <VK_NV_external_memory_rdma> enabled!" );


    VULKAN_HPP_NAMESPACE::RemoteAddressNV address;
    VkResult result = getDispatcher()->vkGetMemoryRemoteAddressNV( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkMemoryGetRemoteAddressInfoNV *>( &memoryGetRemoteAddressInfo ), reinterpret_cast<VkRemoteAddressNV *>( &address ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getMemoryRemoteAddressNV" );

    return address;
  }

  //=== VK_EXT_pipeline_properties ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::BaseOutStructure Device::getPipelinePropertiesEXT( const VULKAN_HPP_NAMESPACE::PipelineInfoEXT & pipelineInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPipelinePropertiesEXT && "Function <vkGetPipelinePropertiesEXT> needs extension <VK_EXT_pipeline_properties> enabled!" );


    VULKAN_HPP_NAMESPACE::BaseOutStructure pipelineProperties;
    VkResult result = getDispatcher()->vkGetPipelinePropertiesEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkPipelineInfoEXT *>( &pipelineInfo ), reinterpret_cast<VkBaseOutStructure *>( &pipelineProperties ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::getPipelinePropertiesEXT" );

    return pipelineProperties;
  }

  //=== VK_EXT_extended_dynamic_state2 ===


   VULKAN_HPP_INLINE void CommandBuffer::setPatchControlPointsEXT( uint32_t patchControlPoints ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetPatchControlPointsEXT && "Function <vkCmdSetPatchControlPointsEXT> needs extension <VK_EXT_extended_dynamic_state2> enabled!" );



    getDispatcher()->vkCmdSetPatchControlPointsEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), patchControlPoints );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setRasterizerDiscardEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 rasterizerDiscardEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetRasterizerDiscardEnableEXT && "Function <vkCmdSetRasterizerDiscardEnableEXT> needs extension <VK_EXT_extended_dynamic_state2> enabled!" );



    getDispatcher()->vkCmdSetRasterizerDiscardEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( rasterizerDiscardEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthBiasEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthBiasEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetDepthBiasEnableEXT && "Function <vkCmdSetDepthBiasEnableEXT> needs extension <VK_EXT_extended_dynamic_state2> enabled!" );



    getDispatcher()->vkCmdSetDepthBiasEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( depthBiasEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setLogicOpEXT( VULKAN_HPP_NAMESPACE::LogicOp logicOp ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetLogicOpEXT && "Function <vkCmdSetLogicOpEXT> needs extension <VK_EXT_extended_dynamic_state2> enabled!" );



    getDispatcher()->vkCmdSetLogicOpEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkLogicOp>( logicOp ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setPrimitiveRestartEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 primitiveRestartEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetPrimitiveRestartEnableEXT && "Function <vkCmdSetPrimitiveRestartEnableEXT> needs extension <VK_EXT_extended_dynamic_state2> enabled!" );



    getDispatcher()->vkCmdSetPrimitiveRestartEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( primitiveRestartEnable ) );



  }

#if defined( VK_USE_PLATFORM_SCREEN_QNX )
  //=== VK_QNX_screen_surface ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR Instance::createScreenSurfaceQNX( VULKAN_HPP_NAMESPACE::ScreenSurfaceCreateInfoQNX const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::SurfaceKHR( *this, createInfo, allocator );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Bool32 PhysicalDevice::getScreenPresentationSupportQNX( uint32_t queueFamilyIndex, struct _screen_window & window ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceScreenPresentationSupportQNX && "Function <vkGetPhysicalDeviceScreenPresentationSupportQNX> needs extension <VK_QNX_screen_surface> enabled!" );



    VkBool32 result = getDispatcher()->vkGetPhysicalDeviceScreenPresentationSupportQNX( static_cast<VkPhysicalDevice>( m_physicalDevice ), queueFamilyIndex, &window );


    return static_cast<VULKAN_HPP_NAMESPACE::Bool32>( result );
  }
#endif /*VK_USE_PLATFORM_SCREEN_QNX*/

  //=== VK_EXT_color_write_enable ===


   VULKAN_HPP_INLINE void CommandBuffer::setColorWriteEnableEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Bool32> const & colorWriteEnables ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetColorWriteEnableEXT && "Function <vkCmdSetColorWriteEnableEXT> needs extension <VK_EXT_color_write_enable> enabled!" );



    getDispatcher()->vkCmdSetColorWriteEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), colorWriteEnables.size(), reinterpret_cast<const VkBool32 *>( colorWriteEnables.data() ) );



  }

  //=== VK_KHR_ray_tracing_maintenance1 ===


   VULKAN_HPP_INLINE void CommandBuffer::traceRaysIndirect2KHR( VULKAN_HPP_NAMESPACE::DeviceAddress indirectDeviceAddress ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdTraceRaysIndirect2KHR && "Function <vkCmdTraceRaysIndirect2KHR> needs extension <VK_KHR_ray_tracing_maintenance1> enabled!" );



    getDispatcher()->vkCmdTraceRaysIndirect2KHR( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkDeviceAddress>( indirectDeviceAddress ) );



  }

  //=== VK_EXT_multi_draw ===


   VULKAN_HPP_INLINE void CommandBuffer::drawMultiEXT( VULKAN_HPP_NAMESPACE::StridedArrayProxy<const VULKAN_HPP_NAMESPACE::MultiDrawInfoEXT> const & vertexInfo, uint32_t instanceCount, uint32_t firstInstance ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDrawMultiEXT && "Function <vkCmdDrawMultiEXT> needs extension <VK_EXT_multi_draw> enabled!" );



    getDispatcher()->vkCmdDrawMultiEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), vertexInfo.size(), reinterpret_cast<const VkMultiDrawInfoEXT *>( vertexInfo.data() ), instanceCount, firstInstance, vertexInfo.stride() );



  }


   VULKAN_HPP_INLINE void CommandBuffer::drawMultiIndexedEXT( VULKAN_HPP_NAMESPACE::StridedArrayProxy<const VULKAN_HPP_NAMESPACE::MultiDrawIndexedInfoEXT> const & indexInfo, uint32_t instanceCount, uint32_t firstInstance, Optional<const int32_t> vertexOffset ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDrawMultiIndexedEXT && "Function <vkCmdDrawMultiIndexedEXT> needs extension <VK_EXT_multi_draw> enabled!" );



    getDispatcher()->vkCmdDrawMultiIndexedEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), indexInfo.size(), reinterpret_cast<const VkMultiDrawIndexedInfoEXT *>( indexInfo.data() ), instanceCount, firstInstance, indexInfo.stride(), static_cast<const int32_t *>( vertexOffset ) );



  }

  //=== VK_EXT_opacity_micromap ===

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::MicromapEXT Device::createMicromapEXT( VULKAN_HPP_NAMESPACE::MicromapCreateInfoEXT const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::MicromapEXT( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void CommandBuffer::buildMicromapsEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MicromapBuildInfoEXT> const & infos ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdBuildMicromapsEXT && "Function <vkCmdBuildMicromapsEXT> needs extension <VK_EXT_opacity_micromap> enabled!" );



    getDispatcher()->vkCmdBuildMicromapsEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), infos.size(), reinterpret_cast<const VkMicromapBuildInfoEXT *>( infos.data() ) );



  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result Device::buildMicromapsEXT( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MicromapBuildInfoEXT> const & infos ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkBuildMicromapsEXT && "Function <vkBuildMicromapsEXT> needs extension <VK_EXT_opacity_micromap> enabled!" );



    VkResult result = getDispatcher()->vkBuildMicromapsEXT( static_cast<VkDevice>( m_device ), static_cast<VkDeferredOperationKHR>( deferredOperation ), infos.size(), reinterpret_cast<const VkMicromapBuildInfoEXT *>( infos.data() ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::buildMicromapsEXT", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eOperationDeferredKHR, VULKAN_HPP_NAMESPACE::Result::eOperationNotDeferredKHR } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result Device::copyMicromapEXT( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, const VULKAN_HPP_NAMESPACE::CopyMicromapInfoEXT & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCopyMicromapEXT && "Function <vkCopyMicromapEXT> needs extension <VK_EXT_opacity_micromap> enabled!" );



    VkResult result = getDispatcher()->vkCopyMicromapEXT( static_cast<VkDevice>( m_device ), static_cast<VkDeferredOperationKHR>( deferredOperation ), reinterpret_cast<const VkCopyMicromapInfoEXT *>( &info ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::copyMicromapEXT", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eOperationDeferredKHR, VULKAN_HPP_NAMESPACE::Result::eOperationNotDeferredKHR } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result Device::copyMicromapToMemoryEXT( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, const VULKAN_HPP_NAMESPACE::CopyMicromapToMemoryInfoEXT & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCopyMicromapToMemoryEXT && "Function <vkCopyMicromapToMemoryEXT> needs extension <VK_EXT_opacity_micromap> enabled!" );



    VkResult result = getDispatcher()->vkCopyMicromapToMemoryEXT( static_cast<VkDevice>( m_device ), static_cast<VkDeferredOperationKHR>( deferredOperation ), reinterpret_cast<const VkCopyMicromapToMemoryInfoEXT *>( &info ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::copyMicromapToMemoryEXT", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eOperationDeferredKHR, VULKAN_HPP_NAMESPACE::Result::eOperationNotDeferredKHR } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::Result Device::copyMemoryToMicromapEXT( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation, const VULKAN_HPP_NAMESPACE::CopyMemoryToMicromapInfoEXT & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCopyMemoryToMicromapEXT && "Function <vkCopyMemoryToMicromapEXT> needs extension <VK_EXT_opacity_micromap> enabled!" );



    VkResult result = getDispatcher()->vkCopyMemoryToMicromapEXT( static_cast<VkDevice>( m_device ), static_cast<VkDeferredOperationKHR>( deferredOperation ), reinterpret_cast<const VkCopyMemoryToMicromapInfoEXT *>( &info ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::copyMemoryToMicromapEXT", { VULKAN_HPP_NAMESPACE::Result::eSuccess, VULKAN_HPP_NAMESPACE::Result::eOperationDeferredKHR, VULKAN_HPP_NAMESPACE::Result::eOperationNotDeferredKHR } );

    return static_cast<VULKAN_HPP_NAMESPACE::Result>( result );
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<DataType> Device::writeMicromapsPropertiesEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MicromapEXT> const & micromaps, VULKAN_HPP_NAMESPACE::QueryType queryType, size_t dataSize, size_t stride ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkWriteMicromapsPropertiesEXT && "Function <vkWriteMicromapsPropertiesEXT> needs extension <VK_EXT_opacity_micromap> enabled!" );

        VULKAN_HPP_ASSERT( dataSize % sizeof( DataType ) == 0 );
    std::vector<DataType> data( dataSize / sizeof( DataType ) );
    VkResult result = getDispatcher()->vkWriteMicromapsPropertiesEXT( static_cast<VkDevice>( m_device ), micromaps.size(), reinterpret_cast<const VkMicromapEXT *>( micromaps.data() ), static_cast<VkQueryType>( queryType ), data.size() * sizeof( DataType ), reinterpret_cast<void *>( data.data() ), stride );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::writeMicromapsPropertiesEXT" );

    return data;
  }

  template <typename DataType>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE DataType Device::writeMicromapsPropertyEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MicromapEXT> const & micromaps, VULKAN_HPP_NAMESPACE::QueryType queryType, size_t stride ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkWriteMicromapsPropertiesEXT && "Function <vkWriteMicromapsPropertiesEXT> needs extension <VK_EXT_opacity_micromap> enabled!" );


    DataType data;
    VkResult result = getDispatcher()->vkWriteMicromapsPropertiesEXT( static_cast<VkDevice>( m_device ), micromaps.size(), reinterpret_cast<const VkMicromapEXT *>( micromaps.data() ), static_cast<VkQueryType>( queryType ), sizeof( DataType ), reinterpret_cast<void *>( &data ), stride );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::Device::writeMicromapsPropertyEXT" );

    return data;
  }


   VULKAN_HPP_INLINE void CommandBuffer::copyMicromapEXT( const VULKAN_HPP_NAMESPACE::CopyMicromapInfoEXT & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdCopyMicromapEXT && "Function <vkCmdCopyMicromapEXT> needs extension <VK_EXT_opacity_micromap> enabled!" );



    getDispatcher()->vkCmdCopyMicromapEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCopyMicromapInfoEXT *>( &info ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyMicromapToMemoryEXT( const VULKAN_HPP_NAMESPACE::CopyMicromapToMemoryInfoEXT & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdCopyMicromapToMemoryEXT && "Function <vkCmdCopyMicromapToMemoryEXT> needs extension <VK_EXT_opacity_micromap> enabled!" );



    getDispatcher()->vkCmdCopyMicromapToMemoryEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCopyMicromapToMemoryInfoEXT *>( &info ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyMemoryToMicromapEXT( const VULKAN_HPP_NAMESPACE::CopyMemoryToMicromapInfoEXT & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdCopyMemoryToMicromapEXT && "Function <vkCmdCopyMemoryToMicromapEXT> needs extension <VK_EXT_opacity_micromap> enabled!" );



    getDispatcher()->vkCmdCopyMemoryToMicromapEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), reinterpret_cast<const VkCopyMemoryToMicromapInfoEXT *>( &info ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::writeMicromapsPropertiesEXT( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::MicromapEXT> const & micromaps, VULKAN_HPP_NAMESPACE::QueryType queryType, VULKAN_HPP_NAMESPACE::QueryPool queryPool, uint32_t firstQuery ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdWriteMicromapsPropertiesEXT && "Function <vkCmdWriteMicromapsPropertiesEXT> needs extension <VK_EXT_opacity_micromap> enabled!" );



    getDispatcher()->vkCmdWriteMicromapsPropertiesEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), micromaps.size(), reinterpret_cast<const VkMicromapEXT *>( micromaps.data() ), static_cast<VkQueryType>( queryType ), static_cast<VkQueryPool>( queryPool ), firstQuery );



  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::AccelerationStructureCompatibilityKHR Device::getMicromapCompatibilityEXT( const VULKAN_HPP_NAMESPACE::MicromapVersionInfoEXT & versionInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeviceMicromapCompatibilityEXT && "Function <vkGetDeviceMicromapCompatibilityEXT> needs extension <VK_EXT_opacity_micromap> enabled!" );


    VULKAN_HPP_NAMESPACE::AccelerationStructureCompatibilityKHR compatibility;
    getDispatcher()->vkGetDeviceMicromapCompatibilityEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkMicromapVersionInfoEXT *>( &versionInfo ), reinterpret_cast<VkAccelerationStructureCompatibilityKHR *>( &compatibility ) );


    return compatibility;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MicromapBuildSizesInfoEXT Device::getMicromapBuildSizesEXT( VULKAN_HPP_NAMESPACE::AccelerationStructureBuildTypeKHR buildType, const VULKAN_HPP_NAMESPACE::MicromapBuildInfoEXT & buildInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetMicromapBuildSizesEXT && "Function <vkGetMicromapBuildSizesEXT> needs extension <VK_EXT_opacity_micromap> enabled!" );


    VULKAN_HPP_NAMESPACE::MicromapBuildSizesInfoEXT sizeInfo;
    getDispatcher()->vkGetMicromapBuildSizesEXT( static_cast<VkDevice>( m_device ), static_cast<VkAccelerationStructureBuildTypeKHR>( buildType ), reinterpret_cast<const VkMicromapBuildInfoEXT *>( &buildInfo ), reinterpret_cast<VkMicromapBuildSizesInfoEXT *>( &sizeInfo ) );


    return sizeInfo;
  }

  //=== VK_EXT_pageable_device_local_memory ===


   VULKAN_HPP_INLINE void DeviceMemory::setPriorityEXT( float priority ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkSetDeviceMemoryPriorityEXT && "Function <vkSetDeviceMemoryPriorityEXT> needs extension <VK_EXT_pageable_device_local_memory> enabled!" );



    getDispatcher()->vkSetDeviceMemoryPriorityEXT( static_cast<VkDevice>( m_device ), static_cast<VkDeviceMemory>( m_memory ), priority );



  }

  //=== VK_KHR_maintenance4 ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryRequirements2 Device::getBufferMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceBufferMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeviceBufferMemoryRequirementsKHR && "Function <vkGetDeviceBufferMemoryRequirementsKHR> needs extension <VK_KHR_maintenance4> enabled!" );


    VULKAN_HPP_NAMESPACE::MemoryRequirements2 memoryRequirements;
    getDispatcher()->vkGetDeviceBufferMemoryRequirementsKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDeviceBufferMemoryRequirements *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return memoryRequirements;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Device::getBufferMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceBufferMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeviceBufferMemoryRequirementsKHR && "Function <vkGetDeviceBufferMemoryRequirementsKHR> needs extension <VK_KHR_maintenance4> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::MemoryRequirements2 & memoryRequirements = structureChain.template get<VULKAN_HPP_NAMESPACE::MemoryRequirements2>();
    getDispatcher()->vkGetDeviceBufferMemoryRequirementsKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDeviceBufferMemoryRequirements *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::MemoryRequirements2 Device::getImageMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeviceImageMemoryRequirementsKHR && "Function <vkGetDeviceImageMemoryRequirementsKHR> needs extension <VK_KHR_maintenance4> enabled!" );


    VULKAN_HPP_NAMESPACE::MemoryRequirements2 memoryRequirements;
    getDispatcher()->vkGetDeviceImageMemoryRequirementsKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDeviceImageMemoryRequirements *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return memoryRequirements;
  }

  template <typename X, typename Y, typename... Z>
  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE StructureChain<X, Y, Z...> Device::getImageMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeviceImageMemoryRequirementsKHR && "Function <vkGetDeviceImageMemoryRequirementsKHR> needs extension <VK_KHR_maintenance4> enabled!" );


    StructureChain<X, Y, Z...> structureChain;
    VULKAN_HPP_NAMESPACE::MemoryRequirements2 & memoryRequirements = structureChain.template get<VULKAN_HPP_NAMESPACE::MemoryRequirements2>();
    getDispatcher()->vkGetDeviceImageMemoryRequirementsKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDeviceImageMemoryRequirements *>( &info ), reinterpret_cast<VkMemoryRequirements2 *>( &memoryRequirements ) );


    return structureChain;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2> Device::getImageSparseMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDeviceImageSparseMemoryRequirementsKHR && "Function <vkGetDeviceImageSparseMemoryRequirementsKHR> needs extension <VK_KHR_maintenance4> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2> sparseMemoryRequirements;
    uint32_t sparseMemoryRequirementCount;
    getDispatcher()->vkGetDeviceImageSparseMemoryRequirementsKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDeviceImageMemoryRequirements *>( &info ), &sparseMemoryRequirementCount, nullptr );
    sparseMemoryRequirements.resize( sparseMemoryRequirementCount );
    getDispatcher()->vkGetDeviceImageSparseMemoryRequirementsKHR( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDeviceImageMemoryRequirements *>( &info ), &sparseMemoryRequirementCount, reinterpret_cast<VkSparseImageMemoryRequirements2 *>( sparseMemoryRequirements.data() ) );

    VULKAN_HPP_ASSERT( sparseMemoryRequirementCount <= sparseMemoryRequirements.size() );
    if ( sparseMemoryRequirementCount < sparseMemoryRequirements.size() )
    {
      sparseMemoryRequirements.resize( sparseMemoryRequirementCount );
    }
    return sparseMemoryRequirements;
  }

  //=== VK_VALVE_descriptor_set_host_mapping ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::DescriptorSetLayoutHostMappingInfoVALVE Device::getDescriptorSetLayoutHostMappingInfoVALVE( const VULKAN_HPP_NAMESPACE::DescriptorSetBindingReferenceVALVE & bindingReference ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDescriptorSetLayoutHostMappingInfoVALVE && "Function <vkGetDescriptorSetLayoutHostMappingInfoVALVE> needs extension <VK_VALVE_descriptor_set_host_mapping> enabled!" );


    VULKAN_HPP_NAMESPACE::DescriptorSetLayoutHostMappingInfoVALVE hostMapping;
    getDispatcher()->vkGetDescriptorSetLayoutHostMappingInfoVALVE( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkDescriptorSetBindingReferenceVALVE *>( &bindingReference ), reinterpret_cast<VkDescriptorSetLayoutHostMappingInfoVALVE *>( &hostMapping ) );


    return hostMapping;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE void * DescriptorSet::getHostMappingVALVE(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDescriptorSetHostMappingVALVE && "Function <vkGetDescriptorSetHostMappingVALVE> needs extension <VK_VALVE_descriptor_set_host_mapping> enabled!" );


    void * pData;
    getDispatcher()->vkGetDescriptorSetHostMappingVALVE( static_cast<VkDevice>( m_device ), static_cast<VkDescriptorSet>( m_descriptorSet ), &pData );


    return pData;
  }

  //=== VK_NV_copy_memory_indirect ===


   VULKAN_HPP_INLINE void CommandBuffer::copyMemoryIndirectNV( VULKAN_HPP_NAMESPACE::DeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdCopyMemoryIndirectNV && "Function <vkCmdCopyMemoryIndirectNV> needs extension <VK_NV_copy_memory_indirect> enabled!" );



    getDispatcher()->vkCmdCopyMemoryIndirectNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkDeviceAddress>( copyBufferAddress ), copyCount, stride );



  }


   VULKAN_HPP_INLINE void CommandBuffer::copyMemoryToImageIndirectNV( VULKAN_HPP_NAMESPACE::DeviceAddress copyBufferAddress, uint32_t stride, VULKAN_HPP_NAMESPACE::Image dstImage, VULKAN_HPP_NAMESPACE::ImageLayout dstImageLayout, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageSubresourceLayers> const & imageSubresources ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdCopyMemoryToImageIndirectNV && "Function <vkCmdCopyMemoryToImageIndirectNV> needs extension <VK_NV_copy_memory_indirect> enabled!" );



    getDispatcher()->vkCmdCopyMemoryToImageIndirectNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkDeviceAddress>( copyBufferAddress ), imageSubresources.size(), stride, static_cast<VkImage>( dstImage ), static_cast<VkImageLayout>( dstImageLayout ), reinterpret_cast<const VkImageSubresourceLayers *>( imageSubresources.data() ) );



  }

  //=== VK_NV_memory_decompression ===


   VULKAN_HPP_INLINE void CommandBuffer::decompressMemoryNV( VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::DecompressMemoryRegionNV> const & decompressMemoryRegions ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDecompressMemoryNV && "Function <vkCmdDecompressMemoryNV> needs extension <VK_NV_memory_decompression> enabled!" );



    getDispatcher()->vkCmdDecompressMemoryNV( static_cast<VkCommandBuffer>( m_commandBuffer ), decompressMemoryRegions.size(), reinterpret_cast<const VkDecompressMemoryRegionNV *>( decompressMemoryRegions.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::decompressMemoryIndirectCountNV( VULKAN_HPP_NAMESPACE::DeviceAddress indirectCommandsAddress, VULKAN_HPP_NAMESPACE::DeviceAddress indirectCommandsCountAddress, uint32_t stride ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdDecompressMemoryIndirectCountNV && "Function <vkCmdDecompressMemoryIndirectCountNV> needs extension <VK_NV_memory_decompression> enabled!" );



    getDispatcher()->vkCmdDecompressMemoryIndirectCountNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkDeviceAddress>( indirectCommandsAddress ), static_cast<VkDeviceAddress>( indirectCommandsCountAddress ), stride );



  }

  //=== VK_EXT_extended_dynamic_state3 ===


   VULKAN_HPP_INLINE void CommandBuffer::setTessellationDomainOriginEXT( VULKAN_HPP_NAMESPACE::TessellationDomainOrigin domainOrigin ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetTessellationDomainOriginEXT && "Function <vkCmdSetTessellationDomainOriginEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetTessellationDomainOriginEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkTessellationDomainOrigin>( domainOrigin ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthClampEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthClampEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetDepthClampEnableEXT && "Function <vkCmdSetDepthClampEnableEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetDepthClampEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( depthClampEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setPolygonModeEXT( VULKAN_HPP_NAMESPACE::PolygonMode polygonMode ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetPolygonModeEXT && "Function <vkCmdSetPolygonModeEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetPolygonModeEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkPolygonMode>( polygonMode ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setRasterizationSamplesEXT( VULKAN_HPP_NAMESPACE::SampleCountFlagBits rasterizationSamples ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetRasterizationSamplesEXT && "Function <vkCmdSetRasterizationSamplesEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetRasterizationSamplesEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkSampleCountFlagBits>( rasterizationSamples ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setSampleMaskEXT( VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::SampleMask> const & sampleMask ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetSampleMaskEXT && "Function <vkCmdSetSampleMaskEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetSampleMaskEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkSampleCountFlagBits>( samples ), reinterpret_cast<const VkSampleMask *>( sampleMask.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setAlphaToCoverageEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 alphaToCoverageEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetAlphaToCoverageEnableEXT && "Function <vkCmdSetAlphaToCoverageEnableEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetAlphaToCoverageEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( alphaToCoverageEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setAlphaToOneEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 alphaToOneEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetAlphaToOneEnableEXT && "Function <vkCmdSetAlphaToOneEnableEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetAlphaToOneEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( alphaToOneEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setLogicOpEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 logicOpEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetLogicOpEnableEXT && "Function <vkCmdSetLogicOpEnableEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetLogicOpEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( logicOpEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setColorBlendEnableEXT( uint32_t firstAttachment, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::Bool32> const & colorBlendEnables ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetColorBlendEnableEXT && "Function <vkCmdSetColorBlendEnableEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetColorBlendEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), firstAttachment, colorBlendEnables.size(), reinterpret_cast<const VkBool32 *>( colorBlendEnables.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setColorBlendEquationEXT( uint32_t firstAttachment, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ColorBlendEquationEXT> const & colorBlendEquations ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetColorBlendEquationEXT && "Function <vkCmdSetColorBlendEquationEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetColorBlendEquationEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), firstAttachment, colorBlendEquations.size(), reinterpret_cast<const VkColorBlendEquationEXT *>( colorBlendEquations.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setColorWriteMaskEXT( uint32_t firstAttachment, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ColorComponentFlags> const & colorWriteMasks ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetColorWriteMaskEXT && "Function <vkCmdSetColorWriteMaskEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetColorWriteMaskEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), firstAttachment, colorWriteMasks.size(), reinterpret_cast<const VkColorComponentFlags *>( colorWriteMasks.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setRasterizationStreamEXT( uint32_t rasterizationStream ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetRasterizationStreamEXT && "Function <vkCmdSetRasterizationStreamEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetRasterizationStreamEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), rasterizationStream );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setConservativeRasterizationModeEXT( VULKAN_HPP_NAMESPACE::ConservativeRasterizationModeEXT conservativeRasterizationMode ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetConservativeRasterizationModeEXT && "Function <vkCmdSetConservativeRasterizationModeEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetConservativeRasterizationModeEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkConservativeRasterizationModeEXT>( conservativeRasterizationMode ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setExtraPrimitiveOverestimationSizeEXT( float extraPrimitiveOverestimationSize ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetExtraPrimitiveOverestimationSizeEXT && "Function <vkCmdSetExtraPrimitiveOverestimationSizeEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetExtraPrimitiveOverestimationSizeEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), extraPrimitiveOverestimationSize );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthClipEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthClipEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetDepthClipEnableEXT && "Function <vkCmdSetDepthClipEnableEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetDepthClipEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( depthClipEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setSampleLocationsEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 sampleLocationsEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetSampleLocationsEnableEXT && "Function <vkCmdSetSampleLocationsEnableEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetSampleLocationsEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( sampleLocationsEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setColorBlendAdvancedEXT( uint32_t firstAttachment, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ColorBlendAdvancedEXT> const & colorBlendAdvanced ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetColorBlendAdvancedEXT && "Function <vkCmdSetColorBlendAdvancedEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetColorBlendAdvancedEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), firstAttachment, colorBlendAdvanced.size(), reinterpret_cast<const VkColorBlendAdvancedEXT *>( colorBlendAdvanced.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setProvokingVertexModeEXT( VULKAN_HPP_NAMESPACE::ProvokingVertexModeEXT provokingVertexMode ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetProvokingVertexModeEXT && "Function <vkCmdSetProvokingVertexModeEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetProvokingVertexModeEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkProvokingVertexModeEXT>( provokingVertexMode ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setLineRasterizationModeEXT( VULKAN_HPP_NAMESPACE::LineRasterizationModeEXT lineRasterizationMode ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetLineRasterizationModeEXT && "Function <vkCmdSetLineRasterizationModeEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetLineRasterizationModeEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkLineRasterizationModeEXT>( lineRasterizationMode ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setLineStippleEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 stippledLineEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetLineStippleEnableEXT && "Function <vkCmdSetLineStippleEnableEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetLineStippleEnableEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( stippledLineEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setDepthClipNegativeOneToOneEXT( VULKAN_HPP_NAMESPACE::Bool32 negativeOneToOne ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetDepthClipNegativeOneToOneEXT && "Function <vkCmdSetDepthClipNegativeOneToOneEXT> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetDepthClipNegativeOneToOneEXT( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( negativeOneToOne ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setViewportWScalingEnableNV( VULKAN_HPP_NAMESPACE::Bool32 viewportWScalingEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetViewportWScalingEnableNV && "Function <vkCmdSetViewportWScalingEnableNV> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetViewportWScalingEnableNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( viewportWScalingEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setViewportSwizzleNV( uint32_t firstViewport, VULKAN_HPP_NAMESPACE::ArrayProxy<const VULKAN_HPP_NAMESPACE::ViewportSwizzleNV> const & viewportSwizzles ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetViewportSwizzleNV && "Function <vkCmdSetViewportSwizzleNV> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetViewportSwizzleNV( static_cast<VkCommandBuffer>( m_commandBuffer ), firstViewport, viewportSwizzles.size(), reinterpret_cast<const VkViewportSwizzleNV *>( viewportSwizzles.data() ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setCoverageToColorEnableNV( VULKAN_HPP_NAMESPACE::Bool32 coverageToColorEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetCoverageToColorEnableNV && "Function <vkCmdSetCoverageToColorEnableNV> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetCoverageToColorEnableNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( coverageToColorEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setCoverageToColorLocationNV( uint32_t coverageToColorLocation ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetCoverageToColorLocationNV && "Function <vkCmdSetCoverageToColorLocationNV> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetCoverageToColorLocationNV( static_cast<VkCommandBuffer>( m_commandBuffer ), coverageToColorLocation );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setCoverageModulationModeNV( VULKAN_HPP_NAMESPACE::CoverageModulationModeNV coverageModulationMode ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetCoverageModulationModeNV && "Function <vkCmdSetCoverageModulationModeNV> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetCoverageModulationModeNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkCoverageModulationModeNV>( coverageModulationMode ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setCoverageModulationTableEnableNV( VULKAN_HPP_NAMESPACE::Bool32 coverageModulationTableEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetCoverageModulationTableEnableNV && "Function <vkCmdSetCoverageModulationTableEnableNV> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetCoverageModulationTableEnableNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( coverageModulationTableEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setCoverageModulationTableNV( VULKAN_HPP_NAMESPACE::ArrayProxy<const float> const & coverageModulationTable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetCoverageModulationTableNV && "Function <vkCmdSetCoverageModulationTableNV> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetCoverageModulationTableNV( static_cast<VkCommandBuffer>( m_commandBuffer ), coverageModulationTable.size(), coverageModulationTable.data() );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setShadingRateImageEnableNV( VULKAN_HPP_NAMESPACE::Bool32 shadingRateImageEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetShadingRateImageEnableNV && "Function <vkCmdSetShadingRateImageEnableNV> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetShadingRateImageEnableNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( shadingRateImageEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setRepresentativeFragmentTestEnableNV( VULKAN_HPP_NAMESPACE::Bool32 representativeFragmentTestEnable ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetRepresentativeFragmentTestEnableNV && "Function <vkCmdSetRepresentativeFragmentTestEnableNV> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetRepresentativeFragmentTestEnableNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkBool32>( representativeFragmentTestEnable ) );



  }


   VULKAN_HPP_INLINE void CommandBuffer::setCoverageReductionModeNV( VULKAN_HPP_NAMESPACE::CoverageReductionModeNV coverageReductionMode ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdSetCoverageReductionModeNV && "Function <vkCmdSetCoverageReductionModeNV> needs extension <VK_EXT_extended_dynamic_state3> enabled!" );



    getDispatcher()->vkCmdSetCoverageReductionModeNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkCoverageReductionModeNV>( coverageReductionMode ) );



  }

  //=== VK_EXT_shader_module_identifier ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ShaderModuleIdentifierEXT ShaderModule::getIdentifierEXT(  ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetShaderModuleIdentifierEXT && "Function <vkGetShaderModuleIdentifierEXT> needs extension <VK_EXT_shader_module_identifier> enabled!" );


    VULKAN_HPP_NAMESPACE::ShaderModuleIdentifierEXT identifier;
    getDispatcher()->vkGetShaderModuleIdentifierEXT( static_cast<VkDevice>( m_device ), static_cast<VkShaderModule>( m_shaderModule ), reinterpret_cast<VkShaderModuleIdentifierEXT *>( &identifier ) );


    return identifier;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::ShaderModuleIdentifierEXT Device::getShaderModuleCreateInfoIdentifierEXT( const VULKAN_HPP_NAMESPACE::ShaderModuleCreateInfo & createInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetShaderModuleCreateInfoIdentifierEXT && "Function <vkGetShaderModuleCreateInfoIdentifierEXT> needs extension <VK_EXT_shader_module_identifier> enabled!" );


    VULKAN_HPP_NAMESPACE::ShaderModuleIdentifierEXT identifier;
    getDispatcher()->vkGetShaderModuleCreateInfoIdentifierEXT( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkShaderModuleCreateInfo *>( &createInfo ), reinterpret_cast<VkShaderModuleIdentifierEXT *>( &identifier ) );


    return identifier;
  }

  //=== VK_NV_optical_flow ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::OpticalFlowImageFormatPropertiesNV> PhysicalDevice::getOpticalFlowImageFormatsNV( const VULKAN_HPP_NAMESPACE::OpticalFlowImageFormatInfoNV & opticalFlowImageFormatInfo ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetPhysicalDeviceOpticalFlowImageFormatsNV && "Function <vkGetPhysicalDeviceOpticalFlowImageFormatsNV> needs extension <VK_NV_optical_flow> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::OpticalFlowImageFormatPropertiesNV> imageFormatProperties;
    uint32_t formatCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetPhysicalDeviceOpticalFlowImageFormatsNV( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkOpticalFlowImageFormatInfoNV *>( &opticalFlowImageFormatInfo ), &formatCount, nullptr );
      if ( ( result == VK_SUCCESS ) && formatCount )
      {
        imageFormatProperties.resize( formatCount );
        result = getDispatcher()->vkGetPhysicalDeviceOpticalFlowImageFormatsNV( static_cast<VkPhysicalDevice>( m_physicalDevice ), reinterpret_cast<const VkOpticalFlowImageFormatInfoNV *>( &opticalFlowImageFormatInfo ), &formatCount, reinterpret_cast<VkOpticalFlowImageFormatPropertiesNV *>( imageFormatProperties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::PhysicalDevice::getOpticalFlowImageFormatsNV" );
    VULKAN_HPP_ASSERT( formatCount <= imageFormatProperties.size() );
    if ( formatCount < imageFormatProperties.size() )
    {
      imageFormatProperties.resize( formatCount );
    }
    return imageFormatProperties;
  }

  VULKAN_HPP_NODISCARD VULKAN_HPP_INLINE VULKAN_HPP_RAII_NAMESPACE::OpticalFlowSessionNV Device::createOpticalFlowSessionNV( VULKAN_HPP_NAMESPACE::OpticalFlowSessionCreateInfoNV const & createInfo, VULKAN_HPP_NAMESPACE::Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator ) const
  {
    return VULKAN_HPP_RAII_NAMESPACE::OpticalFlowSessionNV( *this, createInfo, allocator );
  }


   VULKAN_HPP_INLINE void OpticalFlowSessionNV::bindImage( VULKAN_HPP_NAMESPACE::OpticalFlowSessionBindingPointNV bindingPoint, VULKAN_HPP_NAMESPACE::ImageView view, VULKAN_HPP_NAMESPACE::ImageLayout layout ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkBindOpticalFlowSessionImageNV && "Function <vkBindOpticalFlowSessionImageNV> needs extension <VK_NV_optical_flow> enabled!" );



    VkResult result = getDispatcher()->vkBindOpticalFlowSessionImageNV( static_cast<VkDevice>( m_device ), static_cast<VkOpticalFlowSessionNV>( m_session ), static_cast<VkOpticalFlowSessionBindingPointNV>( bindingPoint ), static_cast<VkImageView>( view ), static_cast<VkImageLayout>( layout ) );
    resultCheck( static_cast<VULKAN_HPP_NAMESPACE::Result>( result ), VULKAN_HPP_NAMESPACE_STRING "::OpticalFlowSessionNV::bindImage" );


  }


   VULKAN_HPP_INLINE void CommandBuffer::opticalFlowExecuteNV( VULKAN_HPP_NAMESPACE::OpticalFlowSessionNV session, const VULKAN_HPP_NAMESPACE::OpticalFlowExecuteInfoNV & executeInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkCmdOpticalFlowExecuteNV && "Function <vkCmdOpticalFlowExecuteNV> needs extension <VK_NV_optical_flow> enabled!" );



    getDispatcher()->vkCmdOpticalFlowExecuteNV( static_cast<VkCommandBuffer>( m_commandBuffer ), static_cast<VkOpticalFlowSessionNV>( session ), reinterpret_cast<const VkOpticalFlowExecuteInfoNV *>( &executeInfo ) );



  }

  //=== VK_QCOM_tile_properties ===


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE std::vector<VULKAN_HPP_NAMESPACE::TilePropertiesQCOM> Framebuffer::getTilePropertiesQCOM(  ) const
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetFramebufferTilePropertiesQCOM && "Function <vkGetFramebufferTilePropertiesQCOM> needs extension <VK_QCOM_tile_properties> enabled!" );


    std::vector<VULKAN_HPP_NAMESPACE::TilePropertiesQCOM> properties;
    uint32_t propertiesCount;
    VkResult result;
    do
    {
      result = getDispatcher()->vkGetFramebufferTilePropertiesQCOM( static_cast<VkDevice>( m_device ), static_cast<VkFramebuffer>( m_framebuffer ), &propertiesCount, nullptr );
      if ( ( result == VK_SUCCESS ) && propertiesCount )
      {
        properties.resize( propertiesCount );
        result = getDispatcher()->vkGetFramebufferTilePropertiesQCOM( static_cast<VkDevice>( m_device ), static_cast<VkFramebuffer>( m_framebuffer ), &propertiesCount, reinterpret_cast<VkTilePropertiesQCOM *>( properties.data() ) );
      }
    } while ( result == VK_INCOMPLETE );

    VULKAN_HPP_ASSERT( propertiesCount <= properties.size() );
    if ( propertiesCount < properties.size() )
    {
      properties.resize( propertiesCount );
    }
    return properties;
  }


  VULKAN_HPP_NODISCARD  VULKAN_HPP_INLINE VULKAN_HPP_NAMESPACE::TilePropertiesQCOM Device::getDynamicRenderingTilePropertiesQCOM( const VULKAN_HPP_NAMESPACE::RenderingInfo & renderingInfo ) const  VULKAN_HPP_NOEXCEPT
  {
VULKAN_HPP_ASSERT( getDispatcher()->vkGetDynamicRenderingTilePropertiesQCOM && "Function <vkGetDynamicRenderingTilePropertiesQCOM> needs extension <VK_QCOM_tile_properties> enabled!" );


    VULKAN_HPP_NAMESPACE::TilePropertiesQCOM properties;
    getDispatcher()->vkGetDynamicRenderingTilePropertiesQCOM( static_cast<VkDevice>( m_device ), reinterpret_cast<const VkRenderingInfo *>( &renderingInfo ), reinterpret_cast<VkTilePropertiesQCOM *>( &properties ) );


    return properties;
  }


  } // namespace VULKAN_HPP_RAII_NAMESPACE
}   // namespace VULKAN_HPP_NAMESPACE
#endif
#endif
