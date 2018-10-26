# Microsoft MPI

Microsoft MPI (MS-MPI) is a Microsoft implementation of the [Message Passing Interface standard](https://www.mpi-forum.org) for developing and running parallel applications on the Windows platform.

MS-MPI offers several benefits:

  - Ease of porting existing code that uses [MPICH](https://www.mpich.org).
  - Security based on Active Directory Domain Services.
  - High performance on the Windows operating system.
  - Binary compatibility across different types of interconnectivity options.

## MS-MPI downloads

The following are current downloads for MS-MPI:

  - [MS-MPI v10.0](https://www.microsoft.com/download/details.aspx?id=57467) (new\!) - see [Release notes](microsoft-mpi-release-notes.md)

Earlier versions of MS-MPI are available from the [Microsoft Download Center](https://go.microsoft.com/fwlink/p/?linkid=390734).

##  Community resources

  - [Windows HPC MPI Forum](https://social.microsoft.com/forums/en-us/home?forum=windowshpcmpi)
  - [Contact the MS-MPI Team](mailto:askmpi@microsoft.com)

## Microsoft high performance computing resources

  - Featured tutorial: [How to compile and run a simple MS-MPI program](https://blogs.technet.com/b/windowshpc/archive/2015/02/02/how-to-compile-and-run-a-simple-ms-mpi-program.aspx)
  - Featured guide: [Set up a Windows RDMA cluster with HPC Pack and A8 and A9 instances to run MPI applications](https://azure.microsoft.com/documentation/articles/virtual-machines-windows-hpcpack-cluster-rdma/)
  - [Microsoft High Performance Computing for Developers](https://msdn.microsoft.com/en-us/library/ff976568.aspx)
  - [Microsoft HPC Pack (Windows HPC Server) Technical Library](https://technet.microsoft.com/library/cc514029)
  - [Azure HPC Scenarios](https://www.microsoft.com/hpc)

# Building

## Prerequisites

 - [Visial Studio 2017](https://docs.microsoft.com/visualstudio/install/install-visual-studio)

   Please make sure to select the following workloads during installation:
    - .NET desktop development (required for CBT/Nuget packages)
    - Desktop development with C++ 

 - [Windows SDK](https://developer.microsoft.com/windows/downloads/windows-10-sdk)
 - [Windows WDK](https://docs.microsoft.com/windows-hardware/drivers/download-the-wdk)
 
 Based on the installed VS/SDK/WDK versions, update _VCToolsVersion_ and _WindowsTargetPlatformVersion_ in Directory.Build.props
 
 ## Build
 To build, just run ``msbuild`` from root folder.

# Contributing

This project welcomes contributions and suggestions.  Most contributions require you to agree to a
Contributor License Agreement (CLA) declaring that you have the right to, and actually do, grant us
the rights to use your contribution. For details, visit https://cla.microsoft.com.

When you submit a pull request, a CLA-bot will automatically determine whether you need to provide
a CLA and decorate the PR appropriately (e.g., label, comment). Simply follow the instructions
provided by the bot. You will only need to do this once across all repos using our CLA.

This project has adopted the [Microsoft Open Source Code of Conduct](https://opensource.microsoft.com/codeofconduct/).
For more information see the [Code of Conduct FAQ](https://opensource.microsoft.com/codeofconduct/faq/) or
contact [opencode@microsoft.com](mailto:opencode@microsoft.com) with any additional questions or comments.
