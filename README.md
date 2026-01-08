# COMP3016-CW2-Immersive-Game-Technologies-using-OpenGL<br>

## Installation Instructions<br>

If you want to run the simulation as is, open the project in the file explorer and run the .exe executable file.<br>
If you want to compile and run the simulation in Visual Studio, open up the sln solution file. Before you run, you will need to check you have the correct libraries installed.<br>
In your file explorer's C: drive and go to Users folder and then select the Public folder. In here you want to make an OpenGL folder with a lib(library) and an include folder.<br>
In these folders, you should have the libraries and includes for the following directories: glfw, glad, glm, and learnopengl. The links for these are inserted below.<br>
If you already have each of the libraries listed below, then you can go ahead and run your Visual Studio solution file.

#### GLFW<br>

https://www.glfw.org/download.html<br>
Open a file explorer & navigate to `C:\Users\Public\OpenGL` & open a second file explorer & navigate to the GLFW folder in the `Downloads` folder. In the GLFW folder, open the `include` subfolder & move the `GLFW` subfolder within that into the `include` folder in the `OpenGL` directory. In the GLFW folder in the `Downloads` folder, many `lib-vc` folders exist. These are library folders that correspond to different versions of Visual C++. Open the `lib-vc2022` folder & move all the files into the `lib` folder in the `OpenGL` directory.<br>
In Visual Studio, right click your project file, select `Properties`, unfold `Linker`, select `Input` & edit `Additional Dependencies` by adding `glfw3.lib`. Lastly, in your main.cpp file, insert the ```#include <GLFW/glfw3.h>``` include. If Visual Studio fails to retrieve `glfw3.h`, then something has gone wrong in any of the aforementioned processes.<br>

#### GLAD<br>

GLAD can be downloaded from the [GLAD Loader-Generator Web Service](https://glad.dav1d.de/) in multiple different forms depending upon the individual's requirements. If one is to use GLAD for this lab, set the `Language` to `C++`, the `gl` to an OpenGL version of at least `Version 3.3` & lastly set the `Profile` to `Core`.<br>

In the `Downloads` folder, open the `glad` folder & navigate to the `include` subfolder. Move both the internal `glad` & `KHR` folders to the `C:\Users\Public\OpenGL\include` folder. Then, in the `glad` folder's `lib` folder, move the `glad.c` file into your Visual Studio Project's project directory where your `main.cpp` file is located.<br>

#### GLM<br>

Navigate to the [GLM Repository](https://github.com/g-truc/glm) & download the latest release in zip format. In the `Downloads` folder, open the `glm` folder & move the internal `glm` folder to the `C:\Users\Public\OpenGL\include` include directory. No glm ```#include``` directives are needed this time.<br>

#### LearnOpenGL<br>

We are going to acquire the necessary files from LearnOpenGL's Github repository. There are four files we need, one half for constructing models & the other for loading shaders. The former files are [mesh.h](https://github.com/JoeyDeVries/LearnOpenGL/blob/3e94252892660902bef62068c35253cbe3464c9b/includes/learnopengl/mesh.h#L4), [model.h](https://github.com/JoeyDeVries/LearnOpenGL/blob/3e94252892660902bef62068c35253cbe3464c9b/includes/learnopengl/model.h#L26) & the latter are [shader.h](https://github.com/JoeyDeVries/LearnOpenGL/blob/3e94252892660902bef62068c35253cbe3464c9b/includes/learnopengl/shader.h#L4) & [shader_m.h](https://github.com/JoeyDeVries/LearnOpenGL/blob/3e94252892660902bef62068c35253cbe3464c9b/includes/learnopengl/shader_m.h#L4).<br>
Once the LearnOpenGL files have been retrieved, navigate to `C:\Users\Public\OpenGL\include` & create a new folder called `learnopengl`. Place all four files inside of this folder.<br>

#### CMAKE<br>

In order to make use of Assimp, one can download it in a precompiled binary form. However, it is not guaranteed that this form of retrieval will always work on all systems. For this reason, we are going to download Assimp's source & compile the binaries. In order to do this, we need to install [CMake](https://cmake.org/download/). For Windows, the appropriate file to download is the `Windows x64 Installer`.<br>

#### ASSIMP<br>

We need a location to store Assimp's source & our future binaries. This can be anywhere, however a good location for this is within our `Public` directory, so as to place it adjacently to our `OpenGL` dependencies for good organisation. Navigate to `C:\Users\Public` & create a folder named `Assimp` & create two folders within this one called `Source` & `Binaries`:<br>
We need to clone the Assimp repository in order to acquire its source. Open the `Build.md` file within the [Assimp Github repository](https://github.com/assimp/assimp/blob/master/Build.md) & navigate to the `Get the source` section under `Manual build instructions`. A command for cloning the Assimp repository should be provided:<br>
Either clone the repository through the command line as specified by Assimp's instructions, or alternatively one can use software such as Github Desktop. The location for where we are going to clone it is `C:\Users\Public\Assimp\Source`.<br>
<br>
In order to build Assimp, we need to first open CMake. Within CMake, two text boxes should be located at the top left of its main window. The text box labeled `Where is the source code` will require the directory to Assimp's source. The text box labeled `Where to build the binaries` instead requires the directory to build the binaries to:<br>
<img width="349" height="134" alt="image" src="https://github.com/user-attachments/assets/b0d39e6c-17e6-4af5-a112-ea9618dc4f6a" /><br>
<br>
Once our source code & the building locations are provided, we can configure our build with the `Configure` button at the bottom left of the CMake window. A new window should pop up, giving options for what kind of generator we wish to use. We probably need to select `Visual Studio 17 2022`, since we are going to be using Assimp with Visual Studio. If you are using a different version of Visual Studio, then select the appropriate version for your system. We also need to ensure that we build 64 bit Assimp binaries, therefore we need to choose the `x64` option. Once both of these specifications are selected, select `Finish`. Once this is done, CMake will start building the binaries.<br>
Once the binaries have been built, we still need to generate the Visual Studio Assimp files. In order to do this, click the `Generate` button next to the `Configure` button. Now, a Visual Studio project called `Assimp.sln` should have been created within `C:\Users\Public\Assimp\Binaries`. Open this project & build it. When doing so, make sure to do so with the `x64` configuration & preferably in `Release` mode. Note that **we are not using the Assimp.sln Visual Studio project for implementing this lab's OpenGL code**. It is only being used for generating Visual Studio project files to move into your respective Visual Studio OpenGL project.<br>
Once all of these have been successfully installed and copied to the correct place, return to the solution file in Visual Studio and run the program.

---

YouTube link:  

### Dependencies Used<br>

For the Dependencies used in my solution, the following libraries are being included:<br>
 - GLFW for the context window<br>
 - GLAD for wrangling<br>
 - GLM for matrices and transformations<br>
 - and ASSIMP for modelling and textures<br>

### Gameplay Description<br>

You are a Dinosaur.<br>
That is all.<br>

### Use of AI Description<br>

A small amount of AI has been used to answer queries related to non-functional bits of code and applying some of response directly to the code.<br>
<img width="452" height="660" alt="image" src="https://github.com/user-attachments/assets/da129ac5-265c-42d6-a657-ac3d9e5ed279" />
<img width="594" height="452" alt="image" src="https://github.com/user-attachments/assets/0856bf85-34e2-4d6a-8949-42a5e843c8cd" />

### Programming Patterns Used<br>

The core Game Programming Patterns include, but are not limited to:<br>
 - Input handling by using polling and callbacks<br>
 - Depth-based 3D rendering<br>
 - And Procedural Content Generation<br>

### Sample Screens<br>

<img width="1256" height="695" alt="image" src="https://github.com/user-attachments/assets/956a277b-58ee-4987-88dc-ba9daba615ab" />
<img width="1260" height="703" alt="image" src="https://github.com/user-attachments/assets/3cbf7e9a-0643-4296-951e-e7d9b6d93120" />
<img width="1255" height="706" alt="image" src="https://github.com/user-attachments/assets/e494fe5d-dbc3-49c9-9780-9ab4d94f359a" />

### Evaluation<br>

Overall, I have achieved a simple scene with complex, but rather silly, models and textures that is fun to walk around in for about a minute. If I could change anything, it would be how I went about with creating the world in a way that makes it easier to incorporate physics and blender.
