# Advanced Programming 1 - 1th assignment

## Overview
This assignment was created during the course *"Advanced Programming 1"* at Bar-Ilan University and implements ["KNN algorithm"](https://en.wikipedia.org/wiki/K-nearest_neighbors_algorithm):

>K Nearest Neighbor algorithm falls under the Supervised Learning category and is used for classification (most commonly) and regression. It is a versatile algorithm also used for imputing missing values and resampling datasets. As the name (K Nearest Neighbor) suggests it considers K Nearest Neighbors (Data points) to predict the class or continuous value for the new Datapoint.


## UML diagram
![ass1UML](https://user-images.githubusercontent.com/84286628/128748450-8dc6c3c3-e27c-4e55-97c1-d9eabba910d1.png)

## Requirements
In Order to run our classifier, you will need to have two csv files under "resources" folder:

 - *classified.csv* - data set which contains 3 kinds of irises (versicolor, virginica, setosa), for every iris you will need to assign four properties (width, sepal length, sepal width, petal length). this dataset is being use to classify other irises, therefore this dataset will contain all irises with their known type.

 - *Unclassified.csv* - a dataset which contains the unclassified irises 4 values.

## General Instructions
You can find all the required files under `Develop branch`.
There are 2 ways running the project:
1. **`CMakeLists.txt`** file - which we provided to you and exsists under Develop branch
2. **`g++ compiler`** using these 2 command lines:
    ```ruby
    g++ main.cpp flower.cpp classifiedFlower.cpp unclassifiedFlower.cpp knnGenerate.cpp findFlowerType.cpp CSVHandler.cpp dataHandler.cpp
    ```
    ```ruby
    ./a.out
    ```
    **note!** if you perfer to run the program in this way you need to change the path of the files (either to read and either to write) to be with only one dot!
    Example : 
