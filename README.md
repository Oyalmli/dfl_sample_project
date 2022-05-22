Sample project for the Data Flow Library  
[Documentation](https://oyalmli.github.io/data_flow_library/)  
[DFL Source](https://github.com/Oyalmli/data_flow_library)

#### Need:  
```brew install cmake ninja```

#### Setup:
_Either add the Data Flow Library using a submodule or cloninig_
###### Either:
```git init```  
```mkdir -p lib && cd lib```  
```git submodule add git@github.com:Oyalmli/data_flow_library.git```
###### Or:
```mkdir -p lib && cd lib```  
```git clone git@github.com:Oyalmli/data_flow_library.git```
```cd ..```  
```cmake -Bbuild-cmake -H. -GNinja```  

#### To Build
```cd build-cmake```  
```cmake --build .```  

#### To run
```cd build-cmake```  
```./main```