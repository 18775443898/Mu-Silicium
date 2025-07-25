APRIORI DXE {
  # First, install the PCD driver and call DxeInit
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Binaries/ingres/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

  # Next, install cpu protocol and enable the interrupt controller
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

  # Core Drivers
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/ingres/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF Binaries/ingres/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/ProjectInfoDxe/ProjectInfoDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/IPCCDxe/IPCCDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/CpuClockHandlerDxe/CpuClockHandlerDxe.inf

  INF Binaries/ingres/QcomPkg/Drivers/ICBDxe/ICBDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/ingres/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/ingres/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf

  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf

  INF Binaries/ingres/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/ingres/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/UFSDxe/UFSDxe.inf

  INF FatPkg/EnhancedFatDxe/Fat.inf

  INF Binaries/ingres/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

  INF Binaries/ingres/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf

  INF QcomPkg/Drivers/DdrClockHandlerDxe/DdrClockHandlerDxe.inf

  INF Binaries/ingres/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/ingres/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/ingres/QcomPkg/Drivers/FvUtilsDxe/FvUtilsDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/ingres/QcomPkg/Drivers/FontDxe/FontDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/ingres/QcomPkg/Drivers/PmicGlinkDxe/PmicGlinkDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/ingres/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/XhciDxe/XhciDxe.inf

  INF Binaries/ingres/QcomPkg/Drivers/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/ingres/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/ingres/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif
  INF Binaries/ingres/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/UCDxe/UCDxe.inf
  INF Binaries/ingres/QcomPkg/Drivers/RNGDxe/RngDxe.inf

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
}
