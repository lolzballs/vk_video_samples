#!/usr/bin/env python3
#
# Copyright (C) 2016 Google, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.


"""Generate Vulkan dispatch table.
"""

import os
import sys

class Command(object):
    PLATFORM = 0
    LOADER = 1
    INSTANCE = 2
    DEVICE = 3

    def __init__(self, name, dispatch):
        self.name = name
        self.dispatch = dispatch
        self.ty = self._get_type()

    @staticmethod
    def valid_c_typedef(c):
        return (c.startswith("typedef") and
                c.endswith(");") and
                "*PFN_vkVoidFunction" not in c)

    @classmethod
    def from_c_typedef(cls, c):
        name_begin = c.find("*PFN_vk") + 7
        name_end = c.find(")(", name_begin)
        name = c[name_begin:name_end]

        dispatch_begin = name_end + 2
        dispatch_end = c.find(" ", dispatch_begin)
        dispatch = c[dispatch_begin:dispatch_end]
        if not dispatch.startswith("Vk"):
            dispatch = None

        return cls(name, dispatch)

    def _get_type(self):
        if self.dispatch:
            if self.dispatch in ["VkDevice", "VkQueue", "VkCommandBuffer"]:
                return self.DEVICE
            else:
                return self.INSTANCE
        else:
            if self.name in ["GetInstanceProcAddr"]:
                return self.PLATFORM
            else:
                return self.LOADER

    def __repr__(self):
        return "Command(name=%s, dispatch=%s)" % \
                (repr(self.name), repr(self.dispatch))

class Extension(object):
    def __init__(self, name, version, guard=None, commands=[]):
        self.name = name
        self.version = version
        self.guard = guard
        self.commands = commands[:]

    def add_command(self, cmd):
        self.commands.append(cmd)

    def __repr__(self):
        lines = []
        lines.append("Extension(name=%s, version=%s, guard=%s, commands=[" %
                (repr(self.name), repr(self.version), repr(self.guard)))

        for cmd in self.commands:
            lines.append("    %s," % repr(cmd))

        lines.append("])")

        return "\n".join(lines)

# generated by "generate-dispatch-table.py parse vulkan.h"
vk_core = Extension(name='VK_core', version=0, guard=None, commands=[
    Command(name='CreateInstance', dispatch=None),
    Command(name='DestroyInstance', dispatch='VkInstance'),
    Command(name='EnumeratePhysicalDevices', dispatch='VkInstance'),
    Command(name='GetPhysicalDeviceFeatures', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceFormatProperties', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceImageFormatProperties', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceProperties', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceQueueFamilyProperties', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceMemoryProperties', dispatch='VkPhysicalDevice'),
    Command(name='GetInstanceProcAddr', dispatch='VkInstance'),
    Command(name='GetDeviceProcAddr', dispatch='VkDevice'),
    Command(name='CreateDevice', dispatch='VkPhysicalDevice'),
    Command(name='DestroyDevice', dispatch='VkDevice'),
    Command(name='EnumerateInstanceExtensionProperties', dispatch=None),
    Command(name='EnumerateDeviceExtensionProperties', dispatch='VkPhysicalDevice'),
    Command(name='EnumerateInstanceLayerProperties', dispatch=None),
    Command(name='GetDeviceQueue', dispatch='VkDevice'),
    Command(name='QueueSubmit', dispatch='VkQueue'),
    Command(name='QueueWaitIdle', dispatch='VkQueue'),
    Command(name='DeviceWaitIdle', dispatch='VkDevice'),
    Command(name='AllocateMemory', dispatch='VkDevice'),
    Command(name='FreeMemory', dispatch='VkDevice'),
    Command(name='MapMemory', dispatch='VkDevice'),
    Command(name='UnmapMemory', dispatch='VkDevice'),
    Command(name='FlushMappedMemoryRanges', dispatch='VkDevice'),
    Command(name='InvalidateMappedMemoryRanges', dispatch='VkDevice'),
    Command(name='GetDeviceMemoryCommitment', dispatch='VkDevice'),
    Command(name='BindBufferMemory', dispatch='VkDevice'),
    Command(name='BindImageMemory', dispatch='VkDevice'),
    Command(name='GetBufferMemoryRequirements', dispatch='VkDevice'),
    Command(name='GetImageMemoryRequirements', dispatch='VkDevice'),
    Command(name='GetImageSparseMemoryRequirements', dispatch='VkDevice'),
    Command(name='GetPhysicalDeviceSparseImageFormatProperties', dispatch='VkPhysicalDevice'),
    Command(name='QueueBindSparse', dispatch='VkQueue'),
    Command(name='CreateFence', dispatch='VkDevice'),
    Command(name='DestroyFence', dispatch='VkDevice'),
    Command(name='ResetFences', dispatch='VkDevice'),
    Command(name='GetFenceStatus', dispatch='VkDevice'),
    Command(name='WaitForFences', dispatch='VkDevice'),
    Command(name='CreateSemaphore', dispatch='VkDevice'),
    Command(name='DestroySemaphore', dispatch='VkDevice'),
    Command(name='CreateEvent', dispatch='VkDevice'),
    Command(name='DestroyEvent', dispatch='VkDevice'),
    Command(name='GetEventStatus', dispatch='VkDevice'),
    Command(name='SetEvent', dispatch='VkDevice'),
    Command(name='ResetEvent', dispatch='VkDevice'),
    Command(name='CreateQueryPool', dispatch='VkDevice'),
    Command(name='DestroyQueryPool', dispatch='VkDevice'),
    Command(name='GetQueryPoolResults', dispatch='VkDevice'),
    Command(name='CreateBuffer', dispatch='VkDevice'),
    Command(name='DestroyBuffer', dispatch='VkDevice'),
    Command(name='CreateBufferView', dispatch='VkDevice'),
    Command(name='DestroyBufferView', dispatch='VkDevice'),
    Command(name='CreateImage', dispatch='VkDevice'),
    Command(name='DestroyImage', dispatch='VkDevice'),
    Command(name='GetImageSubresourceLayout', dispatch='VkDevice'),
    Command(name='CreateImageView', dispatch='VkDevice'),
    Command(name='DestroyImageView', dispatch='VkDevice'),
    Command(name='CreateShaderModule', dispatch='VkDevice'),
    Command(name='DestroyShaderModule', dispatch='VkDevice'),
    Command(name='CreatePipelineCache', dispatch='VkDevice'),
    Command(name='DestroyPipelineCache', dispatch='VkDevice'),
    Command(name='GetPipelineCacheData', dispatch='VkDevice'),
    Command(name='MergePipelineCaches', dispatch='VkDevice'),
    Command(name='CreateGraphicsPipelines', dispatch='VkDevice'),
    Command(name='CreateComputePipelines', dispatch='VkDevice'),
    Command(name='DestroyPipeline', dispatch='VkDevice'),
    Command(name='CreatePipelineLayout', dispatch='VkDevice'),
    Command(name='DestroyPipelineLayout', dispatch='VkDevice'),
    Command(name='CreateSampler', dispatch='VkDevice'),
    Command(name='DestroySampler', dispatch='VkDevice'),
    Command(name='CreateDescriptorSetLayout', dispatch='VkDevice'),
    Command(name='DestroyDescriptorSetLayout', dispatch='VkDevice'),
    Command(name='CreateDescriptorPool', dispatch='VkDevice'),
    Command(name='DestroyDescriptorPool', dispatch='VkDevice'),
    Command(name='ResetDescriptorPool', dispatch='VkDevice'),
    Command(name='AllocateDescriptorSets', dispatch='VkDevice'),
    Command(name='FreeDescriptorSets', dispatch='VkDevice'),
    Command(name='UpdateDescriptorSets', dispatch='VkDevice'),
    Command(name='CreateFramebuffer', dispatch='VkDevice'),
    Command(name='DestroyFramebuffer', dispatch='VkDevice'),
    Command(name='CreateRenderPass', dispatch='VkDevice'),
    Command(name='DestroyRenderPass', dispatch='VkDevice'),
    Command(name='GetRenderAreaGranularity', dispatch='VkDevice'),
    Command(name='CreateCommandPool', dispatch='VkDevice'),
    Command(name='DestroyCommandPool', dispatch='VkDevice'),
    Command(name='ResetCommandPool', dispatch='VkDevice'),
    Command(name='AllocateCommandBuffers', dispatch='VkDevice'),
    Command(name='FreeCommandBuffers', dispatch='VkDevice'),
    Command(name='BeginCommandBuffer', dispatch='VkCommandBuffer'),
    Command(name='EndCommandBuffer', dispatch='VkCommandBuffer'),
    Command(name='ResetCommandBuffer', dispatch='VkCommandBuffer'),
    Command(name='CmdBindPipeline', dispatch='VkCommandBuffer'),
    Command(name='CmdSetViewport', dispatch='VkCommandBuffer'),
    Command(name='CmdSetScissor', dispatch='VkCommandBuffer'),
    Command(name='CmdSetLineWidth', dispatch='VkCommandBuffer'),
    Command(name='CmdSetDepthBias', dispatch='VkCommandBuffer'),
    Command(name='CmdSetBlendConstants', dispatch='VkCommandBuffer'),
    Command(name='CmdSetDepthBounds', dispatch='VkCommandBuffer'),
    Command(name='CmdSetStencilCompareMask', dispatch='VkCommandBuffer'),
    Command(name='CmdSetStencilWriteMask', dispatch='VkCommandBuffer'),
    Command(name='CmdSetStencilReference', dispatch='VkCommandBuffer'),
    Command(name='CmdBindDescriptorSets', dispatch='VkCommandBuffer'),
    Command(name='CmdBindIndexBuffer', dispatch='VkCommandBuffer'),
    Command(name='CmdBindVertexBuffers', dispatch='VkCommandBuffer'),
    Command(name='CmdDraw', dispatch='VkCommandBuffer'),
    Command(name='CmdDrawIndexed', dispatch='VkCommandBuffer'),
    Command(name='CmdDrawIndirect', dispatch='VkCommandBuffer'),
    Command(name='CmdDrawIndexedIndirect', dispatch='VkCommandBuffer'),
    Command(name='CmdDispatch', dispatch='VkCommandBuffer'),
    Command(name='CmdDispatchIndirect', dispatch='VkCommandBuffer'),
    Command(name='CmdCopyBuffer', dispatch='VkCommandBuffer'),
    Command(name='CmdCopyImage', dispatch='VkCommandBuffer'),
    Command(name='CmdBlitImage', dispatch='VkCommandBuffer'),
    Command(name='CmdCopyBufferToImage', dispatch='VkCommandBuffer'),
    Command(name='CmdCopyImageToBuffer', dispatch='VkCommandBuffer'),
    Command(name='CmdUpdateBuffer', dispatch='VkCommandBuffer'),
    Command(name='CmdFillBuffer', dispatch='VkCommandBuffer'),
    Command(name='CmdClearColorImage', dispatch='VkCommandBuffer'),
    Command(name='CmdClearDepthStencilImage', dispatch='VkCommandBuffer'),
    Command(name='CmdClearAttachments', dispatch='VkCommandBuffer'),
    Command(name='CmdResolveImage', dispatch='VkCommandBuffer'),
    Command(name='CmdSetEvent', dispatch='VkCommandBuffer'),
    Command(name='CmdResetEvent', dispatch='VkCommandBuffer'),
    Command(name='CmdWaitEvents', dispatch='VkCommandBuffer'),
    Command(name='CmdPipelineBarrier', dispatch='VkCommandBuffer'),
    Command(name='CmdBeginQuery', dispatch='VkCommandBuffer'),
    Command(name='CmdEndQuery', dispatch='VkCommandBuffer'),
    Command(name='CmdResetQueryPool', dispatch='VkCommandBuffer'),
    Command(name='CmdWriteTimestamp', dispatch='VkCommandBuffer'),
    Command(name='CmdCopyQueryPoolResults', dispatch='VkCommandBuffer'),
    Command(name='CmdPushConstants', dispatch='VkCommandBuffer'),
    Command(name='CmdBeginRenderPass', dispatch='VkCommandBuffer'),
    Command(name='CmdNextSubpass', dispatch='VkCommandBuffer'),
    Command(name='CmdEndRenderPass', dispatch='VkCommandBuffer'),
    Command(name='CmdExecuteCommands', dispatch='VkCommandBuffer'),
    Command(name='EnumerateInstanceVersion', dispatch=None),
    Command(name='BindBufferMemory2', dispatch='VkDevice'),
    Command(name='BindImageMemory2', dispatch='VkDevice'),
    Command(name='GetDeviceGroupPeerMemoryFeatures', dispatch='VkDevice'),
    Command(name='CmdSetDeviceMask', dispatch='VkCommandBuffer'),
    Command(name='CmdDispatchBase', dispatch='VkCommandBuffer'),
    Command(name='EnumeratePhysicalDeviceGroups', dispatch='VkInstance'),
    Command(name='GetImageMemoryRequirements2', dispatch='VkDevice'),
    Command(name='GetBufferMemoryRequirements2', dispatch='VkDevice'),
    Command(name='GetImageSparseMemoryRequirements2', dispatch='VkDevice'),
    Command(name='GetPhysicalDeviceFeatures2', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceProperties2', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceFormatProperties2', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceImageFormatProperties2', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceQueueFamilyProperties2', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceMemoryProperties2', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceSparseImageFormatProperties2', dispatch='VkPhysicalDevice'),
    Command(name='TrimCommandPool', dispatch='VkDevice'),
    Command(name='GetDeviceQueue2', dispatch='VkDevice'),
    Command(name='CreateSamplerYcbcrConversion', dispatch='VkDevice'),
    Command(name='DestroySamplerYcbcrConversion', dispatch='VkDevice'),
    Command(name='CreateDescriptorUpdateTemplate', dispatch='VkDevice'),
    Command(name='DestroyDescriptorUpdateTemplate', dispatch='VkDevice'),
    Command(name='UpdateDescriptorSetWithTemplate', dispatch='VkDevice'),
    Command(name='GetPhysicalDeviceExternalBufferProperties', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceExternalFenceProperties', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceExternalSemaphoreProperties', dispatch='VkPhysicalDevice'),
    Command(name='GetDescriptorSetLayoutSupport', dispatch='VkDevice'),
])


vk_khr_external_memory_fd = Extension(name='VK_KHR_external_memory_fd', version=1, guard=None, commands=[
    Command(name='GetMemoryFdKHR', dispatch='VkDevice'),
])

vk_khr_external_fence_fd = Extension(name='VK_KHR_external_fence_fd', version=1, guard=None, commands=[
    Command(name='GetFenceFdKHR', dispatch='VkDevice'),
])

vk_khr_surface = Extension(name='VK_KHR_surface', version=25, guard=None, commands=[
    Command(name='DestroySurfaceKHR', dispatch='VkInstance'),
    Command(name='GetPhysicalDeviceSurfaceSupportKHR', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceSurfaceCapabilitiesKHR', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceSurfaceFormatsKHR', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceSurfacePresentModesKHR', dispatch='VkPhysicalDevice'),
])

vk_khr_swapchain = Extension(name='VK_KHR_swapchain', version=67, guard=None, commands=[
    Command(name='CreateSwapchainKHR', dispatch='VkDevice'),
    Command(name='DestroySwapchainKHR', dispatch='VkDevice'),
    Command(name='GetSwapchainImagesKHR', dispatch='VkDevice'),
    Command(name='AcquireNextImageKHR', dispatch='VkDevice'),
    Command(name='QueuePresentKHR', dispatch='VkQueue'),
])

vk_khr_display = Extension(name='VK_KHR_display', version=21, guard=None, commands=[
    Command(name='GetPhysicalDeviceDisplayPropertiesKHR', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceDisplayPlanePropertiesKHR', dispatch='VkPhysicalDevice'),
    Command(name='GetDisplayPlaneSupportedDisplaysKHR', dispatch='VkPhysicalDevice'),
    Command(name='GetDisplayModePropertiesKHR', dispatch='VkPhysicalDevice'),
    Command(name='CreateDisplayModeKHR', dispatch='VkPhysicalDevice'),
    Command(name='GetDisplayPlaneCapabilitiesKHR', dispatch='VkPhysicalDevice'),
    Command(name='CreateDisplayPlaneSurfaceKHR', dispatch='VkInstance'),
#    Command(name='AcquireXlibDisplayEXT', dispatch='VkInstance'),
    Command(name='DisplayPowerControlEXT', dispatch='VkDevice'),
])

vk_khr_display_swapchain = Extension(name='VK_KHR_display_swapchain', version=9, guard=None, commands=[
    Command(name='CreateSharedSwapchainsKHR', dispatch='VkDevice'),
])

vk_khr_xlib_surface = Extension(name='VK_KHR_xlib_surface', version=6, guard='VK_USE_PLATFORM_XLIB_KHR', commands=[
    Command(name='CreateXlibSurfaceKHR', dispatch='VkInstance'),
    Command(name='GetPhysicalDeviceXlibPresentationSupportKHR', dispatch='VkPhysicalDevice'),
])

vk_khr_xcb_surface = Extension(name='VK_KHR_xcb_surface', version=6, guard='VK_USE_PLATFORM_XCB_KHR', commands=[
    Command(name='CreateXcbSurfaceKHR', dispatch='VkInstance'),
    Command(name='GetPhysicalDeviceXcbPresentationSupportKHR', dispatch='VkPhysicalDevice'),
])

vk_khr_wayland_surface = Extension(name='VK_KHR_wayland_surface', version=5, guard='VK_USE_PLATFORM_WAYLAND_KHR', commands=[
    Command(name='CreateWaylandSurfaceKHR', dispatch='VkInstance'),
    Command(name='GetPhysicalDeviceWaylandPresentationSupportKHR', dispatch='VkPhysicalDevice'),
])

vk_khr_mir_surface = Extension(name='VK_KHR_mir_surface', version=4, guard='VK_USE_PLATFORM_MIR_KHR', commands=[
    Command(name='CreateMirSurfaceKHR', dispatch='VkInstance'),
    Command(name='GetPhysicalDeviceMirPresentationSupportKHR', dispatch='VkPhysicalDevice'),
])

vk_khr_android_surface = Extension(name='VK_KHR_android_surface', version=6, guard='VK_USE_PLATFORM_ANDROID_KHR', commands=[
    Command(name='CreateAndroidSurfaceKHR', dispatch='VkInstance'),
])

vk_khr_win32_surface = Extension(name='VK_KHR_win32_surface', version=5, guard='VK_USE_PLATFORM_WIN32_KHR', commands=[
    Command(name='CreateWin32SurfaceKHR', dispatch='VkInstance'),
    Command(name='GetPhysicalDeviceWin32PresentationSupportKHR', dispatch='VkPhysicalDevice'),
])

vk_ext_debug_report = Extension(name='VK_EXT_debug_report', version=1, guard=None, commands=[
    Command(name='CreateDebugReportCallbackEXT', dispatch='VkInstance'),
    Command(name='DestroyDebugReportCallbackEXT', dispatch='VkInstance'),
    Command(name='DebugReportMessageEXT', dispatch='VkInstance'),
])

vk_mvk_ios_surface = Extension(name='VK_MVK_ios_surface', version=1, guard='VK_USE_PLATFORM_IOS_MVK', commands=[
    Command(name='CreateIOSSurfaceMVK', dispatch='VkInstance'),
])

vk_mvk_macos_surface = Extension(name='VK_MVK_macos_surface', version=1, guard='VK_USE_PLATFORM_MACOS_MVK', commands=[
    Command(name='CreateMacOSSurfaceMVK', dispatch='VkInstance'),
])

vk_khr_video_queue = Extension(name='VK_KHR_video_queue', version=1, guard='VK_USE_VIDEO_QUEUE', commands=[
    Command(name='GetPhysicalDeviceVideoFormatPropertiesKHR', dispatch='VkPhysicalDevice'),
    Command(name='GetPhysicalDeviceVideoCapabilitiesKHR', dispatch='VkPhysicalDevice'),
    Command(name='CreateVideoSessionKHR', dispatch='VkDevice'),
    Command(name='DestroyVideoSessionKHR', dispatch='VkDevice'),
    Command(name='GetVideoSessionMemoryRequirementsKHR', dispatch='VkDevice'),
    Command(name='BindVideoSessionMemoryKHR', dispatch='VkDevice'),
    Command(name='CmdBeginVideoCodingKHR',   dispatch='VkCommandBuffer'),
    Command(name='CmdEndVideoCodingKHR',   dispatch='VkCommandBuffer'),
    Command(name='CmdControlVideoCodingKHR',   dispatch='VkCommandBuffer'),
])

vk_nv_video_queue = Extension(name='VK_NV_video_queue', version=1, guard='VK_USE_VIDEO_QUEUE', commands=[
    Command(name='GetPhysicalDeviceVideoCodecProfilesNV', dispatch='VkPhysicalDevice'),
])

vk_khr_video_decode_queue = Extension(name='VK_KHR_video_decode_queue', version=1, guard='VK_USE_VIDEO_DECODE_QUEUE', commands=[
    Command(name='CmdDecodeVideoKHR', dispatch='VkCommandBuffer'),

])

vk_khr_synchronization2 = Extension(name='VK_KHR_synchronization2', version=1, guard='VK_USE_VIDEO_DECODE_QUEUE', commands=[
    Command(name='CmdSetEvent2KHR',        dispatch='VkCommandBuffer'),
    Command(name='CmdResetEvent2KHR',      dispatch='VkCommandBuffer'),
    Command(name='CmdWaitEvents2KHR',      dispatch='VkCommandBuffer'),
    Command(name='CmdPipelineBarrier2KHR', dispatch='VkCommandBuffer'),
    Command(name='CmdWriteTimestamp2KHR',  dispatch='VkCommandBuffer'),
    Command(name='QueueSubmit2KHR',        dispatch='VkQueue'),
])

extensions = [
    vk_core,
    vk_khr_external_memory_fd,
    vk_khr_external_fence_fd,
    vk_khr_surface,
    vk_khr_swapchain,
    vk_khr_display,
    vk_khr_display_swapchain,
    vk_khr_xlib_surface,
    vk_khr_xcb_surface,
    vk_khr_wayland_surface,
    vk_khr_mir_surface,
    vk_khr_android_surface,
    vk_khr_win32_surface,
    vk_ext_debug_report,
    vk_mvk_ios_surface,
    vk_mvk_macos_surface,
    vk_khr_video_queue,
    vk_nv_video_queue,
    vk_khr_video_decode_queue,
    vk_khr_synchronization2,
]

def generate_header(guard):
    lines = []
    lines.append("// This file is generated.")
    lines.append("#ifndef %s" % guard)
    lines.append("#define %s" % guard)
    lines.append("")
    lines.append("#include <vulkan_interfaces.h>")
    lines.append("")
    lines.append("namespace vk {")
    lines.append("")

    for ext in extensions:
        if ext.guard:
            lines.append("#ifdef %s" % ext.guard)

        lines.append("// %s" % ext.name)
        for cmd in ext.commands:
            lines.append("extern PFN_vk%s %s;" % (cmd.name, cmd.name))

        if ext.guard:
            lines.append("#endif")
        lines.append("")

    lines.append("void init_dispatch_table_top(PFN_vkGetInstanceProcAddr get_instance_proc_addr);")
    lines.append("void init_dispatch_table_middle(VkInstance instance, bool include_bottom);")
    lines.append("void init_dispatch_table_bottom(VkInstance instance, VkDevice dev);")
    lines.append("")
    lines.append("} // namespace vk")
    lines.append("")
    lines.append("#endif // %s" % guard)

    return "\n".join(lines)

def get_proc_addr(dispatchable, cmd, guard=None):
    if dispatchable == "dev":
        func = "GetDeviceProcAddr"
    else:
        func = "GetInstanceProcAddr"

    c = "    %s = reinterpret_cast<PFN_vk%s>(%s(%s, \"vk%s\"));" % \
            (cmd.name, cmd.name, func, dispatchable, cmd.name)

    if guard:
        c = ("#ifdef %s\n" % guard) + c + "\n#endif"

    return c

def generate_source(header):
    lines = []
    lines.append("// This file is generated.")
    lines.append("#include \"%s\"" % header)
    lines.append("")
    lines.append("namespace vk {")
    lines.append("")

    commands_by_types = {}
    get_instance_proc_addr = None
    get_device_proc_addr = None
    for ext in extensions:
        if ext.guard:
            lines.append("#ifdef %s" % ext.guard)

        for cmd in ext.commands:
            lines.append("PFN_vk%s %s;" % (cmd.name, cmd.name))

            if cmd.ty not in commands_by_types:
                commands_by_types[cmd.ty] = []
            commands_by_types[cmd.ty].append([cmd, ext.guard])

            if cmd.name == "GetInstanceProcAddr":
                get_instance_proc_addr = cmd
            elif cmd.name == "GetDeviceProcAddr":
                get_device_proc_addr = cmd

        if ext.guard:
            lines.append("#endif")
    lines.append("")

    lines.append("void init_dispatch_table_top(PFN_vkGetInstanceProcAddr get_instance_proc_addr)")
    lines.append("{")
    lines.append("    GetInstanceProcAddr = get_instance_proc_addr;")
    lines.append("")
    for cmd, guard in commands_by_types[Command.LOADER]:
        lines.append(get_proc_addr("VK_NULL_HANDLE", cmd, guard))
    lines.append("}")
    lines.append("")

    lines.append("void init_dispatch_table_middle(VkInstance instance, bool include_bottom)")
    lines.append("{")
    lines.append(get_proc_addr("instance", get_instance_proc_addr))
    lines.append("")
    for cmd, guard in commands_by_types[Command.INSTANCE]:
        if cmd == get_instance_proc_addr:
            continue
        lines.append(get_proc_addr("instance", cmd, guard))
    lines.append("")
    lines.append("    if (!include_bottom)")
    lines.append("        return;")
    lines.append("")
    for cmd, guard in commands_by_types[Command.DEVICE]:
        lines.append(get_proc_addr("instance", cmd, guard))
    lines.append("}")
    lines.append("")

    lines.append("void init_dispatch_table_bottom(VkInstance instance, VkDevice dev)")
    lines.append("{")
    lines.append(get_proc_addr("instance", get_device_proc_addr))
    lines.append(get_proc_addr("dev", get_device_proc_addr))
    lines.append("")
    for cmd, guard in commands_by_types[Command.DEVICE]:
        if cmd == get_device_proc_addr:
            continue
        lines.append(get_proc_addr("dev", cmd, guard))
    lines.append("}")

    lines.append("")
    lines.append("} // namespace vk")

    return "\n".join(lines)

def parse_vulkan_h(filename):
    extensions = []

    with open(filename, "r") as f:
        current_ext = None
        ext_guard = None
        spec_version = None

        for line in f:
            line = line.strip();

            if line.startswith("#define VK_API_VERSION"):
                minor_end = line.rfind(",")
                minor_begin = line.rfind(",", 0, minor_end) + 1
                spec_version = int(line[minor_begin:minor_end])
                # add core
                current_ext = Extension("VK_core", spec_version)
                extensions.append(current_ext)
            elif Command.valid_c_typedef(line):
                current_ext.add_command(Command.from_c_typedef(line))
            elif line.startswith("#ifdef VK_USE_PLATFORM"):
                guard_begin = line.find(" ") + 1
                ext_guard = line[guard_begin:]
            elif line.startswith("#define") and "SPEC_VERSION " in line:
                version_begin = line.rfind(" ") + 1
                spec_version = int(line[version_begin:])
            elif line.startswith("#define") and "EXTENSION_NAME " in line:
                name_end = line.rfind("\"")
                name_begin = line.rfind("\"", 0, name_end) + 1
                name = line[name_begin:name_end]
                # add extension
                current_ext = Extension(name, spec_version, ext_guard)
                extensions.append(current_ext)
            elif ext_guard and line.startswith("#endif") and ext_guard in line:
                ext_guard = None

    for ext in extensions:
        print("%s = %s" % (ext.name.lower(), repr(ext)))
        print("")

    print("extensions = [")
    for ext in extensions:
        print("    %s," % ext.name.lower())
    print("]")

if __name__ == "__main__":
    if sys.argv[1] == "parse":
        parse_vulkan_h(sys.argv[2])
    else:
        filename = sys.argv[1]
        base = os.path.basename(filename)
        contents = []

        if base.endswith(".h"):
            contents = generate_header(base.replace(".", "_").upper())
        elif base.endswith(".cpp"):
            contents = generate_source(base.replace(".cpp", ".h"))

        with open(filename, "w") as f:
            print(contents, file=f)
